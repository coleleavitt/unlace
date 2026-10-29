__int64 __fastcall sub_E67520(__int64 **a1, __int64 *a2, __int64 *a3)
{
  __int64 *v5; // r15
  __int64 v6; // r13
  __int64 v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  _QWORD *v13; // rbx
  _QWORD *v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // r13
  __int64 result; // rax
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rsi
  __int64 v24; // [rsp+0h] [rbp-58h]
  __int64 v25; // [rsp+8h] [rbp-50h]
  __int64 v26; // [rsp+10h] [rbp-48h] BYREF
  __int64 v27; // [rsp+18h] [rbp-40h]

  v5 = *a1;
  v6 = **a1;
  v24 = (__int64)(*a1 + 224);
  v25 = *a2;
  v7 = (*a1)[229];
  if ( v7 )
  {
    if ( !*(_DWORD *)(v7 - 4) && *(_QWORD *)v5[227] == v5[228] )
      goto LABEL_25;
    *(_DWORD *)(v7 - 4) = 0;
  }
  else if ( *(_QWORD *)v5[227] == v5[228] )
  {
    goto LABEL_25;
  }
  v8 = (_QWORD *)v5[231];
  if ( v8 )
  {
    v9 = &v8[*((unsigned int *)v8 - 1)];
    if ( v8 >= v9 )
      goto LABEL_12;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = v5[230];
          v12 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_11;
      }
      sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_11:
    v8 = (_QWORD *)v5[231];
    if ( v8 )
LABEL_12:
      *((_DWORD *)v8 - 1) = 0;
  }
  v13 = (_QWORD *)v5[235];
  if ( v13 )
  {
    v14 = &v13[*((unsigned int *)v13 - 1)];
    if ( v13 >= v14 )
      goto LABEL_21;
    do
    {
      while ( 1 )
      {
        v15 = *v13;
        if ( *v13 )
        {
          v16 = v5[234];
          v12 = (*(_DWORD *)(v15 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v13 >= v14 )
          goto LABEL_20;
      }
      sub_15D7BC0(v16, v15);
      ++v13;
    }
    while ( v13 < v14 );
LABEL_20:
    v13 = (_QWORD *)v5[235];
    if ( v13 )
LABEL_21:
      *((_DWORD *)v13 - 1) = 0;
  }
  v17 = v5[241];
  if ( v17 )
    *(_DWORD *)(v17 - 4) = 0;
  sub_15843E0(v24);
LABEL_25:
  v12 = *((_BYTE *)v5 + 1808) == 0;
  v27 = v6;
  v26 = 0;
  if ( v12 )
    sub_E81DF0(v24, v25, &v26, a3);
  else
    sub_E816B0(v24, v25, &v26, a3);
  v18 = v26;
  v19 = v27;
  result = *(unsigned int *)(*v5 + 712);
  if ( (_DWORD)result )
  {
    v21 = sub_15DE370(*v5);
    v22 = v21;
    if ( v21 )
      ++*(_DWORD *)(v21 + 8);
    result = sub_E65BA0(*a3, a3[1]);
    *a3 = v22;
  }
  v23 = *a2;
  *a2 = v18;
  if ( v23 )
  {
    v12 = (*(_DWORD *)(v23 + 8))-- == 1;
    if ( v12 )
      return sub_15D7BC0(v19, v23);
  }
  return result;
}

