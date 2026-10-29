__int64 __fastcall sub_895F60(__int64 **a1, __int64 *a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 v8; // r13
  __int64 *v10; // rbx
  __int64 *v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  __int64 *v19; // rcx
  __int64 *v20; // rax
  __int64 *v21; // rcx
  __int64 *v22; // rax
  bool v23; // zf
  __int64 *v24; // rax
  __int64 v25; // rax
  bool v26; // cf
  __int64 v27; // rcx
  __int64 *v28; // r8
  __int64 *v29; // rcx
  __int64 *v30; // rdi
  __int64 v31; // rcx

  v8 = 4LL * a4;
  v10 = a2;
  v11 = a1[10];
  if ( v11 == a2 )
  {
    v20 = a1[3];
    if ( v20 )
    {
      v21 = a1[2];
      v22 = &v21[2 * (_QWORD)v20];
      v23 = v21 == v22;
      v24 = v22 - 2;
      if ( v23 )
        v24 = a2;
      v25 = v24[1] + 4LL * (unsigned int)(*((_DWORD *)v24 + 1) - *(_DWORD *)v24);
    }
    else
    {
      v25 = **a1;
    }
    v26 = __CFADD__(v8, v25);
    v14 = v8 + v25;
    if ( !v26 )
    {
      v27 = 4LL * a5;
      v17 = v14 - v27;
      if ( v14 == v14 - v27 )
        return a4 - a5;
      goto LABEL_9;
    }
LABEL_32:
    if ( !under_debugger )
      interr(1165);
    BUG();
  }
  v12 = a2[1];
  v13 = v8 + v12;
  if ( __CFADD__(v8, v12) )
    goto LABEL_32;
  v14 = v8 + v12;
  if ( v11 == (__int64 *)a3 )
  {
    v19 = a1[3];
    if ( v19 )
    {
      v28 = a1[2];
      v29 = &v28[2 * (_QWORD)v19];
      v30 = v29 - 2;
      if ( v28 == v29 )
        v30 = (__int64 *)a3;
      v15 = v30[1] + 4LL * (unsigned int)(*((_DWORD *)v30 + 1) - *(_DWORD *)v30);
    }
    else
    {
      v15 = **a1;
    }
  }
  else
  {
    v15 = *(_QWORD *)(a3 + 8) + 4LL * (unsigned int)(*(_DWORD *)(a3 + 4) - *(_DWORD *)a3);
  }
  if ( v15 != v12 && v12 != v13 && *((_BYTE *)a1 + 92) )
  {
    sub_8990B0(*a1);
    v14 = v13;
    v31 = 4LL * a5;
    v17 = v13 - v31;
    if ( v13 - v31 == v13 )
      goto LABEL_11;
    goto LABEL_9;
  }
  v16 = 4LL * a5;
  v17 = v13 - v16;
  if ( v13 != v13 - v16 )
  {
LABEL_9:
    if ( v17 >= v14 )
      sub_894C60();
    sub_899020(*a1, v17, 0);
LABEL_11:
    if ( v10 == a1[10] )
      return a4 - a5;
    goto LABEL_14;
  }
  do
  {
LABEL_14:
    v10[1] += v8;
    if ( (__int64 *)a3 == v10 )
      break;
    v10 += 2;
  }
  while ( v10 != a1[10] );
  return a4 - a5;
}

