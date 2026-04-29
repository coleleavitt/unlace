unsigned __int64 __fastcall sub_3E6460(__int64 a1, double a2)
{
  unsigned int v3; // edx
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  int v9; // esi
  int v10; // edx
  int v11; // esi
  int v12; // edx
  int v13; // esi
  int v14; // edx
  int v15; // esi
  int v16; // edx
  int v17; // esi
  int v18; // esi
  int v19; // edx
  int v20; // esi
  int v21; // edx
  int v22; // eax
  int v23; // esi
  int v24; // eax
  int v25; // esi
  int v26; // eax
  int v27; // esi
  int v28; // eax
  int v29; // esi
  int v30; // edx
  int v31; // esi
  __int64 v32; // rdi
  int v33; // eax
  int v34; // esi
  int v35; // edx
  __int64 v36; // rdi
  int v37; // eax
  int v38; // esi
  int v39; // edx
  __int64 v40; // rdi
  int v41; // eax
  int v42; // esi
  int v43; // edx
  __int64 v44; // rdi
  int v45; // eax
  int v46; // esi
  int v47; // edx
  int v48; // eax
  __int64 *v50; // [rsp+8h] [rbp-90h]
  __int64 *v51; // [rsp+10h] [rbp-88h]
  __int64 *v52; // [rsp+18h] [rbp-80h]
  __int64 v53; // [rsp+30h] [rbp-68h] BYREF
  __int64 v54; // [rsp+38h] [rbp-60h]
  __int64 *v55; // [rsp+40h] [rbp-58h] BYREF
  __int128 v56; // [rsp+48h] [rbp-50h]
  unsigned __int64 v57; // [rsp+58h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  sub_3E63C0(a1, a2);
  v3 = *(_DWORD *)(a1 + 504);
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
  v9 = *(_DWORD *)(a1 + 488);
  v10 = *(_DWORD *)(a1 + 504);
  v53 = 0;
  v54 = 0;
  sub_5F400(&v53, v9, v10 - v9);
  v55 = nullptr;
  v56 = 0;
  sub_5F800((__int64 *)(a1 + 104), &v53);
  sub_3113F0((__int64 *)(a1 + 120), &v55);
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55);
  }
  qfree(v53);
  v53 = 0;
  v54 = 0;
  sub_5F400(&v53, 0, 5);
  v55 = nullptr;
  v56 = 0;
  sub_5F800((__int64 *)(a1 + 264), &v53);
  v50 = (__int64 *)(a1 + 280);
  sub_3113F0((__int64 *)(a1 + 280), &v55);
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55);
  }
  qfree(v53);
  v11 = *(_DWORD *)(a1 + 520);
  v53 = 0;
  v54 = 0;
  sub_5F400(&v53, v11, 1);
  v55 = nullptr;
  v56 = 0;
  sub_5F800((__int64 *)(a1 + 264), &v53);
  sub_3113F0(v50, &v55);
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55);
  }
  qfree(v53);
  v53 = 0;
  v54 = 0;
  v55 = nullptr;
  v56 = 0;
  v55 = (__int64 *)qvector_reserve(&v55, 0, 1, 16);
  *(__m128i *)&v55[2 * v56] = _mm_load_si128((const __m128i *)&xmmword_400180);
  *(_QWORD *)&v56 = v56 + 1;
  sub_5F800((__int64 *)(a1 + 264), &v53);
  sub_3113F0(v50, &v55);
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55);
  }
  qfree(v53);
  v12 = *(_DWORD *)(a1 + 80);
  v13 = *(_DWORD *)(a1 + 480);
  v53 = 0;
  v54 = 0;
  sub_5F400(&v53, v13, v12);
  v55 = nullptr;
  v56 = 0;
  sub_5F800((__int64 *)(a1 + 184), &v53);
  sub_3113F0((__int64 *)(a1 + 200), &v55);
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55);
  }
  qfree(v53);
  v14 = *(_DWORD *)(a1 + 80);
  v15 = *(_DWORD *)(a1 + 484);
  v53 = 0;
  v54 = 0;
  sub_5F400(&v53, v15, v14);
  v55 = nullptr;
  v56 = 0;
  sub_5F800((__int64 *)(a1 + 184), &v53);
  sub_3113F0((__int64 *)(a1 + 200), &v55);
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55);
  }
  qfree(v53);
  v16 = *(_DWORD *)(a1 + 80);
  v17 = **(_DWORD **)(a1 + 528);
  v53 = 0;
  v54 = 0;
  sub_5F400(&v53, v17, v16);
  v55 = nullptr;
  v56 = 0;
  sub_5F800((__int64 *)(a1 + 104), &v53);
  sub_3113F0((__int64 *)(a1 + 120), &v55);
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55);
  }
  qfree(v53);
  v18 = *(_DWORD *)(a1 + 356);
  v19 = *(_DWORD *)(a1 + 80);
  v53 = 0;
  v54 = 0;
  sub_5F400(&v53, v18, v19);
  v55 = nullptr;
  v56 = 0;
  sub_5F800((__int64 *)(a1 + 184), &v53);
  sub_3113F0((__int64 *)(a1 + 200), &v55);
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55);
  }
  qfree(v53);
  v20 = *(_DWORD *)(a1 + 364);
  v21 = *(_DWORD *)(a1 + 80);
  v53 = 0;
  v54 = 0;
  sub_5F400(&v53, v20, v21);
  v55 = nullptr;
  v51 = (__int64 *)(a1 + 224);
  v56 = 0;
  sub_5F800((__int64 *)(a1 + 224), &v53);
  v52 = (__int64 *)(a1 + 240);
  sub_3113F0((__int64 *)(a1 + 240), &v55);
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55);
  }
  qfree(v53);
  v22 = *(_DWORD *)(a1 + 80);
  v23 = *(_DWORD *)(a1 + 376);
  v53 = 0;
  v54 = 0;
  sub_5F400(&v53, v23, 4 * v22);
  v55 = nullptr;
  v56 = 0;
  sub_5F800((__int64 *)(a1 + 144), &v53);
  sub_3113F0((__int64 *)(a1 + 160), &v55);
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55);
  }
  qfree(v53);
  v24 = *(_DWORD *)(a1 + 80);
  v25 = *(_DWORD *)(a1 + 392);
  v53 = 0;
  v54 = 0;
  sub_5F400(&v53, v25, 2 * v24);
  v55 = nullptr;
  v56 = 0;
  sub_5F800((__int64 *)(a1 + 184), &v53);
  sub_3113F0((__int64 *)(a1 + 200), &v55);
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55);
  }
  qfree(v53);
  v26 = *(_DWORD *)(a1 + 80);
  v27 = *(_DWORD *)(a1 + 400);
  v53 = 0;
  v54 = 0;
  sub_5F400(&v53, v27, 8 * v26);
  v55 = nullptr;
  v56 = 0;
  sub_5F800((__int64 *)(a1 + 184), &v53);
  sub_3113F0((__int64 *)(a1 + 200), &v55);
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55);
  }
  qfree(v53);
  v28 = *(_DWORD *)(a1 + 80);
  v29 = *(_DWORD *)(a1 + 432);
  v53 = 0;
  v54 = 0;
  sub_5F400(&v53, v29, 10 * v28);
  v55 = nullptr;
  v56 = 0;
  sub_5F800(v51, &v53);
  sub_3113F0(v52, &v55);
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55);
  }
  qfree(v53);
  v30 = *(_DWORD *)(a1 + 80);
  v31 = **(_DWORD **)(a1 + 560);
  v53 = 0;
  v54 = 0;
  sub_5F400(&v53, v31, v30);
  v55 = nullptr;
  v56 = 0;
  sub_5F800((__int64 *)(a1 + 184), &v53);
  sub_3113F0((__int64 *)(a1 + 200), &v55);
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55);
  }
  v32 = v53;
  qfree(v53);
  if ( *(_DWORD *)(get_ph(v32) + 4) != 55 )
  {
    if ( !under_debugger )
      sub_37CFE0(0, (__int64)&v55, 0.0);
    BUG();
  }
  v33 = sub_CB3B0(0xBC1u);
  v34 = *(_DWORD *)(a1 + 360);
  v35 = *(_DWORD *)(a1 + 80);
  v53 = 0;
  v54 = 0;
  if ( v33 == 2 )
  {
    sub_5F400(&v53, v34, v35);
    v55 = nullptr;
    v56 = 0;
    sub_5F800(v51, &v53);
    sub_3113F0(v52, &v55);
    if ( v55 )
    {
      *(_QWORD *)&v56 = 0;
      qfree(v55);
    }
  }
  else
  {
    sub_5F400(&v53, v34, v35);
    v55 = nullptr;
    v56 = 0;
    sub_5F800((__int64 *)(a1 + 184), &v53);
    sub_3113F0((__int64 *)(a1 + 200), &v55);
    if ( v55 )
    {
      *(_QWORD *)&v56 = 0;
      qfree(v55);
    }
  }
  v36 = v53;
  qfree(v53);
  if ( *(_DWORD *)(get_ph(v36) + 4) != 55 )
    sub_3E4090(0.0, v36, (__int64)&v55);
  v37 = sub_CB3B0(0xBB8u);
  v38 = **(_DWORD **)(a1 + 536);
  v39 = *(_DWORD *)(a1 + 80);
  v53 = 0;
  v54 = 0;
  if ( v37 == 2 )
  {
    sub_5F400(&v53, v38, v39);
    v55 = nullptr;
    v56 = 0;
    sub_5F800(v51, &v53);
    sub_3113F0(v52, &v55);
    if ( v55 )
    {
      *(_QWORD *)&v56 = 0;
      qfree(v55);
    }
  }
  else
  {
    sub_5F400(&v53, v38, v39);
    v55 = nullptr;
    v56 = 0;
    sub_5F800((__int64 *)(a1 + 184), &v53);
    sub_3113F0((__int64 *)(a1 + 200), &v55);
    if ( v55 )
    {
      *(_QWORD *)&v56 = 0;
      qfree(v55);
    }
  }
  v40 = v53;
  qfree(v53);
  if ( *(_DWORD *)(get_ph(v40) + 4) != 55 )
    sub_3E40B0(0.0, v40, (__int64)&v55);
  v41 = sub_CB3B0(0xBBBu);
  v42 = **(_DWORD **)(a1 + 544);
  v43 = *(_DWORD *)(a1 + 80);
  v53 = 0;
  v54 = 0;
  if ( v41 == 2 )
  {
    sub_5F400(&v53, v42, v43);
    v55 = nullptr;
    v56 = 0;
    sub_5F800(v51, &v53);
    sub_3113F0(v52, &v55);
    if ( v55 )
    {
      *(_QWORD *)&v56 = 0;
      qfree(v55);
    }
  }
  else
  {
    sub_5F400(&v53, v42, v43);
    v55 = nullptr;
    v56 = 0;
    sub_5F800((__int64 *)(a1 + 184), &v53);
    sub_3113F0((__int64 *)(a1 + 200), &v55);
    if ( v55 )
    {
      *(_QWORD *)&v56 = 0;
      qfree(v55);
    }
  }
  v44 = v53;
  qfree(v53);
  if ( *(_DWORD *)(get_ph(v44) + 4) != 55 )
    sub_3E40D0(0.0, v44, (__int64)&v55);
  v45 = sub_CB3B0(0xBBEu);
  v46 = **(_DWORD **)(a1 + 552);
  v47 = *(_DWORD *)(a1 + 80);
  v53 = 0;
  v54 = 0;
  if ( v45 == 2 )
  {
    sub_5F400(&v53, v46, v47);
    v55 = nullptr;
    v56 = 0;
    sub_5F800(v51, &v53);
    sub_3113F0(v52, &v55);
    if ( v55 )
    {
      *(_QWORD *)&v56 = 0;
      qfree(v55);
    }
  }
  else
  {
    sub_5F400(&v53, v46, v47);
    v55 = nullptr;
    v56 = 0;
    sub_5F800((__int64 *)(a1 + 184), &v53);
    sub_3113F0((__int64 *)(a1 + 200), &v55);
    if ( v55 )
    {
      *(_QWORD *)&v56 = 0;
      qfree(v55);
    }
  }
  qfree(v53);
  sub_5F800((__int64 *)(a1 + 264), (__int64 *)(a1 + 144));
  sub_3113F0(v50, (__int64 **)(a1 + 160));
  sub_5F800((__int64 *)(a1 + 264), (__int64 *)(a1 + 184));
  sub_3113F0(v50, (__int64 **)(a1 + 200));
  v48 = *(_DWORD *)(a1 + 64);
  *(_DWORD *)(a1 + 52) = v48;
  *(_DWORD *)(a1 + 56) = v48;
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 364);
  return v57 - __readfsqword(0x28u);
}
