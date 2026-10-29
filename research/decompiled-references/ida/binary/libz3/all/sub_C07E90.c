__int64 __fastcall sub_C07E90(__int64 a1)
{
  char **exception; // rbx
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 *v4; // rbp
  __int64 v5; // r12
  _QWORD *v6; // rdx
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  _QWORD *v11; // rcx
  __int64 *v12; // rax
  _QWORD *v14; // rax
  unsigned int v15; // r15d
  size_t v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // rcx
  __int64 v19[11]; // [rsp+10h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 144);
  if ( v2 )
    *(_DWORD *)(v2 - 4) = 0;
  v3 = sub_1371B00(*(_QWORD *)(a1 + 112));
  v4 = *(__int64 **)v3;
  v5 = *(_QWORD *)v3 + 8LL * *(unsigned int *)(v3 + 8);
  if ( *(_QWORD *)v3 != v5 )
  {
    while ( (unsigned __int64)*v4 <= 1 )
    {
      if ( (__int64 *)v5 == ++v4 )
        return a1 + 144;
    }
    if ( v4 != (__int64 *)v5 )
    {
      v6 = *(_QWORD **)(a1 + 144);
      v7 = *v4;
      if ( !v6 )
      {
        v14 = (_QWORD *)sub_186B270(0x18u);
        v6 = v14 + 1;
        *v14 = 2;
        v10 = 1;
        *(_QWORD *)(a1 + 144) = v6;
        v11 = v6;
        goto LABEL_11;
      }
      do
      {
        v8 = *((_DWORD *)v6 - 1);
        if ( v8 == *((_DWORD *)v6 - 2) )
        {
          v15 = (3 * v8 + 1) >> 1;
          v16 = 8 * v15 + 8;
          if ( 8 * v8 + 8 >= (unsigned int)v16 || v8 >= v15 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v19, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v19);
            sub_233E40((__int64)v19);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v17 = (unsigned int *)sub_186B300(v6 - 1, v16);
          v18 = v17[1];
          v6 = v17 + 2;
          *v17 = v15;
          *(_QWORD *)(a1 + 144) = v17 + 2;
          LODWORD(v17) = v18;
          v11 = &v6[v18];
          v10 = (_DWORD)v17 + 1;
        }
        else
        {
          v9 = v8;
          v10 = v8 + 1;
          v11 = &v6[v9];
        }
LABEL_11:
        *v11 = v7;
        *((_DWORD *)v6 - 1) = v10;
        v12 = v4 + 1;
        if ( (__int64 *)v5 == v4 + 1 )
          break;
        while ( 1 )
        {
          v7 = *v12;
          v4 = v12;
          if ( (unsigned __int64)*v12 > 1 )
            break;
          if ( (__int64 *)v5 == ++v12 )
            return a1 + 144;
        }
      }
      while ( v12 != (__int64 *)v5 );
    }
  }
  return a1 + 144;
}

