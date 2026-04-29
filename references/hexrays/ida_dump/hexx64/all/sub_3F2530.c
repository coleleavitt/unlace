unsigned __int64 __fastcall sub_3F2530(__int64 a1, __int64 a2, __m128 si128)
{
  __int64 v3; // rax
  bool v4; // zf
  __int64 ph; // rbx
  __int64 v7; // rax
  const __m128i *v8; // rdx
  int v9; // edi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  int v13; // esi
  unsigned int v14; // r12d
  __int16 v15; // r12
  int v16; // ecx
  int v17; // edx
  __int64 v18; // rdi
  int v19; // eax
  int v20; // r12d
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  int v25; // esi
  int v26; // edx
  int v27; // esi
  int v28; // esi
  int v29; // esi
  int v30; // esi
  int v31; // esi
  int v32; // eax
  int v33; // esi
  int v34; // edx
  int v35; // eax
  int v36; // esi
  int v37; // esi
  int v38; // edx
  int v40; // r13d
  int v41; // esi
  int v42; // esi
  int v43; // esi
  int v44; // esi
  int v45; // esi
  int v46; // esi
  int v47; // esi
  void *v48; // r14
  unsigned __int64 v49; // rax
  __m128i v50; // xmm0
  __int64 v51; // rdi
  int v52; // esi
  int v53; // esi
  int v54; // esi
  int v55; // esi
  int v56; // esi
  int v57; // esi
  int v58; // esi
  size_t v59; // r13
  int v60; // esi
  __int64 *v61; // [rsp+8h] [rbp-90h]
  int v62; // [rsp+8h] [rbp-90h]
  __m128i v63; // [rsp+10h] [rbp-88h] BYREF
  char v64; // [rsp+27h] [rbp-71h]
  __int64 *v65; // [rsp+28h] [rbp-70h]
  __int64 v66; // [rsp+30h] [rbp-68h] BYREF
  __int64 v67; // [rsp+38h] [rbp-60h]
  __int64 *v68; // [rsp+40h] [rbp-58h] BYREF
  __int128 v69; // [rsp+48h] [rbp-50h]
  unsigned __int64 v70; // [rsp+58h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 96);
  v4 = *(_DWORD *)(a1 + 84) == 8;
  v70 = __readfsqword(0x28u);
  v64 = *(_BYTE *)(v3 + 148);
  if ( v4 )
  {
    *(_DWORD *)(a1 + 48) = 790997;
    if ( (getinf(57) & 0xF) == 6 )
    {
      a2 = 4;
      if ( (unsigned __int8)getinf_flag(3, 4) )
        *(_DWORD *)(a1 + 48) |= 0x20u;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 48) = 791000;
  }
  if ( (getinf(57) & 0xF) != 7 )
    *(_DWORD *)(a1 + 48) |= 2u;
  ph = get_ph(57);
  if ( (unsigned __int8)getinf(66) )
    LOBYTE(v7) = getinf(66);
  else
    v7 = *(_QWORD *)(ph + 120);
  *(_DWORD *)(a1 + 448) = (unsigned __int8)v7;
  if ( !(_BYTE)v7 )
  {
    if ( !under_debugger )
      sub_383060(0xC738u, a2, *(double *)si128.m128_u64);
LABEL_138:
    BUG();
  }
  v8 = (const __m128i *)&unk_434CA0;
  v9 = 0;
  v10 = a1 + 712;
  do
  {
    v11 = v8->m128i_i64[0];
    if ( *(_DWORD *)(a1 + 84) == 8
      || (v12 = v11 - 412, (unsigned __int64)(v11 - 412) > 0x1C)
      && (v12 = v11 - 624, (unsigned __int64)(v11 - 624) > 0x3C) )
    {
      *(__m128i *)v10 = _mm_load_si128(v8);
      si128 = (__m128)_mm_load_si128(v8 + 1);
      *(__m128 *)(v10 + 16) = si128;
      switch ( *(_DWORD *)(v10 + 24) )
      {
        case 1:
          LOWORD(v13) = *(_WORD *)(a1 + 80);
          break;
        case 2:
          LOWORD(v13) = 2 * *(_WORD *)(a1 + 80);
          break;
        case 3:
          LOWORD(v13) = *(_WORD *)(a1 + 448);
          break;
        case 4:
          LOWORD(v13) = 1;
          break;
        case 5:
          v13 = 2 * *(_DWORD *)(a1 + 80);
          if ( v13 < *(_DWORD *)(a1 + 448) )
            LOWORD(v13) = *(_DWORD *)(a1 + 448);
          break;
        default:
          LOWORD(v13) = *(unsigned __int8 *)(v10 + 18);
          break;
      }
      v14 = *(_DWORD *)(v10 + 20);
      *(_WORD *)(v10 + 18) = v13;
      v12 = v14;
      switch ( v14 )
      {
        case 1u:
          v12 = *(unsigned int *)(a1 + 80);
          goto LABEL_63;
        case 2u:
          v12 = (unsigned int)(2 * *(_DWORD *)(a1 + 80));
          if ( *(_QWORD *)v10 == -1 )
            goto LABEL_72;
          goto LABEL_64;
        case 3u:
          v12 = *(unsigned int *)(a1 + 448);
          goto LABEL_63;
        case 4u:
          v15 = 1;
          if ( v11 == -1 )
            goto LABEL_18;
          v15 = 1;
          v12 = (unsigned int)(v9 + 1 - *(_DWORD *)(a1 + 80));
          *(_DWORD *)(v10 + 28) = v12;
          goto LABEL_17;
        case 5u:
          v40 = *(_DWORD *)(a1 + 448);
          v12 = (unsigned int)(2 * *(_DWORD *)(a1 + 80));
          if ( (int)v12 < v40 )
            v12 = (unsigned int)v40;
          goto LABEL_63;
        default:
          v12 = *(unsigned __int8 *)(v10 + 16);
LABEL_63:
          if ( *(_QWORD *)v10 == -1 )
          {
LABEL_72:
            v9 = *(_DWORD *)(v10 + 28);
          }
          else
          {
LABEL_64:
            if ( (int)v12 > 0 && *(_DWORD *)(a1 + 88) >= (int)v12 && v14 != 3 )
              v9 = (v9 + v12 - 1) & -(int)v12;
            *(_DWORD *)(v10 + 28) = v9;
          }
          v15 = v12;
          v9 += v12;
          if ( v11 == -1 )
            goto LABEL_18;
          v12 = *(unsigned int *)(v10 + 28);
LABEL_17:
          *(_DWORD *)(a1 + v11) = v12;
LABEL_18:
          *(_WORD *)(v10 + 16) = v15;
          v10 += 32;
          break;
      }
    }
    v8 += 2;
  }
  while ( v8 != (const __m128i *)&unk_435880 );
  v16 = *(_DWORD *)(a1 + 448);
  v17 = *(_DWORD *)(a1 + 520) - *(_DWORD *)(a1 + 492);
  *(_QWORD *)(a1 + 3752) = (v10 - (a1 + 712)) >> 5;
  if ( v17 != 7 * v16 )
  {
    if ( !under_debugger )
      sub_383060(0xCDD4u, v12, *(double *)si128.m128_u64);
    goto LABEL_138;
  }
  v18 = *(_QWORD *)(a1 + 120);
  v19 = *(_DWORD *)(a1 + 708);
  *(_QWORD *)(a1 + 112) = 0;
  v20 = *(_DWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 68) = _mm_unpacklo_epi32(
                           _mm_cvtsi32_si128((v19 + 31) & 0xFFFFFFE0),
                           _mm_cvtsi32_si128(*(_DWORD *)(a1 + 444))).m128i_u64[0];
  if ( v18 )
  {
    *(_QWORD *)(a1 + 128) = 0;
    qfree(v18);
    *(_QWORD *)(a1 + 120) = 0;
    *(_QWORD *)(a1 + 136) = 0;
  }
  v21 = *(_QWORD *)(a1 + 160);
  *(_QWORD *)(a1 + 152) = 0;
  if ( v21 )
  {
    *(_QWORD *)(a1 + 168) = 0;
    qfree(v21);
    *(_QWORD *)(a1 + 160) = 0;
    *(_QWORD *)(a1 + 176) = 0;
  }
  v22 = *(_QWORD *)(a1 + 200);
  *(_QWORD *)(a1 + 192) = 0;
  if ( v22 )
  {
    *(_QWORD *)(a1 + 208) = 0;
    qfree(v22);
    *(_QWORD *)(a1 + 200) = 0;
    *(_QWORD *)(a1 + 216) = 0;
  }
  v23 = *(_QWORD *)(a1 + 240);
  *(_QWORD *)(a1 + 232) = 0;
  if ( v23 )
  {
    *(_QWORD *)(a1 + 248) = 0;
    qfree(v23);
    *(_QWORD *)(a1 + 240) = 0;
    *(_QWORD *)(a1 + 256) = 0;
  }
  v24 = *(_QWORD *)(a1 + 280);
  *(_QWORD *)(a1 + 272) = 0;
  if ( v24 )
  {
    *(_QWORD *)(a1 + 288) = 0;
    qfree(v24);
    *(_QWORD *)(a1 + 280) = 0;
    *(_QWORD *)(a1 + 296) = 0;
  }
  v25 = *(_DWORD *)(a1 + 452);
  v26 = *(_DWORD *)(a1 + 480);
  v66 = 0;
  v67 = 0;
  sub_63E80(&v66, v25, v26 - v25);
  v68 = nullptr;
  v69 = 0;
  sub_64280((__int64 *)(a1 + 104), &v66);
  sub_316CB0((__int64 *)(a1 + 120), &v68);
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree(v68);
  }
  qfree(v66);
  v66 = 0;
  v67 = 0;
  sub_63E80(&v66, 0, 5);
  v68 = nullptr;
  v69 = 0;
  sub_64280((__int64 *)(a1 + 184), &v66);
  sub_316CB0((__int64 *)(a1 + 200), &v68);
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree(v68);
  }
  qfree(v66);
  if ( (getinf(57) & 0xF) != 3 )
  {
    v27 = *(_DWORD *)(a1 + 388);
    v66 = 0;
    v67 = 0;
    sub_63E80(&v66, v27, v20);
    v68 = nullptr;
    v69 = 0;
    sub_64280((__int64 *)(a1 + 184), &v66);
    sub_316CB0((__int64 *)(a1 + 200), &v68);
    if ( v68 )
    {
      *(_QWORD *)&v69 = 0;
      qfree(v68);
    }
    qfree(v66);
    v28 = *(_DWORD *)(a1 + 444);
    v66 = 0;
    v67 = 0;
    sub_63E80(&v66, v28, 2);
    v68 = nullptr;
    v69 = 0;
    sub_64280((__int64 *)(a1 + 184), &v66);
    sub_316CB0((__int64 *)(a1 + 200), &v68);
    if ( v68 )
    {
      *(_QWORD *)&v69 = 0;
      qfree(v68);
    }
    qfree(v66);
    v29 = *(_DWORD *)(a1 + 524);
    v66 = 0;
    v67 = 0;
    sub_63E80(&v66, v29, 6);
    v68 = nullptr;
    v69 = 0;
    sub_64280((__int64 *)(a1 + 184), &v66);
    sub_316CB0((__int64 *)(a1 + 200), &v68);
    if ( v68 )
    {
      *(_QWORD *)&v69 = 0;
      qfree(v68);
    }
    qfree(v66);
    if ( *(_DWORD *)(a1 + 84) != 8 )
      goto LABEL_43;
    if ( v64 == 2 )
    {
      v52 = *(_DWORD *)(a1 + 380);
      v66 = 0;
      v67 = 0;
      sub_63E80(&v66, v52, v20);
      v68 = nullptr;
      v69 = 0;
      sub_64280((__int64 *)(a1 + 184), &v66);
      sub_316CB0((__int64 *)(a1 + 200), &v68);
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree(v68);
      }
      qfree(v66);
      v53 = *(_DWORD *)(a1 + 428);
      v62 = 2 * v20;
      v66 = 0;
      v67 = 0;
      sub_63E80(&v66, v53, 2 * v20);
      v68 = nullptr;
      v69 = 0;
      sub_64280((__int64 *)(a1 + 184), &v66);
      sub_316CB0((__int64 *)(a1 + 200), &v68);
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree(v68);
      }
      qfree(v66);
      v54 = *(_DWORD *)(a1 + 388);
      v66 = 0;
      v67 = 0;
      sub_63E80(&v66, v54, v62);
      v68 = nullptr;
      v63.m128i_i64[0] = a1 + 264;
      v69 = 0;
      sub_64280((__int64 *)(a1 + 264), &v66);
      v65 = (__int64 *)(a1 + 280);
      sub_316CB0((__int64 *)(a1 + 280), &v68);
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree(v68);
      }
      qfree(v66);
      v55 = *(_DWORD *)(a1 + 404);
      v66 = 0;
      v67 = 0;
      sub_63E80(&v66, v55, v62);
      v68 = nullptr;
      v69 = 0;
      sub_64280((__int64 *)v63.m128i_i64[0], &v66);
      sub_316CB0(v65, &v68);
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree(v68);
      }
      qfree(v66);
      v56 = *(_DWORD *)(a1 + 412);
      v66 = 0;
      v67 = 0;
      sub_63E80(&v66, v56, 4 * v20);
      v68 = nullptr;
      v69 = 0;
      sub_64280((__int64 *)v63.m128i_i64[0], &v66);
      sub_316CB0(v65, &v68);
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree(v68);
      }
      qfree(v66);
      v57 = *(_DWORD *)(a1 + 560);
      v66 = 0;
      v67 = 0;
      sub_63E80(&v66, v57, 240);
      v68 = nullptr;
      v69 = 0;
      sub_64280((__int64 *)(a1 + 184), &v66);
      sub_316CB0((__int64 *)(a1 + 200), &v68);
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree(v68);
      }
      qfree(v66);
      v58 = *(_DWORD *)(a1 + 620);
      v66 = 0;
      v67 = 0;
      sub_63E80(&v66, v58, 16);
      v68 = nullptr;
      v63.m128i_i64[0] = a1 + 224;
      v69 = 0;
      sub_64280((__int64 *)(a1 + 224), &v66);
      v65 = (__int64 *)(a1 + 240);
      sub_316CB0((__int64 *)(a1 + 240), &v68);
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree(v68);
      }
    }
    else
    {
      v41 = *(_DWORD *)(a1 + 412);
      v66 = 0;
      v67 = 0;
      sub_63E80(&v66, v41, 4 * v20);
      v68 = nullptr;
      v69 = 0;
      sub_64280((__int64 *)(a1 + 184), &v66);
      sub_316CB0((__int64 *)(a1 + 200), &v68);
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree(v68);
      }
      qfree(v66);
      v42 = *(_DWORD *)(a1 + 576);
      v66 = 0;
      v67 = 0;
      sub_63E80(&v66, v42, 32);
      v68 = nullptr;
      v69 = 0;
      sub_64280((__int64 *)(a1 + 184), &v66);
      sub_316CB0((__int64 *)(a1 + 200), &v68);
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree(v68);
      }
      qfree(v66);
      v43 = *(_DWORD *)(a1 + 428);
      v62 = 2 * v20;
      v66 = 0;
      v67 = 0;
      sub_63E80(&v66, v43, 2 * v20);
      v68 = nullptr;
      v63.m128i_i64[0] = a1 + 224;
      v69 = 0;
      sub_64280((__int64 *)(a1 + 224), &v66);
      v65 = (__int64 *)(a1 + 240);
      sub_316CB0((__int64 *)(a1 + 240), &v68);
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree(v68);
      }
      qfree(v66);
      if ( (getinf(57) & 0xF) != 1 )
        goto LABEL_93;
      v60 = *(_DWORD *)(a1 + 584);
      v66 = 0;
      v67 = 0;
      sub_63E80(&v66, v60, 160);
      v68 = nullptr;
      v69 = 0;
      sub_64280((__int64 *)v63.m128i_i64[0], &v66);
      sub_316CB0(v65, &v68);
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree(v68);
      }
    }
    qfree(v66);
