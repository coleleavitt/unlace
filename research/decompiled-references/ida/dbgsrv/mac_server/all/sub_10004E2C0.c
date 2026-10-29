/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004E2C0
// Address: 0x000000010004E2C0

//----- (000000010004E2C0) ----------------------------------------------------
__int64 **__fastcall sub_10004E2C0(_QWORD *a1, unsigned __int8 *a2, __int64 a3, __m128 a4)
{
  __int64 v6; // r13
  unsigned int v7; // edx
  unsigned __int8 *v8; // rbx
  _QWORD *v9; // rsi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r13
  __int64 v13; // rsi
  __int64 ***v14; // rax
  __int64 **v15; // r15
  unsigned int v16; // ebx
  size_t v17; // rbx
  unsigned __int64 v18; // rax
  unsigned int v19; // eax
  __int64 *v20; // rdi
  __int64 v21; // r12
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  float v24; // xmm2_4
  float v25; // xmm1_4
  _BOOL8 v26; // rax
  unsigned __int64 v27; // rax
  size_t v28; // rdi
  size_t prime; // r15
  unsigned __int64 v30; // rbx
  __int64 v31; // rax
  __m128 v32; // xmm0
  __int64 v33; // rax
  size_t v34; // rax
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rcx
  size_t v37; // rax
  _QWORD *v38; // rax
  unsigned __int64 v39; // rax
  unsigned __int8 *__s2; // [rsp+0h] [rbp-70h]
  __int64 v42; // [rsp+8h] [rbp-68h]
  __int64 v43; // [rsp+10h] [rbp-60h]
  unsigned __int64 v44; // [rsp+18h] [rbp-58h]
  _QWORD v46[3]; // [rsp+28h] [rbp-48h] BYREF

  v6 = (__int64)a1;
  v7 = *a2;
  v8 = a2 + 1;
  if ( (v7 & 1) != 0 )
  {
    v9 = *((_QWORD **)a2 + 2);
    v10 = *((_QWORD *)a2 + 1);
  }
  else
  {
    v10 = v7 >> 1;
    v9 = a2 + 1;
  }
  v44 = sub_10004D570((__int64)v46, v9, v10);
  v11 = a1[1];
  if ( v11 )
  {
    v12 = (0x101010101010101LL
         * ((((v11 - ((v11 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
           + (((v11 - ((v11 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
           + ((((v11 - ((v11 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v11 - ((v11 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4))
          & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    if ( v12 > 1 )
    {
      v13 = v44;
      if ( v44 >= v11 )
      {
        if ( (v11 | v44) >> 32 )
          v13 = v44 % v11;
        else
          v13 = (unsigned int)v44 % (unsigned int)v11;
      }
    }
    else
    {
      v13 = v44 & (v11 - 1);
    }
    v14 = *(__int64 ****)(*a1 + 8 * v13);
    v42 = v13;
    if ( v14 )
    {
      v43 = a3;
      v15 = *v14;
      if ( *v14 )
      {
        __s2 = v8;
        v16 = *a2;
        if ( (v16 & 1) != 0 )
        {
          v17 = *((_QWORD *)a2 + 1);
          __s2 = *((unsigned __int8 **)a2 + 2);
        }
        else
        {
          v17 = v16 >> 1;
        }
        do
        {
          v18 = (unsigned __int64)v15[1];
          if ( v18 == v44 )
          {
            v19 = *((unsigned __int8 *)v15 + 16);
            if ( (v19 & 1) != 0 )
            {
              if ( v15[3] != (__int64 *)v17 )
                goto LABEL_20;
            }
            else if ( v19 >> 1 != v17 )
            {
              goto LABEL_20;
            }
            if ( (v19 & 1) != 0 )
              v20 = v15[4];
            else
              v20 = (__int64 *)((char *)v15 + 17);
            v13 = v42;
            if ( !memcmp(v20, __s2, v17) )
              return v15;
          }
          else
          {
            if ( (unsigned int)v12 <= 1 )
            {
              v18 &= v11 - 1;
            }
            else if ( v18 >= v11 )
            {
              if ( (v11 | v18) >> 32 )
                v18 %= v11;
              else
                v18 = (unsigned int)v18 % (unsigned int)v11;
            }
            if ( v18 != v13 )
              break;
          }
LABEL_20:
          v15 = (__int64 **)*v15;
        }
        while ( v15 );
      }
      v6 = (__int64)a1;
      a3 = v43;
    }
    else
    {
      v6 = (__int64)a1;
    }
  }
  v21 = v44;
  sub_10004E810((__int64)v46, v6, v44, a3);
  v22 = *(_QWORD *)(v6 + 24) + 1LL;
  if ( v22 < 0 )
    a4.f32[0] = (float)(int)(((unsigned __int64)v22 >> 1) | v22 & 1)
              + (float)(int)(((unsigned __int64)v22 >> 1) | v22 & 1);
  else
    a4.f32[0] = (float)(int)v22;
  v23 = v42;
  if ( (v11 & 0x8000000000000000LL) != 0LL )
    v24 = (float)(int)((v11 >> 1) | v11 & 1) + (float)(int)((v11 >> 1) | v11 & 1);
  else
    v24 = (float)(int)v11;
  v25 = *(float *)(v6 + 32);
  if ( ((a4.f32[0] <= (float)(v24 * v25)) & (unsigned __int8)~(v11 == 0)) != 0 )
    goto LABEL_72;
  v26 = 1;
  if ( v11 >= 3 )
    v26 = ((v11 - 1) & v11) != 0;
  v27 = (2 * v11) | v26;
  a4.f32[0] = a4.f32[0] / v25;
  v28 = (unsigned int)(int)_mm_round_ss(a4, a4, 10).f32[0];
  if ( v27 > v28 )
    v28 = v27;
  prime = 2;
  if ( v28 != 1 )
  {
    if ( ((v28 - 1) & v28) != 0 )
      prime = std::__next_prime(v28);
    else
      prime = v28;
  }
  v30 = *(_QWORD *)(v6 + 8);
  if ( prime > v30 )
    goto LABEL_53;
  if ( prime < v30 )
  {
    v31 = *(_QWORD *)(v6 + 24);
    if ( v31 < 0 )
    {
      v33 = (*(_QWORD *)(v6 + 24) >> 1) | *(_QWORD *)(v6 + 24) & 1LL;
      v32 = 0;
      v32.f32[0] = (float)(int)v33 + (float)(int)v33;
    }
    else
    {
      v32 = 0;
      v32.f32[0] = (float)(int)v31;
    }
    v32.f32[0] = v32.f32[0] / *(float *)(v6 + 32);
    v34 = (unsigned int)(int)_mm_round_ss(v32, v32, 10).f32[0];
    v35 = v34;
    if ( v30 < 3
      || (unsigned int)((0x101010101010101LL
                       * ((((v30 - ((v30 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                         + (((v30 - ((v30 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                         + ((((v30 - ((v30 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((v30 - ((v30 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4))
                        & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 > 1 )
    {
      v37 = std::__next_prime(v34);
    }
    else
    {
      _BitScanReverse64(&v36, v34 - 1);
      v37 = 1LL << -(v36 ^ 0x3F);
      if ( v35 < 2 )
        v37 = v35;
    }
    if ( prime <= v37 )
      prime = v37;
    if ( prime < v30 )
LABEL_53:
      sub_10004E060(v6, prime);
  }
  v11 = *(_QWORD *)(v6 + 8);
  if ( ((v11 - 1) & v11) != 0 )
  {
    if ( v44 < v11 )
      goto LABEL_73;
    if ( !((v11 | v44) >> 32) )
    {
      v21 = (unsigned int)v44 % (unsigned int)v11;
      goto LABEL_73;
    }
    v23 = v44 % v11;
LABEL_72:
    v21 = v23;
    goto LABEL_73;
  }
  v21 = (v11 - 1) & v44;
LABEL_73:
  v38 = *(_QWORD **)(*(_QWORD *)v6 + 8 * v21);
  if ( v38 )
  {
    *(_QWORD *)v46[0] = *v38;
    v15 = (__int64 **)v46[0];
    *v38 = v46[0];
  }
  else
  {
    *(_QWORD *)v46[0] = *(_QWORD *)(v6 + 16);
    *(_QWORD *)(v6 + 16) = v46[0];
    *(_QWORD *)(*(_QWORD *)v6 + 8 * v21) = v6 + 16;
    v15 = (__int64 **)v46[0];
    if ( *(_QWORD *)v46[0] )
    {
      v39 = *(_QWORD *)(*(_QWORD *)v46[0] + 8LL);
      if ( ((v11 - 1) & v11) != 0 )
      {
        if ( v39 >= v11 )
        {
          if ( (v11 | v39) >> 32 )
            v39 %= v11;
          else
            v39 = (unsigned int)v39 % (unsigned int)v11;
        }
      }
      else
      {
        v39 &= v11 - 1;
      }
      *(_QWORD *)(*(_QWORD *)v6 + 8 * v39) = v46[0];
      v15 = (__int64 **)v46[0];
    }
  }
  ++*(_QWORD *)(v6 + 24);
  return v15;
}
// 10004E509: variable 'v42' is possibly undefined
