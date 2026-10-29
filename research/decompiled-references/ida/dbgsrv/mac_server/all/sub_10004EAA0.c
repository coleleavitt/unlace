/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004EAA0
// Address: 0x000000010004EAA0

//----- (000000010004EAA0) ----------------------------------------------------
unsigned __int8 *__fastcall sub_10004EAA0(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 *a4)
{
  unsigned int v6; // edx
  unsigned __int8 *v7; // r15
  _QWORD *v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r14
  __int64 v13; // rdi
  void **v14; // rax
  unsigned __int8 *v15; // r15
  unsigned int v16; // ebx
  size_t v17; // rbx
  unsigned __int64 v18; // rax
  unsigned int v19; // eax
  const void *v20; // rdi
  int v21; // eax
  _QWORD *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  __m128 v25; // xmm0
  __int64 v26; // rdx
  float v27; // xmm2_4
  float v28; // xmm1_4
  _BOOL8 v29; // rax
  unsigned __int64 v30; // rax
  size_t v31; // rdi
  size_t prime; // r12
  unsigned __int64 v33; // r14
  __int64 v34; // rax
  __m128 v35; // xmm0
  __int64 v36; // rax
  size_t v37; // rax
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // rcx
  size_t v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // rax
  unsigned __int64 v43; // rax
  __int64 *v45; // [rsp+0h] [rbp-70h]
  unsigned __int8 *__s2; // [rsp+8h] [rbp-68h]
  __int64 v47; // [rsp+10h] [rbp-60h]
  _QWORD v49[2]; // [rsp+28h] [rbp-48h] BYREF
  char v50; // [rsp+38h] [rbp-38h]

  v6 = *a2;
  v7 = a2 + 1;
  if ( (v6 & 1) != 0 )
  {
    v8 = *((_QWORD **)a2 + 2);
    v9 = *((_QWORD *)a2 + 1);
  }
  else
  {
    v9 = v6 >> 1;
    v8 = a2 + 1;
  }
  v10 = sub_10004D570((__int64)v49, v8, v9);
  v11 = *(_QWORD *)(a1 + 8);
  v45 = a4;
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
      v13 = v10;
      if ( v10 >= v11 )
      {
        if ( (v11 | v10) >> 32 )
          v13 = v10 % v11;
        else
          v13 = (unsigned int)v10 % (unsigned int)v11;
      }
    }
    else
    {
      v13 = v10 & (v11 - 1);
    }
    v14 = *(void ***)(*(_QWORD *)a1 + 8 * v13);
    v47 = v13;
    if ( v14 )
    {
      __s2 = v7;
      v15 = (unsigned __int8 *)*v14;
      if ( *v14 )
      {
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
          v18 = *((_QWORD *)v15 + 1);
          if ( v18 == v10 )
          {
            v19 = v15[16];
            if ( (v19 & 1) != 0 )
            {
              if ( *((_QWORD *)v15 + 3) != v17 )
                goto LABEL_19;
            }
            else if ( v19 >> 1 != v17 )
            {
              goto LABEL_19;
            }
            if ( (v19 & 1) != 0 )
              v20 = *((const void **)v15 + 4);
            else
              v20 = v15 + 17;
            v21 = memcmp(v20, __s2, v17);
            v13 = v47;
            if ( !v21 )
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
LABEL_19:
          v15 = *(unsigned __int8 **)v15;
        }
        while ( v15 );
      }
    }
  }
  v15 = (unsigned __int8 *)operator new(0x48u);
  v22 = (_QWORD *)(a1 + 16);
  v49[0] = v15;
  v49[1] = a1 + 16;
  *(_QWORD *)v15 = 0;
  *((_QWORD *)v15 + 1) = v10;
  v23 = *v45;
  *((_QWORD *)v15 + 4) = *(_QWORD *)(*v45 + 16);
  *((_OWORD *)v15 + 1) = *(_OWORD *)v23;
  *(_OWORD *)v23 = 0;
  *(_QWORD *)(v23 + 16) = 0;
  *(_OWORD *)(v15 + 50) = 0;
  *(_OWORD *)(v15 + 40) = 0;
  v50 = 1;
  v24 = *(_QWORD *)(a1 + 24) + 1LL;
  v25 = 0;
  if ( v24 < 0 )
    v25.f32[0] = (float)(int)(((unsigned __int64)v24 >> 1) | v24 & 1)
               + (float)(int)(((unsigned __int64)v24 >> 1) | v24 & 1);
  else
    v25.f32[0] = (float)(int)v24;
  v26 = v47;
  if ( (v11 & 0x8000000000000000LL) != 0LL )
    v27 = (float)(int)((v11 >> 1) | v11 & 1) + (float)(int)((v11 >> 1) | v11 & 1);
  else
    v27 = (float)(int)v11;
  v28 = *(float *)(a1 + 32);
  if ( ((v25.f32[0] <= (float)(v27 * v28)) & (unsigned __int8)~(v11 == 0)) == 0 )
  {
    v29 = 1;
    if ( v11 >= 3 )
      v29 = ((v11 - 1) & v11) != 0;
    v30 = (2 * v11) | v29;
    v25.f32[0] = v25.f32[0] / v28;
    v31 = (unsigned int)(int)_mm_round_ss(v25, v25, 10).f32[0];
    if ( v30 > v31 )
      v31 = v30;
    prime = 2;
    if ( v31 != 1 )
    {
      if ( ((v31 - 1) & v31) != 0 )
        prime = std::__next_prime(v31);
      else
        prime = v31;
    }
    v33 = *(_QWORD *)(a1 + 8);
    if ( prime > v33 )
      goto LABEL_51;
    if ( prime < v33 )
    {
      v34 = *(_QWORD *)(a1 + 24);
      if ( v34 < 0 )
      {
        v36 = (*(_QWORD *)(a1 + 24) >> 1) | *(_QWORD *)(a1 + 24) & 1LL;
        v35 = 0;
        v35.f32[0] = (float)(int)v36 + (float)(int)v36;
      }
      else
      {
        v35 = 0;
        v35.f32[0] = (float)(int)v34;
      }
      v35.f32[0] = v35.f32[0] / *(float *)(a1 + 32);
      v37 = (unsigned int)(int)_mm_round_ss(v35, v35, 10).f32[0];
      v38 = v37;
      if ( v33 < 3
        || (unsigned int)((0x101010101010101LL
                         * ((((v33 - ((v33 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((v33 - ((v33 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                           + ((((v33 - ((v33 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                             + (((v33 - ((v33 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4))
                          & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 > 1 )
      {
        v40 = std::__next_prime(v37);
      }
      else
      {
        _BitScanReverse64(&v39, v37 - 1);
        v40 = 1LL << -(v39 ^ 0x3F);
        if ( v38 < 2 )
          v40 = v38;
      }
      if ( prime <= v40 )
        prime = v40;
      if ( prime < v33 )
LABEL_51:
        sub_10004E060(a1, prime);
    }
    v11 = *(_QWORD *)(a1 + 8);
    if ( ((v11 - 1) & v11) != 0 )
    {
      v26 = v10;
      if ( v10 >= v11 )
      {
        if ( (v11 | v10) >> 32 )
          v26 = v10 % v11;
        else
          v26 = (unsigned int)v10 % (unsigned int)v11;
      }
    }
    else
    {
      v26 = (v11 - 1) & v10;
    }
  }
  v41 = *(_QWORD *)a1;
  v42 = *(_QWORD **)(*(_QWORD *)a1 + 8 * v26);
  if ( v42 )
  {
    *(_QWORD *)v15 = *v42;
LABEL_81:
    *v42 = v15;
    goto LABEL_82;
  }
  *(_QWORD *)v15 = *v22;
  *v22 = v15;
  *(_QWORD *)(v41 + 8 * v26) = v22;
  if ( *(_QWORD *)v15 )
  {
    v43 = *(_QWORD *)(*(_QWORD *)v15 + 8LL);
    if ( ((v11 - 1) & v11) != 0 )
    {
      if ( v43 >= v11 )
      {
        if ( (v11 | v43) >> 32 )
          v43 %= v11;
        else
          v43 = (unsigned int)v43 % (unsigned int)v11;
      }
    }
    else
    {
      v43 &= v11 - 1;
    }
    v42 = (_QWORD *)(*(_QWORD *)a1 + 8 * v43);
    goto LABEL_81;
  }
LABEL_82:
  ++*(_QWORD *)(a1 + 24);
  return v15;
}
// 10004ED31: variable 'v47' is possibly undefined
