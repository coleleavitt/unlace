/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400367B0
// Address: 0x00000001400367B0

//----- (00000001400367B0) ----------------------------------------------------
__int64 __fastcall sub_1400367B0(_QWORD *a1, __int64 a2, size_t *a3)
{
  size_t *v3; // rbx
  unsigned __int64 v6; // r9
  __int64 v7; // rdi
  unsigned __int64 i; // rcx
  _QWORD *v9; // rsi
  char *v10; // r15
  float v11; // xmm3_4
  unsigned __int64 v12; // rbx
  __int64 v13; // rcx
  float v14; // xmm0_4
  float v15; // xmm2_4
  __int64 v16; // rcx
  float v17; // xmm0_4
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // r12
  _QWORD *v22; // rbx
  _QWORD *v23; // rdx
  _QWORD *v24; // r12
  size_t v25; // rsi
  _QWORD *v26; // rdx
  const void *v27; // rcx
  _QWORD *v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // r9
  _QWORD *v33; // [rsp+30h] [rbp-38h] BYREF
  __int64 v34; // [rsp+38h] [rbp-30h]

  v3 = a3;
  v6 = a3[2];
  if ( a3[3] > 0xF )
    a3 = (size_t *)*a3;
  v7 = 0xCBF29CE484222325uLL;
  for ( i = 0; i < v6; ++i )
    v7 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ (unsigned __int64)v7);
  sub_1400362D0(a1, &v33, v3, v7);
  if ( !v34 )
  {
    v9 = a1 + 1;
    if ( a1[2] == 0x492492492492492LL )
      sub_14006A9C4((__int64)"unordered_map/set too long");
    v10 = (char *)operator new(0x38u);
    *((_OWORD *)v10 + 1) = 0;
    *((_QWORD *)v10 + 4) = 0;
    *((_QWORD *)v10 + 5) = 0;
    *((_OWORD *)v10 + 1) = *(_OWORD *)v3;
    *((_OWORD *)v10 + 2) = *((_OWORD *)v3 + 1);
    v3[2] = 0;
    v3[3] = 15;
    *(_BYTE *)v3 = 0;
    *((_WORD *)v10 + 24) = 0;
    v11 = *(float *)a1;
    v12 = a1[7];
    v13 = a1[2] + 1LL;
    if ( v13 < 0 )
      v14 = (float)(v13 & 1 | (unsigned int)((unsigned __int64)v13 >> 1))
          + (float)(v13 & 1 | (unsigned int)((unsigned __int64)v13 >> 1));
    else
      v14 = (float)(int)v13;
    if ( (v12 & 0x8000000000000000uLL) != 0LL )
    {
      v16 = a1[7] & 1LL | (v12 >> 1);
      v15 = (float)(int)v16 + (float)(int)v16;
    }
    else
    {
      v15 = (float)(int)v12;
    }
    if ( (float)(v14 / v15) <= v11 )
    {
      v23 = v33;
    }
    else
    {
      v17 = ceilf(v14 / v11);
      v18 = 0;
      if ( v17 >= 9.223372e18 )
      {
        v17 = v17 - 9.223372e18;
        if ( v17 < 9.223372e18 )
          v18 = 0x8000000000000000uLL;
      }
      v19 = v18 + (unsigned int)(int)v17;
      v20 = 8;
      if ( v19 > 8 )
        v20 = v19;
      if ( v12 < v20 )
      {
        if ( v12 >= 0x200 || (v12 *= 8LL, v12 < v20) )
          v12 = v20;
      }
      sub_1400374B0(a1, v12);
      v21 = a1[3];
      v22 = *(_QWORD **)(v21 + 16 * (v7 & a1[6]) + 8);
      v23 = (_QWORD *)*v9;
      if ( v22 != (_QWORD *)*v9 )
      {
        v24 = *(_QWORD **)(v21 + 16 * (v7 & a1[6]));
        v25 = *((_QWORD *)v10 + 4);
        while ( 1 )
        {
          v26 = v22 + 2;
          if ( v22[5] > 0xFu )
            v26 = (_QWORD *)*v26;
          v27 = v10 + 16;
          if ( *((_QWORD *)v10 + 5) > 0xFu )
            v27 = *((const void **)v10 + 2);
          if ( v25 == v22[4] && (!v25 || !memcmp(v27, v26, v25)) )
          {
            v23 = (_QWORD *)*v22;
            v9 = a1 + 1;
            goto LABEL_38;
          }
          if ( v22 == v24 )
            break;
          v22 = (_QWORD *)v22[1];
        }
        v23 = v22;
        v9 = a1 + 1;
      }
    }
LABEL_38:
    v28 = (_QWORD *)v23[1];
    ++a1[2];
    *(_QWORD *)v10 = v23;
    *((_QWORD *)v10 + 1) = v28;
    *v28 = v10;
    v23[1] = v10;
    v29 = 2 * (v7 & a1[6]);
    v30 = a1[3];
    v31 = *(_QWORD **)(v30 + 16 * (v7 & a1[6]));
    if ( v31 == (_QWORD *)*v9 )
    {
      *(_QWORD *)(v30 + 16 * (v7 & a1[6])) = v10;
LABEL_43:
      *(_QWORD *)(v30 + 8 * v29 + 8) = v10;
      goto LABEL_44;
    }
    if ( v31 == v23 )
    {
      *(_QWORD *)(v30 + 16 * (v7 & a1[6])) = v10;
    }
    else if ( *(_QWORD **)(v30 + 16 * (v7 & a1[6]) + 8) == v28 )
    {
      goto LABEL_43;
    }
LABEL_44:
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 1;
    return a2;
  }
  *(_QWORD *)a2 = v34;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
