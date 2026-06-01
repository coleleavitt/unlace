char __fastcall sub_86CC60(_QWORD *a1, unsigned int *a2)
{
  char **exception; // r12
  __int64 v4; // r13
  __int64 v5; // r14
  _QWORD *v6; // rax
  unsigned int v7; // edx
  unsigned int v8; // r15d
  int v9; // ecx
  _QWORD *v10; // rbx
  unsigned int v11; // ecx
  __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r15
  unsigned int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  char result; // al
  bool v22; // zf
  __int64 *v23; // rbp
  unsigned __int64 v24; // r12
  __int64 v25; // rsi
  unsigned int v26; // edx
  size_t v27; // rsi
  unsigned int v28; // r12d
  unsigned int *v29; // rax
  __int64 v30; // rax
  int v31; // ecx
  unsigned int v33; // [rsp+14h] [rbp-74h] BYREF
  _QWORD v34[3]; // [rsp+18h] [rbp-70h] BYREF
  __int64 v35[11]; // [rsp+30h] [rbp-58h] BYREF

  v33 = 0;
  v34[0] = 0;
  if ( !(unsigned __int8)sub_16743C0(a1 + 16, a2, v34, &v33) )
  {
    sub_1872CE0("");
    sub_1873130(114, 655);
  }
  v4 = a1[9];
  v34[1] = v4;
  if ( v33 )
  {
    v5 = v34[0];
    if ( v34[0] )
      ++*(_DWORD *)(v34[0] + 8LL);
    v6 = (_QWORD *)(sub_186B270(0x18u) + 8);
    v7 = v33;
    v8 = 0;
    v9 = 1;
    *(v6 - 1) = 2;
    v10 = v6;
    while ( 1 )
    {
      ++v8;
      *v6 = v5;
      *((_DWORD *)v10 - 1) = v9;
      if ( v8 >= v7 )
        break;
      while ( 1 )
      {
        v5 = v34[0];
        if ( v34[0] )
          ++*(_DWORD *)(v34[0] + 8LL);
        v11 = *((_DWORD *)v10 - 1);
        if ( v11 == *((_DWORD *)v10 - 2) )
          break;
        ++v8;
        v10[v11] = v5;
        *((_DWORD *)v10 - 1) = v11 + 1;
        if ( v8 >= v7 )
          goto LABEL_11;
      }
      v26 = (3 * v11 + 1) >> 1;
      v27 = 8 * v26 + 8;
      v28 = v26;
      if ( 8 * v11 + 8 >= (unsigned int)v27 || v11 >= v26 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v35, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v35);
        sub_233E40((__int64)v35);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v29 = (unsigned int *)sub_186B300(v10 - 1, v27);
      v10 = v29 + 2;
      *v29 = v28;
      v30 = v29[1];
      v7 = v33;
      v31 = v30;
      v6 = &v10[v30];
      v9 = v31 + 1;
    }
LABEL_11:
    v12 = a1[9];
    v13 = a1[17];
  }
  else
  {
    v13 = a1[17];
    v12 = v4;
    v10 = nullptr;
  }
  v14 = sub_15E1AF0(v13);
  v15 = v14;
  if ( v14 )
    ++*(_DWORD *)(v14 + 8);
  v16 = sub_7E5090((__int64)a1, a2);
  sub_86BD80(a1, v16);
  v17 = sub_7E58D0((__int64)a1, (__int64)a2, v15);
  result = sub_7E5160((__int64)a1, v17, nullptr, v18, v19, v20);
  if ( v15 )
  {
    v22 = (*(_DWORD *)(v15 + 8))-- == 1;
    if ( v22 )
      result = sub_15D7BC0(v12, v15);
  }
  if ( v10 )
  {
    v23 = v10;
    v24 = (unsigned __int64)&v10[*((unsigned int *)v10 - 1)];
    if ( (unsigned __int64)v10 < v24 )
    {
      do
      {
        while ( 1 )
        {
          v25 = *v23;
          if ( *v23 )
          {
            v22 = (*(_DWORD *)(v25 + 8))-- == 1;
            if ( v22 )
              break;
          }
          if ( (unsigned __int64)++v23 >= v24 )
            return sub_186B220(v10 - 1);
        }
        ++v23;
        sub_15D7BC0(v4, v25);
      }
      while ( (unsigned __int64)v23 < v24 );
    }
    return sub_186B220(v10 - 1);
  }
  return result;
}

