_QWORD *__fastcall sub_1AC1C80(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rax
  _QWORD *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rdx
  unsigned int *v18; // rcx
  _QWORD *result; // rax
  unsigned int *v20; // rax
  unsigned int *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rsi
  int v24; // edx
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rsi
  int v30; // edx
  int v31; // edx
  unsigned int *v32; // [rsp+0h] [rbp-38h] BYREF
  __int64 v33; // [rsp+8h] [rbp-30h]

  v5 = a1;
  v6 = (a2 - (__int64)a1) >> 6;
  v7 = (a2 - (__int64)a1) >> 4;
  if ( v6 > 0 )
  {
    v8 = &a1[8 * v6];
    do
    {
      v15 = *v5;
      v16 = *(unsigned int **)(*(_QWORD *)(a3 + 8) + 16LL);
      v17 = *v16;
      v18 = v16 + 4;
      v32 = v16 + 4;
      v33 = v17;
      if ( v17 == v5[1] )
      {
        if ( !(unsigned int)sub_22462B0(&v32, v15, v17) )
          return v5;
        v16 = *(unsigned int **)(*(_QWORD *)(a3 + 8) + 16LL);
        v18 = v16 + 4;
      }
      v9 = *v16;
      v10 = v5[2];
      v32 = v18;
      v33 = v9;
      if ( v9 == v5[3] )
      {
        if ( !(unsigned int)sub_22462B0(&v32, v10, v9) )
          return v5 + 2;
        v16 = *(unsigned int **)(*(_QWORD *)(a3 + 8) + 16LL);
        v18 = v16 + 4;
      }
      v11 = *v16;
      v12 = v5[4];
      v32 = v18;
      v33 = v11;
      if ( v11 == v5[5] )
      {
        if ( !(unsigned int)sub_22462B0(&v32, v12, v11) )
          return v5 + 4;
        v16 = *(unsigned int **)(*(_QWORD *)(a3 + 8) + 16LL);
        v18 = v16 + 4;
      }
      v13 = *v16;
      v14 = v5[6];
      v32 = v18;
      v33 = v13;
      if ( v13 == v5[7] && !(unsigned int)sub_22462B0(&v32, v14, v13) )
        return v5 + 6;
      v5 += 8;
    }
    while ( v8 != v5 );
    v7 = (a2 - (__int64)v5) >> 4;
  }
  switch ( v7 )
  {
    case 2LL:
      v20 = *(unsigned int **)(*(_QWORD *)(a3 + 8) + 16LL);
      v21 = v20 + 4;
      break;
    case 3LL:
      v25 = v5[1];
      v26 = *v5;
      v20 = *(unsigned int **)(*(_QWORD *)(a3 + 8) + 16LL);
      v27 = *v20;
      v21 = v20 + 4;
      v32 = v20 + 4;
      v33 = v27;
      if ( v25 == v27 )
      {
        v30 = sub_22462B0(&v32, v26, v25);
        result = v5;
        if ( !v30 )
          return result;
        v20 = *(unsigned int **)(*(_QWORD *)(a3 + 8) + 16LL);
        v21 = v20 + 4;
      }
      v5 += 2;
      break;
    case 1LL:
      v20 = *(unsigned int **)(*(_QWORD *)(a3 + 8) + 16LL);
      v21 = v20 + 4;
      goto LABEL_26;
    default:
      return (_QWORD *)a2;
  }
  v28 = *v20;
  v29 = *v5;
  v32 = v21;
  v33 = v28;
  if ( v28 == v5[1] )
  {
    v31 = sub_22462B0(&v32, v29, v28);
    result = v5;
    if ( !v31 )
      return result;
    v20 = *(unsigned int **)(*(_QWORD *)(a3 + 8) + 16LL);
    v21 = v20 + 4;
  }
  v5 += 2;
LABEL_26:
  v22 = *v20;
  v23 = *v5;
  v32 = v21;
  v33 = v22;
  if ( v22 != v5[1] )
    return (_QWORD *)a2;
  v24 = sub_22462B0(&v32, v23, v22);
  result = v5;
  if ( v24 )
    return (_QWORD *)a2;
  return result;
}
