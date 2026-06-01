/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82C10
// Address: 0x0000000000082C10

//----- (0000000000082C10) ----------------------------------------------------
unsigned __int64 __fastcall sub_82C10(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r12
  __int64 v3; // r13
  __int64 **v4; // r14
  unsigned __int64 v5; // rdx
  __int64 *v6; // rbx
  __int64 *v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // r8
  __int64 **v13; // rax
  __int64 *v14; // r13
  unsigned __int64 v15; // r9
  size_t v16; // r9
  unsigned __int64 v17; // rax
  unsigned __int8 v18; // cl
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // rbp
  size_t v22; // r12
  int v23; // eax
  _QWORD *v24; // rbx
  __int64 v25; // rax
  __m128 v26; // xmm0
  float v27; // xmm2_4
  float v28; // xmm1_4
  _BOOL8 v29; // rax
  __m128 v30; // xmm0
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rsi
  __int64 v33; // rcx
  _QWORD *v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 v37; // [rsp+10h] [rbp-58h]
  _QWORD *v38; // [rsp+18h] [rbp-50h]
  unsigned __int64 v39; // [rsp+20h] [rbp-48h]
  char v40[8]; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v41; // [rsp+30h] [rbp-38h]

  v3 = a1;
  v41 = __readfsqword(0x28u);
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  sub_8CA90(a1, *(_QWORD *)(a2 + 8), (__m128)0LL);
  v4 = *(__int64 ***)(a2 + 16);
  if ( v4 )
  {
    v38 = (_QWORD *)(a1 + 16);
    while ( 1 )
    {
      v5 = *((unsigned __int8 *)v4 + 16);
      v6 = (__int64 *)((char *)v4 + 17);
      if ( (v5 & 1) != 0 )
      {
        v7 = v4[4];
        v8 = (unsigned __int64)v4[3];
      }
      else
      {
        v8 = v5 >> 1;
        v7 = (__int64 *)((char *)v4 + 17);
      }
      v9 = sub_8C090((__int64)v40, v7, v8);
      v10 = v9;
      v11 = *(_QWORD *)(v3 + 8);
      v37 = v9;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( (v11 & (v11 - 1)) != 0 )
        {
          v2 = v9;
          if ( v9 >= v11 )
            v2 = v9 % v11;
        }
        else
        {
          v2 = v9 & v12;
        }
        v13 = *(__int64 ***)(*(_QWORD *)v3 + 8 * v2);
        if ( v13 )
        {
          v14 = *v13;
          if ( *v13 )
          {
            v15 = *((unsigned __int8 *)v4 + 16);
            if ( (v15 & 1) != 0 )
            {
              v16 = (size_t)v4[3];
              v6 = v4[4];
            }
            else
            {
              v16 = v15 >> 1;
            }
            v39 = v2;
            do
            {
              v17 = v14[1];
              if ( v17 == v10 )
                goto LABEL_24;
              if ( (v11 & v12) != 0 )
              {
                if ( v17 >= v11 )
                {
                  if ( v17 % v11 != v2 )
                    break;
                  goto LABEL_24;
                }
              }
              else
              {
                v17 &= v12;
              }
              if ( v17 != v2 )
                break;
LABEL_24:
              v18 = *((_BYTE *)v14 + 16);
              v19 = (unsigned __int64)v18 >> 1;
              if ( (v18 & 1) != 0 )
                v19 = v14[3];
              if ( v19 == v16 )
              {
                if ( (v18 & 1) != 0 )
                {
                  if ( !v16 )
                    goto LABEL_66;
                  v21 = v12;
                  v22 = v16;
                  v23 = memcmp((const void *)v14[4], v6, v16);
                  v16 = v22;
                  v12 = v21;
                  v10 = v37;
                  v2 = v39;
                  if ( !v23 )
                    goto LABEL_66;
                }
                else
                {
                  if ( !v16 )
                    goto LABEL_66;
                  v20 = 0;
                  while ( *((_BYTE *)v14 + v20 + 17) == *((_BYTE *)v6 + v20) )
                  {
                    if ( (unsigned __int64)*((unsigned __int8 *)v14 + 16) >> 1 == ++v20 )
                      goto LABEL_66;
                  }
                }
              }
              v14 = (__int64 *)*v14;
            }
            while ( v14 );
          }
          v3 = a1;
        }
      }
      v24 = operator new(0x48u);
      sub_8CEF0((__int64)(v24 + 2), (__int64)(v4 + 2));
      v24[1] = v37;
      *v24 = 0;
      v25 = *(_QWORD *)(v3 + 24) + 1LL;
      v26 = 0;
      v26.m128_f32[0] = v25 < 0
                      ? (float)(int)(((unsigned __int64)v25 >> 1) | v25 & 1)
                      + (float)(int)(((unsigned __int64)v25 >> 1) | v25 & 1)
                      : (float)(int)v25;
      if ( (v11 & 0x8000000000000000LL) != 0LL )
        break;
      v27 = (float)(int)v11;
      v28 = *(float *)(v3 + 32);
      if ( v11 )
        goto LABEL_44;
LABEL_45:
      v29 = v11 < 3 || (v11 & (v11 - 1)) != 0;
      v26.m128_f32[0] = v26.m128_f32[0] / v28;
      v30 = _mm_round_ss(v26, v26, 10);
      v31 = (2 * v11) | v29;
      v32 = (unsigned int)(int)v30.m128_f32[0];
      if ( v30.m128_f32[0] >= 9.223372e18 )
        v32 = (unsigned int)(int)(float)(v30.m128_f32[0] - 9.223372e18) ^ 0x8000000000000000LL;
      if ( v31 >= v32 )
        v32 = v31;
      sub_8CA90(v3, v32, v30);
      v11 = *(_QWORD *)(v3 + 8);
      v2 = v37;
      if ( (v11 & (v11 - 1)) != 0 )
      {
        if ( v37 >= v11 )
          v2 = v37 % v11;
      }
      else
      {
        v2 = (v11 - 1) & v37;
      }
LABEL_56:
      v33 = *(_QWORD *)v3;
      v34 = *(_QWORD **)(*(_QWORD *)v3 + 8 * v2);
      if ( v34 )
      {
        *v24 = *v34;
      }
      else
      {
        *v24 = *v38;
        *v38 = v24;
        *(_QWORD *)(v33 + 8 * v2) = v38;
        if ( !*v24 )
          goto LABEL_65;
        v35 = *(_QWORD *)(*v24 + 8LL);
        if ( (v11 & (v11 - 1)) != 0 )
        {
          if ( v35 >= v11 )
            v35 %= v11;
        }
        else
        {
          v35 &= v11 - 1;
        }
        v34 = (_QWORD *)(*(_QWORD *)v3 + 8 * v35);
      }
      *v34 = v24;
LABEL_65:
      ++*(_QWORD *)(v3 + 24);
LABEL_66:
      v4 = (__int64 **)*v4;
      v3 = a1;
      if ( !v4 )
        return __readfsqword(0x28u);
    }
    v27 = (float)(int)((v11 >> 1) | v11 & 1) + (float)(int)((v11 >> 1) | v11 & 1);
    v28 = *(float *)(v3 + 32);
LABEL_44:
    if ( v26.m128_f32[0] <= (float)(v27 * v28) )
      goto LABEL_56;
    goto LABEL_45;
  }
  return __readfsqword(0x28u);
}
// 82E92: conditional instruction was optimized away because r15.8<0
// 82F44: variable 'v2' is possibly undefined
