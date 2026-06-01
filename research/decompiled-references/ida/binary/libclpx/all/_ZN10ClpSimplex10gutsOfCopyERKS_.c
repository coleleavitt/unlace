__int64 __fastcall ClpSimplex::gutsOfCopy(ClpSimplex *this, const ClpSimplex *a2)
{
  int v4; // r12d
  bool v5; // zf
  int v6; // edx
  int v7; // r12d
  __int64 v8; // rax
  int v9; // r14d
  __int64 v10; // r15
  unsigned __int64 v11; // r13
  void *v12; // rax
  char *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  const void *v16; // rsi
  void *v17; // rax
  char *v18; // rcx
  __int64 v19; // rax
  const void *v20; // rsi
  void *v21; // rax
  char *v22; // rax
  const void *v23; // r15
  void *v24; // rax
  char *v25; // rax
  const void *v26; // r15
  void *v27; // rax
  char *v28; // rax
  __m128i *v29; // rax
  __m128i *v30; // rsi
  unsigned int v31; // r8d
  const __m128i *v32; // rdx
  __m128i *v33; // rcx
  __int64 v34; // r8
  __m128i v35; // xmm1
  __m128i v36; // xmm0
  __int64 v37; // rdx
  ClpFactorization *v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  ClpSimplex *v42; // r12
  ClpNonLinearCost *v43; // r12
  ClpEventHandler *v44; // rdi
  const void *v46; // r13
  size_t v47; // r12
  void *v48; // rax
  void *v49; // rcx
  const void *v50; // r13
  void *v51; // rax
  void *v52; // rcx
  __int64 i; // r12
  CoinIndexedVector *v54; // r13
  CoinIndexedVector *v55; // r13
  const void *v56; // r12
  void *v57; // rax
  void *v58; // r12
  __m128i *v59; // rcx
  int *v60; // rdx
  int v61; // r9d
  void *src; // [rsp+8h] [rbp-40h]

  v4 = *((_DWORD *)a2 + 338);
  v5 = (*((_BYTE *)this + 316) & 1) == 0;
  v6 = *((_DWORD *)this + 26);
  *((_DWORD *)this + 338) = v4;
  *((_DWORD *)this + 339) = *((_DWORD *)a2 + 339);
  *((_DWORD *)this + 340) = *((_DWORD *)a2 + 340);
  *((_DWORD *)this + 182) = *((_DWORD *)a2 + 182);
  if ( v5 )
  {
    *((_QWORD *)this + 123) = 0;
    *((_QWORD *)this + 124) = 0;
    *((_QWORD *)this + 125) = 0;
    *((_QWORD *)this + 126) = 0;
    *((_QWORD *)this + 127) = 0;
    *((_OWORD *)this + 66) = 0;
    *((_QWORD *)this + 128) = 0;
    *((_QWORD *)this + 129) = 0;
    *((_OWORD *)this + 67) = 0;
    *((_OWORD *)this + 68) = 0;
    *((_OWORD *)this + 69) = 0;
    *((_OWORD *)this + 70) = 0;
    *((_OWORD *)this + 71) = 0;
    *((_QWORD *)this + 131) = 0;
    *((_QWORD *)this + 130) = 0;
    *((_QWORD *)this + 147) = 0;
    *((_QWORD *)this + 149) = 0;
    *((_QWORD *)this + 148) = 0;
    *((_QWORD *)this + 150) = 0;
    *((_QWORD *)this + 152) = 0;
    *((_QWORD *)this + 151) = 0;
    *((_QWORD *)this + 157) = 0;
    *((_QWORD *)this + 159) = 0;
    *((_QWORD *)this + 164) = 0;
    goto LABEL_24;
  }
  v7 = v6 + v4;
  v8 = *((int *)this + 27);
  v9 = v8 + v7;
  if ( (*((_BYTE *)this + 338) & 1) != 0 && *((int *)this + 121) >= 0 )
    v9 = 2 * (*((_DWORD *)this + 122) + *((_DWORD *)this + 123));
  src = *((void **)a2 + 123);
  if ( src )
  {
    v10 = v9;
    if ( (unsigned __int64)v9 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_80;
    v11 = 8LL * v9;
    v12 = (void *)operator new[](v11);
    v13 = (char *)memcpy(v12, src, v11);
    *((_QWORD *)this + 123) = v13;
    v14 = *((int *)this + 27);
    *((_QWORD *)this + 125) = v13;
    v15 = 8 * v14;
    *((_QWORD *)this + 124) = &v13[v15];
    v16 = *((const void **)a2 + 126);
    if ( v16 )
      goto LABEL_8;
    *((_QWORD *)this + 126) = 0;
    *((_QWORD *)this + 127) = v15;
    *((_QWORD *)this + 128) = 0;
    v20 = *((const void **)a2 + 129);
    if ( !v20 )
      goto LABEL_68;
LABEL_76:
    v11 = 8 * v10;
LABEL_9:
    v21 = (void *)operator new[](v11);
    v22 = (char *)memcpy(v21, v20, v11);
    *((_QWORD *)this + 129) = v22;
    *((_QWORD *)this + 131) = v22;
    *((_QWORD *)this + 130) = &v22[8 * *((int *)this + 27)];
    v23 = *((const void **)a2 + 147);
    if ( v23 )
      goto LABEL_10;
    goto LABEL_71;
  }
  v15 = 8 * v8;
  *((_QWORD *)this + 123) = 0;
  *((_QWORD *)this + 125) = 0;
  *((_QWORD *)this + 124) = v15;
  v16 = *((const void **)a2 + 126);
  if ( !v16 )
  {
    *((_QWORD *)this + 126) = 0;
    *((_QWORD *)this + 127) = v15;
    *((_QWORD *)this + 128) = 0;
    v20 = *((const void **)a2 + 129);
    if ( !v20 )
      goto LABEL_68;
    v10 = v9;
    if ( (unsigned __int64)v9 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_80;
    goto LABEL_76;
  }
  if ( (unsigned __int64)v9 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_80;
  v11 = 8LL * v9;
LABEL_8:
  v17 = (void *)operator new[](v11);
  v18 = (char *)memcpy(v17, v16, v11);
  *((_QWORD *)this + 126) = v18;
  v19 = *((int *)this + 27);
  *((_QWORD *)this + 128) = v18;
  v15 = 8 * v19;
  *((_QWORD *)this + 127) = &v18[v15];
  v20 = *((const void **)a2 + 129);
  if ( v20 )
    goto LABEL_9;
LABEL_68:
  *((_QWORD *)this + 129) = 0;
  *((_QWORD *)this + 131) = 0;
  *((_QWORD *)this + 130) = v15;
  v23 = *((const void **)a2 + 147);
  if ( v23 )
  {
    if ( (unsigned __int64)v9 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_80;
    v11 = 8LL * v9;
LABEL_10:
    v24 = (void *)operator new[](v11);
    v25 = (char *)memcpy(v24, v23, v11);
    *((_QWORD *)this + 147) = v25;
    *((_QWORD *)this + 149) = v25;
    *((_QWORD *)this + 148) = &v25[8 * *((int *)this + 27)];
    v26 = *((const void **)a2 + 150);
    if ( v26 )
    {
LABEL_11:
      v27 = (void *)operator new[](v11);
      v28 = (char *)memcpy(v27, v26, v11);
      *((_QWORD *)this + 150) = v28;
      *((_QWORD *)this + 152) = v28;
      *((_QWORD *)this + 151) = &v28[8 * *((int *)this + 27)];
      goto LABEL_12;
    }
    goto LABEL_67;
  }
LABEL_71:
  *((_QWORD *)this + 147) = 0;
  v26 = *((const void **)a2 + 150);
  if ( v26 )
  {
    if ( (unsigned __int64)v9 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_80;
    v11 = 8LL * v9;
    goto LABEL_11;
  }
LABEL_67:
  *((_QWORD *)this + 150) = 0;
LABEL_12:
  if ( *((_QWORD *)a2 + 157) )
  {
    if ( (unsigned __int64)v7 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_80;
    v29 = (__m128i *)operator new[](4LL * v7);
    *((_QWORD *)this + 157) = v29;
    v30 = *((__m128i **)a2 + 157);
    if ( v7 && v30 != v29 )
    {
      v31 = v7 >> 3;
      if ( v7 >> 3 > 0 )
      {
        if ( (v29 >= &v30[2] || v30 >= &v29[2]) && v31 > 1 )
        {
          v32 = *((const __m128i **)a2 + 157);
          v33 = v29;
          v34 = v31 - 1;
          do
          {
            v35 = _mm_loadu_si128(v32);
            v32 += 2;
            v33 += 2;
            v36 = _mm_loadu_si128(v32 - 1);
            v33[-2] = v35;
            v33[-1] = v36;
          }
          while ( v32 != &v30[2 * v34 + 2] );
        }
        else
        {
          v59 = v29;
          v60 = *((int **)a2 + 157);
          v34 = v31 - 1;
          do
          {
            v61 = *v60;
            v60 += 8;
            v59 += 2;
            v59[-2].m128i_i32[0] = v61;
            v59[-2].m128i_i32[1] = *(v60 - 7);
            v59[-2].m128i_i32[2] = *(v60 - 6);
            v59[-2].m128i_i32[3] = *(v60 - 5);
            v59[-1].m128i_i32[0] = *(v60 - 4);
            v59[-1].m128i_i32[1] = *(v60 - 3);
            v59[-1].m128i_i32[2] = *(v60 - 2);
            v59[-1].m128i_i32[3] = *(v60 - 1);
          }
          while ( &v30[2 * v34 + 2] != (__m128i *)v60 );
        }
        v37 = 32 * ((int)v34 + 1LL);
        v30 = (__m128i *)((char *)v30 + v37);
        v29 = (__m128i *)((char *)v29 + v37);
      }
      switch ( v7 % 8 )
      {
        case 1:
          goto LABEL_60;
        case 2:
          goto LABEL_59;
        case 3:
          goto LABEL_58;
        case 4:
          goto LABEL_57;
        case 5:
          goto LABEL_56;
        case 6:
          goto LABEL_55;
        case 7:
          v29[1].m128i_i32[2] = v30[1].m128i_i32[2];
LABEL_55:
          v29[1].m128i_i32[1] = v30[1].m128i_i32[1];
LABEL_56:
          v29[1].m128i_i32[0] = v30[1].m128i_i32[0];
LABEL_57:
          v29->m128i_i32[3] = v30->m128i_i32[3];
LABEL_58:
          v29->m128i_i32[2] = v30->m128i_i32[2];
LABEL_59:
          v29->m128i_i32[1] = v30->m128i_i32[1];
LABEL_60:
          v29->m128i_i32[0] = v30->m128i_i32[0];
          break;
        default:
          break;
      }
    }
  }
  else
  {
    *((_QWORD *)this + 157) = 0;
  }
  v50 = *((const void **)a2 + 159);
  if ( v50 )
  {
    if ( (unsigned __int64)v9 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_80;
    v51 = (void *)operator new[](8LL * v9);
    v52 = memcpy(v51, v50, 8LL * v9);
  }
  else
  {
    v52 = nullptr;
  }
  *((_QWORD *)this + 159) = v52;
  for ( i = 1056; i != 1104; i += 8 )
  {
    *(_QWORD *)((char *)this + i) = 0;
    if ( *(_QWORD *)((char *)a2 + i) )
    {
      v54 = (CoinIndexedVector *)operator new(0x20u);
      CoinIndexedVector::CoinIndexedVector(v54, *(const CoinIndexedVector **)((char *)a2 + i));
      *(_QWORD *)((char *)this + i) = v54;
    }
    *(_QWORD *)((char *)this + i + 48) = 0;
    if ( *(_QWORD *)((char *)a2 + i + 48) )
    {
      v55 = (CoinIndexedVector *)operator new(0x20u);
      CoinIndexedVector::CoinIndexedVector(v55, *(const CoinIndexedVector **)((char *)a2 + i + 48));
      *(_QWORD *)((char *)this + i + 48) = v55;
    }
  }
  v56 = *((const void **)a2 + 164);
  if ( v56 )
  {
    v57 = (void *)operator new[](v9);
    *((_QWORD *)this + 164) = memcpy(v57, v56, v9);
    v38 = *((ClpFactorization **)a2 + 158);
    if ( !v38 )
      goto LABEL_50;
LABEL_25:
    ClpSimplex::setFactorization(this, v38);
    goto LABEL_26;
  }
LABEL_24:
  v38 = *((ClpFactorization **)a2 + 158);
  if ( v38 )
    goto LABEL_25;
LABEL_50:
  v58 = *((void **)this + 158);
  if ( v58 )
  {
    ClpFactorization::~ClpFactorization(*((ClpFactorization **)this + 158));
    operator delete(v58);
  }
  *((_QWORD *)this + 158) = 0;
LABEL_26:
  *((_QWORD *)this + 87) = *((_QWORD *)a2 + 87);
  *((_DWORD *)this + 178) = *((_DWORD *)a2 + 178);
  *((_QWORD *)this + 88) = *((_QWORD *)a2 + 88);
  *((_DWORD *)this + 179) = *((_DWORD *)a2 + 179);
  *((_QWORD *)this + 90) = *((_QWORD *)a2 + 90);
  *((_DWORD *)this + 183) = *((_DWORD *)a2 + 183);
  *((_DWORD *)this + 184) = *((_DWORD *)a2 + 184);
  *((_QWORD *)this + 93) = *((_QWORD *)a2 + 93);
  *((_QWORD *)this + 94) = *((_QWORD *)a2 + 94);
  *((_QWORD *)this + 95) = *((_QWORD *)a2 + 95);
  *((_QWORD *)this + 96) = *((_QWORD *)a2 + 96);
  *((_QWORD *)this + 97) = *((_QWORD *)a2 + 97);
  *((_QWORD *)this + 98) = *((_QWORD *)a2 + 98);
  *((_QWORD *)this + 99) = *((_QWORD *)a2 + 99);
  *((_QWORD *)this + 100) = *((_QWORD *)a2 + 100);
  *((_QWORD *)this + 101) = *((_QWORD *)a2 + 101);
  *((_QWORD *)this + 102) = *((_QWORD *)a2 + 102);
  *((_QWORD *)this + 103) = *((_QWORD *)a2 + 103);
  *((_QWORD *)this + 104) = *((_QWORD *)a2 + 104);
  *((_DWORD *)this + 288) = *((_DWORD *)a2 + 288);
  *((_DWORD *)this + 289) = *((_DWORD *)a2 + 289);
  *((_QWORD *)this + 105) = *((_QWORD *)a2 + 105);
  *((_QWORD *)this + 106) = *((_QWORD *)a2 + 106);
  *((_QWORD *)this + 107) = *((_QWORD *)a2 + 107);
  *((_QWORD *)this + 108) = *((_QWORD *)a2 + 108);
  *((_DWORD *)this + 290) = *((_DWORD *)a2 + 290);
  *((_DWORD *)this + 291) = *((_DWORD *)a2 + 291);
  *((_DWORD *)this + 292) = *((_DWORD *)a2 + 292);
  *((_DWORD *)this + 293) = *((_DWORD *)a2 + 293);
  *((_DWORD *)this + 309) = *((_DWORD *)a2 + 309);
  *((_QWORD *)this + 109) = *((_QWORD *)a2 + 109);
  *((_QWORD *)this + 110) = *((_QWORD *)a2 + 110);
  *((_QWORD *)this + 111) = *((_QWORD *)a2 + 111);
  *((_DWORD *)this + 306) = *((_DWORD *)a2 + 306);
  *((_DWORD *)this + 307) = *((_DWORD *)a2 + 307);
  *((_QWORD *)this + 112) = *((_QWORD *)a2 + 112);
  *((_DWORD *)this + 308) = *((_DWORD *)a2 + 308);
  v39 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)a2 + 155) + 88LL))(*((_QWORD *)a2 + 155), 1);
  *((_QWORD *)this + 155) = v39;
  *(_QWORD *)(v39 + 8) = this;
  v40 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)a2 + 156) + 72LL))(*((_QWORD *)a2 + 156), 1);
  *((_QWORD *)this + 156) = v40;
  *(_QWORD *)(v40 + 8) = this;
  LODWORD(v40) = *((_DWORD *)a2 + 320);
  *((_QWORD *)this + 161) = 0;
  *((_DWORD *)this + 320) = v40;
  *((_DWORD *)this + 324) = *((_DWORD *)a2 + 324);
  *((_DWORD *)this + 325) = *((_DWORD *)a2 + 325);
  *((_DWORD *)this + 326) = *((_DWORD *)a2 + 326);
  *((_DWORD *)this + 327) = *((_DWORD *)a2 + 327);
  *((_QWORD *)this + 113) = *((_QWORD *)a2 + 113);
  *((_DWORD *)this + 332) = *((_DWORD *)a2 + 332);
  *((_DWORD *)this + 333) = *((_DWORD *)a2 + 333);
  *((_DWORD *)this + 334) = *((_DWORD *)a2 + 334);
  *((_DWORD *)this + 335) = *((_DWORD *)a2 + 335);
  *((_DWORD *)this + 336) = *((_DWORD *)a2 + 336);
  *((_DWORD *)this + 337) = *((_DWORD *)a2 + 337);
  *((_QWORD *)this + 171) = *((_QWORD *)a2 + 171);
  *((_QWORD *)this + 172) = *((_QWORD *)a2 + 172);
  *((_DWORD *)this + 346) = *((_DWORD *)a2 + 346);
  v41 = *((int *)a2 + 347);
  *((_DWORD *)this + 347) = v41;
  if ( (_DWORD)v41 && (int)v41 >= 2 * *((_DWORD *)this + 27) )
  {
    v46 = *((const void **)a2 + 174);
    if ( !v46 )
    {
      v49 = nullptr;
LABEL_36:
      *((_QWORD *)this + 174) = v49;
      if ( !*((_QWORD *)a2 + 175) )
        goto LABEL_37;
LABEL_28:
      v42 = (ClpSimplex *)operator new(0x6F0u);
      ClpSimplex::ClpSimplex(v42, *((const ClpSimplex **)a2 + 175), -1);
      *((_QWORD *)this + 175) = v42;
      goto LABEL_29;
    }
    if ( v41 <= 0xFFFFFFFFFFFFFFFLL )
    {
      v47 = 8 * v41;
      v48 = (void *)operator new[](8 * v41);
      v49 = memcpy(v48, v46, v47);
      goto LABEL_36;
    }
LABEL_80:
    __cxa_throw_bad_array_new_length();
  }
  *((_DWORD *)this + 347) = 0;
  *((_QWORD *)this + 174) = 0;
  if ( *((_QWORD *)a2 + 175) )
    goto LABEL_28;
