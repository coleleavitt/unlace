unsigned __int64 __fastcall sub_3E70A0(__int64 a1, double a2)
{
  unsigned int v3; // edx
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  int v9; // esi
  int v10; // edx
  int v11; // edx
  int v12; // esi
  int v13; // esi
  int v14; // edx
  int v15; // eax
  int v16; // esi
  int v17; // eax
  int v18; // esi
  int v19; // eax
  int v20; // esi
  int v21; // eax
  int v22; // esi
  int v23; // esi
  int v24; // edx
  int v25; // eax
  int v26; // esi
  int v27; // edx
  int v28; // eax
  int v30; // eax
  int v31; // esi
  int v32; // eax
  int v33; // esi
  int v34; // esi
  int v35; // eax
  int v36; // esi
  int v37; // eax
  int v38; // esi
  int v39; // eax
  int v40; // esi
  int v41; // eax
  int v42; // esi
  int v43; // eax
  int v44; // esi
  int v45; // eax
  int v46; // esi
  __int64 *v47; // [rsp+8h] [rbp-90h]
  __int64 *v48; // [rsp+10h] [rbp-88h]
  __int64 *v49; // [rsp+18h] [rbp-80h]
  __int64 *v50; // [rsp+20h] [rbp-78h]
  __int64 *v51; // [rsp+28h] [rbp-70h]
  __int64 v52; // [rsp+30h] [rbp-68h] BYREF
  __int64 v53; // [rsp+38h] [rbp-60h]
  __int64 *v54; // [rsp+40h] [rbp-58h] BYREF
  __int128 v55; // [rsp+48h] [rbp-50h]
  unsigned __int64 v56; // [rsp+58h] [rbp-40h]

  v56 = __readfsqword(0x28u);
  sub_3E7020((unsigned __int8 *)a1, a2);
  v3 = *(_DWORD *)(a1 + 624);
  v4 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 68) = _mm_unpacklo_epi32(_mm_cvtsi32_si128((v3 + 31) & 0xFFFFFFE0), _mm_cvtsi32_si128(v3)).m128i_u64[0];
  if ( v4 )
  {
    *(_QWORD *)(a1 + 128) = 0;
    qfree(v4);
    *(_QWORD *)(a1 + 120) = 0;
    *(_QWORD *)(a1 + 136) = 0;
  }
  v5 = *(_QWORD *)(a1 + 160);
  *(_QWORD *)(a1 + 152) = 0;
  if ( v5 )
  {
    *(_QWORD *)(a1 + 168) = 0;
    qfree(v5);
    *(_QWORD *)(a1 + 160) = 0;
    *(_QWORD *)(a1 + 176) = 0;
  }
  v6 = *(_QWORD *)(a1 + 200);
  *(_QWORD *)(a1 + 192) = 0;
  if ( v6 )
  {
    *(_QWORD *)(a1 + 208) = 0;
    qfree(v6);
    *(_QWORD *)(a1 + 200) = 0;
    *(_QWORD *)(a1 + 216) = 0;
  }
  v7 = *(_QWORD *)(a1 + 240);
  *(_QWORD *)(a1 + 232) = 0;
  if ( v7 )
  {
    *(_QWORD *)(a1 + 248) = 0;
    qfree(v7);
    *(_QWORD *)(a1 + 240) = 0;
    *(_QWORD *)(a1 + 256) = 0;
  }
  v8 = *(_QWORD *)(a1 + 280);
  *(_QWORD *)(a1 + 272) = 0;
  if ( v8 )
  {
    *(_QWORD *)(a1 + 288) = 0;
    qfree(v8);
    *(_QWORD *)(a1 + 280) = 0;
    *(_QWORD *)(a1 + 296) = 0;
  }
  v9 = *(_DWORD *)(a1 + 608);
  v10 = *(_DWORD *)(a1 + 624);
  v52 = 0;
  v53 = 0;
  sub_5FB00(&v52, v9, v10 - v9);
  v54 = nullptr;
  v55 = 0;
  sub_5FF00((__int64 *)(a1 + 104), &v52);
  sub_311BB0((__int64 *)(a1 + 120), &v54);
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree(v54);
  }
  qfree(v52);
  v52 = 0;
  v53 = 0;
  sub_5FB00(&v52, 0, 5);
  v54 = nullptr;
  v55 = 0;
  sub_5FF00((__int64 *)(a1 + 264), &v52);
  v49 = (__int64 *)(a1 + 280);
  sub_311BB0((__int64 *)(a1 + 280), &v54);
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree(v54);
  }
  qfree(v52);
  v52 = 0;
  v53 = 0;
  v54 = nullptr;
  v55 = 0;
  v54 = (__int64 *)qvector_reserve(&v54, 0, 1, 16);
  *(__m128i *)&v54[2 * v55] = _mm_load_si128((const __m128i *)&xmmword_3FE260);
  *(_QWORD *)&v55 = v55 + 1;
  sub_5FF00((__int64 *)(a1 + 264), &v52);
  sub_311BB0(v49, &v54);
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree(v54);
  }
  qfree(v52);
  v11 = *(_DWORD *)(a1 + 80);
  v12 = **(_DWORD **)(a1 + 632);
  v52 = 0;
  v53 = 0;
  sub_5FB00(&v52, v12, v11);
  v54 = nullptr;
  v55 = 0;
  sub_5FF00((__int64 *)(a1 + 104), &v52);
  sub_311BB0((__int64 *)(a1 + 120), &v54);
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree(v54);
  }
  qfree(v52);
  v13 = *(_DWORD *)(a1 + 356);
  v14 = *(_DWORD *)(a1 + 80);
  v52 = 0;
  v53 = 0;
  sub_5FB00(&v52, v13, v14);
  v54 = nullptr;
  v55 = 0;
  sub_5FF00((__int64 *)(a1 + 184), &v52);
  sub_311BB0((__int64 *)(a1 + 200), &v54);
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree(v54);
  }
  qfree(v52);
  v15 = *(_DWORD *)(a1 + 80);
  v16 = *(_DWORD *)(a1 + 464);
  v52 = 0;
  v53 = 0;
  sub_5FB00(&v52, v16, 4 * v15);
  v54 = nullptr;
  v55 = 0;
  sub_5FF00((__int64 *)(a1 + 184), &v52);
  sub_311BB0((__int64 *)(a1 + 200), &v54);
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree(v54);
  }
  qfree(v52);
  v17 = *(_DWORD *)(a1 + 80);
  v18 = *(_DWORD *)(a1 + 360);
  v52 = 0;
  v53 = 0;
  sub_5FB00(&v52, v18, 3 * v17);
  v54 = nullptr;
  v47 = (__int64 *)(a1 + 224);
  v55 = 0;
  sub_5FF00((__int64 *)(a1 + 224), &v52);
  v48 = (__int64 *)(a1 + 240);
  sub_311BB0((__int64 *)(a1 + 240), &v54);
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree(v54);
  }
  qfree(v52);
  v19 = *(_DWORD *)(a1 + 80);
  v20 = *(_DWORD *)(a1 + 372);
  v52 = 0;
  v53 = 0;
  sub_5FB00(&v52, v20, 3 * v19);
  v54 = nullptr;
  v55 = 0;
  sub_5FF00((__int64 *)(a1 + 184), &v52);
  sub_311BB0((__int64 *)(a1 + 200), &v54);
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree(v54);
  }
  qfree(v52);
  v21 = *(_DWORD *)(a1 + 80);
  v22 = *(_DWORD *)(a1 + 392);
  v52 = 0;
  v53 = 0;
  sub_5FB00(&v52, v22, 8 * v21);
  v54 = nullptr;
  v50 = (__int64 *)(a1 + 144);
  v55 = 0;
  sub_5FF00((__int64 *)(a1 + 144), &v52);
  v51 = (__int64 *)(a1 + 160);
  sub_311BB0((__int64 *)(a1 + 160), &v54);
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree(v54);
  }
  qfree(v52);
  v23 = *(_DWORD *)(a1 + 384);
  v24 = 2 * *(_DWORD *)(a1 + 80);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 148LL) != 2 )
  {
    v52 = 0;
    v53 = 0;
    sub_5FB00(&v52, v23, v24);
    v54 = nullptr;
    v55 = 0;
    sub_5FF00(v47, &v52);
    sub_311BB0(v48, &v54);
    if ( v54 )
    {
      *(_QWORD *)&v55 = 0;
      qfree(v54);
    }
    qfree(v52);
    v25 = *(_DWORD *)(a1 + 80);
    v26 = *(_DWORD *)(a1 + 424);
    v52 = 0;
    v53 = 0;
    sub_5FB00(&v52, v26, 10 * v25);
    v54 = nullptr;
    v55 = 0;
    sub_5FF00(v47, &v52);
    sub_311BB0(v48, &v54);
    if ( v54 )
    {
      *(_QWORD *)&v55 = 0;
      qfree(v54);
    }
    qfree(v52);
    v27 = *(_DWORD *)(a1 + 692);
    if ( !v27 )
      goto LABEL_35;
LABEL_43:
    v34 = *(_DWORD *)(a1 + 480);
    v52 = 0;
    v53 = 0;
    sub_5FB00(&v52, v34, 8 * v27);
    v54 = nullptr;
    v55 = 0;
    sub_5FF00((__int64 *)(a1 + 184), &v52);
    sub_311BB0((__int64 *)(a1 + 200), &v54);
    if ( v54 )
    {
      *(_QWORD *)&v55 = 0;
      qfree(v54);
    }
    qfree(v52);
    v35 = *(_DWORD *)(a1 + 692);
    v36 = *(_DWORD *)(a1 + 512);
    v52 = 0;
    v53 = 0;
    sub_5FB00(&v52, v36, 2 * v35);
    v54 = nullptr;
    v55 = 0;
    sub_5FF00(v47, &v52);
    sub_311BB0(v48, &v54);
    if ( v54 )
    {
      *(_QWORD *)&v55 = 0;
      qfree(v54);
    }
    qfree(v52);
    v37 = *(_DWORD *)(a1 + 692);
    v38 = *(_DWORD *)(a1 + 520);
    v52 = 0;
    v53 = 0;
    sub_5FB00(&v52, v38, 8 * v37);
    v54 = nullptr;
    v55 = 0;
    sub_5FF00(v50, &v52);
    sub_311BB0(v51, &v54);
    if ( v54 )
    {
      *(_QWORD *)&v55 = 0;
      qfree(v54);
    }
    qfree(v52);
    v39 = *(_DWORD *)(a1 + 692);
    v40 = *(_DWORD *)(a1 + 552);
    v52 = 0;
    v53 = 0;
    sub_5FB00(&v52, v40, 10 * v39);
    v54 = nullptr;
    v55 = 0;
    sub_5FF00(v47, &v52);
    sub_311BB0(v48, &v54);
    if ( v54 )
    {
      *(_QWORD *)&v55 = 0;
      qfree(v54);
    }
    qfree(v52);
    v41 = *(_DWORD *)(a1 + 692);
    v42 = *(_DWORD *)(a1 + 592);
    v52 = 0;
    v53 = 0;
    sub_5FB00(&v52, v42, 4 * v41);
    v54 = nullptr;
    v55 = 0;
    sub_5FF00((__int64 *)(a1 + 184), &v52);
    sub_311BB0((__int64 *)(a1 + 200), &v54);
    if ( v54 )
    {
      *(_QWORD *)&v55 = 0;
      qfree(v54);
    }
    qfree(v52);
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 148LL) == 2 )
    {
      v43 = *(_DWORD *)(a1 + 692);
      v44 = *(_DWORD *)(a1 + 512);
      v52 = 0;
      v53 = 0;
      sub_5FB00(&v52, v44, 2 * v43);
      v54 = nullptr;
      v55 = 0;
      sub_5FF00(v50, &v52);
      sub_311BB0(v51, &v54);
      if ( v54 )
      {
        *(_QWORD *)&v55 = 0;
        qfree(v54);
      }
      qfree(v52);
      v45 = *(_DWORD *)(a1 + 692);
      v46 = *(_DWORD *)(a1 + 552);
      v52 = 0;
      v53 = 0;
      sub_5FB00(&v52, v46, 6 * v45);
      v54 = nullptr;
      v55 = 0;
      sub_5FF00(v50, &v52);
      sub_311BB0(v51, &v54);
      if ( v54 )
      {
        *(_QWORD *)&v55 = 0;
        qfree(v54);
      }
      qfree(v52);
    }
    goto LABEL_35;
  }
  v52 = 0;
  v53 = 0;
  sub_5FB00(&v52, v23, v24);
  v54 = nullptr;
  v55 = 0;
  sub_5FF00(v47, &v52);
  sub_311BB0(v48, &v54);
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree(v54);
  }
  qfree(v52);
  v30 = *(_DWORD *)(a1 + 80);
  v31 = *(_DWORD *)(a1 + 424);
  v52 = 0;
  v53 = 0;
  sub_5FB00(&v52, v31, 6 * v30);
  v54 = nullptr;
  v55 = 0;
  sub_5FF00(v50, &v52);
  sub_311BB0(v51, &v54);
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree(v54);
  }
  qfree(v52);
  v32 = *(_DWORD *)(a1 + 692);
  v33 = *(_DWORD *)(a1 + 448);
  v52 = 0;
  v53 = 0;
  sub_5FB00(&v52, v33, 3 * v32);
  v54 = nullptr;
  v55 = 0;
  sub_5FF00((__int64 *)(a1 + 184), &v52);
  sub_311BB0((__int64 *)(a1 + 200), &v54);
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree(v54);
  }
  qfree(v52);
  v27 = *(_DWORD *)(a1 + 692);
  if ( v27 )
    goto LABEL_43;
LABEL_35:
  sub_5FF00((__int64 *)(a1 + 264), v50);
  sub_311BB0(v49, (__int64 **)v51);
  sub_5FF00((__int64 *)(a1 + 264), (__int64 *)(a1 + 184));
  sub_311BB0(v49, (__int64 **)(a1 + 200));
  v28 = *(_DWORD *)(a1 + 64);
  *(_DWORD *)(a1 + 52) = v28;
  *(_DWORD *)(a1 + 56) = v28;
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 360);
  return v56 - __readfsqword(0x28u);
}
