/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100080B60
// Address: 0x0000000100080B60

//----- (0000000100080B60) ----------------------------------------------------
__int64 __fastcall sub_100080B60(unsigned __int64 *a1, unsigned __int64 a2)
{
  _QWORD *v3; // r14
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rax
  _QWORD *v6; // rax
  unsigned __int64 v7; // r15
  _QWORD *v8; // rdi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 j; // rsi
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r15
  _QWORD *v16; // rax
  unsigned __int64 v17; // r12
  _QWORD *v18; // rdi
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 i; // rsi
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int128 v27; // xmm0
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int128 v31; // [rsp+0h] [rbp-50h]
  __int64 v32; // [rsp+10h] [rbp-40h]

  v3 = (_QWORD *)*a1;
  v4 = a1[2];
  if ( *a1 > a2 || *a1 + 24 * v4 <= a2 )
  {
    v14 = a1[1];
    if ( v4 >= v14 + 1 )
    {
LABEL_27:
      v26 = 3 * v14;
      v3[v26 + 2] = *(_QWORD *)(a2 + 16);
      v27 = *(_OWORD *)a2;
      goto LABEL_28;
    }
    v15 = a2;
    v16 = qvector_reserve((__int64)a1, nullptr, v14 + 1, 0x18u);
    v3 = v16;
    v17 = a1[2];
    a1[2] = v4;
    v18 = (_QWORD *)*a1;
    v19 = a1[1];
    v20 = v19 - 1;
    if ( (__int64)(v19 - 1) < 0 )
    {
LABEL_26:
      qfree(v18);
      *a1 = (unsigned __int64)v3;
      a1[2] = v17;
      v14 = a1[1];
      a2 = v15;
      goto LABEL_27;
    }
    v21 = v19 & 3;
    if ( v21 )
    {
      for ( i = 0; i != v21; ++i )
      {
        v16[2] = v18[2];
        *(_OWORD *)v16 = *(_OWORD *)v18;
        v18 += 3;
        v16 += 3;
      }
      v23 = v20 - i;
      if ( v20 < 3 )
        goto LABEL_25;
    }
    else
    {
      v23 = a1[1] - 1;
      if ( v20 < 3 )
      {
LABEL_25:
        v18 = (_QWORD *)*a1;
        goto LABEL_26;
      }
    }
    v28 = v23 + 1;
    v29 = 0;
    do
    {
      v16[v29 + 2] = v18[v29 + 2];
      *(_OWORD *)&v16[v29] = *(_OWORD *)&v18[v29];
      v16[v29 + 5] = v18[v29 + 5];
      *(_OWORD *)&v16[v29 + 3] = *(_OWORD *)&v18[v29 + 3];
      v16[v29 + 8] = v18[v29 + 8];
      *(_OWORD *)&v16[v29 + 6] = *(_OWORD *)&v18[v29 + 6];
      *(_OWORD *)&v16[v29 + 9] = *(_OWORD *)&v18[v29 + 9];
      v16[v29 + 11] = v18[v29 + 11];
      v29 += 12;
      v28 -= 4;
    }
    while ( v28 );
    goto LABEL_25;
  }
  v32 = *(_QWORD *)(a2 + 16);
  v31 = *(_OWORD *)a2;
  v5 = a1[1];
  if ( v4 < v5 + 1 )
  {
    v6 = qvector_reserve((__int64)a1, nullptr, v5 + 1, 0x18u);
    v3 = v6;
    v7 = a1[2];
    a1[2] = v4;
    v8 = (_QWORD *)*a1;
    v9 = a1[1];
    v10 = v9 - 1;
    if ( (__int64)(v9 - 1) < 0 )
    {
LABEL_20:
      qfree(v8);
      *a1 = (unsigned __int64)v3;
      a1[2] = v7;
      v5 = a1[1];
      goto LABEL_21;
    }
    v11 = v9 & 3;
    if ( v11 )
    {
      for ( j = 0; j != v11; ++j )
      {
        v6[2] = v8[2];
        *(_OWORD *)v6 = *(_OWORD *)v8;
        v8 += 3;
        v6 += 3;
      }
      v13 = v10 - j;
      if ( v10 < 3 )
        goto LABEL_19;
    }
    else
    {
      v13 = a1[1] - 1;
      if ( v10 < 3 )
      {
LABEL_19:
        v8 = (_QWORD *)*a1;
        goto LABEL_20;
      }
    }
    v24 = v13 + 1;
    v25 = 0;
    do
    {
      v6[v25 + 2] = v8[v25 + 2];
      *(_OWORD *)&v6[v25] = *(_OWORD *)&v8[v25];
      v6[v25 + 5] = v8[v25 + 5];
      *(_OWORD *)&v6[v25 + 3] = *(_OWORD *)&v8[v25 + 3];
      v6[v25 + 8] = v8[v25 + 8];
      *(_OWORD *)&v6[v25 + 6] = *(_OWORD *)&v8[v25 + 6];
      *(_OWORD *)&v6[v25 + 9] = *(_OWORD *)&v8[v25 + 9];
      v6[v25 + 11] = v8[v25 + 11];
      v25 += 12;
      v24 -= 4;
    }
    while ( v24 );
    goto LABEL_19;
  }
LABEL_21:
  v26 = 3 * v5;
  v3[v26 + 2] = v32;
  v27 = v31;
LABEL_28:
  *(_OWORD *)&v3[v26] = v27;
  ++a1[1];
  return __stack_chk_guard;
}
