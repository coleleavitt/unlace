void __fastcall sub_5E4E30(__int64 a1, __int64 a2, _QWORD *a3)
{
  char **exception; // rbx
  __int64 v5; // rbx
  int i; // edx
  _DWORD *v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // r15
  unsigned int v10; // r13d
  __int64 v11; // rcx
  int v12; // eax
  _QWORD *v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // r14d
  size_t v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20[11]; // [rsp+2h] [rbp-58h] BYREF

  if ( !*(_WORD *)(a2 + 4) )
  {
    v5 = a2;
    for ( i = *(_DWORD *)(a1 + 40); ; i = *(_DWORD *)(a1 + 40) )
    {
      v7 = *(_DWORD **)(*(_QWORD *)(v5 + 16) + 24LL);
      if ( !v7 || *v7 != i || v7[1] != 1 )
        break;
      if ( *(_DWORD *)(v5 + 24) > 1u )
      {
        v8 = (_QWORD *)*a3;
        v9 = *(_QWORD *)(v5 + 40);
        if ( *a3 )
        {
          v10 = 1;
          goto LABEL_14;
        }
        v10 = 1;
        v19 = (_QWORD *)sub_186B270(0x18u);
        v8 = v19 + 1;
        *v19 = 2;
        v12 = 1;
        *a3 = v8;
        v13 = v8;
        while ( 1 )
        {
          *v13 = v9;
          ++v10;
          *((_DWORD *)v8 - 1) = v12;
          if ( v10 >= *(_DWORD *)(v5 + 24) )
            break;
          v9 = *(_QWORD *)(v5 + 8LL * v10 + 32);
LABEL_14:
          v14 = *((_DWORD *)v8 - 1);
          if ( v14 == *((_DWORD *)v8 - 2) )
          {
            v15 = (3 * v14 + 1) >> 1;
            v16 = 8 * v15 + 8;
            if ( 8 * v14 + 8 >= (unsigned int)v16 || v14 >= v15 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v20, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v20);
              sub_233E40((__int64)v20);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v17 = (unsigned int *)sub_186B300(v8 - 1, v16);
            v18 = v17[1];
            v8 = v17 + 2;
            *v17 = v15;
            *a3 = v17 + 2;
            LODWORD(v17) = v18;
            v13 = &v8[v18];
            v12 = (_DWORD)v17 + 1;
          }
          else
          {
            v11 = v14;
            v12 = v14 + 1;
            v13 = &v8[v11];
          }
        }
      }
      v5 = *(_QWORD *)(v5 + 32);
      if ( *(_WORD *)(v5 + 4) )
        break;
    }
  }
}

