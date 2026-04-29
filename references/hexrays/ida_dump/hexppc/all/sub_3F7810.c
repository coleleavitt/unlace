unsigned __int64 __fastcall sub_3F7810(__int64 a1)
{
  int v1; // r13d
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  int v8; // esi
  int v9; // edx
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  int v15; // esi
  int v16; // esi
  int v17; // esi
  int v18; // r15d
  int v19; // r12d
  int v20; // r14d
  int v21; // edx
  int v22; // esi
  int v23; // esi
  int v24; // esi
  int v25; // esi
  int v26; // esi
  int v27; // edx
  int v28; // edx
  int v29; // esi
  int v30; // edx
  int v31; // esi
  int v32; // edx
  int v33; // esi
  int v34; // edx
  int v35; // esi
  int v36; // esi
  int v37; // edx
  int v38; // esi
  int v39; // edx
  int v40; // edx
  int v41; // eax
  int v42; // esi
  int v43; // esi
  int v44; // edx
  int v45; // esi
  int v47; // r14d
  int v48; // esi
  int v49; // eax
  int v50; // esi
  int v51; // eax
  int v52; // esi
  int v53; // eax
  int v54; // esi
  int v55; // esi
  int v56; // esi
  int v57; // eax
  int v58; // esi
  int v59; // eax
  int v60; // esi
  int v61; // edx
  int v62; // eax
  __int64 *v63; // [rsp+8h] [rbp-E0h]
  __int64 *v64; // [rsp+10h] [rbp-D8h]
  __int64 *v65; // [rsp+18h] [rbp-D0h]
  __int64 *v66; // [rsp+20h] [rbp-C8h]
  __int64 *v67; // [rsp+28h] [rbp-C0h]
  int v68; // [rsp+34h] [rbp-B4h]
  int v69; // [rsp+38h] [rbp-B0h]
  char v70; // [rsp+3Fh] [rbp-A9h]
  __int64 v71; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v72; // [rsp+48h] [rbp-A0h]
  __int64 *v73; // [rsp+50h] [rbp-98h] BYREF
  __int128 v74; // [rsp+58h] [rbp-90h]
  __int64 v75; // [rsp+70h] [rbp-78h] BYREF
  __int64 v76; // [rsp+78h] [rbp-70h]
  _BYTE v77[24]; // [rsp+80h] [rbp-68h] BYREF
  __int128 v78; // [rsp+98h] [rbp-50h]
  unsigned __int64 v79; // [rsp+A8h] [rbp-40h]

  v1 = *(_DWORD *)(a1 + 4408);
  v79 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 112) = 0;
  v3 = *(_QWORD *)(a1 + 120);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 128) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 120) = 0;
    *(_QWORD *)(a1 + 136) = 0;
  }
  v4 = *(_QWORD *)(a1 + 160);
  *(_QWORD *)(a1 + 152) = 0;
  if ( v4 )
  {
    *(_QWORD *)(a1 + 168) = 0;
    qfree(v4);
    *(_QWORD *)(a1 + 160) = 0;
    *(_QWORD *)(a1 + 176) = 0;
  }
  v5 = *(_QWORD *)(a1 + 200);
  *(_QWORD *)(a1 + 192) = 0;
  if ( v5 )
  {
    *(_QWORD *)(a1 + 208) = 0;
    qfree(v5);
    *(_QWORD *)(a1 + 200) = 0;
    *(_QWORD *)(a1 + 216) = 0;
  }
  v6 = *(_QWORD *)(a1 + 240);
  *(_QWORD *)(a1 + 232) = 0;
  if ( v6 )
  {
    *(_QWORD *)(a1 + 248) = 0;
    qfree(v6);
    *(_QWORD *)(a1 + 240) = 0;
    *(_QWORD *)(a1 + 256) = 0;
  }
  v7 = *(_QWORD *)(a1 + 280);
  *(_QWORD *)(a1 + 272) = 0;
  if ( v7 )
  {
    *(_QWORD *)(a1 + 288) = 0;
    qfree(v7);
    *(_QWORD *)(a1 + 280) = 0;
    *(_QWORD *)(a1 + 296) = 0;
  }
  v8 = *(_DWORD *)(a1 + 512);
  v9 = *(_DWORD *)(a1 + 528);
  v75 = 0;
  v76 = 0;
  sub_60440(&v75, v8, v9 - v8);
  memset(v77, 0, sizeof(v77));
  sub_60840((__int64 *)(a1 + 104), &v75);
  sub_312B30((__int64 *)(a1 + 120), (__int64 **)v77);
  if ( *(_QWORD *)v77 )
  {
    *(_QWORD *)&v77[8] = 0;
    qfree(*(_QWORD *)v77);
  }
  qfree(v75);
  v75 = 0;
  v76 = 0;
  sub_60440(&v75, 0, 5);
  memset(v77, 0, sizeof(v77));
  v63 = (__int64 *)(a1 + 264);
  sub_60840((__int64 *)(a1 + 264), &v75);
  v64 = (__int64 *)(a1 + 280);
  sub_312B30((__int64 *)(a1 + 280), (__int64 **)v77);
  if ( *(_QWORD *)v77 )
  {
    *(_QWORD *)&v77[8] = 0;
    qfree(*(_QWORD *)v77);
  }
  qfree(v75);
  v75 = 0;
  v76 = 0;
  memset(v77, 0, sizeof(v77));
  *(_QWORD *)v77 = qvector_reserve(v77, 0, 1, 16);
  *(__m128i *)(*(_QWORD *)v77 + 16LL * (*(_QWORD *)&v77[8])++) = _mm_load_si128((const __m128i *)&xmmword_411C00);
  sub_60840(v63, &v75);
  sub_312B30(v64, (__int64 **)v77);
  if ( *(_QWORD *)v77 )
  {
    *(_QWORD *)&v77[8] = 0;
    qfree(*(_QWORD *)v77);
  }
  qfree(v75);
  v10 = *(_DWORD *)(a1 + 480);
  v75 = 0;
  v76 = 0;
  sub_60440(&v75, v10, 1);
  memset(v77, 0, sizeof(v77));
  sub_60840(v63, &v75);
  sub_312B30(v64, (__int64 **)v77);
  if ( *(_QWORD *)v77 )
  {
    *(_QWORD *)&v77[8] = 0;
    qfree(*(_QWORD *)v77);
  }
  qfree(v75);
  v11 = *(_DWORD *)(a1 + 484);
  v75 = 0;
  v76 = 0;
  sub_60440(&v75, v11, 1);
  memset(v77, 0, sizeof(v77));
  sub_60840(v63, &v75);
  sub_312B30(v64, (__int64 **)v77);
  if ( *(_QWORD *)v77 )
  {
    *(_QWORD *)&v77[8] = 0;
    qfree(*(_QWORD *)v77);
  }
  qfree(v75);
  v12 = *(_DWORD *)(a1 + 488);
  v75 = 0;
  v76 = 0;
  sub_60440(&v75, v12, 1);
  memset(v77, 0, sizeof(v77));
  sub_60840(v63, &v75);
  sub_312B30(v64, (__int64 **)v77);
  if ( *(_QWORD *)v77 )
  {
    *(_QWORD *)&v77[8] = 0;
    qfree(*(_QWORD *)v77);
  }
  qfree(v75);
  v13 = *(_DWORD *)(a1 + 492);
  v75 = 0;
  v76 = 0;
  sub_60440(&v75, v13, 1);
  memset(v77, 0, sizeof(v77));
  sub_60840(v63, &v75);
  sub_312B30(v64, (__int64 **)v77);
  if ( *(_QWORD *)v77 )
  {
    *(_QWORD *)&v77[8] = 0;
    qfree(*(_QWORD *)v77);
  }
  qfree(v75);
  v14 = *(_DWORD *)(a1 + 496);
  v75 = 0;
  v76 = 0;
  sub_60440(&v75, v14, 1);
  memset(v77, 0, sizeof(v77));
  sub_60840(v63, &v75);
  sub_312B30(v64, (__int64 **)v77);
  if ( *(_QWORD *)v77 )
  {
    *(_QWORD *)&v77[8] = 0;
    qfree(*(_QWORD *)v77);
  }
  qfree(v75);
  v15 = *(_DWORD *)(a1 + 500);
  v75 = 0;
  v76 = 0;
  sub_60440(&v75, v15, 1);
  memset(v77, 0, sizeof(v77));
  sub_60840(v63, &v75);
  sub_312B30(v64, (__int64 **)v77);
  if ( *(_QWORD *)v77 )
  {
    *(_QWORD *)&v77[8] = 0;
    qfree(*(_QWORD *)v77);
  }
  qfree(v75);
  v16 = *(_DWORD *)(a1 + 504);
  v75 = 0;
  v76 = 0;
  sub_60440(&v75, v16, 1);
  memset(v77, 0, sizeof(v77));
  sub_60840(v63, &v75);
  sub_312B30(v64, (__int64 **)v77);
  if ( *(_QWORD *)v77 )
  {
    *(_QWORD *)&v77[8] = 0;
    qfree(*(_QWORD *)v77);
  }
  qfree(v75);
  v17 = *(_DWORD *)(a1 + 508);
  v75 = 0;
  v76 = 0;
  sub_60440(&v75, v17, 1);
  memset(v77, 0, sizeof(v77));
  sub_60840(v63, &v75);
  sub_312B30(v64, (__int64 **)v77);
  if ( *(_QWORD *)v77 )
  {
    *(_QWORD *)&v77[8] = 0;
    qfree(*(_QWORD *)v77);
  }
  qfree(v75);
  v18 = *(_DWORD *)(a1 + 364);
  v19 = *(_DWORD *)(a1 + 380);
  if ( *(_BYTE *)(a1 + 4412) )
  {
    if ( v18 <= v19 )
    {
      v19 = *(_DWORD *)(a1 + 364);
      v18 = *(_DWORD *)(a1 + 380);
    }
    if ( (v1 & 0xFFFFFFFB) != 0 )
    {
      do
      {
        v75 = 0;
        v76 = 0;
        sub_60440(&v75, v19, 4);
        memset(v77, 0, sizeof(v77));
        v66 = (__int64 *)(a1 + 144);
        sub_60840((__int64 *)(a1 + 144), &v75);
        v67 = (__int64 *)(a1 + 160);
        sub_312B30((__int64 *)(a1 + 160), (__int64 **)v77);
        if ( *(_QWORD *)v77 )
        {
          *(_QWORD *)&v77[8] = 0;
          qfree(*(_QWORD *)v77);
        }
        v19 += v1;
        qfree(v75);
      }
      while ( v19 <= v18 );
      v70 = 0;
      v69 = 4;
      goto LABEL_41;
    }
    v62 = v19;
    v69 = 4;
    v19 = v18;
    v18 = v62;
  }
  else
  {
    v69 = v1;
    if ( v18 > v19 )
    {
      v19 = *(_DWORD *)(a1 + 364);
      v18 = *(_DWORD *)(a1 + 380);
    }
  }
  v75 = 0;
  v76 = 0;
  sub_60440(&v75, v18, v69 + v19 - v18);
  memset(v77, 0, sizeof(v77));
  v66 = (__int64 *)(a1 + 144);
  sub_60840((__int64 *)(a1 + 144), &v75);
  v67 = (__int64 *)(a1 + 160);
  sub_312B30((__int64 *)(a1 + 160), (__int64 **)v77);
  if ( *(_QWORD *)v77 )
  {
    *(_QWORD *)&v77[8] = 0;
    qfree(*(_QWORD *)v77);
  }
  qfree(v75);
  v70 = 1;