LABEL_37:
  *((_QWORD *)this + 175) = 0;
LABEL_29:
  ClpSimplexProgress::operator=((char *)this + 1408, (char *)a2 + 1408);
  *((_DWORD *)this + 431) = *((_DWORD *)a2 + 431);
  *((_QWORD *)this + 218) = *((_QWORD *)a2 + 218);
  *((_DWORD *)this + 432) = *((_DWORD *)a2 + 432);
  *((_QWORD *)this + 219) = *((_QWORD *)a2 + 219);
  *((_DWORD *)this + 433) = *((_DWORD *)a2 + 433);
  *((_QWORD *)this + 220) = *((_QWORD *)a2 + 220);
  *((_DWORD *)this + 434) = *((_DWORD *)a2 + 434);
  *((_QWORD *)this + 221) = *((_QWORD *)a2 + 221);
  *((_QWORD *)this + 114) = *((_QWORD *)a2 + 114);
  *((_QWORD *)this + 115) = *((_QWORD *)a2 + 115);
  *((_QWORD *)this + 116) = *((_QWORD *)a2 + 116);
  if ( *((_QWORD *)a2 + 165) )
  {
    v43 = (ClpNonLinearCost *)operator new(0x98u);
    ClpNonLinearCost::ClpNonLinearCost(v43, *((const ClpNonLinearCost **)a2 + 165));
    *((_QWORD *)this + 165) = v43;
  }
  else
  {
    *((_QWORD *)this + 165) = 0;
  }
  v44 = *((ClpEventHandler **)this + 45);
  *((_DWORD *)this + 78) = *((_DWORD *)a2 + 78);
  return ClpEventHandler::setSimplex(v44, this);
}

