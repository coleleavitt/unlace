unsigned __int64 __fastcall sub_3E7930(__int64 a1)
{
  __int64 v1; // rax
  bool v2; // zf
  __int64 ph; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  const __m128i *v7; // rdx
  int v8; // edi
  __m128i *v9; // rax
  __int64 v10; // rcx
  int v11; // esi
  __int32 v12; // r12d
  __int16 v13; // r12
  int v14; // esi
  int v15; // ecx
  int v16; // edx
  __int64 v17; // rdi
  int v18; // eax
  int v19; // r12d
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  int v24; // esi
  int v25; // edx
  int v26; // esi
  int v27; // esi
  int v28; // esi
  int v29; // esi
  unsigned __int64 v30; // r14
  __int64 v31; // r9
  int v32; // esi
  int v33; // eax
  int v34; // esi
  int v35; // edx
  int v36; // eax
  int v37; // esi
  int v38; // esi
  int v39; // edx
  int v41; // esi
  int v42; // esi
  int v43; // esi
  int v44; // esi
  int v45; // esi
  int v46; // esi
  int v47; // esi
  int v48; // esi
  void *v49; // r14
  unsigned __int64 v50; // rax
  __m128i v51; // xmm0
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
  __int64 v65; // [rsp+28h] [rbp-70h]
  __int64 v66; // [rsp+30h] [rbp-68h] BYREF
  __int64 v67; // [rsp+38h] [rbp-60h]
  __int64 v68; // [rsp+40h] [rbp-58h] BYREF
  __int128 v69; // [rsp+48h] [rbp-50h]
  unsigned __int64 v70; // [rsp+58h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 96);
  v2 = *(_DWORD *)(a1 + 84) == 8;
  v70 = __readfsqword(0x28u);
  v64 = *(_BYTE *)(v1 + 148);
  if ( v2 )
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
    LOBYTE(v5) = getinf();
  else
    v5 = *(_QWORD *)(ph + 120);
  *(_DWORD *)(a1 + 448) = (unsigned __int8)v5;
  if ( !(_BYTE)v5 )
  {
    if ( !under_debugger )
      sub_37EA20(51000);
LABEL_140:
    BUG();
  }
  v6 = a1 + 712;
  v7 = (const __m128i *)&unk_435DA0;
  v8 = 0;
  v9 = (__m128i *)(a1 + 712);
  do
  {
    v10 = v7->m128i_i64[0];
    if ( *(_DWORD *)(a1 + 84) == 8 || (unsigned __int64)(v10 - 412) > 0x1C && (unsigned __int64)(v10 - 624) > 0x3C )
    {
      *v9 = _mm_load_si128(v7);
      v9[1] = _mm_load_si128(v7 + 1);
      switch ( v9[1].m128i_i32[2] )
      {
        case 1:
          LOWORD(v11) = *(_WORD *)(a1 + 80);
          break;
        case 2:
          LOWORD(v11) = 2 * *(_WORD *)(a1 + 80);
          break;
        case 3:
          LOWORD(v11) = *(_WORD *)(a1 + 448);
          break;
        case 4:
          LOWORD(v11) = 1;
          break;
        case 5:
          v11 = 2 * *(_DWORD *)(a1 + 80);
          if ( v11 < *(_DWORD *)(a1 + 448) )
            LOWORD(v11) = *(_DWORD *)(a1 + 448);
          break;
        default:
          LOWORD(v11) = v9[1].m128i_u8[2];
          break;
      }
      v12 = v9[1].m128i_i32[1];
      v9[1].m128i_i16[1] = v11;
      switch ( v12 )
      {
        case 1:
          v41 = *(_DWORD *)(a1 + 80);
          goto LABEL_65;
        case 2:
          v41 = 2 * *(_DWORD *)(a1 + 80);
          if ( v9->m128i_i64[0] == -1 )
            goto LABEL_74;
          goto LABEL_66;
        case 3:
          v41 = *(_DWORD *)(a1 + 448);
          goto LABEL_65;
        case 4:
          v13 = 1;
          if ( v10 == -1 )
            goto LABEL_18;
          v13 = 1;
          v14 = v8 + 1 - *(_DWORD *)(a1 + 80);
          v9[1].m128i_i32[3] = v14;
          goto LABEL_17;
        case 5:
          v41 = 2 * *(_DWORD *)(a1 + 80);
          if ( v41 < *(_DWORD *)(a1 + 448) )
            v41 = *(_DWORD *)(a1 + 448);
          goto LABEL_65;
        default:
          v41 = v9[1].m128i_u8[0];
LABEL_65:
          if ( v9->m128i_i64[0] == -1 )
          {
LABEL_74:
            v8 = v9[1].m128i_i32[3];
          }
          else
          {
LABEL_66:
            if ( v41 > 0 && *(_DWORD *)(a1 + 88) >= v41 && v12 != 3 )
              v8 = (v8 + v41 - 1) & -v41;
            v9[1].m128i_i32[3] = v8;
          }
          v13 = v41;
          v8 += v41;
          if ( v10 == -1 )
            goto LABEL_18;
          v14 = v9[1].m128i_i32[3];
LABEL_17:
          *(_DWORD *)(a1 + v10) = v14;
LABEL_18:
          v9[1].m128i_i16[0] = v13;
          v9 += 2;
          break;
      }
    }
    v7 += 2;
  }
  while ( v7 != (const __m128i *)&unk_436980 );
  v15 = *(_DWORD *)(a1 + 448);
  v16 = *(_DWORD *)(a1 + 520) - *(_DWORD *)(a1 + 492);
  *(_QWORD *)(a1 + 3752) = ((__int64)v9->m128i_i64 - v6) >> 5;
  if ( v16 != 7 * v15 )
  {
    if ( !under_debugger )
      sub_37EA20(52692);
    goto LABEL_140;
  }
  v17 = *(_QWORD *)(a1 + 120);
  v18 = *(_DWORD *)(a1 + 708);
  *(_QWORD *)(a1 + 112) = 0;
  v19 = *(_DWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 68) = _mm_unpacklo_epi32(
                           _mm_cvtsi32_si128((v18 + 31) & 0xFFFFFFE0),
                           _mm_cvtsi32_si128(*(_DWORD *)(a1 + 444))).m128i_u64[0];
  if ( v17 )
  {
    *(_QWORD *)(a1 + 128) = 0;
    qfree();
    *(_QWORD *)(a1 + 120) = 0;
    *(_QWORD *)(a1 + 136) = 0;
  }
  v20 = *(_QWORD *)(a1 + 160);
  *(_QWORD *)(a1 + 152) = 0;
  if ( v20 )
  {
    *(_QWORD *)(a1 + 168) = 0;
    qfree();
    *(_QWORD *)(a1 + 160) = 0;
    *(_QWORD *)(a1 + 176) = 0;
  }
  v21 = *(_QWORD *)(a1 + 200);
  *(_QWORD *)(a1 + 192) = 0;
  if ( v21 )
  {
    *(_QWORD *)(a1 + 208) = 0;
    qfree();
    *(_QWORD *)(a1 + 200) = 0;
    *(_QWORD *)(a1 + 216) = 0;
  }
  v22 = *(_QWORD *)(a1 + 240);
  *(_QWORD *)(a1 + 232) = 0;
  if ( v22 )
  {
    *(_QWORD *)(a1 + 248) = 0;
    qfree();
    *(_QWORD *)(a1 + 240) = 0;
    *(_QWORD *)(a1 + 256) = 0;
  }
  v23 = *(_QWORD *)(a1 + 280);
  *(_QWORD *)(a1 + 272) = 0;
  if ( v23 )
  {
    *(_QWORD *)(a1 + 288) = 0;
    qfree();
    *(_QWORD *)(a1 + 280) = 0;
    *(_QWORD *)(a1 + 296) = 0;
  }
  v24 = *(_DWORD *)(a1 + 452);
  v25 = *(_DWORD *)(a1 + 480);
  v66 = 0;
  v67 = 0;
  sub_63580(&v66, v24, v25 - v24);
  v68 = 0;
  v69 = 0;
  sub_63980((__int64 *)(a1 + 104), &v66);
  sub_313730(a1 + 120, &v68);
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree();
  }
  qfree();
  v66 = 0;
  v67 = 0;
  sub_63580(&v66, 0, 5);
  v68 = 0;
  v69 = 0;
  sub_63980((__int64 *)(a1 + 184), &v66);
  sub_313730(a1 + 200, &v68);
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree();
  }
  qfree();
  if ( (getinf() & 0xF) != 3 )
  {
    v26 = *(_DWORD *)(a1 + 388);
    v66 = 0;
    v67 = 0;
    sub_63580(&v66, v26, v19);
    v68 = 0;
    v69 = 0;
    sub_63980((__int64 *)(a1 + 184), &v66);
    sub_313730(a1 + 200, &v68);
    if ( v68 )
    {
      *(_QWORD *)&v69 = 0;
      qfree();
    }
    qfree();
    v27 = *(_DWORD *)(a1 + 444);
    v66 = 0;
    v67 = 0;
    sub_63580(&v66, v27, 2);
    v68 = 0;
    v69 = 0;
    sub_63980((__int64 *)(a1 + 184), &v66);
    sub_313730(a1 + 200, &v68);
    if ( v68 )
    {
      *(_QWORD *)&v69 = 0;
      qfree();
    }
    qfree();
    v28 = *(_DWORD *)(a1 + 524);
    v66 = 0;
    v67 = 0;
    sub_63580(&v66, v28, 6);
    v68 = 0;
    v69 = 0;
    sub_63980((__int64 *)(a1 + 184), &v66);
    sub_313730(a1 + 200, &v68);
    if ( v68 )
    {
      *(_QWORD *)&v69 = 0;
      qfree();
    }
    qfree();
    if ( *(_DWORD *)(a1 + 84) != 8 )
      goto LABEL_43;
    if ( v64 == 2 )
    {
      v52 = *(_DWORD *)(a1 + 380);
      v66 = 0;
      v67 = 0;
      sub_63580(&v66, v52, v19);
      v68 = 0;
      v69 = 0;
      sub_63980((__int64 *)(a1 + 184), &v66);
      sub_313730(a1 + 200, &v68);
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree();
      }
      qfree();
      v53 = *(_DWORD *)(a1 + 428);
      v62 = 2 * v19;
      v66 = 0;
      v67 = 0;
      sub_63580(&v66, v53, 2 * v19);
      v68 = 0;
      v69 = 0;
      sub_63980((__int64 *)(a1 + 184), &v66);
      sub_313730(a1 + 200, &v68);
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree();
      }
      qfree();
      v54 = *(_DWORD *)(a1 + 388);
      v66 = 0;
      v67 = 0;
      sub_63580(&v66, v54, v62);
      v68 = 0;
      v63.m128i_i64[0] = a1 + 264;
      v69 = 0;
      sub_63980((__int64 *)(a1 + 264), &v66);
      v65 = a1 + 280;
      sub_313730(a1 + 280, &v68);
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree();
      }
      qfree();
      v55 = *(_DWORD *)(a1 + 404);
      v66 = 0;
      v67 = 0;
      sub_63580(&v66, v55, v62);
      v68 = 0;
      v69 = 0;
      sub_63980((__int64 *)v63.m128i_i64[0], &v66);
      sub_313730(v65, &v68);
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree();
      }
      qfree();
      v56 = *(_DWORD *)(a1 + 412);
      v66 = 0;
      v67 = 0;
      sub_63580(&v66, v56, 4 * v19);
      v68 = 0;
      v69 = 0;
      sub_63980((__int64 *)v63.m128i_i64[0], &v66);
      sub_313730(v65, &v68);
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree();
      }
      qfree();
      v57 = *(_DWORD *)(a1 + 560);
      v66 = 0;
      v67 = 0;
      sub_63580(&v66, v57, 240);
      v68 = 0;
      v69 = 0;
      sub_63980((__int64 *)(a1 + 184), &v66);
      sub_313730(a1 + 200, &v68);
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree();
      }
      qfree();
      v58 = *(_DWORD *)(a1 + 620);
      v66 = 0;
      v67 = 0;
      sub_63580(&v66, v58, 16);
      v68 = 0;
      v63.m128i_i64[0] = a1 + 224;
      v69 = 0;
      sub_63980((__int64 *)(a1 + 224), &v66);
      v65 = a1 + 240;
      sub_313730(a1 + 240, &v68);
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree();
      }
    }
    else
    {
      v42 = *(_DWORD *)(a1 + 412);
      v66 = 0;
      v67 = 0;
      sub_63580(&v66, v42, 4 * v19);
      v68 = 0;
      v69 = 0;
      sub_63980((__int64 *)(a1 + 184), &v66);
      sub_313730(a1 + 200, &v68);
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree();
      }
      qfree();
      v43 = *(_DWORD *)(a1 + 576);
      v66 = 0;
      v67 = 0;
      sub_63580(&v66, v43, 32);
      v68 = 0;
      v69 = 0;
      sub_63980((__int64 *)(a1 + 184), &v66);
      sub_313730(a1 + 200, &v68);
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree();
      }
      qfree();
      v44 = *(_DWORD *)(a1 + 428);
      v62 = 2 * v19;
      v66 = 0;
      v67 = 0;
      sub_63580(&v66, v44, 2 * v19);
      v68 = 0;
      v63.m128i_i64[0] = a1 + 224;
      v69 = 0;
      sub_63980((__int64 *)(a1 + 224), &v66);
      v65 = a1 + 240;
      sub_313730(a1 + 240, &v68);
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree();
      }
      qfree();
      if ( (getinf() & 0xF) != 1 )
        goto LABEL_95;
      v60 = *(_DWORD *)(a1 + 584);
      v66 = 0;
      v67 = 0;
      sub_63580(&v66, v60, 160);
      v68 = 0;
      v69 = 0;
      sub_63980((__int64 *)v63.m128i_i64[0], &v66);
      sub_313730(v65, &v68);
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree();
      }
    }
    qfree();
