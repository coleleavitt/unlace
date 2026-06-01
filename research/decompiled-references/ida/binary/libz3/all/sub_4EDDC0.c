void __fastcall sub_4EDDC0(__int64 a1, _QWORD *a2, __int64 a3)
{
  char **exception; // rbp
  _QWORD *v4; // r12
  __int64 i; // rbp
  unsigned int v7; // edx
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned int v10; // r13d
  unsigned int v11; // r15d
  _QWORD *v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // r9d
  size_t v15; // rsi
  unsigned int v16; // r14d
  unsigned int *v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  _DWORD *j; // rax
  int v21; // r8d
  unsigned int v22; // edx
  __int64 v23; // rax
  __int64 v25[11]; // [rsp+20h] [rbp-58h] BYREF

  v4 = (_QWORD *)*a2;
  *a2 = 0;
  if ( v4 )
  {
    for ( i = 0; (unsigned int)i < *((_DWORD *)v4 - 1); ++i )
    {
      v7 = *((_DWORD *)v4 + i);
      v8 = *(_QWORD *)(a1 + 120);
      v9 = 0xFFFFFFFFLL;
      if ( v8 )
        v9 = (unsigned int)(*(_DWORD *)(v8 - 4) - 1);
      if ( v7 >= (unsigned int)v9 )
      {
        v21 = *(_DWORD *)(v8 + 4 * v9);
        v22 = v7 - v9;
        v23 = *(_QWORD *)(a3 + 120);
        v10 = v21 + *(_DWORD *)(v23 + 4LL * v22);
        v11 = *(_DWORD *)(v23 + 4LL * (v22 + 1)) + v21;
      }
      else
      {
        v10 = *(_DWORD *)(v8 + 4LL * v7);
        v11 = *(_DWORD *)(v8 + 4LL * (v7 + 1));
      }
      if ( v10 < v11 )
      {
        v12 = (_QWORD *)*a2;
        if ( *a2 )
          goto LABEL_12;
        v19 = (_QWORD *)sub_186B270(0x10u);
        v12 = v19 + 1;
        *a2 = v19 + 1;
        *v19 = 2;
        for ( j = v19 + 1; ; j = (_DWORD *)v12 + v13 )
        {
          *j = v10++;
          ++*((_DWORD *)v12 - 1);
          if ( v10 == v11 )
            break;
LABEL_12:
          while ( 1 )
          {
            v13 = *((unsigned int *)v12 - 1);
            if ( (_DWORD)v13 != *((_DWORD *)v12 - 2) )
              break;
            v14 = (unsigned int)(3 * v13 + 1) >> 1;
            v15 = 4 * v14 + 8;
            v16 = v14;
            if ( 4 * (int)v13 + 8 >= (unsigned int)v15 || (unsigned int)v13 >= v14 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v25, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v25);
              sub_233E40((__int64)v25);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v17 = (unsigned int *)sub_186B300(v12 - 1, v15);
            v12 = v17 + 2;
            *v17 = v16;
            v18 = v17[1];
            *a2 = v12;
            *((_DWORD *)v12 + v18) = v10++;
            ++*((_DWORD *)v12 - 1);
            if ( v10 == v11 )
              goto LABEL_16;
          }
        }
      }
LABEL_16:
      ;
    }
    sub_186B220(v4 - 1);
  }
}

