__int64 __fastcall sub_6B5A00(_QWORD *a1, char a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // r15
  _QWORD *v10; // r14
  _QWORD *v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v19; // rcx
  int v20; // eax
  __int64 *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r14
  _QWORD *v24; // rdx
  unsigned int v25; // eax
  unsigned int v26; // ecx
  size_t v27; // rsi
  unsigned int *v28; // rax
  _QWORD *v29; // rax
  char **exception; // r15
  unsigned __int64 v31; // [rsp+0h] [rbp-78h]
  unsigned int v32; // [rsp+0h] [rbp-78h]
  __int64 v33; // [rsp+8h] [rbp-70h]
  __int64 v34; // [rsp+10h] [rbp-68h] BYREF
  __int64 v35; // [rsp+18h] [rbp-60h] BYREF
  __int64 v36[11]; // [rsp+20h] [rbp-58h] BYREF

  v9 = a1[91];
  v33 = a1[6];
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  if ( a4 )
    ++*(_DWORD *)(a4 + 8);
  if ( a5 )
    ++*(_DWORD *)(a5 + 8);
  if ( !a2 )
    v9 = *(_QWORD *)(v9 + 104);
  v10 = (_QWORD *)a1[15];
  if ( !v10 )
    goto LABEL_29;
  v11 = &v10[*((unsigned int *)v10 - 1)];
  if ( v10 < v11 )
  {
    do
    {
      while ( 1 )
      {
        v12 = *v10;
        if ( *v10 )
        {
          v13 = a1[14];
          if ( (*(_DWORD *)(v12 + 8))-- == 1 )
            break;
        }
        if ( ++v10 >= v11 )
          goto LABEL_16;
      }
      v31 = (unsigned __int64)v11;
      sub_15D7BC0(v13, v12);
      v11 = (_QWORD *)v31;
      ++v10;
    }
    while ( (unsigned __int64)v10 < v31 );
LABEL_16:
    v10 = (_QWORD *)a1[15];
    if ( !v10 )
      goto LABEL_29;
  }
  *((_DWORD *)v10 - 1) = 0;
  while ( v9 )
  {
    v22 = sub_15EC2C0(a1[6], *(_QWORD *)(v9 + 88));
    v23 = v22;
    if ( v22 )
      ++*(_DWORD *)(v22 + 8);
    v24 = (_QWORD *)a1[15];
    if ( v24 )
    {
      v25 = *((_DWORD *)v24 - 1);
      if ( v25 == *((_DWORD *)v24 - 2) )
      {
        v26 = (3 * v25 + 1) >> 1;
        v27 = 8 * v26 + 8;
        if ( 8 * v25 + 8 >= (unsigned int)v27 || v25 >= v26 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_6A99E0(v36, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v36);
          sub_233E40((__int64)v36);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v32 = (3 * v25 + 1) >> 1;
        v28 = (unsigned int *)sub_186B300(v24 - 1, v27);
        v24 = v28 + 2;
        a1[15] = v28 + 2;
        *v28 = v32;
        LODWORD(v28) = v28[1];
        v21 = &v24[(unsigned int)v28];
        v20 = (_DWORD)v28 + 1;
      }
      else
      {
        v19 = v25;
        v20 = v25 + 1;
        v21 = &v24[v19];
      }
    }
    else
    {
      v29 = (_QWORD *)sub_186B270(0x18u);
      v24 = v29 + 1;
      *v29 = 2;
      v20 = 1;
      a1[15] = v24;
      v21 = v24;
    }
    *v21 = v23;
    v9 = *(_QWORD *)(v9 + 104);
    *((_DWORD *)v24 - 1) = v20;
LABEL_29:
    ;
  }
  if ( a3 )
  {
    ++*(_DWORD *)(a3 + 8);
    v34 = a3;
    sub_6ACBA0(a1 + 15, &v34);
  }
  if ( a4 )
  {
    ++*(_DWORD *)(a4 + 8);
    v35 = a4;
    sub_6ACBA0(a1 + 15, &v35);
  }
  if ( a5 )
  {
    ++*(_DWORD *)(a5 + 8);
    v36[0] = a5;
    sub_6ACBA0(a1 + 15, v36);
  }
  v15 = a1[6];
  v16 = sub_15E1AF0(v15);
  v17 = v16;
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
  sub_8E3610(a1 + 10);
  sub_6A99C0(v17, v15);
  sub_6A99C0(a5, v33);
  sub_6A99C0(a4, v33);
  return sub_6A99C0(a3, v33);
}

