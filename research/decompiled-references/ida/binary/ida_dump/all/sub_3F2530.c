unsigned __int64 __fastcall sub_3F2530(__int64 a1, __m128 si128)
{
  __int64 v2; // rax
  bool v3; // zf
  __int64 ph; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  const __m128i *v8; // rdx
  int v9; // edi
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // esi
  int v13; // r12d
  __int16 v14; // r12
  int v15; // esi
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
  int v40; // esi
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
  int v51; // esi
  int v52; // esi
  int v53; // esi
  int v54; // esi
  int v55; // esi
  int v56; // esi
  int v57; // esi
  size_t v58; // r13
  int v59; // esi
  __int64 *v60; // [rsp+8h] [rbp-90h]
  int v61; // [rsp+8h] [rbp-90h]
  __m128i v62; // [rsp+10h] [rbp-88h] BYREF
  char v63; // [rsp+27h] [rbp-71h]
  __int64 *v64; // [rsp+28h] [rbp-70h]
  __int64 v65; // [rsp+30h] [rbp-68h] BYREF
  __int64 v66; // [rsp+38h] [rbp-60h]
  __int64 *v67; // [rsp+40h] [rbp-58h] BYREF
  __int128 v68; // [rsp+48h] [rbp-50h]
  unsigned __int64 v69; // [rsp+58h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 96);
  v3 = *(_DWORD *)(a1 + 84) == 8;
  v69 = __readfsqword(0x28u);
  v63 = *(_BYTE *)(v2 + 148);
  if ( v3 )
  {
    *(_DWORD *)(a1 + 48) = 790997;
    if ( (getinf() & 0xF) == 6 && (unsigned __int8)getinf_flag() )
      *(_DWORD *)(a1 + 48) |= 0x20u;
  }
  else
  {
    *(_DWORD *)(a1 + 48) = 791000;
  }
  if ( (getinf() & 0xF) != 7 )
    *(_DWORD *)(a1 + 48) |= 2u;
  ph = get_ph();
  if ( (unsigned __int8)getinf() )
    LOBYTE(v6) = getinf();
  else
    v6 = *(_QWORD *)(ph + 120);
  *(_DWORD *)(a1 + 448) = (unsigned __int8)v6;
  if ( !(_BYTE)v6 )
  {
    if ( !under_debugger )
      sub_383060(0xC738u, *(double *)si128.m128_u64);
LABEL_138:
    BUG();
  }
  v7 = a1 + 712;
  v8 = (const __m128i *)&unk_434CA0;
  v9 = 0;
  v10 = a1 + 712;
  do
  {
    v11 = v8->m128i_i64[0];
    if ( *(_DWORD *)(a1 + 84) == 8 || (unsigned __int64)(v11 - 412) > 0x1C && (unsigned __int64)(v11 - 624) > 0x3C )
    {
      *(__m128i *)v10 = _mm_load_si128(v8);
      si128 = (__m128)_mm_load_si128(v8 + 1);
      *(__m128 *)(v10 + 16) = si128;
      switch ( *(_DWORD *)(v10 + 24) )
      {
        case 1:
          LOWORD(v12) = *(_WORD *)(a1 + 80);
          break;
        case 2:
          LOWORD(v12) = 2 * *(_WORD *)(a1 + 80);
          break;
        case 3:
          LOWORD(v12) = *(_WORD *)(a1 + 448);
          break;
        case 4:
          LOWORD(v12) = 1;
          break;
        case 5:
          v12 = 2 * *(_DWORD *)(a1 + 80);
          if ( v12 < *(_DWORD *)(a1 + 448) )
            LOWORD(v12) = *(_DWORD *)(a1 + 448);
          break;
        default:
          LOWORD(v12) = *(unsigned __int8 *)(v10 + 18);
          break;
      }
      v13 = *(_DWORD *)(v10 + 20);
      *(_WORD *)(v10 + 18) = v12;
      switch ( v13 )
      {
        case 1:
          v40 = *(_DWORD *)(a1 + 80);
          goto LABEL_63;
        case 2:
          v40 = 2 * *(_DWORD *)(a1 + 80);
          if ( *(_QWORD *)v10 == -1 )
            goto LABEL_72;
          goto LABEL_64;
        case 3:
          v40 = *(_DWORD *)(a1 + 448);
          goto LABEL_63;
        case 4:
          v14 = 1;
          if ( v11 == -1 )
            goto LABEL_18;
          v14 = 1;
          v15 = v9 + 1 - *(_DWORD *)(a1 + 80);
          *(_DWORD *)(v10 + 28) = v15;
          goto LABEL_17;
        case 5:
          v40 = 2 * *(_DWORD *)(a1 + 80);
          if ( v40 < *(_DWORD *)(a1 + 448) )
            v40 = *(_DWORD *)(a1 + 448);
          goto LABEL_63;
        default:
          v40 = *(unsigned __int8 *)(v10 + 16);
LABEL_63:
          if ( *(_QWORD *)v10 == -1 )
          {
LABEL_72:
            v9 = *(_DWORD *)(v10 + 28);
          }
          else
          {
LABEL_64:
            if ( v40 > 0 && *(_DWORD *)(a1 + 88) >= v40 && v13 != 3 )
              v9 = (v9 + v40 - 1) & -v40;
            *(_DWORD *)(v10 + 28) = v9;
          }
          v14 = v40;
          v9 += v40;
          if ( v11 == -1 )
            goto LABEL_18;
          v15 = *(_DWORD *)(v10 + 28);
LABEL_17:
          *(_DWORD *)(a1 + v11) = v15;
LABEL_18:
          *(_WORD *)(v10 + 16) = v14;
          v10 += 32;
          break;
      }
    }
    v8 += 2;
  }
  while ( v8 != (const __m128i *)&unk_435880 );
  v16 = *(_DWORD *)(a1 + 448);
  v17 = *(_DWORD *)(a1 + 520) - *(_DWORD *)(a1 + 492);
  *(_QWORD *)(a1 + 3752) = (v10 - v7) >> 5;
  if ( v17 != 7 * v16 )
  {
    if ( !under_debugger )
      sub_383060(0xCDD4u, *(double *)si128.m128_u64);
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
    qfree();
    *(_QWORD *)(a1 + 120) = 0;
    *(_QWORD *)(a1 + 136) = 0;
  }
  v21 = *(_QWORD *)(a1 + 160);
  *(_QWORD *)(a1 + 152) = 0;
  if ( v21 )
  {
    *(_QWORD *)(a1 + 168) = 0;
    qfree();
    *(_QWORD *)(a1 + 160) = 0;
    *(_QWORD *)(a1 + 176) = 0;
  }
  v22 = *(_QWORD *)(a1 + 200);
  *(_QWORD *)(a1 + 192) = 0;
  if ( v22 )
  {
    *(_QWORD *)(a1 + 208) = 0;
    qfree();
    *(_QWORD *)(a1 + 200) = 0;
    *(_QWORD *)(a1 + 216) = 0;
  }
  v23 = *(_QWORD *)(a1 + 240);
  *(_QWORD *)(a1 + 232) = 0;
  if ( v23 )
  {
    *(_QWORD *)(a1 + 248) = 0;
    qfree();
    *(_QWORD *)(a1 + 240) = 0;
    *(_QWORD *)(a1 + 256) = 0;
  }
  v24 = *(_QWORD *)(a1 + 280);
  *(_QWORD *)(a1 + 272) = 0;
  if ( v24 )
  {
    *(_QWORD *)(a1 + 288) = 0;
    qfree();
    *(_QWORD *)(a1 + 280) = 0;
    *(_QWORD *)(a1 + 296) = 0;
  }
  v25 = *(_DWORD *)(a1 + 452);
  v26 = *(_DWORD *)(a1 + 480);
  v65 = 0;
  v66 = 0;
  sub_63E80(&v65, v25, v26 - v25);
  v67 = nullptr;
  v68 = 0;
  sub_64280((__int64 *)(a1 + 104), &v65);
  sub_316CB0((__int64 *)(a1 + 120), &v67);
  if ( v67 )
  {
    *(_QWORD *)&v68 = 0;
    qfree();
  }
  qfree();
  v65 = 0;
  v66 = 0;
  sub_63E80(&v65, 0, 5);
  v67 = nullptr;
  v68 = 0;
  sub_64280((__int64 *)(a1 + 184), &v65);
  sub_316CB0((__int64 *)(a1 + 200), &v67);
  if ( v67 )
  {
    *(_QWORD *)&v68 = 0;
    qfree();
  }
  qfree();
  if ( (getinf() & 0xF) != 3 )
  {
    v27 = *(_DWORD *)(a1 + 388);
    v65 = 0;
    v66 = 0;
    sub_63E80(&v65, v27, v20);
    v67 = nullptr;
    v68 = 0;
    sub_64280((__int64 *)(a1 + 184), &v65);
    sub_316CB0((__int64 *)(a1 + 200), &v67);
    if ( v67 )
    {
      *(_QWORD *)&v68 = 0;
      qfree();
    }
    qfree();
    v28 = *(_DWORD *)(a1 + 444);
    v65 = 0;
    v66 = 0;
    sub_63E80(&v65, v28, 2);
    v67 = nullptr;
    v68 = 0;
    sub_64280((__int64 *)(a1 + 184), &v65);
    sub_316CB0((__int64 *)(a1 + 200), &v67);
    if ( v67 )
    {
      *(_QWORD *)&v68 = 0;
      qfree();
    }
    qfree();
    v29 = *(_DWORD *)(a1 + 524);
    v65 = 0;
    v66 = 0;
    sub_63E80(&v65, v29, 6);
    v67 = nullptr;
    v68 = 0;
    sub_64280((__int64 *)(a1 + 184), &v65);
    sub_316CB0((__int64 *)(a1 + 200), &v67);
    if ( v67 )
    {
      *(_QWORD *)&v68 = 0;
      qfree();
    }
    qfree();
    if ( *(_DWORD *)(a1 + 84) != 8 )
      goto LABEL_43;
    if ( v63 == 2 )
    {
      v51 = *(_DWORD *)(a1 + 380);
      v65 = 0;
      v66 = 0;
      sub_63E80(&v65, v51, v20);
      v67 = nullptr;
      v68 = 0;
      sub_64280((__int64 *)(a1 + 184), &v65);
      sub_316CB0((__int64 *)(a1 + 200), &v67);
      if ( v67 )
      {
        *(_QWORD *)&v68 = 0;
        qfree();
      }
      qfree();
      v52 = *(_DWORD *)(a1 + 428);
      v61 = 2 * v20;
      v65 = 0;
      v66 = 0;
      sub_63E80(&v65, v52, 2 * v20);
      v67 = nullptr;
      v68 = 0;
      sub_64280((__int64 *)(a1 + 184), &v65);
      sub_316CB0((__int64 *)(a1 + 200), &v67);
      if ( v67 )
      {
        *(_QWORD *)&v68 = 0;
        qfree();
      }
      qfree();
      v53 = *(_DWORD *)(a1 + 388);
      v65 = 0;
      v66 = 0;
      sub_63E80(&v65, v53, v61);
      v67 = nullptr;
      v62.m128i_i64[0] = a1 + 264;
      v68 = 0;
      sub_64280((__int64 *)(a1 + 264), &v65);
      v64 = (__int64 *)(a1 + 280);
      sub_316CB0((__int64 *)(a1 + 280), &v67);
      if ( v67 )
      {
        *(_QWORD *)&v68 = 0;
        qfree();
      }
      qfree();
      v54 = *(_DWORD *)(a1 + 404);
      v65 = 0;
      v66 = 0;
      sub_63E80(&v65, v54, v61);
      v67 = nullptr;
      v68 = 0;
      sub_64280((__int64 *)v62.m128i_i64[0], &v65);
      sub_316CB0(v64, &v67);
      if ( v67 )
      {
        *(_QWORD *)&v68 = 0;
        qfree();
      }
      qfree();
      v55 = *(_DWORD *)(a1 + 412);
      v65 = 0;
      v66 = 0;
      sub_63E80(&v65, v55, 4 * v20);
      v67 = nullptr;
      v68 = 0;
      sub_64280((__int64 *)v62.m128i_i64[0], &v65);
      sub_316CB0(v64, &v67);
      if ( v67 )
      {
        *(_QWORD *)&v68 = 0;
        qfree();
      }
      qfree();
      v56 = *(_DWORD *)(a1 + 560);
      v65 = 0;
      v66 = 0;
      sub_63E80(&v65, v56, 240);
      v67 = nullptr;
      v68 = 0;
      sub_64280((__int64 *)(a1 + 184), &v65);
      sub_316CB0((__int64 *)(a1 + 200), &v67);
      if ( v67 )
      {
        *(_QWORD *)&v68 = 0;
        qfree();
      }
      qfree();
      v57 = *(_DWORD *)(a1 + 620);
      v65 = 0;
      v66 = 0;
      sub_63E80(&v65, v57, 16);
      v67 = nullptr;
      v62.m128i_i64[0] = a1 + 224;
      v68 = 0;
      sub_64280((__int64 *)(a1 + 224), &v65);
      v64 = (__int64 *)(a1 + 240);
      sub_316CB0((__int64 *)(a1 + 240), &v67);
      if ( v67 )
      {
        *(_QWORD *)&v68 = 0;
        qfree();
      }
    }
    else
    {
      v41 = *(_DWORD *)(a1 + 412);
      v65 = 0;
      v66 = 0;
      sub_63E80(&v65, v41, 4 * v20);
      v67 = nullptr;
      v68 = 0;
      sub_64280((__int64 *)(a1 + 184), &v65);
      sub_316CB0((__int64 *)(a1 + 200), &v67);
      if ( v67 )
      {
        *(_QWORD *)&v68 = 0;
        qfree();
      }
      qfree();
      v42 = *(_DWORD *)(a1 + 576);
      v65 = 0;
      v66 = 0;
      sub_63E80(&v65, v42, 32);
      v67 = nullptr;
      v68 = 0;
      sub_64280((__int64 *)(a1 + 184), &v65);
      sub_316CB0((__int64 *)(a1 + 200), &v67);
      if ( v67 )
      {
        *(_QWORD *)&v68 = 0;
        qfree();
      }
      qfree();
      v43 = *(_DWORD *)(a1 + 428);
      v61 = 2 * v20;
      v65 = 0;
      v66 = 0;
      sub_63E80(&v65, v43, 2 * v20);
      v67 = nullptr;
      v62.m128i_i64[0] = a1 + 224;
      v68 = 0;
      sub_64280((__int64 *)(a1 + 224), &v65);
      v64 = (__int64 *)(a1 + 240);
      sub_316CB0((__int64 *)(a1 + 240), &v67);
      if ( v67 )
      {
        *(_QWORD *)&v68 = 0;
        qfree();
      }
      qfree();
      if ( (getinf() & 0xF) != 1 )
        goto LABEL_93;
      v59 = *(_DWORD *)(a1 + 584);
      v65 = 0;
      v66 = 0;
      sub_63E80(&v65, v59, 160);
      v67 = nullptr;
      v68 = 0;
      sub_64280((__int64 *)v62.m128i_i64[0], &v65);
      sub_316CB0(v64, &v67);
      if ( v67 )
      {
        *(_QWORD *)&v68 = 0;
        qfree();
      }
    }
    qfree();
LABEL_93:
    v44 = *(_DWORD *)(a1 + 436);
    v65 = 0;
    v66 = 0;
    sub_63E80(&v65, v44, v61);
    v67 = nullptr;
    v68 = 0;
    sub_64280((__int64 *)v62.m128i_i64[0], &v65);
    sub_316CB0(v64, &v67);
    if ( v67 )
    {
      *(_QWORD *)&v68 = 0;
      qfree();
    }
    qfree();
LABEL_43:
    v60 = (__int64 *)(a1 + 264);
    sub_64280((__int64 *)(a1 + 264), (__int64 *)(a1 + 184));
    sub_316CB0((__int64 *)(a1 + 280), (__int64 **)(a1 + 200));
    v30 = *(_DWORD *)(a1 + 380);
    v65 = 0;
    v66 = 0;
    sub_63E80(&v65, v30, v20);
    v67 = nullptr;
    v68 = 0;
    sub_64280((__int64 *)(a1 + 264), &v65);
    sub_316CB0((__int64 *)(a1 + 280), &v67);
    if ( v67 )
    {
      *(_QWORD *)&v68 = 0;
      qfree();
    }
    qfree();
    goto LABEL_46;
  }
  v48 = nullptr;
  v60 = (__int64 *)(a1 + 264);
  sub_648D0((__int64 *)(a1 + 264), (__int64 *)(a1 + 184));
  v49 = *(_QWORD *)(a1 + 208);
  v50 = _mm_unpacklo_epi64((__m128i)v49, (__m128i)v49);
  if ( v49 )
  {
    v62 = v50;
    v58 = 16 * v49;
    v48 = (void *)qalloc_or_throw();
    memcpy(v48, *(const void **)(a1 + 200), v58);
    v50 = _mm_load_si128(&v62);
  }
  if ( *(_QWORD *)(a1 + 280) )
  {
    *(_QWORD *)(a1 + 288) = 0;
    v62 = v50;
    qfree();
    v50 = _mm_load_si128(&v62);
  }
  *(_QWORD *)(a1 + 280) = v48;
  *(__m128i *)(a1 + 288) = v50;
LABEL_46:
  v65 = 0;
  v66 = 0;
  sub_63E80(&v65, 8, v20);
  v67 = nullptr;
  v68 = 0;
  sub_64280(v60, &v65);
  sub_316CB0((__int64 *)(a1 + 280), &v67);
  if ( v67 )
  {
    *(_QWORD *)&v68 = 0;
    qfree();
  }
  qfree();
  v65 = 0;
  v66 = 0;
  v67 = nullptr;
  v68 = 0;
  v67 = (__int64 *)qvector_reserve();
  *(__m128i *)&v67[2 * v68] = _mm_load_si128((const __m128i *)&xmmword_424800);
  *(_QWORD *)&v68 = v68 + 1;
  sub_64280(v60, &v65);
  sub_316CB0((__int64 *)(a1 + 280), &v67);
  if ( v67 )
  {
    *(_QWORD *)&v68 = 0;
    qfree();
  }
  qfree();
  if ( v63 != 2 )
  {
    if ( (getinf() & 0xF) != 6 || !(unsigned __int8)getinf_flag() )
    {
      v45 = *(_DWORD *)(a1 + 408);
      v65 = 0;
      v66 = 0;
      sub_63E80(&v65, v45, v20);
      v67 = nullptr;
      v68 = 0;
      sub_64280((__int64 *)(a1 + 224), &v65);
      sub_316CB0((__int64 *)(a1 + 240), &v67);
      if ( v67 )
      {
        *(_QWORD *)&v68 = 0;
        qfree();
      }
      qfree();
      v46 = *(_DWORD *)(a1 + 404);
      v65 = 0;
      v66 = 0;
      sub_63E80(&v65, v46, v20);
      v67 = nullptr;
      v68 = 0;
      sub_64280((__int64 *)(a1 + 224), &v65);
      sub_316CB0((__int64 *)(a1 + 240), &v67);
      if ( v67 )
      {
        *(_QWORD *)&v68 = 0;
        qfree();
      }
      qfree();
    }
    v47 = *(_DWORD *)(a1 + 396);
    v65 = 0;
    v66 = 0;
    sub_63E80(&v65, v47, v20);
    v67 = nullptr;
    v68 = 0;
    sub_64280((__int64 *)(a1 + 224), &v65);
    sub_316CB0((__int64 *)(a1 + 240), &v67);
    if ( v67 )
    {
      *(_QWORD *)&v68 = 0;
      qfree();
    }
    qfree();
  }
  v31 = *(_DWORD *)(a1 + 400);
  v65 = 0;
  v66 = 0;
  sub_63E80(&v65, v31, v20);
  v67 = nullptr;
  v68 = 0;
  sub_64280((__int64 *)(a1 + 224), &v65);
  sub_316CB0((__int64 *)(a1 + 240), &v67);
  if ( v67 )
  {
    *(_QWORD *)&v68 = 0;
    qfree();
  }
  qfree();
  v32 = *(_DWORD *)(a1 + 60);
  v65 = 0;
  v66 = 0;
  sub_63E80(&v65, 8, v32 - 8);
  v67 = nullptr;
  v68 = 0;
  sub_64280((__int64 *)(a1 + 144), &v65);
  sub_316CB0((__int64 *)(a1 + 160), &v67);
  if ( v67 )
  {
    *(_QWORD *)&v68 = 0;
    qfree();
  }
  qfree();
  v33 = *(_DWORD *)(a1 + 400);
  v34 = *(_DWORD *)(a1 + 444);
  v65 = 0;
  v66 = 0;
  sub_63E80(&v65, v33, v34 - v33);
  v67 = nullptr;
  v68 = 0;
  sub_64280((__int64 *)(a1 + 144), &v65);
  sub_316CB0((__int64 *)(a1 + 160), &v67);
  if ( v67 )
  {
    *(_QWORD *)&v68 = 0;
    qfree();
  }
  qfree();
  v35 = *(_DWORD *)(a1 + 448);
  v36 = *(_DWORD *)(a1 + 492);
  v65 = 0;
  v66 = 0;
  sub_63E80(&v65, v36, 8 * v35);
  v67 = nullptr;
  v68 = 0;
  sub_64280((__int64 *)(a1 + 144), &v65);
  sub_316CB0((__int64 *)(a1 + 160), &v67);
  if ( v67 )
  {
    *(_QWORD *)&v68 = 0;
    qfree();
  }
  qfree();
  v37 = *(_DWORD *)(a1 + 528);
  v38 = *(_DWORD *)(a1 + 708);
  v65 = 0;
  v66 = 0;
  sub_63E80(&v65, v37, v38 - v37);
  v67 = nullptr;
  v68 = 0;
  sub_64280((__int64 *)(a1 + 144), &v65);
  sub_316CB0((__int64 *)(a1 + 160), &v67);
  if ( v67 )
  {
    *(_QWORD *)&v68 = 0;
    qfree();
  }
  qfree();
  *(__m128i *)(a1 + 3760) = _mm_loadu_si128((const __m128i *)(a1 + 452));
  return v69 - __readfsqword(0x28u);
}
