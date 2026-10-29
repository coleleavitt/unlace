/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81590
// Address: 0x0000000000081590

//----- (0000000000081590) ----------------------------------------------------
char *__fastcall sub_81590(_QWORD *a1, unsigned __int8 *a2)
{
  __int64 v3; // r12
  unsigned __int64 v4; // rdx
  const void *v5; // rbp
  __int64 *v6; // rsi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rsi
  void **v13; // rax
  char *v14; // rbx
  unsigned __int64 v15; // r9
  size_t v16; // r9
  __int64 v17; // rax
  __m128 v18; // xmm0
  float v19; // xmm2_4
  float v20; // xmm1_4
  _BOOL8 v21; // rax
  unsigned __int64 v22; // rax
  __m128 v23; // xmm0
  unsigned __int64 v24; // rsi
  __int64 v25; // rcx
  _QWORD *v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int8 v29; // cl
  unsigned __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned __int64 v32; // r12
  size_t v33; // r15
  int v34; // eax
  unsigned __int64 v36; // [rsp+8h] [rbp-50h]
  unsigned __int64 v37; // [rsp+10h] [rbp-48h]
  char v38[8]; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v39; // [rsp+20h] [rbp-38h]

  v3 = (__int64)a1;
  v39 = __readfsqword(0x28u);
  v4 = *a2;
  v5 = a2 + 1;
  if ( (v4 & 1) != 0 )
  {
    v6 = *((__int64 **)a2 + 2);
    v7 = *((_QWORD *)a2 + 1);
  }
  else
  {
    v7 = v4 >> 1;
    v6 = (__int64 *)(a2 + 1);
  }
  v8 = sub_8C090((__int64)v38, v6, v7);
  v9 = v8;
  v10 = a1[1];
  if ( !v10 )
    goto LABEL_15;
  v11 = v10 - 1;
  if ( (v10 & (v10 - 1)) != 0 )
  {
    v12 = v8;
    if ( v8 >= v10 )
      v12 = v8 % v10;
  }
  else
  {
    v12 = v8 & v11;
  }
  v13 = *(void ***)(*a1 + 8 * v12);
  if ( !v13 || (v14 = (char *)*v13) == nullptr )
  {
    v5 = (const void *)v12;
    goto LABEL_15;
  }
  v15 = *a2;
  if ( (v15 & 1) != 0 )
  {
    v16 = *((_QWORD *)a2 + 1);
    v5 = *((const void **)a2 + 2);
  }
  else
  {
    v16 = v15 >> 1;
  }
  v37 = v9;
  v36 = v12;
  do
  {
    v28 = *((_QWORD *)v14 + 1);
    if ( v28 == v9 )
      goto LABEL_50;
    if ( (v10 & v11) != 0 )
    {
      if ( v28 >= v10 )
      {
        if ( v28 % v10 != v12 )
          break;
        goto LABEL_50;
      }
    }
    else
    {
      v28 &= v11;
    }
    if ( v28 != v12 )
      break;
LABEL_50:
    v29 = v14[16];
    v30 = (unsigned __int64)v29 >> 1;
    if ( (v29 & 1) != 0 )
      v30 = *((_QWORD *)v14 + 3);
    if ( v30 == v16 )
    {
      if ( (v29 & 1) != 0 )
      {
        if ( !v16 )
          return v14 + 40;
        v32 = v11;
        v33 = v16;
        v34 = memcmp(*((const void **)v14 + 4), v5, v16);
        v16 = v33;
        v11 = v32;
        v12 = v36;
        v9 = v37;
        if ( !v34 )
          return v14 + 40;
      }
      else
      {
        if ( !v16 )
          return v14 + 40;
        v31 = 0;
        while ( v14[v31 + 17] == *((_BYTE *)v5 + v31) )
        {
          if ( (unsigned __int64)(unsigned __int8)v14[16] >> 1 == ++v31 )
            return v14 + 40;
        }
      }
    }
    v14 = *(char **)v14;
  }
  while ( v14 );
  v5 = (const void *)v12;
  v3 = (__int64)a1;
LABEL_15:
  v14 = (char *)operator new(0x30u);
  *((_QWORD *)v14 + 4) = *((_QWORD *)a2 + 2);
  *((_OWORD *)v14 + 1) = *(_OWORD *)a2;
  *(_OWORD *)a2 = 0;
  *((_QWORD *)a2 + 2) = 0;
  *((_WORD *)v14 + 20) = 0;
  *((_QWORD *)v14 + 1) = v9;
  *(_QWORD *)v14 = 0;
  v17 = *(_QWORD *)(v3 + 24) + 1LL;
  v18 = 0;
  if ( v17 < 0 )
    v18.m128_f32[0] = (float)(int)(((unsigned __int64)v17 >> 1) | v17 & 1)
                    + (float)(int)(((unsigned __int64)v17 >> 1) | v17 & 1);
  else
    v18.m128_f32[0] = (float)(int)v17;
  if ( (v10 & 0x8000000000000000LL) != 0LL )
  {
    v19 = (float)(int)((v10 >> 1) | v10 & 1) + (float)(int)((v10 >> 1) | v10 & 1);
    v20 = *(float *)(v3 + 32);
  }
  else
  {
    v19 = (float)(int)v10;
    v20 = *(float *)(v3 + 32);
    if ( !v10 )
    {
LABEL_24:
      v21 = v10 < 3 || (v10 & (v10 - 1)) != 0;
      v22 = (2 * v10) | v21;
      v18.m128_f32[0] = v18.m128_f32[0] / v20;
      v23 = _mm_round_ss(v18, v18, 10);
      v24 = (unsigned int)(int)v23.m128_f32[0];
      if ( v23.m128_f32[0] >= 9.223372e18 )
        v24 = (unsigned int)(int)(float)(v23.m128_f32[0] - 9.223372e18) ^ 0x8000000000000000LL;
      if ( v22 >= v24 )
        v24 = v22;
      sub_8BF90(v3, v24, v23);
      v10 = *(_QWORD *)(v3 + 8);
      if ( (v10 & (v10 - 1)) != 0 )
      {
        if ( v9 >= v10 )
          v9 %= v10;
      }
      else
      {
        v9 &= v10 - 1;
      }
      goto LABEL_35;
    }
  }
  if ( v18.m128_f32[0] > (float)(v19 * v20) )
    goto LABEL_24;
  v9 = (unsigned __int64)v5;
LABEL_35:
  v25 = *(_QWORD *)v3;
  v26 = *(_QWORD **)(*(_QWORD *)v3 + 8 * v9);
  if ( v26 )
  {
    *(_QWORD *)v14 = *v26;
    goto LABEL_65;
  }
  *(_QWORD *)v14 = *(_QWORD *)(v3 + 16);
  *(_QWORD *)(v3 + 16) = v14;
  *(_QWORD *)(v25 + 8 * v9) = v3 + 16;
  if ( *(_QWORD *)v14 )
  {
    v27 = *(_QWORD *)(*(_QWORD *)v14 + 8LL);
    if ( (v10 & (v10 - 1)) != 0 )
    {
      if ( v27 >= v10 )
        v27 %= v10;
    }
    else
    {
      v27 &= v10 - 1;
    }
    v26 = (_QWORD *)(*(_QWORD *)v3 + 8 * v27);
LABEL_65:
    *v26 = v14;
  }
  ++*(_QWORD *)(v3 + 24);
  return v14 + 40;
}
// 816E7: conditional instruction was optimized away because r14.8<0
