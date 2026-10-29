__int64 __fastcall ClpSimplexOther::guess(CoinMessageHandler **this, double a2)
{
  __int64 v3; // rax
  __int64 (__fastcall ***v4)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64); // rdi
  __int64 v5; // r12
  unsigned __int64 v6; // r14
  const void *v7; // rbx
  double *v8; // r13
  __int64 v9; // rax
  double *v10; // r15
  double *v11; // r14
  unsigned __int64 v12; // rdx
  double *v13; // r8
  double *v14; // rbx
  double v15; // xmm1_8
  double v16; // xmm0_8
  double *v17; // rax
  __int64 v18; // rbx
  char v19; // r14
  double v20; // xmm2_8
  int v21; // eax
  __m128i v22; // xmm0
  __m128i si128; // xmm0
  CoinMessageHandler *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  double v31; // xmm1_8
  double v32; // xmm0_8
  __m128i v33; // xmm0
  double v34; // xmm0_8
  double *v35; // rax
  double v36; // xmm1_8
  double *v37; // rax
  double v38; // xmm0_8
  double *v39; // rax
  CoinMessageHandler *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // [rsp+0h] [rbp-E8h]
  __int64 v47; // [rsp+8h] [rbp-E0h]
  double *v48; // [rsp+8h] [rbp-E0h]
  double v49; // [rsp+8h] [rbp-E0h]
  double *v50; // [rsp+8h] [rbp-E0h]
  double v51; // [rsp+18h] [rbp-D0h]
  double v52; // [rsp+18h] [rbp-D0h]
  double v53; // [rsp+18h] [rbp-D0h]
  char v54[200]; // [rsp+20h] [rbp-C8h] BYREF

  if ( !*((_DWORD *)this + 27) )
  {
    v5 = 0;
    v40 = (CoinMessageHandler *)CoinMessageHandler::message(*(this + 43), 92, (const CoinMessages *)(this + 52));
    v45 = CoinMessageHandler::operator<<(v40, (__int64)"Null model", v41, v42, v43, v44, v46);
    CoinMessageHandler::operator<<(v45, 0, a2);
    return v5;
  }
  v3 = operator new[](0x100u);
  v4 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64))*(this + 20);
  v5 = v3;
  v6 = *((int *)this + 27);
  if ( v4 )
  {
    v7 = (const void *)(**v4)(v4, 0, 0, v54, 0, 2);
    if ( v7 )
    {
      if ( v6 > 0xFFFFFFFFFFFFFFFLL )
        __cxa_throw_bad_array_new_length();
      v6 *= 8LL;
      v8 = (double *)operator new[](v6);
      memcpy(v8, v7, v6);
      LODWORD(v6) = *((_DWORD *)this + 27);
    }
    else
    {
      LODWORD(v6) = *((_DWORD *)this + 27);
      v8 = nullptr;
    }
  }
  else
  {
    v8 = nullptr;
  }
  v9 = (int)v6;
  v10 = &v8[v9];
  if ( &v8[v9] != v8 )
  {
    v47 = 8LL * (int)v6;
    v11 = v8 + 16;
    _BitScanReverse64(&v12, (v9 * 8) >> 3);
    sub_15C8A0(v8, (char *)&v8[v9], 2 * (63LL - (int)(v12 ^ 0x3F)));
    v13 = v8 + 1;
    v14 = v8 + 1;
    if ( (v47 - 128 < 0) ^ __OFADD__(-128, v47) | (v47 == 128) )
    {
      LODWORD(v6) = *((_DWORD *)this + 27);
      if ( v10 != v13 )
      {
        do
        {
          while ( 1 )
          {
            v15 = *v14;
            if ( *v8 > *v14 )
              break;
            v16 = *(v14 - 1);
            v17 = v14 - 1;
            if ( v16 > v15 )
            {
              while ( 1 )
              {
                v17[1] = v16;
                v16 = *(v17 - 1);
                if ( v16 <= v15 )
                  break;
                --v17;
              }
            }
            else
            {
              v17 = v14;
            }
            ++v14;
            *v17 = v15;
            if ( v10 == v14 )
              goto LABEL_19;
          }
          if ( v14 != v8 )
          {
            v51 = *v14;
            v48 = v13;
            memmove(v13, v8, (char *)v14 - (char *)v8);
            v13 = v48;
            v15 = v51;
          }
          ++v14;
          *v8 = v15;
        }
        while ( v10 != v14 );
      }
    }
    else
    {
      do
      {
        while ( 1 )
        {
          v31 = *v14;
          if ( *v8 > *v14 )
            break;
          v34 = *(v14 - 1);
          v35 = v14 - 1;
          if ( v34 > v31 )
          {
            while ( 1 )
            {
              v35[1] = v34;
              v34 = *(v35 - 1);
              if ( v34 <= v31 )
                break;
              --v35;
            }
          }
          else
          {
            v35 = v14;
          }
          ++v14;
          *v35 = v31;
          if ( v11 == v14 )
            goto LABEL_44;
        }
        if ( v14 != v8 )
        {
          v53 = *v14;
          v50 = v13;
          memmove(v13, v8, (char *)v14 - (char *)v8);
          v13 = v50;
          v31 = v53;
        }
        ++v14;
        *v8 = v31;
      }
      while ( v11 != v14 );
LABEL_44:
      for ( LODWORD(v6) = *((_DWORD *)this + 27); v10 != v14; *v37 = v36 )
      {
        while ( 1 )
        {
          v36 = *v14;
          v37 = v14 - 1;
          v38 = *(v14 - 1);
          if ( v38 > *v14 )
            break;
          v39 = v14++;
          *v39 = v36;
          if ( v10 == v14 )
            goto LABEL_19;
        }
        while ( 1 )
        {
          v37[1] = v38;
          v38 = *(v37 - 1);
          if ( v38 <= v36 )
            break;
          --v37;
        }
        ++v14;
      }
    }
  }
