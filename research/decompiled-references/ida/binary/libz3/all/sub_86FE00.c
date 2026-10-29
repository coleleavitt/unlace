__int64 __fastcall sub_86FE00(_QWORD *a1, __int64 a2)
{
  char **exception; // r12
  __int64 v4; // rbx
  __int64 v5; // r12
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // r14
  __int64 v9; // r13
  int v10; // edx
  _QWORD *v11; // rbx
  unsigned int v12; // edx
  unsigned __int64 v13; // r12
  __int64 *v14; // rbp
  __int64 v15; // rsi
  unsigned int v18; // r10d
  size_t v19; // rsi
  unsigned int v20; // r15d
  unsigned int *v21; // rax
  __int64 v22; // rax
  int v23; // edx
  __int64 v24; // [rsp+10h] [rbp-88h]
  __int64 v25; // [rsp+30h] [rbp-68h] BYREF
  _QWORD *v26; // [rsp+38h] [rbp-60h]
  __int64 v27[11]; // [rsp+40h] [rbp-58h] BYREF

  v4 = *(unsigned int *)(a2 + 24);
  v24 = a1[9];
  v25 = v24;
  if ( (_DWORD)v4 )
  {
    v5 = *(_QWORD *)(a2 + 32);
    if ( v5 )
      ++*(_DWORD *)(v5 + 8);
    v6 = (_QWORD *)sub_186B270(0x18u);
    *v6 = 2;
    v7 = v6 + 1;
    v8 = a2;
    v9 = a2 + 8 * v4;
    v10 = 1;
    v11 = v7;
    while ( 1 )
    {
      v8 += 8;
      *v7 = v5;
      *((_DWORD *)v11 - 1) = v10;
      if ( v8 == v9 )
        break;
      while ( 1 )
      {
        v5 = *(_QWORD *)(v8 + 32);
        if ( v5 )
          ++*(_DWORD *)(v5 + 8);
        v12 = *((_DWORD *)v11 - 1);
        if ( v12 == *((_DWORD *)v11 - 2) )
          break;
        v8 += 8;
        v11[v12] = v5;
        *((_DWORD *)v11 - 1) = v12 + 1;
        if ( v8 == v9 )
          goto LABEL_10;
      }
      v18 = (3 * v12 + 1) >> 1;
      v19 = 8 * v18 + 8;
      v20 = v18;
      if ( 8 * v12 + 8 >= (unsigned int)v19 || v12 >= v18 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v27, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v27);
        sub_233E40((__int64)v27);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v21 = (unsigned int *)sub_186B300(v11 - 1, v19);
      v11 = v21 + 2;
      *v21 = v20;
      v22 = v21[1];
      v23 = v22;
      v7 = &v11[v22];
      v10 = v23 + 1;
    }
LABEL_10:
    v26 = v11;
    sub_86FBB0(a1, (unsigned int *)a2, (__int64)&v25);
    v13 = (unsigned __int64)&v11[*((unsigned int *)v11 - 1)];
    if ( (unsigned __int64)v11 < v13 )
    {
      v14 = v11;
      do
      {
        while ( 1 )
        {
          v15 = *v14;
          if ( *v14 )
          {
            if ( (*(_DWORD *)(v15 + 8))-- == 1 )
              break;
          }
          if ( (unsigned __int64)++v14 >= v13 )
            return sub_186B220(v11 - 1);
        }
        ++v14;
        sub_15D7BC0(v24, v15);
      }
      while ( (unsigned __int64)v14 < v13 );
    }
    return sub_186B220(v11 - 1);
  }
  else
  {
    v26 = nullptr;
    return sub_86FBB0(a1, (unsigned int *)a2, (__int64)&v25);
  }
}