LABEL_93:
    v44 = *(_DWORD *)(a1 + 436);
    v66 = 0;
    v67 = 0;
    sub_63E80(&v66, v44, v62);
    v68 = nullptr;
    v69 = 0;
    sub_64280((__int64 *)v63.m128i_i64[0], &v66);
    sub_316CB0(v65, &v68);
    if ( v68 )
    {
      *(_QWORD *)&v69 = 0;
      qfree(v68);
    }
    qfree(v66);
LABEL_43:
    v61 = (__int64 *)(a1 + 264);
    sub_64280((__int64 *)(a1 + 264), (__int64 *)(a1 + 184));
    sub_316CB0((__int64 *)(a1 + 280), (__int64 **)(a1 + 200));
    v30 = *(_DWORD *)(a1 + 380);
    v66 = 0;
    v67 = 0;
    sub_63E80(&v66, v30, v20);
    v68 = nullptr;
    v69 = 0;
    sub_64280((__int64 *)(a1 + 264), &v66);
    sub_316CB0((__int64 *)(a1 + 280), &v68);
    if ( v68 )
    {
      *(_QWORD *)&v69 = 0;
      qfree(v68);
    }
    qfree(v66);
    goto LABEL_46;
  }
  v48 = nullptr;
  v61 = (__int64 *)(a1 + 264);
  sub_648D0((__int64 *)(a1 + 264), (__int64 *)(a1 + 184));
  v49 = *(_QWORD *)(a1 + 208);
  v50 = _mm_unpacklo_epi64((__m128i)v49, (__m128i)v49);
  if ( v49 )
  {
    v63 = v50;
    v59 = 16 * v49;
    v48 = (void *)qalloc_or_throw(16 * v49);
    memcpy(v48, *(const void **)(a1 + 200), v59);
    v50 = _mm_load_si128(&v63);
  }
  v51 = *(_QWORD *)(a1 + 280);
  if ( v51 )
  {
    *(_QWORD *)(a1 + 288) = 0;
    v63 = v50;
    qfree(v51);
    v50 = _mm_load_si128(&v63);
  }
  *(_QWORD *)(a1 + 280) = v48;
  *(__m128i *)(a1 + 288) = v50;