LABEL_41:
  v75 = 0;
  v76 = 0;
  memset(v77, 0, sizeof(v77));
  v78 = 0;
  sub_CC530(0x7D4u, &v75, 112);
  if ( (_QWORD)v78 )
  {
    if ( *(_DWORD *)(*(_QWORD *)&v77[16] + 4 * v78 - 4) == 43 )
      v20 = *(_DWORD *)(a1 + 432);
    else
      v20 = *(_DWORD *)(a1 + 440);
  }
  else
  {
    v20 = *(_DWORD *)(a1 + 416);
  }
  v21 = *(_DWORD *)(a1 + 420);
  v22 = v20;
  if ( v21 <= v20 )
  {
    v22 = *(_DWORD *)(a1 + 420);
    v21 = v20;
  }
  v71 = 0;
  v72 = 0;
  sub_60440(&v71, v22, v21 + 8 - v22);
  v73 = nullptr;
  v74 = 0;
  sub_60840(v66, &v71);
  sub_312B30(v67, &v73);
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v73);
  }
  qfree(v71);
  v23 = *(_DWORD *)(a1 + 384);
  v71 = 0;
  v72 = 0;
  sub_60440(&v71, v23, v1);
  v73 = nullptr;
  v74 = 0;
  sub_60840((__int64 *)(a1 + 184), &v71);
  v65 = (__int64 *)(a1 + 200);
  sub_312B30((__int64 *)(a1 + 200), &v73);
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v73);
  }
  qfree(v71);
  v24 = *(_DWORD *)(a1 + 388);
  v71 = 0;
  v72 = 0;
  sub_60440(&v71, v24, v1);
  v73 = nullptr;
  v74 = 0;
  sub_60840((__int64 *)(a1 + 184), &v71);
  sub_312B30(v65, &v73);
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v73);
  }
  qfree(v71);
  v25 = *(_DWORD *)(a1 + 416);
  v71 = 0;
  v72 = 0;
  sub_60440(&v71, v25, 8);
  v73 = nullptr;
  v74 = 0;
  sub_60840((__int64 *)(a1 + 184), &v71);
  sub_312B30(v65, &v73);
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v73);
  }
  qfree(v71);
  v26 = *(_DWORD *)(a1 + 440);
  if ( v26 != v20 )
  {
    v27 = v20 + 8;
    if ( v26 >= v20 + 8 )
    {
      v26 = v20 + 8;
      v27 = *(_DWORD *)(a1 + 440);
    }
    v71 = 0;
    v72 = 0;
    sub_60440(&v71, v26, v27 + 8 - v26);
    v73 = nullptr;
    v74 = 0;
    sub_60840((__int64 *)(a1 + 184), &v71);
    sub_312B30(v65, &v73);
    if ( v73 )
    {
      *(_QWORD *)&v74 = 0;
      qfree(v73);
    }
    qfree(v71);
  }
  v28 = *(_DWORD *)(a1 + 84);
  v29 = *(_DWORD *)(a1 + 452);
  v71 = 0;
  v72 = 0;
  sub_60440(&v71, v29, v28);
  v73 = nullptr;
  v74 = 0;
  sub_60840((__int64 *)(a1 + 184), &v71);
  sub_312B30(v65, &v73);
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v73);
  }
  qfree(v71);
  v30 = *(_DWORD *)(a1 + 84);
  v31 = *(_DWORD *)(a1 + 460);
  v71 = 0;
  v72 = 0;
  sub_60440(&v71, v31, v30);
  v73 = nullptr;
  v74 = 0;
  sub_60840((__int64 *)(a1 + 184), &v71);
  sub_312B30(v65, &v73);
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v73);
  }
  qfree(v71);
  v32 = *(_DWORD *)(a1 + 84);
  v33 = *(_DWORD *)(a1 + 464);
  v71 = 0;
  v72 = 0;
  sub_60440(&v71, v33, v32);
  v73 = nullptr;
  v74 = 0;
  sub_60840((__int64 *)(a1 + 184), &v71);
  sub_312B30(v65, &v73);
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v73);
  }
  qfree(v71);
  v34 = *(_DWORD *)(a1 + 472);
  v35 = v34 + 7;
  if ( !__OFSUB__(v34, v34 + 7) )
  {
    v35 = *(_DWORD *)(a1 + 472);
    v34 += 7;
  }
  v71 = 0;
  v72 = 0;
  sub_60440(&v71, v35, v34 + 1 - v35);
  v73 = nullptr;
  v74 = 0;
  sub_60840((__int64 *)(a1 + 184), &v71);
  sub_312B30(v65, &v73);
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v73);
  }
  qfree(v71);
  v36 = *(_DWORD *)(a1 + 476);
  v37 = *(_DWORD *)(a1 + 472) + 20;
  if ( v36 >= v37 )
  {
    v36 = *(_DWORD *)(a1 + 472) + 20;
    v37 = *(_DWORD *)(a1 + 476);
  }
  v71 = 0;
  v72 = 0;
  sub_60440(&v71, v36, v37 + 1 - v36);
  v73 = nullptr;
  v74 = 0;
  sub_60840((__int64 *)(a1 + 184), &v71);
  sub_312B30(v65, &v73);
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v73);
  }
  qfree(v71);
  v38 = *(_DWORD *)(a1 + 380);
  v39 = *(_DWORD *)(a1 + 364);
  if ( v38 >= v39 )
  {
    v38 = *(_DWORD *)(a1 + 364);
    v39 = *(_DWORD *)(a1 + 380);
  }
  v71 = 0;
  v72 = 0;
  sub_60440(&v71, v38, v1 + v39 - v38);
  v73 = nullptr;
  v74 = 0;
  sub_60840(v63, &v71);
  sub_312B30(v64, &v73);
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v73);
  }
  qfree(v71);
  v40 = *(_DWORD *)(a1 + 420);
  if ( v40 <= v20 )
  {
    v41 = v20;
    v20 = *(_DWORD *)(a1 + 420);
    v40 = v41;
  }
  v71 = 0;
  v72 = 0;
  sub_60440(&v71, v20, v40 + 8 - v20);
  v73 = nullptr;
  v74 = 0;
  sub_60840(v63, &v71);
  sub_312B30(v64, &v73);
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v73);
  }
  qfree(v71);
  v68 = *(_DWORD *)(a1 + 396);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 148LL) != 2 )
  {
    v42 = *(_DWORD *)(a1 + 412);
    if ( v42 >= v68 )
    {
      v42 = *(_DWORD *)(a1 + 396);
      v68 = *(_DWORD *)(a1 + 412);
    }
    v71 = 0;
    v72 = 0;
    sub_60440(&v71, v42, v1 + v68 - v42);
    v73 = nullptr;
    v74 = 0;
    sub_60840((__int64 *)(a1 + 224), &v71);
    sub_312B30((__int64 *)(a1 + 240), &v73);
    if ( v73 )
    {
      *(_QWORD *)&v74 = 0;
      qfree(v73);
    }
    qfree(v71);
    v43 = *(_DWORD *)(a1 + 448);
    v44 = *(_DWORD *)(a1 + 444);
    if ( v43 >= v44 )
    {
      v43 = *(_DWORD *)(a1 + 444);
      v44 = *(_DWORD *)(a1 + 448);
    }
    v71 = 0;
    v72 = 0;
    sub_60440(&v71, v43, v44 + 8 - v43);
    v73 = nullptr;
    v74 = 0;
    sub_60840((__int64 *)(a1 + 224), &v71);
    sub_312B30((__int64 *)(a1 + 240), &v73);
    if ( v73 )
    {
      *(_QWORD *)&v74 = 0;
      qfree(v73);
    }
    qfree(v71);
    v45 = *(_DWORD *)(a1 + 352);
    v71 = 0;
    v72 = 0;
    sub_60440(&v71, v45, v1);
    v73 = nullptr;
    v74 = 0;
    sub_60840((__int64 *)(a1 + 184), &v71);
    sub_312B30(v65, &v73);
    if ( v73 )
    {
      *(_QWORD *)&v74 = 0;
      qfree(v73);
    }
    goto LABEL_92;
  }
  v47 = *(_DWORD *)(a1 + 400);
  if ( v47 >= v68 )
  {
    v47 = *(_DWORD *)(a1 + 396);
    v68 = *(_DWORD *)(a1 + 400);
    if ( !v70 )
    {
      do
      {
LABEL_106:
        v71 = 0;
        v72 = 0;
        sub_60440(&v71, v47, v69);
        v73 = nullptr;
        v74 = 0;
        sub_60840(v66, &v71);
        sub_312B30(v67, &v73);
        if ( v73 )
        {
          *(_QWORD *)&v74 = 0;
          qfree(v73);
        }
        v47 += v1;
        qfree(v71);
      }
      while ( v47 <= v68 );
      v48 = *(_DWORD *)(a1 + 436);
      v49 = *(_DWORD *)(a1 + 420);
      if ( v48 < v49 )
        goto LABEL_110;
      goto LABEL_135;
    }
  }
  else if ( !v70 )
  {
    goto LABEL_106;
  }
  v71 = 0;
  v72 = 0;
  sub_60440(&v71, v47, v68 + v69 - v47);
  v73 = nullptr;
  v74 = 0;
  sub_60840(v66, &v71);
  sub_312B30(v67, &v73);
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v73);
  }
  qfree(v71);
  v48 = *(_DWORD *)(a1 + 436);
  v49 = *(_DWORD *)(a1 + 420);
  if ( v48 < v49 )
    goto LABEL_110;
