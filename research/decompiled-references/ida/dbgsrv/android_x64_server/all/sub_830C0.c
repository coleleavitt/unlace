/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_830C0
// Address: 0x00000000000830C0

//----- (00000000000830C0) ----------------------------------------------------
char *__fastcall sub_830C0(_QWORD *a1, unsigned __int8 *a2)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // rdx
  const void *v5; // r15
  __int64 *v6; // rsi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rdx
  void **v13; // rax
  char *v14; // rbx
  unsigned __int64 v15; // rbp
  size_t v16; // rbp
  unsigned __int64 v17; // rax
  unsigned __int8 v18; // cl
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __m128 v22; // xmm0
  float v23; // xmm2_4
  float v24; // xmm1_4
  unsigned __int64 v25; // rsi
  _BOOL8 v26; // rax
  unsigned __int64 v27; // rax
  __m128 v28; // xmm0
  unsigned __int64 v29; // rsi
  __int64 v30; // rcx
  _QWORD *v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v34; // [rsp+0h] [rbp-58h]
  unsigned __int64 v35; // [rsp+10h] [rbp-48h]
  char v36[8]; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v37; // [rsp+20h] [rbp-38h]

  v3 = (__int64)a1;
  v37 = __readfsqword(0x28u);
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
  v8 = sub_8C090((__int64)v36, v6, v7);
  v9 = v8;
  v10 = a1[1];
  v34 = v8;
  if ( v10 )
  {
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
    v35 = v12;
    v13 = *(void ***)(*a1 + 8 * v12);
    if ( v13 )
    {
      v14 = (char *)*v13;
      if ( *v13 )
      {
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
        while ( 1 )
        {
          v17 = *((_QWORD *)v14 + 1);
          if ( v17 != v9 )
          {
            if ( (v10 & v11) == 0 )
            {
              v17 &= v11;
LABEL_21:
              if ( v17 != v35 )
                goto LABEL_34;
              goto LABEL_22;
            }
            if ( v17 < v10 )
              goto LABEL_21;
            if ( v17 % v10 != v35 )
              goto LABEL_34;
          }
LABEL_22:
          v18 = v14[16];
          v19 = (unsigned __int64)v18 >> 1;
          if ( (v18 & 1) != 0 )
            v19 = *((_QWORD *)v14 + 3);
          if ( v19 == v16 )
          {
            if ( (v18 & 1) != 0 )
            {
              if ( !v16 )
                return v14 + 40;
              v9 = v34;
              if ( !memcmp(*((const void **)v14 + 4), v5, v16) )
                return v14 + 40;
            }
            else
            {
              if ( !v16 )
                return v14 + 40;
              v20 = 0;
              while ( v14[v20 + 17] == *((_BYTE *)v5 + v20) )
              {
                if ( (unsigned __int64)(unsigned __int8)v14[16] >> 1 == ++v20 )
                  return v14 + 40;
              }
            }
          }
          v14 = *(char **)v14;
          if ( !v14 )
          {
LABEL_34:
            v3 = (__int64)a1;
            break;
          }
        }
      }
    }
  }
  v14 = (char *)operator new(0x48u);
  *((_QWORD *)v14 + 4) = *((_QWORD *)a2 + 2);
  *((_OWORD *)v14 + 1) = *(_OWORD *)a2;
  *(_OWORD *)a2 = 0;
  *((_QWORD *)a2 + 2) = 0;
  *(_OWORD *)(v14 + 50) = 0;
  *(_OWORD *)(v14 + 40) = 0;
  *((_QWORD *)v14 + 1) = v34;
  *(_QWORD *)v14 = 0;
  v21 = *(_QWORD *)(v3 + 24) + 1LL;
  v22 = 0;
  if ( v21 < 0 )
    v22.m128_f32[0] = (float)(int)(((unsigned __int64)v21 >> 1) | v21 & 1)
                    + (float)(int)(((unsigned __int64)v21 >> 1) | v21 & 1);
  else
    v22.m128_f32[0] = (float)(int)v21;
  if ( (v10 & 0x8000000000000000LL) != 0LL )
  {
    v23 = (float)(int)((v10 >> 1) | v10 & 1) + (float)(int)((v10 >> 1) | v10 & 1);
    v24 = *(float *)(v3 + 32);
  }
  else
  {
    v23 = (float)(int)v10;
    v24 = *(float *)(v3 + 32);
    if ( !v10 )
      goto LABEL_44;
  }
  if ( v22.m128_f32[0] <= (float)(v23 * v24) )
  {
    v25 = v35;
    goto LABEL_55;
  }
LABEL_44:
  v26 = v10 < 3 || (v10 & (v10 - 1)) != 0;
  v27 = (2 * v10) | v26;
  v22.m128_f32[0] = v22.m128_f32[0] / v24;
  v28 = _mm_round_ss(v22, v22, 10);
  v29 = (unsigned int)(int)v28.m128_f32[0];
  if ( v28.m128_f32[0] >= 9.223372e18 )
    v29 = (unsigned int)(int)(float)(v28.m128_f32[0] - 9.223372e18) ^ 0x8000000000000000LL;
  if ( v27 >= v29 )
    v29 = v27;
  sub_8CA90(v3, v29, v28);
  v10 = *(_QWORD *)(v3 + 8);
  v25 = v34;
  if ( (v10 & (v10 - 1)) != 0 )
  {
    if ( v34 >= v10 )
      v25 = v34 % v10;
  }
  else
  {
    v25 = (v10 - 1) & v34;
  }
LABEL_55:
  v30 = *(_QWORD *)v3;
  v31 = *(_QWORD **)(*(_QWORD *)v3 + 8 * v25);
  if ( v31 )
  {
    *(_QWORD *)v14 = *v31;
LABEL_63:
    *v31 = v14;
    goto LABEL_64;
  }
  *(_QWORD *)v14 = *(_QWORD *)(v3 + 16);
  *(_QWORD *)(v3 + 16) = v14;
  *(_QWORD *)(v30 + 8 * v25) = v3 + 16;
  if ( *(_QWORD *)v14 )
  {
    v32 = *(_QWORD *)(*(_QWORD *)v14 + 8LL);
    if ( (v10 & (v10 - 1)) != 0 )
    {
      if ( v32 >= v10 )
        v32 %= v10;
    }
    else
    {
      v32 &= v10 - 1;
    }
    v31 = (_QWORD *)(*(_QWORD *)v3 + 8 * v32);
    goto LABEL_63;
  }
LABEL_64:
  ++*(_QWORD *)(v3 + 24);
  return v14 + 40;
}
// 832EA: conditional instruction was optimized away because r14.8<0
// 832F5: variable 'v35' is possibly undefined
