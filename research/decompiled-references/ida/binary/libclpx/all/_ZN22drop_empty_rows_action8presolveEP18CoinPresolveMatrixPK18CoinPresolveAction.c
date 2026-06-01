CoinPresolveMatrix *__fastcall drop_empty_rows_action::presolve(
        drop_empty_rows_action *this,
        CoinPresolveMatrix *a2,
        const CoinPresolveAction *a3)
{
  int v3; // ebp
  unsigned __int64 v4; // rcx
  unsigned int v5; // r12d
  __int64 v6; // rdx
  unsigned int v7; // eax
  int v8; // r9d
  int v9; // ebx
  __m128i v10; // xmm1
  const __m128i *v11; // r8
  unsigned int v12; // r10d
  unsigned int v13; // edx
  __m128i si128; // xmm0
  __m128i v15; // xmm1
  unsigned int v16; // edx
  int v17; // r11d
  int v18; // edx
  __int64 v20; // r13
  int v21; // ebx
  double v22; // xmm1_8
  _DWORD *v23; // rbp
  __int64 v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // rax
  int v27; // r12d
  int v28; // r10d
  __int64 v29; // rsi
  __int64 v30; // rsi
  __int64 *v31; // r11
  double v32; // xmm0_8
  __int64 v33; // xmm0_8
  int *v34; // rsi
  _DWORD *v35; // rdi
  int v36; // ecx
  int *v37; // rax
  __int64 v38; // rdx
  CoinPresolveMatrix *result; // rax
  CoinMessageHandler *v40; // rax
  CoinMessageHandler *v41; // rax
  CoinMessageHandler *v42; // rax
  CoinMessageHandler *v43; // rax
  double v44; // xmm0_8
  __int64 v45; // rax
  __int64 v46; // [rsp+8h] [rbp-C0h]
  __int64 v47; // [rsp+10h] [rbp-B8h]
  int v48; // [rsp+10h] [rbp-B8h]
  double v49; // [rsp+18h] [rbp-B0h]
  int v50; // [rsp+18h] [rbp-B0h]
  int v51; // [rsp+24h] [rbp-A4h]
  CoinMessageHandler *v53; // [rsp+30h] [rbp-98h]
  __int64 v54; // [rsp+38h] [rbp-90h]
  __int64 v55; // [rsp+40h] [rbp-88h]
  __int64 v56; // [rsp+48h] [rbp-80h]
  __int64 v57; // [rsp+50h] [rbp-78h]
  int *v58; // [rsp+58h] [rbp-70h]
  _DWORD *v59; // [rsp+60h] [rbp-68h]
  __int64 v60; // [rsp+68h] [rbp-60h]
  _BYTE v61[88]; // [rsp+70h] [rbp-58h] BYREF

  v3 = *((_DWORD *)this + 1);
  v4 = *((_QWORD *)this + 36);
  if ( v3 <= 0 )
    return a2;
  v5 = v3 - 1;
  v6 = -(int)(v4 >> 2) & 3;
  v7 = v6 + 3;
  if ( (unsigned int)(v6 + 3) < 5 )
    v7 = 5;
  if ( v7 > v5 )
  {
    v17 = 0;
    v16 = 0;
LABEL_12:
    v17 += *(_DWORD *)(v4 + 4LL * (int)v16) == 0;
    if ( v3 > (int)(v16 + 1) )
    {
      v17 += *(_DWORD *)(v4 + 4LL * (int)(v16 + 1)) == 0;
      if ( v3 > (int)(v16 + 2) )
      {
        v17 += *(_DWORD *)(v4 + 4LL * (int)(v16 + 2)) == 0;
        if ( v3 > (int)(v16 + 3) )
        {
          v17 += *(_DWORD *)(v4 + 4LL * (int)(v16 + 3)) == 0;
          if ( v3 > (int)(v16 + 4) )
          {
            v17 += *(_DWORD *)(v4 + 4LL * (int)(v16 + 4)) == 0;
            v18 = v16 + 5;
            if ( v3 > v18 )
              v17 += *(_DWORD *)(v4 + 4LL * v18) == 0;
          }
        }
      }
    }
    goto LABEL_18;
  }
  if ( (_DWORD)v6 )
  {
    v8 = 1;
    v9 = *(_DWORD *)v4 == 0;
    if ( (_DWORD)v6 != 1 )
    {
      v8 = 2;
      v9 += *(_DWORD *)(v4 + 4) == 0;
      if ( (_DWORD)v6 != 2 )
      {
        v8 = 3;
        v9 += *(_DWORD *)(v4 + 8) == 0;
      }
    }
  }
  else
  {
    v9 = 0;
    v8 = 0;
  }
  v10 = 0;
  v11 = (const __m128i *)(v4 + 4 * v6);
  v12 = v3 - v6;
  v13 = 0;
  do
  {
    si128 = _mm_load_si128(v11);
    ++v13;
    ++v11;
    v10 = _mm_sub_epi32(v10, _mm_cmpeq_epi32(si128, (__m128i)0LL));
  }
  while ( v12 >> 2 > v13 );
  v15 = _mm_add_epi32(v10, _mm_srli_si128(v10, 8));
  v16 = (v12 & 0xFFFFFFFC) + v8;
  v17 = v9 + _mm_cvtsi128_si32(_mm_add_epi32(v15, _mm_srli_si128(v15, 4)));
  if ( v12 != (v12 & 0xFFFFFFFC) )
    goto LABEL_12;
LABEL_18:
  v47 = *((_QWORD *)this + 36);
  if ( !v17 )
    return a2;
  v51 = *(_DWORD *)this;
  v20 = *((_QWORD *)this + 14);
  v49 = *((double *)this + 42);
  v57 = *((_QWORD *)this + 13);
  v58 = *((int **)this + 5);
  v56 = *((_QWORD *)this + 25);
  v21 = *((_DWORD *)this + 109) & 0x4000;
  v55 = *((_QWORD *)this + 22);
  v54 = *((_QWORD *)this + 16);
  v59 = *((_DWORD **)this + 6);
  v60 = *((_QWORD *)this + 7);
  v46 = operator new[](24LL * v17);
  v22 = v49 * 10.0;
  v23 = (_DWORD *)operator new[](4LL * v3);
  v50 = v21;
  v24 = v5 + 1LL;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v32 = *(double *)(v57 + v25);
      if ( !*(_DWORD *)(v47 + 4 * v26) )
        break;
      *(double *)(v57 + 8LL * v27) = v32;
      *(_QWORD *)(v20 + 8LL * v27) = *(_QWORD *)(v20 + v25);
      *(_DWORD *)(v54 + 4LL * v27) = v26;
      if ( v55 )
      {
        *(_QWORD *)(v55 + 8LL * v27) = *(_QWORD *)(v55 + v25);
        *(_BYTE *)(v56 + v27) = *(_BYTE *)(v56 + v26);
      }
      v23[v26++] = v27++;
      v25 += 8;
      if ( v26 == v24 )
      {
LABEL_31:
        v48 = v28;
        goto LABEL_32;
      }
    }
    v29 = v28++;
    v30 = v46 + 24 * v29;
    if ( v32 > 0.0 )
      break;
    v31 = (__int64 *)(v20 + v25);
    if ( *(double *)(v20 + v25) < 0.0 )
      break;