LABEL_46:
  v66 = 0;
  v67 = 0;
  sub_63E80(&v66, 8, v20);
  v68 = nullptr;
  v69 = 0;
  sub_64280(v61, &v66);
  sub_316CB0((__int64 *)(a1 + 280), &v68);
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree(v68);
  }
  qfree(v66);
  v66 = 0;
  v67 = 0;
  v68 = nullptr;
  v69 = 0;
  v68 = (__int64 *)qvector_reserve(&v68, 0, 1, 16);
  *(__m128i *)&v68[2 * v69] = _mm_load_si128((const __m128i *)&xmmword_424800);
  *(_QWORD *)&v69 = v69 + 1;
  sub_64280(v61, &v66);
  sub_316CB0((__int64 *)(a1 + 280), &v68);
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree(v68);
  }
  qfree(v66);
  if ( v64 != 2 )
  {
    if ( (getinf(57) & 0xF) != 6 || !(unsigned __int8)getinf_flag(3, 4) )
    {
      v45 = *(_DWORD *)(a1 + 408);
      v66 = 0;
      v67 = 0;
      sub_63E80(&v66, v45, v20);
      v68 = nullptr;
      v69 = 0;
      sub_64280((__int64 *)(a1 + 224), &v66);
      sub_316CB0((__int64 *)(a1 + 240), &v68);
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree(v68);
      }
      qfree(v66);
      v46 = *(_DWORD *)(a1 + 404);
      v66 = 0;
      v67 = 0;
      sub_63E80(&v66, v46, v20);
      v68 = nullptr;
      v69 = 0;
      sub_64280((__int64 *)(a1 + 224), &v66);
      sub_316CB0((__int64 *)(a1 + 240), &v68);
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree(v68);
      }
      qfree(v66);
    }
    v47 = *(_DWORD *)(a1 + 396);
    v66 = 0;
    v67 = 0;
    sub_63E80(&v66, v47, v20);
    v68 = nullptr;
    v69 = 0;
    sub_64280((__int64 *)(a1 + 224), &v66);
    sub_316CB0((__int64 *)(a1 + 240), &v68);
    if ( v68 )
    {
      *(_QWORD *)&v69 = 0;
      qfree(v68);
    }
    qfree(v66);
  }
  v31 = *(_DWORD *)(a1 + 400);
  v66 = 0;
  v67 = 0;
  sub_63E80(&v66, v31, v20);
  v68 = nullptr;
  v69 = 0;
  sub_64280((__int64 *)(a1 + 224), &v66);
  sub_316CB0((__int64 *)(a1 + 240), &v68);
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree(v68);
  }
  qfree(v66);
  v32 = *(_DWORD *)(a1 + 60);
  v66 = 0;
  v67 = 0;
  sub_63E80(&v66, 8, v32 - 8);
  v68 = nullptr;
  v69 = 0;
  sub_64280((__int64 *)(a1 + 144), &v66);
  sub_316CB0((__int64 *)(a1 + 160), &v68);
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree(v68);
  }
  qfree(v66);
  v33 = *(_DWORD *)(a1 + 400);
  v34 = *(_DWORD *)(a1 + 444);
  v66 = 0;
  v67 = 0;
  sub_63E80(&v66, v33, v34 - v33);
  v68 = nullptr;
  v69 = 0;
  sub_64280((__int64 *)(a1 + 144), &v66);
  sub_316CB0((__int64 *)(a1 + 160), &v68);
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree(v68);
  }
  qfree(v66);
  v35 = *(_DWORD *)(a1 + 448);
  v36 = *(_DWORD *)(a1 + 492);
  v66 = 0;
  v67 = 0;
  sub_63E80(&v66, v36, 8 * v35);
  v68 = nullptr;
  v69 = 0;
  sub_64280((__int64 *)(a1 + 144), &v66);
  sub_316CB0((__int64 *)(a1 + 160), &v68);
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree(v68);
  }
  qfree(v66);
  v37 = *(_DWORD *)(a1 + 528);
  v38 = *(_DWORD *)(a1 + 708);
  v66 = 0;
  v67 = 0;
  sub_63E80(&v66, v37, v38 - v37);
  v68 = nullptr;
  v69 = 0;
  sub_64280((__int64 *)(a1 + 144), &v66);
  sub_316CB0((__int64 *)(a1 + 160), &v68);
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree(v68);
  }
  qfree(v66);
  *(__m128i *)(a1 + 3760) = _mm_loadu_si128((const __m128i *)(a1 + 452));
  return v70 - __readfsqword(0x28u);
}
