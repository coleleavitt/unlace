void __fastcall CoinSnapshot::gutsOfCopy(CoinSnapshot *this, const CoinSnapshot *a2)
{
  int v2; // eax
  unsigned __int64 v3; // rdx
  __int128 v4; // xmm0
  const void *v5; // r13
  __int128 v6; // xmm2
  __int128 v7; // xmm1
  __m128i v8; // xmm0
  const void *v9; // r13
  const void *v10; // r13
  const void *v11; // r13
  const void *v12; // r13
  const void *v13; // r13
  const void *v14; // r12
  char v15; // al
  const void *v16; // r13
  const void *v17; // r13
  const void *v18; // r13
  const void *v19; // r13
  const void *v20; // r12
  bool v21; // sf
  char v22; // al
  size_t v23; // r12
  void *v24; // rax
  void *v25; // rcx
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // r12
  void *v28; // rax
  void *v29; // rcx
  unsigned __int64 v30; // r12
  unsigned __int64 v31; // r12
  void *v32; // rax
  void *v33; // rcx
  unsigned __int64 v34; // r12
  unsigned __int64 v35; // r12
  void *v36; // rax
  void *v37; // rcx
  unsigned __int64 v38; // r12
  unsigned __int64 v39; // r12
  void *v40; // rax
  void *v41; // rcx
  unsigned __int64 v42; // r12
  unsigned __int64 v43; // r12
  void *v44; // rax
  void *v45; // rcx
  size_t v46; // r13
  void *v47; // rax
  void *v48; // rcx
  unsigned __int64 v49; // r12
  unsigned __int64 v50; // r12
  void *v51; // rax
  void *v52; // rcx
  unsigned __int64 v53; // r12
  unsigned __int64 v54; // r12
  void *v55; // rax
  void *v56; // rcx
  unsigned __int64 v57; // r12
  unsigned __int64 v58; // r12
  void *v59; // rax
  void *v60; // rcx
  unsigned __int64 v61; // r13
  unsigned __int64 v62; // r13
  void *v63; // rax
  void *v64; // rcx
  CoinPackedMatrix *v65; // r12
  CoinPackedMatrix *v66; // r12
  CoinPackedMatrix *v67; // r12
  char v68; // al
  CoinPackedMatrix *v69; // r12
  unsigned __int64 v70; // r12
  unsigned __int64 v71; // r12
  void *v72; // rax
  void *v73; // rcx

  v2 = *((_DWORD *)a2 + 56);
  v3 = *((int *)a2 + 52);
  v4 = *(_OWORD *)((char *)a2 + 56);
  v5 = *((const void **)a2 + 10);
  v6 = *(_OWORD *)((char *)a2 + 24);
  v7 = *(_OWORD *)((char *)a2 + 40);
  *(_OWORD *)((char *)this + 8) = *(_OWORD *)((char *)a2 + 8);
  *(_OWORD *)((char *)this + 24) = v6;
  *(_OWORD *)((char *)this + 40) = v7;
  *(_OWORD *)((char *)this + 56) = v4;
  *((_QWORD *)this + 9) = *((_QWORD *)a2 + 9);
  v8 = _mm_loadu_si128((const __m128i *)a2 + 13);
  *((_DWORD *)this + 56) = v2;
  *((__m128i *)this + 13) = v8;
  if ( (v2 & 1) != 0 )
  {
    if ( v5 )
    {
      if ( v3 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_83;
      v23 = 8 * v3;
      v24 = (void *)operator new[](8 * v3);
      v25 = memcpy(v24, v5, v23);
      LOBYTE(v2) = *((_BYTE *)this + 224);
    }
    else
    {
      v25 = nullptr;
    }
    *((_QWORD *)this + 10) = v25;
    v9 = *((const void **)a2 + 11);
    if ( (v2 & 2) == 0 )
    {
LABEL_3:
      *((_QWORD *)this + 11) = v9;
      v10 = *((const void **)a2 + 12);
      if ( (v2 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_28;
    }
  }
  else
  {
    *((_QWORD *)this + 10) = v5;
    v9 = *((const void **)a2 + 11);
    if ( (v2 & 2) == 0 )
      goto LABEL_3;
  }
  v26 = *((int *)this + 52);
  if ( v9 )
  {
    if ( v26 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_83;
    v27 = 8 * v26;
    v28 = (void *)operator new[](v27);
    v29 = memcpy(v28, v9, v27);
    LOBYTE(v2) = *((_BYTE *)this + 224);
  }
  else
  {
    v29 = nullptr;
  }
  *((_QWORD *)this + 11) = v29;
  v10 = *((const void **)a2 + 12);
  if ( (v2 & 4) == 0 )
  {
LABEL_4:
    *((_QWORD *)this + 12) = v10;
    v11 = *((const void **)a2 + 13);
    if ( (v2 & 8) == 0 )
      goto LABEL_5;
    goto LABEL_32;
  }
LABEL_28:
  v30 = *((int *)this + 53);
  if ( v10 )
  {
    if ( v30 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_83;
    v31 = 8 * v30;
    v32 = (void *)operator new[](v31);
    v33 = memcpy(v32, v10, v31);
    LOBYTE(v2) = *((_BYTE *)this + 224);
  }
  else
  {
    v33 = nullptr;
  }
  *((_QWORD *)this + 12) = v33;
  v11 = *((const void **)a2 + 13);
  if ( (v2 & 8) == 0 )
  {
LABEL_5:
    *((_QWORD *)this + 13) = v11;
    v12 = *((const void **)a2 + 14);
    if ( (v2 & 0x10) == 0 )
      goto LABEL_6;
    goto LABEL_36;
  }
LABEL_32:
  v34 = *((int *)this + 53);
  if ( v11 )
  {
    if ( v34 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_83;
    v35 = 8 * v34;
    v36 = (void *)operator new[](v35);
    v37 = memcpy(v36, v11, v35);
    LOBYTE(v2) = *((_BYTE *)this + 224);
  }
  else
  {
    v37 = nullptr;
  }
  *((_QWORD *)this + 13) = v37;
  v12 = *((const void **)a2 + 14);
  if ( (v2 & 0x10) == 0 )
  {
LABEL_6:
    *((_QWORD *)this + 14) = v12;
    v13 = *((const void **)a2 + 15);
    if ( (v2 & 0x20) == 0 )
      goto LABEL_7;
LABEL_40:
    v42 = *((int *)this + 52);
    if ( v13 )
    {
      if ( v42 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_83;
      v43 = 8 * v42;
      v44 = (void *)operator new[](v43);
      v45 = memcpy(v44, v13, v43);
      LOBYTE(v2) = *((_BYTE *)this + 224);
    }
    else
    {
      v45 = nullptr;
    }
    *((_QWORD *)this + 15) = v45;
    v14 = *((const void **)a2 + 16);
    if ( (v2 & 0x40) == 0 )
      goto LABEL_8;
    goto LABEL_44;
  }
LABEL_36:
  v38 = *((int *)this + 53);
  if ( v12 )
  {
    if ( v38 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_83;
    v39 = 8 * v38;
    v40 = (void *)operator new[](v39);
    v41 = memcpy(v40, v12, v39);
    LOBYTE(v2) = *((_BYTE *)this + 224);
  }
  else
  {
    v41 = nullptr;
  }
  *((_QWORD *)this + 14) = v41;
  v13 = *((const void **)a2 + 15);
  if ( (v2 & 0x20) != 0 )
    goto LABEL_40;
LABEL_7:
  *((_QWORD *)this + 15) = v13;
  v14 = *((const void **)a2 + 16);
  if ( (v2 & 0x40) == 0 )
  {
LABEL_8:
    *((_QWORD *)this + 16) = v14;
    goto LABEL_9;
  }
LABEL_44:
  v46 = *((int *)this + 52);
  if ( v14 )
  {
    v47 = (void *)operator new[](*((int *)this + 52));
    v48 = memcpy(v47, v14, v46);
  }
  else
  {
    v48 = nullptr;
  }
  *((_QWORD *)this + 16) = v48;
LABEL_9:
  v15 = *((_BYTE *)this + 225);
  v16 = *((const void **)a2 + 21);
  if ( (v15 & 8) != 0 )
  {
    v70 = *((int *)this + 52);
    if ( v16 )
    {
      if ( v70 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_83;
      v71 = 8 * v70;
      v72 = (void *)operator new[](v71);
      v73 = memcpy(v72, v16, v71);
      v15 = *((_BYTE *)this + 225);
    }
    else
    {
      v73 = nullptr;
    }
    *((_QWORD *)this + 21) = v73;
  }
  else
  {
    *((_QWORD *)this + 21) = v16;
  }
  v17 = *((const void **)a2 + 22);
  if ( (v15 & 0x10) == 0 )
  {
    *((_QWORD *)this + 22) = v17;
    v18 = *((const void **)a2 + 23);
    if ( (v15 & 0x20) == 0 )
      goto LABEL_13;
LABEL_51:
    v53 = *((int *)this + 52);
    if ( v18 )
    {
      if ( v53 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_83;
      v54 = 8 * v53;
      v55 = (void *)operator new[](v54);
      v56 = memcpy(v55, v18, v54);
      v15 = *((_BYTE *)this + 225);
    }
    else
    {
      v56 = nullptr;
    }
    *((_QWORD *)this + 23) = v56;
    v19 = *((const void **)a2 + 24);
    if ( (v15 & 0x40) == 0 )
      goto LABEL_14;
    goto LABEL_55;
  }
  v49 = *((int *)this + 53);
  if ( v17 )
  {
    if ( v49 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_83;
    v50 = 8 * v49;
    v51 = (void *)operator new[](v50);
    v52 = memcpy(v51, v17, v50);
    v15 = *((_BYTE *)this + 225);
  }
  else
  {
    v52 = nullptr;
  }
  *((_QWORD *)this + 22) = v52;
  v18 = *((const void **)a2 + 23);
  if ( (v15 & 0x20) != 0 )
    goto LABEL_51;
LABEL_13:
  *((_QWORD *)this + 23) = v18;
  v19 = *((const void **)a2 + 24);
  if ( (v15 & 0x40) == 0 )
  {
LABEL_14:
    *((_QWORD *)this + 24) = v19;
    v20 = *((const void **)a2 + 25);
    if ( v15 >= 0 )
      goto LABEL_15;
    goto LABEL_59;
  }
LABEL_55:
  v57 = *((int *)this + 53);
  if ( v19 )
  {
    if ( v57 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_83;
    v58 = 8 * v57;
    v59 = (void *)operator new[](v58);
    v60 = memcpy(v59, v19, v58);
    v15 = *((_BYTE *)this + 225);
  }
  else
  {
    v60 = nullptr;
  }
  *((_QWORD *)this + 24) = v60;
  v20 = *((const void **)a2 + 25);
  if ( v15 >= 0 )
  {
LABEL_15:
    v21 = *((char *)this + 224) < 0;
    *((_QWORD *)this + 25) = v20;
    if ( !v21 )
      goto LABEL_16;
    goto LABEL_63;
  }
LABEL_59:
  v61 = *((int *)this + 52);
  if ( v20 )
  {
    if ( v61 <= 0xFFFFFFFFFFFFFFFLL )
    {
      v62 = 8 * v61;
      v63 = (void *)operator new[](v62);
      v64 = memcpy(v63, v20, v62);
      goto LABEL_62;
    }
LABEL_83:
    __cxa_throw_bad_array_new_length();
  }
  v64 = nullptr;
LABEL_62:
  v21 = *((char *)this + 224) < 0;
  *((_QWORD *)this + 25) = v64;
  if ( !v21 )
  {
LABEL_16:
    *((_QWORD *)this + 17) = *((_QWORD *)a2 + 17);
    v22 = *((_BYTE *)this + 225);
    if ( (v22 & 1) == 0 )
      goto LABEL_17;
    goto LABEL_64;
  }
LABEL_63:
  v65 = (CoinPackedMatrix *)operator new(0x58u);
  CoinPackedMatrix::CoinPackedMatrix(v65, *((const CoinPackedMatrix **)a2 + 17));
  v22 = *((_BYTE *)this + 225);
  *((_QWORD *)this + 17) = v65;
  if ( (v22 & 1) == 0 )
  {
LABEL_17:
    *((_QWORD *)this + 18) = *((_QWORD *)a2 + 18);
    if ( (v22 & 2) == 0 )
      goto LABEL_18;
LABEL_65:
    v67 = (CoinPackedMatrix *)operator new(0x58u);
    CoinPackedMatrix::CoinPackedMatrix(v67, *((const CoinPackedMatrix **)a2 + 19));
    v68 = *((_BYTE *)this + 225);
    *((_QWORD *)this + 19) = v67;
    if ( (v68 & 4) == 0 )
      goto LABEL_19;
    goto LABEL_66;
  }
LABEL_64:
  v66 = (CoinPackedMatrix *)operator new(0x58u);
  CoinPackedMatrix::CoinPackedMatrix(v66, *((const CoinPackedMatrix **)a2 + 18));
  v22 = *((_BYTE *)this + 225);
  *((_QWORD *)this + 18) = v66;
  if ( (v22 & 2) != 0 )
    goto LABEL_65;
LABEL_18:
  *((_QWORD *)this + 19) = *((_QWORD *)a2 + 19);
  if ( (v22 & 4) == 0 )
  {
LABEL_19:
    *((_QWORD *)this + 20) = *((_QWORD *)a2 + 20);
    return;
  }
LABEL_66:
  v69 = (CoinPackedMatrix *)operator new(0x58u);
  CoinPackedMatrix::CoinPackedMatrix(v69, *((const CoinPackedMatrix **)a2 + 20));
  *((_QWORD *)this + 20) = v69;
}