LABEL_26:
    *(double *)v30 = v32;
    v25 += 8;
    *(_DWORD *)(v30 + 16) = v26;
    v33 = *v31;
    v23[v26++] = -1;
    *(_QWORD *)(v30 + 8) = v33;
    if ( v26 == v24 )
      goto LABEL_31;
  }
  if ( v22 >= v32 )
  {
    v31 = (__int64 *)(v20 + v25);
    if ( *(double *)(v20 + v25) >= -v22 )
    {
LABEL_25:
      *(_QWORD *)(v57 + v25) = 0;
      *v31 = 0;
      v32 = *(double *)(v57 + v25);
      goto LABEL_26;
    }
  }
  if ( v50 )
  {
    v31 = (__int64 *)(v20 + v25);
    goto LABEL_25;
  }
  v48 = v28;
  v40 = *((CoinMessageHandler **)this + 26);
  *((_DWORD *)this + 86) |= 1u;
  v53 = v40;
  CoinMessages::CoinMessages((CoinMessages *)v61, (drop_empty_rows_action *)((char *)this + 224));
  v41 = (CoinMessageHandler *)CoinMessageHandler::message(v53, 16, (const CoinMessages *)v61);
  v42 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v41);
  v43 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v42);
  v44 = *(double *)(v20 + v25);
  v45 = CoinMessageHandler::operator<<(v43);
  CoinMessageHandler::operator<<(v45, 0, v44);
  CoinMessages::~CoinMessages((CoinMessages *)v61);
LABEL_32:
  if ( v51 > 0 )
  {
    v34 = v58;
    v35 = v59;
    do
    {
      v36 = *v34;
      if ( *v34 < *v34 + *v35 )
      {
        v37 = (int *)(v60 + 4LL * v36);
        do
        {
          v38 = *v37;
          ++v36;
          *v37++ = v23[v38];
        }
        while ( *v34 + *v35 > v36 );
      }
      ++v34;
      ++v35;
    }
    while ( v34 != &v58[v51 - 1 + 1] );
  }
  operator delete[](v23);
  *((_DWORD *)this + 1) = v27;
  result = (CoinPresolveMatrix *)operator new(0x20u);
  *((_QWORD *)result + 1) = a2;
  *(_QWORD *)result = &off_4D1DB8;
  *((_DWORD *)result + 4) = v48;
  *((_QWORD *)result + 3) = v46;
  return result;
}

