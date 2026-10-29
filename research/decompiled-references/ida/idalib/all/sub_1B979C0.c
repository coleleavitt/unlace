__int64 __fastcall sub_1B979C0(__int64 *a1, unsigned __int64 a2, void *a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int32 v10; // edx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __m128i v13; // xmm0
  __m128 v14; // xmm0
  const __m128i *v15; // rax
  __int64 v16; // r15
  __m128 v17; // xmm1
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // edx
  unsigned __int64 v22; // rax
  char v23; // cl
  __int64 v24; // rax
  __m128i *v25; // rdx
  double v26; // r10
  __int64 v27; // rdx
  bool v28; // zf
  __int64 v29; // rdx
  char v30; // dl
  __int64 v31; // r13
  unsigned int v32; // eax
  __int32 v33; // rax^4
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rbp
  __int64 v41; // rax
  __int64 v42; // r13
  unsigned __int64 v43; // rax
  __int32 v44; // ecx
  unsigned __int64 v45; // r14
  unsigned __int64 v46; // rdx
  char v47; // si
  __int64 v48; // r13
  __int64 v49; // r13
  unsigned __int64 v50; // r14
  __int32 v51; // eax
  __int64 v52; // r13
  __int64 v53; // r13
  unsigned __int64 v54; // r14
  __int32 v55; // eax
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rdi
  __int64 *v59; // rax
  double v60; // rsi
  unsigned __int64 v61; // r14
  __int64 v62; // rsi
  __int64 v63; // rdx
  unsigned __int64 v64; // r13
  unsigned int v65; // eax
  unsigned __int64 v66; // rax
  __int64 v67; // rbp
  unsigned int v68; // eax
  __int64 v69; // rax
  __m128i v70; // [rsp+0h] [rbp-1B8h] BYREF
  void *s2; // [rsp+10h] [rbp-1A8h] BYREF
  double v72[2]; // [rsp+18h] [rbp-1A0h] BYREF
  void **p_ptr; // [rsp+28h] [rbp-190h]
  __m128 *v74; // [rsp+30h] [rbp-188h]
  unsigned __int64 v75; // [rsp+38h] [rbp-180h]
  __int64 v76; // [rsp+40h] [rbp-178h] BYREF
  __int64 v77; // [rsp+48h] [rbp-170h] BYREF
  __m128 v78; // [rsp+50h] [rbp-168h] BYREF
  __m128 v79; // [rsp+60h] [rbp-158h] BYREF
  __int128 v80; // [rsp+70h] [rbp-148h] BYREF
  void *s1[2]; // [rsp+80h] [rbp-138h]
  __int128 v82; // [rsp+90h] [rbp-128h]
  void *ptr; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v84; // [rsp+A8h] [rbp-110h]
  _BYTE v85[64]; // [rsp+B0h] [rbp-108h] BYREF
  __m128i si128; // [rsp+F0h] [rbp-C8h] BYREF
  int v87; // [rsp+100h] [rbp-B8h]
  int v88; // [rsp+104h] [rbp-B4h]

  v75 = a2;
  p_ptr = &ptr;
  s2 = a3;
  ptr = v85;
  v84 = 0x400000000LL;
  if ( !a2 )
  {
    v10 = 0;
    v80 = 0;
    *(_OWORD *)s1 = 0;
    v82 = 0;
    goto LABEL_32;
  }
  v8 = a2;
  v9 = 4;
  v10 = 0;
  while ( 1 )
  {
    v70.m128i_i64[0] = v8;
    v11 = v10;
    v12 = v10 + 1LL;
    v13 = (__m128i)_mm_loadh_ps((const double *)&s2);
    if ( v12 > v9 )
    {
      v70 = v13;
      sub_2237220(p_ptr, v85, v12, 16);
      *((__m128i *)ptr + (unsigned int)v84) = _mm_load_si128(&v70);
    }
    else
    {
      *((__m128i *)ptr + v11) = v13;
    }
    v10 = v84 + 1;
    LODWORD(v84) = v84 + 1;
    v8 = *(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v8 )
      break;
    v9 = HIDWORD(v84);
  }
  v14.m128_u64[0] = 0;
  v80 = 0;
  *(_OWORD *)s1 = 0;
  v82 = 0;
  if ( !v10 )
  {
LABEL_32:
    v70.m128i_i32[0] = v10;
    v34 = sub_E904D0(v75);
    v38 = v70.m128i_u32[0];
    if ( v34 == v70.m128i_i32[0] && !memcmp(s1[0], s2, LODWORD(s1[1])) )
      v39 = *((_QWORD *)&v80 + 1);
    else
      v39 = sub_15AB9E0((__int64)&v80, *(_QWORD **)(*a1 + 248), v38, v35, v36, v37);
    if ( HIDWORD(s1[1]) )
      goto LABEL_54;
    goto LABEL_36;
  }
  v70.m128i_i64[0] = (__int64)&v80;
  v74 = &v79;
  while ( 2 )
  {
    v15 = (const __m128i *)((char *)ptr + 16 * v10 - 16);
    v16 = v15->m128i_i64[0];
    v17 = (__m128)_mm_loadu_si128(v15);
    LODWORD(v84) = v10 - 1;
    v78 = v17;
    switch ( sub_E90000(v16) )
    {
      case 0LL:
        *(_QWORD *)&v72[0] = sub_E90530((__int64 *)&v78) >> 32;
        v56 = sub_E90530((__int64 *)&v78);
        v57 = 0;
        if ( (*(_BYTE *)(v16 + 8) & 6) == 0 )
          v57 = *(_QWORD *)(v16 + 16);
        v87 = v56;
        si128.m128i_i64[1] = v57;
        si128.m128i_i64[0] = a4;
        v58 = *a1;
        v88 = LODWORD(v72[0]);
        if ( !(unsigned __int8)sub_16A7490(v58, 0, (__int64)&si128, 0, v70.m128i_i64[0], a5, 0, 0, 0) )
          goto LABEL_30;
        goto LABEL_53;
      case 1LL:
        v48 = sub_E90060(v16);
        sub_E90530((__int64 *)&v78);
        v49 = sub_1B04070((__int64)a1, v48);
        v50 = sub_E90530((__int64 *)&v78) >> 32;
        v51 = sub_E90530((__int64 *)&v78);
        sub_15AB7E0((__int32 *)v70.m128i_i64[0], *(_QWORD **)(*a1 + 248), v49, v51, v50);
        goto LABEL_30;
      case 2LL:
        v52 = sub_E90090(v16);
        sub_E90530((__int64 *)&v78);
        v53 = sub_1B04070((__int64)a1, v52);
        v54 = sub_E90530((__int64 *)&v78) >> 32;
        v55 = sub_E90530((__int64 *)&v78);
        sub_15AB810((__int32 *)v70.m128i_i64[0], *(_QWORD **)(*a1 + 248), v53, v55, v54);
        goto LABEL_30;
      case 3LL:
        v24 = sub_E90670(&v78);
        v26 = *(double *)&v24;
        if ( (v24 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          v59 = sub_1B97550(a1, v24, v25, a4, a5, v70.m128i_i64[0], *(double *)v14.m128_u64, v17);
          if ( !v59 )
            goto LABEL_53;
          *(_QWORD *)&v60 = v59 + 1;
          v24 = *v59;
          v72[0] = v60;
          v26 = *(double *)&v24;
        }
        else
        {
          *(_QWORD *)&v72[0] = v25;
        }
        v72[1] = v26;
        v14 = _mm_loadh_ps(v72);
        v79 = v14;
        if ( v26 == 0.0 )
          goto LABEL_53;
        v76 = v24;
        v27 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL);
        v28 = (*(_BYTE *)(v27 + 17) & 4) == 0;
        v29 = *(_QWORD *)(v27 + 8);
        if ( !v28 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 47 )
            goto LABEL_27;
          v31 = *a1;
          goto LABEL_26;
        }
        v30 = *(_BYTE *)(*(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
        if ( v30 == 48 )
        {
LABEL_27:
          if ( (LOBYTE(v26) & 0xF) == 0 && *(_BYTE *)(*(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 24 )
          {
            v61 = v79.m128_u64[1];
            if ( v26 != 0.0 )
            {
              v62 = *(_QWORD *)(*(_QWORD *)&v26 + 32LL);
              if ( (unsigned __int8)(*(_WORD *)(*(_QWORD *)&v26 + 18LL) >> 3) != 6 || (v63 = 0, v62) )
                v63 = *(_QWORD *)(v79.m128_u64[1] + 8);
              v72[0] = v26;
              v64 = v79.m128_u64[1];
              sub_15AB8B0(v70.m128i_i64[0], v62, v63);
              if ( (unsigned __int8)(*(_WORD *)(*(_QWORD *)&v72[0] + 18LL) >> 3) != 6
                || *(_QWORD *)(*(_QWORD *)&v72[0] + 32LL) )
              {
                v64 = v61 + 16;
              }
              v65 = sub_F6C520(*(_QWORD *)(*(_QWORD *)&v72[0] + 40LL));
              v79.m128_u64[0] = *(_QWORD *)(*(_QWORD *)&v72[0] + 40LL);
              v79.m128_u64[1] = v65 * ((v64 != 0) + (v64 - (v64 != 0)) / v65);
            }
          }
          v33 = sub_E90530((__int64 *)&v78) >> 32;
          sub_15AB760((__m128i **)v70.m128i_i64[0], *(_QWORD **)(*a1 + 248), v79.m128_i64[0], v79.m128_i64[1], v33, v14);
LABEL_30:
          v10 = v84;
          a4 = 0;
          a5 = 0;
          if ( !(_DWORD)v84 )
          {
            v10 = (unsigned __int32)s1[1];
            goto LABEL_32;
          }
          continue;
        }
        v31 = *a1;
        if ( (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 1LL) & 0x10) != 0 && v30 == 47 )
        {
LABEL_26:
          v32 = sub_F6CCB0((__int64 *)v74, v14);
          sub_168B9F0((__int64)&si128, (__int64 *)(v31 + 8), v32, 0x1A6Eu, 0);
          sub_15F7200(&si128);
          v26 = *(double *)v79.m128_u64;
          v24 = v79.m128_u64[0];
          goto LABEL_27;
        }
        v66 = sub_B8F2F0((__int64 *)&v79);
        if ( !v66 || *(char *)(*(_QWORD *)(v66 + 32) + 28LL) >= 0 )
        {
          v67 = *a1;
          v68 = sub_F6CCB0((__int64 *)&v79, v14);
          sub_168B9F0((__int64)&si128, (__int64 *)(v67 + 8), v68, 0x10A1u, 0);
          v69 = sub_1605D30((__int64)&si128, &v76);
          v77 = v80;
          sub_1587DB0(v69, &v77);
          sub_15F7200(&si128);
        }
LABEL_53:
        v39 = 0;
        if ( HIDWORD(s1[1]) )
LABEL_54:
          free(s1[0]);
LABEL_36:
        if ( ptr != p_ptr + 2 )
          free(ptr);
        return v39;
      case 4LL:
        v21 = 0;
        if ( v78.m128_u64[0] )
        {
          si128 = _mm_load_si128((const __m128i *)&v78);
          v22 = *(_QWORD *)(v78.m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v22 )
          {
            v23 = 0;
            v72[0] = *(double *)&si128.m128i_i64[1];
            v14 = _mm_loadh_ps(v72);
            si128 = (__m128i)v14;
            while ( (*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v23 = 1;
              v22 = *(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            }
            if ( v23 )
              si128.m128i_i64[0] = v22;
          }
          v21 = sub_E90530(si128.m128i_i64);
        }
        sub_15AB840((int *)v70.m128i_i64[0], *(_QWORD **)(*a1 + 248), v21, v18, v19, v20);
        goto LABEL_30;
      case 5LL:
        v41 = sub_E900C0(v16);
        v42 = sub_1B04070((__int64)a1, v41);
        v43 = sub_E90530((__int64 *)&v78);
        v44 = 0;
        v45 = HIDWORD(v43);
        if ( v78.m128_u64[0] )
        {
          si128 = _mm_load_si128((const __m128i *)&v78);
          v46 = *(_QWORD *)(v78.m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v46 )
          {
            v47 = 0;
            v72[0] = *(double *)&si128.m128i_i64[1];
            v14 = _mm_loadh_ps(v72);
            si128 = (__m128i)v14;
            while ( (*(_QWORD *)(v46 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v47 = 1;
              v46 = *(_QWORD *)(v46 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            }
            if ( v47 )
              si128.m128i_i64[0] = v46;
          }
          v44 = sub_E90530(si128.m128i_i64);
        }
        sub_15AB860((__int32 *)v70.m128i_i64[0], *(_QWORD **)(*a1 + 248), v42, v44, v45);
        goto LABEL_30;
      default:
        goto LABEL_30;
    }
  }
}
