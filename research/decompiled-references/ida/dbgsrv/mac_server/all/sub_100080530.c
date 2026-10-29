/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100080530
// Address: 0x0000000100080530

//----- (0000000100080530) ----------------------------------------------------
char __fastcall sub_100080530(char **a1, char *a2, unsigned __int64 *a3)
{
  char **v5; // r13
  char *v6; // rsi
  char *v7; // rdx
  __int64 v8; // rcx
  char *v9; // r12
  char *v10; // rbx
  char *v11; // r14
  unsigned __int64 *v12; // rbx
  __int128 v13; // xmm0
  __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  __int64 v16; // r8
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rcx
  unsigned __int64 *v19; // r14
  char *v20; // r12
  signed __int64 v21; // rbx
  unsigned __int64 *v22; // rdi
  unsigned __int64 *v23; // rbx
  char *v24; // rax
  __int64 v25; // r10
  __int64 v26; // rdi
  char *v27; // rax
  unsigned __int64 v28; // rcx
  __int64 v29; // r8
  unsigned __int8 v30; // al
  char *v31; // r13
  unsigned __int64 *v33; // r15
  __int64 v34; // r12
  __int64 v35; // [rsp+8h] [rbp-68h]
  char **v36; // [rsp+10h] [rbp-60h]
  unsigned __int64 *v37; // [rsp+18h] [rbp-58h]
  __int128 v38; // [rsp+20h] [rbp-50h] BYREF
  char v39; // [rsp+30h] [rbp-40h]

  v5 = a1;
  v6 = *a1;
  v7 = a1[1];
  v8 = 16LL * (_QWORD)v7;
  v9 = &(*a1)[16 * (_QWORD)v7];
  v10 = *a1;
  if ( v7 )
  {
    if ( *((_QWORD *)v9 - 1) == *(_QWORD *)a2 )
    {
      v11 = v9 - 16;
      if ( *((_BYTE *)a3 + 28) == 1 )
      {
        v38 = *(_OWORD *)v11;
        v39 = 1;
        v12 = a3;
        sub_100080B60(a3, (unsigned __int64)&v38);
        a3 = v12;
      }
      *((_QWORD *)v9 - 1) = *((_QWORD *)a2 + 1);
      if ( *((_BYTE *)a3 + 28) != 1 )
        goto LABEL_48;
      v13 = *(_OWORD *)v11;
      goto LABEL_46;
    }
    if ( *((_QWORD *)v9 - 1) < *(_QWORD *)a2 )
      goto LABEL_21;
    v10 = *a1;
    if ( v8 )
    {
      v14 = v8 >> 4;
      v10 = *a1;
      v15 = v14;
      do
      {
        v15 >>= 1;
        v16 = 16 * v15;
        if ( *(_QWORD *)&v10[16 * v15 + 8] < *(_QWORD *)a2 )
        {
          v15 = v14 + ~v15;
          v10 += v16 + 16;
        }
        v14 = v15;
      }
      while ( v15 );
    }
  }
  if ( v10 == v9 )
  {
LABEL_21:
    v38 = *(_OWORD *)a2;
    if ( v5[2] < v7 + 1 )
    {
      v23 = a3;
      v24 = (char *)qvector_reserve((__int64)v5, v6, (unsigned __int64)(v7 + 1), 0x10u);
      a3 = v23;
      v6 = v24;
      *v5 = v24;
      v7 = v5[1];
    }
    *(_OWORD *)&v6[16 * (_QWORD)v7] = v38;
    ++v5[1];
    if ( *((_BYTE *)a3 + 28) != 1 )
      goto LABEL_48;
    v13 = *(_OWORD *)a2;
    goto LABEL_46;
  }
  v17 = *((_QWORD *)a2 + 1);
  v18 = *(_QWORD *)v10;
  if ( *(_QWORD *)a2 >= *(_QWORD *)v10 && v17 <= *((_QWORD *)v10 + 1) )
    return 0;
  if ( v18 > v17 )
  {
    v19 = a3;
    v38 = *(_OWORD *)a2;
    v20 = v6;
    if ( v5[2] < v7 + 1 )
    {
      v20 = (char *)qvector_reserve((__int64)v5, v6, (unsigned __int64)(v7 + 1), 0x10u);
      *v5 = v20;
      v7 = v5[1];
    }
    v21 = v10 - v6;
    memmove(&v20[v21 + 16], &v20[v21], 16LL * (_QWORD)v7 - v21);
    *(_OWORD *)&v20[v21] = v38;
    ++v5[1];
    if ( *((_BYTE *)v19 + 28) != 1 )
      goto LABEL_48;
    v22 = v19;
    v38 = *(_OWORD *)a2;
    v39 = 0;
    goto LABEL_47;
  }
  if ( v18 < *(_QWORD *)a2 )
    a2 = v10;
  v25 = *(_QWORD *)a2;
  v26 = (v9 - v10) >> 4;
  v27 = v10;
  v28 = v26;
  do
  {
    v28 >>= 1;
    v29 = 16 * v28;
    if ( v17 >= *(_QWORD *)&v27[16 * v28 + 8] )
    {
      v28 = v26 + ~v28;
      v27 += v29 + 16;
    }
    v26 = v28;
  }
  while ( v28 );
  if ( v27 != v9 )
  {
    if ( *(_QWORD *)v27 <= v17 )
    {
      v17 = *((_QWORD *)v27 + 1);
      v27 += 16;
    }
    v9 = v27;
  }
  v30 = *((_BYTE *)a3 + 28);
  if ( v10 == v9 )
  {
    if ( v30 )
    {
      v38 = *(_OWORD *)v10;
      v39 = 1;
      v33 = a3;
      v34 = v25;
      sub_100080B60(a3, (unsigned __int64)&v38);
      v25 = v34;
      a3 = v33;
    }
  }
  else
  {
    v35 = *(_QWORD *)a2;
    v37 = a3;
    if ( !(v30 ^ 1 | (v10 >= v9)) )
    {
      v36 = v5;
      v31 = v10;
      do
      {
        v38 = *(_OWORD *)v31;
        v39 = 1;
        sub_100080B60(v37, (unsigned __int64)&v38);
        v31 += 16;
      }
      while ( v31 < v9 );
      v5 = v36;
      v6 = *v36;
      v7 = v36[1];
    }
    memmove(v10 + 16, v9, &v6[16 * (_QWORD)v7] - v9);
    v5[1] -= (v9 - (v10 + 16)) >> 4;
    a3 = v37;
    v25 = v35;
  }
  *(_QWORD *)v10 = v25;
  *((_QWORD *)v10 + 1) = v17;
  if ( *((_BYTE *)a3 + 28) != 1 )
    goto LABEL_48;
  v13 = *(_OWORD *)v10;
LABEL_46:
  v38 = v13;
  v39 = 0;
  v22 = a3;
LABEL_47:
  sub_100080B60(v22, (unsigned __int64)&v38);
LABEL_48:
  v5[3] = nullptr;
  return 1;
}