LABEL_95:
    v45 = *(_DWORD *)(a1 + 436);
    v66 = 0;
    v67 = 0;
    sub_63580(&v66, v45, v62);
    v68 = 0;
    v69 = 0;
    sub_63980((__int64 *)v63.m128i_i64[0], &v66);
    sub_313730(v65, &v68);
    if ( v68 )
    {
      *(_QWORD *)&v69 = 0;
      qfree();
    }
    qfree();
LABEL_43:
    v61 = (__int64 *)(a1 + 264);
    sub_63980((__int64 *)(a1 + 264), (__int64 *)(a1 + 184));
    sub_313730(a1 + 280, a1 + 200);
    v29 = *(_DWORD *)(a1 + 380);
    v66 = 0;
    v67 = 0;
    sub_63580(&v66, v29, v19);
    v68 = 0;
    v69 = 0;
    sub_63980((__int64 *)(a1 + 264), &v66);
    sub_313730(a1 + 280, &v68);
    if ( v68 )
    {
      *(_QWORD *)&v69 = 0;
      qfree();
    }
    qfree();
    goto LABEL_46;
  }
  v49 = 0;
  v61 = (__int64 *)(a1 + 264);
  sub_63FD0((__int64 *)(a1 + 264), (__int64 *)(a1 + 184));
  v50 = *(_QWORD *)(a1 + 208);
  v51 = _mm_unpacklo_epi64((__m128i)v50, (__m128i)v50);
  if ( v50 )
  {
    v63 = v51;
    v59 = 16 * v50;
    v49 = (void *)qalloc_or_throw();
    memcpy(v49, *(const void **)(a1 + 200), v59);
    v51 = _mm_load_si128(&v63);
  }
  if ( *(_QWORD *)(a1 + 280) )
  {
    *(_QWORD *)(a1 + 288) = 0;
    v63 = v51;
    qfree();
    v51 = _mm_load_si128(&v63);
  }
  *(_QWORD *)(a1 + 280) = v49;
  *(__m128i *)(a1 + 288) = v51;
