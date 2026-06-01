void __fastcall sub_838D50(unsigned __int8 **a1, _BYTE *a2, size_t a3)
{
  unsigned __int8 *v5; // rbp
  size_t v6; // rax
  double *v7; // rdx
  unsigned __int8 *v8; // rdx
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // rax
  size_t v12; // rsi
  unsigned __int8 *v13; // rbx
  double *v14; // rdi
  __m128 v15; // xmm0
  __int64 v16; // rax
  double v17; // rcx
  double *v18; // rdi
  unsigned __int8 *v19; // rdx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // r13
  __int64 v24; // r12
  void *v25; // rdi
  void *v26; // [rsp+10h] [rbp-58h] BYREF
  size_t n; // [rsp+18h] [rbp-50h]
  double src[9]; // [rsp+20h] [rbp-48h] BYREF

  v5 = *a1;
  if ( !*a1 )
  {
    v19 = a1[1];
    v20 = *((_DWORD *)v19 + 3744);
    if ( v20 )
    {
      v21 = (unsigned int)(v20 - 1);
      *((_DWORD *)v19 + 3744) = v21;
      v5 = *(unsigned __int8 **)&v19[8 * v21 + 14848];
      v22 = *((unsigned int *)v5 + 134);
      *v5 = 0;
      v23 = *((_QWORD *)v5 + 66);
      *((_DWORD *)v5 + 106) = 0;
      v24 = v23 + (v22 << 6);
      while ( v23 != v24 )
      {
        while ( 1 )
        {
          v24 -= 64;
          v25 = *(void **)(v24 + 24);
          if ( v25 == (void *)(v24 + 40) )
            break;
          operator delete(v25, *(_QWORD *)(v24 + 40) + 1LL);
          if ( v23 == v24 )
            goto LABEL_33;
        }
      }
LABEL_33:
      *((_DWORD *)v5 + 134) = 0;
    }
    else
    {
      v5 = (unsigned __int8 *)operator new(0x3A0u);
      *v5 = 0;
      *((_QWORD *)v5 + 12) = v5 + 112;
      *((_QWORD *)v5 + 16) = v5 + 144;
      *((_QWORD *)v5 + 20) = v5 + 176;
      *((_QWORD *)v5 + 24) = v5 + 208;
      *((_QWORD *)v5 + 28) = v5 + 240;
      *((_QWORD *)v5 + 32) = v5 + 272;
      *((_QWORD *)v5 + 36) = v5 + 304;
      *((_QWORD *)v5 + 40) = v5 + 336;
      *((_QWORD *)v5 + 44) = v5 + 368;
      *((_QWORD *)v5 + 48) = v5 + 400;
      *((_QWORD *)v5 + 13) = 0;
      v5[112] = 0;
      *((_QWORD *)v5 + 17) = 0;
      v5[144] = 0;
      *((_QWORD *)v5 + 21) = 0;
      v5[176] = 0;
      *((_QWORD *)v5 + 25) = 0;
      v5[208] = 0;
      *((_QWORD *)v5 + 29) = 0;
      v5[240] = 0;
      *((_QWORD *)v5 + 33) = 0;
      v5[272] = 0;
      *((_QWORD *)v5 + 37) = 0;
      v5[304] = 0;
      *((_QWORD *)v5 + 41) = 0;
      v5[336] = 0;
      *((_QWORD *)v5 + 45) = 0;
      v5[368] = 0;
      *((_QWORD *)v5 + 49) = 0;
      v5[400] = 0;
      *((_QWORD *)v5 + 52) = v5 + 432;
      *((_QWORD *)v5 + 53) = 0x800000000LL;
      *((_QWORD *)v5 + 66) = v5 + 544;
      *((_QWORD *)v5 + 67) = 0x600000000LL;
    }
    *a1 = v5;
  }
  v5[*v5 + 1] = 0;
  v6 = a3;
  v26 = src;
  if ( !a2 && a3 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  if ( a3 > 0xF )
  {
    v26 = (void *)std::string::_M_create();
    v18 = (double *)v26;
    *(_QWORD *)&src[0] = a3;
  }
  else
  {
    if ( a3 == 1 )
    {
      LOBYTE(src[0]) = *a2;
LABEL_7:
      v7 = src;
      goto LABEL_8;
    }
    if ( !a3 )
      goto LABEL_7;
    v18 = src;
  }
  memcpy(v18, a2, a3);
  v6 = a3;
  v7 = (double *)v26;
LABEL_8:
  n = v6;
  *((_BYTE *)v7 + v6) = 0;
  v8 = *a1;
  v9 = **a1;
  *v8 = v9 + 1;
  v10 = (unsigned __int8)v9;
  v11 = 32 * v9;
  v12 = n;
  v13 = &v8[v11];
  v14 = *(double **)&v8[v11 + 96];
  if ( v14 == (double *)&v8[v11 + 112] )
  {
    if ( v26 != src )
    {
      *((_QWORD *)v13 + 12) = v26;
      *(__m128 *)&v8[32 * v10 + 104] = _mm_loadh_ps(src);
LABEL_21:
      v26 = src;
      v14 = src;
      goto LABEL_12;
    }
  }
  else if ( v26 != src )
  {
    v15 = _mm_loadh_ps(src);
    v16 = 32LL * v10;
    v17 = *(double *)&v8[v16 + 112];
    *((_QWORD *)v13 + 12) = v26;
    *(__m128 *)&v8[v16 + 104] = v15;
    if ( v14 )
    {
      v26 = v14;
      src[0] = v17;
      goto LABEL_12;
    }
    goto LABEL_21;
  }
  if ( &v26 == (void **)&v8[v11 + 96] )
  {
    v14 = (double *)v26;
  }
  else
  {
    if ( n )
    {
      if ( n == 1 )
        *(_BYTE *)v14 = LOBYTE(src[0]);
      else
        memcpy(v14, src, n);
      v12 = n;
      v14 = *((double **)v13 + 12);
    }
    *((_QWORD *)v13 + 13) = v12;
    *((_BYTE *)v14 + v12) = 0;
    v14 = (double *)v26;
  }
LABEL_12:
  n = 0;
  *(_BYTE *)v14 = 0;
  if ( v26 != src )
    operator delete(v26, *(_QWORD *)&src[0] + 1LL);
}

