unsigned __int64 __fastcall sub_44F780(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v3; // rax
  _QWORD *v4; // r8
  _QWORD *v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r12
  _QWORD *v17; // rax
  const void *v18; // rbp
  void *v19; // rax
  const void *v20; // r14
  void *v21; // rax
  unsigned __int64 v22; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 *v23; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v24; // [rsp+18h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  v3 = *(_QWORD **)(a2 + 56);
  if ( !v3 )
    goto LABEL_29;
  v4 = (_QWORD *)(a2 + 48);
  v5 = (_QWORD *)(a2 + 48);
  do
  {
    while ( 1 )
    {
      v6 = v3[2];
      v7 = v3[3];
      if ( v3[4] < a3 )
        break;
      v5 = v3;
      v3 = (_QWORD *)v3[2];
      if ( !v6 )
        goto LABEL_6;
    }
    v3 = (_QWORD *)v3[3];
  }
  while ( v7 );
LABEL_6:
  if ( v4 == v5 || a3 < v5[4] )
LABEL_29:
    sub_44E230();
  v8 = *((unsigned int *)v5 + 10);
  v9 = (_QWORD *)a1[7];
  v10 = a1 + 6;
  v22 = v8;
  v11 = v8;
  if ( !v9 )
    goto LABEL_22;
  do
  {
    while ( 1 )
    {
      v12 = v9[2];
      v13 = v9[3];
      if ( v9[4] < v8 )
        break;
      v10 = v9;
      v9 = (_QWORD *)v9[2];
      if ( !v12 )
        goto LABEL_13;
    }
    v9 = (_QWORD *)v9[3];
  }
  while ( v13 );
LABEL_13:
  if ( a1 + 6 == v10 || v8 < v10[4] )
  {
LABEL_22:
    v23 = &v22;
    v17 = sub_44F310(a1 + 5, v10, &v23);
    v11 = *((_DWORD *)v5 + 10);
    v10 = v17;
  }
  *((_DWORD *)v10 + 10) = v11;
  *((_DWORD *)v10 + 11) = *((_DWORD *)v5 + 11);
  if ( v10 + 6 != v5 + 6 )
  {
    v14 = v5[7];
    if ( v14 > 1 )
    {
      v20 = (const void *)v5[6];
      v21 = (void *)v10[6];
      if ( v10[8] < v14 )
      {
        v21 = (void *)qvector_reserve(v10 + 6, v10[6], v5[7], 1);
        v10[6] = v21;
      }
      v10[7] = v14;
      memmove(v21, v20, v14 - 1);
      *(_BYTE *)(v10[6] + v14 - 1) = 0;
    }
    else
    {
      v10[7] = 0;
    }
  }
  if ( v10 + 9 != v5 + 9 )
  {
    v15 = v5[10];
    if ( v15 > 1 )
    {
      v18 = (const void *)v5[9];
      v19 = (void *)v10[9];
      if ( v10[11] < v15 )
      {
        v19 = (void *)qvector_reserve(v10 + 9, v10[9], v15, 1);
        v10[9] = v19;
      }
      v10[10] = v15;
      memmove(v19, v18, v15 - 1);
      *(_BYTE *)(v10[9] + v15 - 1) = 0;
    }
    else
    {
      v10[10] = 0;
    }
  }
  return v24 - __readfsqword(0x28u);
}