LABEL_46:
  v66 = 0;
  v67 = 0;
  sub_63580(&v66, 8, v19);
  v68 = 0;
  v69 = 0;
  sub_63980(v61, &v66);
  sub_313730(a1 + 280, &v68);
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree();
  }
  qfree();
  v66 = 0;
  v67 = 0;
  v30 = xmmword_4ED7D0;
  v31 = *((_QWORD *)&xmmword_4ED7D0 + 1);
  v69 = 0;
  v68 = 0;
  if ( (__int64)xmmword_4ED7D0 + v31 - 1 >= (unsigned __int64)xmmword_4ED7D0 )
  {
    v63.m128i_i64[0] = v31;
    v68 = qvector_reserve();
    *(__m128i *)(v68 + 16 * v69) = _mm_unpacklo_epi64((__m128i)v30, (__m128i)v63.m128i_u64[0]);
    *(_QWORD *)&v69 = v69 + 1;
  }
  sub_63980(v61, &v66);
  sub_313730(a1 + 280, &v68);
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree();
  }
  qfree();
  if ( v64 != 2 )
  {
    if ( (getinf() & 0xF) != 6 || !(unsigned __int8)getinf_flag() )
    {
      v46 = *(_DWORD *)(a1 + 408);
      v66 = 0;
      v67 = 0;
      sub_63580(&v66, v46, v19);
      v68 = 0;
      v69 = 0;
      sub_63980((__int64 *)(a1 + 224), &v66);
      sub_313730(a1 + 240, &v68);
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree();
      }
      qfree();
      v47 = *(_DWORD *)(a1 + 404);
      v66 = 0;
      v67 = 0;
      sub_63580(&v66, v47, v19);
      v68 = 0;
      v69 = 0;
      sub_63980((__int64 *)(a1 + 224), &v66);
      sub_313730(a1 + 240, &v68);
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree();
      }
      qfree();
    }
    v48 = *(_DWORD *)(a1 + 396);
    v66 = 0;
    v67 = 0;
    sub_63580(&v66, v48, v19);
    v68 = 0;
    v69 = 0;
    sub_63980((__int64 *)(a1 + 224), &v66);
    sub_313730(a1 + 240, &v68);
    if ( v68 )
    {
      *(_QWORD *)&v69 = 0;
      qfree();
    }
    qfree();
  }
  v32 = *(_DWORD *)(a1 + 400);
  v66 = 0;
  v67 = 0;
  sub_63580(&v66, v32, v19);
  v68 = 0;
  v69 = 0;
  sub_63980((__int64 *)(a1 + 224), &v66);
  sub_313730(a1 + 240, &v68);
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree();
  }
  qfree();
  v33 = *(_DWORD *)(a1 + 60);
  v66 = 0;
  v67 = 0;
  sub_63580(&v66, 8, v33 - 8);
  v68 = 0;
  v69 = 0;
  sub_63980((__int64 *)(a1 + 144), &v66);
  sub_313730(a1 + 160, &v68);
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree();
  }
  qfree();
  v34 = *(_DWORD *)(a1 + 400);
  v35 = *(_DWORD *)(a1 + 444);
  v66 = 0;
  v67 = 0;
  sub_63580(&v66, v34, v35 - v34);
  v68 = 0;
  v69 = 0;
  sub_63980((__int64 *)(a1 + 144), &v66);
  sub_313730(a1 + 160, &v68);
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree();
  }
  qfree();
  v36 = *(_DWORD *)(a1 + 448);
  v37 = *(_DWORD *)(a1 + 492);
  v66 = 0;
  v67 = 0;
  sub_63580(&v66, v37, 8 * v36);
  v68 = 0;
  v69 = 0;
  sub_63980((__int64 *)(a1 + 144), &v66);
  sub_313730(a1 + 160, &v68);
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree();
  }
  qfree();
  v38 = *(_DWORD *)(a1 + 528);
  v39 = *(_DWORD *)(a1 + 708);
  v66 = 0;
  v67 = 0;
  sub_63580(&v66, v38, v39 - v38);
  v68 = 0;
  v69 = 0;
  sub_63980((__int64 *)(a1 + 144), &v66);
  sub_313730(a1 + 160, &v68);
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree();
  }
  qfree();
  *(__m128i *)(a1 + 3760) = _mm_loadu_si128((const __m128i *)(a1 + 452));
  return v70 - __readfsqword(0x28u);
}