LABEL_19:
  v52 = v8[(int)v6 / 2];
  if ( (int)v6 <= 0 )
  {
    if ( !v8 )
    {
      v32 = 0.0 / (double)(int)v6;
LABEL_37:
      if ( v32 > 0.0086207 )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_2924A0);
        strcpy((char *)(v5 + 16), "ls");
        *(__m128i *)v5 = si128;
      }
      else
      {
        v33 = _mm_load_si128((const __m128i *)&xmmword_292480);
        *(_DWORD *)(v5 + 32) = 7564385;
        *(__m128i *)v5 = v33;
        si128 = _mm_load_si128((const __m128i *)&xmmword_292490);
        *(__m128i *)(v5 + 16) = si128;
      }
      goto LABEL_28;
    }
    operator delete[](v8);
    v21 = *((_DWORD *)this + 27);
    v49 = 0.0;
LABEL_36:
    v32 = v49 / (double)v21;
    goto LABEL_37;
  }
  v18 = 0;
  v19 = 1;
  v49 = 0.0;
  do
  {
    if ( !(unsigned __int8)ClpModel::isInteger((ClpModel *)this, v18)
      && *((double *)*(this + 23) + v18) > *((double *)*(this + 22) + v18) )
    {
      v19 = 0;
    }
    v20 = v49 + v8[v18++];
    v49 = v20;
  }
  while ( *((_DWORD *)this + 27) > (int)v18 );
  operator delete[](v8);
  v21 = *((_DWORD *)this + 27);
  if ( v19 )
    goto LABEL_36;
  if ( v52 > 0.75 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_2924D0);
    strcpy((char *)(v5 + 16), "ls");
    *(__m128i *)v5 = si128;
  }
  else
  {
    v22 = _mm_load_si128((const __m128i *)&xmmword_2924B0);
    strcpy((char *)(v5 + 32), "tv 52 -duals");
    *(__m128i *)v5 = v22;
    si128 = _mm_load_si128((const __m128i *)&xmmword_2924C0);
    *(__m128i *)(v5 + 16) = si128;
  }
LABEL_28:
  sprintf(v54, "%s %s", "Commands generated by guess -", (const char *)v5);
  v24 = (CoinMessageHandler *)CoinMessageHandler::message(*(this + 43), 92, (const CoinMessages *)(this + 52));
  v29 = CoinMessageHandler::operator<<(v24, (__int64)v54, v25, v26, v27, v28, v46);
  CoinMessageHandler::operator<<(v29, 0, *(double *)si128.m128i_i64);
  return v5;
}