LABEL_135:
  v61 = v48;
  v48 = v49;
  v49 = v61;
LABEL_110:
  v71 = 0;
  v72 = 0;
  sub_60440(&v71, v48, v49 + 8 - v48);
  v73 = nullptr;
  v74 = 0;
  sub_60840(v66, &v71);
  sub_312B30(v67, &v73);
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v73);
  }
  qfree(v71);
  v50 = *(_DWORD *)(a1 + 400);
  v51 = *(_DWORD *)(a1 + 396);
  if ( v50 >= v51 )
  {
    v50 = *(_DWORD *)(a1 + 396);
    v51 = *(_DWORD *)(a1 + 400);
  }
  v71 = 0;
  v72 = 0;
  sub_60440(&v71, v50, v1 + v51 - v50);
  v73 = nullptr;
  v74 = 0;
  sub_60840(v63, &v71);
  sub_312B30(v64, &v73);
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v73);
  }
  qfree(v71);
  v52 = *(_DWORD *)(a1 + 436);
  v53 = *(_DWORD *)(a1 + 420);
  if ( v52 >= v53 )
  {
    v52 = *(_DWORD *)(a1 + 420);
    v53 = *(_DWORD *)(a1 + 436);
  }
  v71 = 0;
  v72 = 0;
  sub_60440(&v71, v52, v53 + 8 - v52);
  v73 = nullptr;
  v74 = 0;
  sub_60840(v63, &v71);
  sub_312B30(v64, &v73);
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v73);
  }
  qfree(v71);
  v54 = *(_DWORD *)(a1 + 384);
  v71 = 0;
  v72 = 0;
  sub_60440(&v71, v54, v1);
  v73 = nullptr;
  v74 = 0;
  sub_60840((__int64 *)(a1 + 184), &v71);
  sub_312B30(v65, &v73);
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v73);
  }
  qfree(v71);
  v55 = *(_DWORD *)(a1 + 388);
  v71 = 0;
  v72 = 0;
  sub_60440(&v71, v55, v1);
  v73 = nullptr;
  v74 = 0;
  sub_60840((__int64 *)(a1 + 184), &v71);
  sub_312B30(v65, &v73);
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v73);
  }
  qfree(v71);
  v56 = *(_DWORD *)(a1 + 408);
  v57 = *(_DWORD *)(a1 + 404);
  if ( v56 >= v57 )
  {
    v56 = *(_DWORD *)(a1 + 404);
    v57 = *(_DWORD *)(a1 + 408);
  }
  v71 = 0;
  v72 = 0;
  sub_60440(&v71, v56, v1 + v57 - v56);
  v73 = nullptr;
  v74 = 0;
  sub_60840((__int64 *)(a1 + 184), &v71);
  sub_312B30(v65, &v73);
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v73);
  }
  qfree(v71);
  v58 = *(_DWORD *)(a1 + 448);
  v59 = *(_DWORD *)(a1 + 440);
  if ( v58 >= v59 )
  {
    v58 = *(_DWORD *)(a1 + 440);
    v59 = *(_DWORD *)(a1 + 448);
  }
  v71 = 0;
  v72 = 0;
  sub_60440(&v71, v58, v59 + 8 - v58);
  v73 = nullptr;
  v74 = 0;
  sub_60840((__int64 *)(a1 + 184), &v71);
  sub_312B30(v65, &v73);
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v73);
  }
  qfree(v71);
  v60 = *(_DWORD *)(a1 + 352);
  v71 = 0;
  v72 = 0;
  sub_60440(&v71, v60, v1);
  v73 = nullptr;
  v74 = 0;
  sub_60840((__int64 *)(a1 + 224), &v71);
  sub_312B30((__int64 *)(a1 + 240), &v73);
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v73);
  }
LABEL_92:
  qfree(v71);
  sub_60840(v63, (__int64 *)(a1 + 184));
  sub_312B30(v64, (__int64 **)v65);
  if ( *(_QWORD *)&v77[16] )
  {
    *(_QWORD *)&v78 = 0;
    qfree(*(_QWORD *)&v77[16]);
  }
  if ( v76 )
  {
    *(_QWORD *)v77 = 0;
    qfree(v76);
  }
  return v79 - __readfsqword(0x28u);
}
