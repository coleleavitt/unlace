__int64 __fastcall sub_1BB75E0(__int64 *a1, unsigned __int64 a2, void *a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  __m128i v11; // xmm0
  __m128 *v12; // rax
  __m128 v13; // xmm0
  const __m128i *v14; // rdx
  __int64 v15; // r15
  __m128 v16; // xmm1
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // edx
  unsigned __int64 v21; // rax
  char v22; // cl
  __int64 v23; // rax
  __m128i *v24; // rdx
  double v25; // r10
  __int64 v26; // rdx
  bool v27; // zf
  __int64 v28; // rdx
  char v29; // dl
  __int64 v30; // r13
  unsigned int v31; // eax
  __int32 v32; // rax^4
  int v33; // ebx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rbp
  __int64 v40; // rax
  __int64 v41; // r13
  unsigned __int64 v42; // rax
  __int32 v43; // ecx
  unsigned __int64 v44; // r14
  unsigned __int64 v45; // rdx
  char v46; // si
  __int64 v47; // r13
  __int64 v48; // r13
  unsigned __int64 v49; // r14
  __int32 v50; // eax
  __int64 v51; // r13
  __int64 v52; // r13
  unsigned __int64 v53; // r14
  __int32 v54; // eax
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rdi
  __int64 *v58; // rax
  double v59; // rsi
  unsigned __int64 v60; // r14
  __int64 v61; // rsi
  __int64 v62; // rdx
  unsigned __int64 v63; // r13
  unsigned int v64; // eax
  unsigned __int64 v65; // rax
  __int64 v66; // rbp
  unsigned int v67; // eax
  __int64 v68; // rax
  __m128i v69; // [rsp+0h] [rbp-1B8h] BYREF
  void *s2; // [rsp+10h] [rbp-1A8h] BYREF
  double v71[2]; // [rsp+18h] [rbp-1A0h] BYREF
  void **p_ptr; // [rsp+28h] [rbp-190h]
  unsigned __int64 v73; // [rsp+30h] [rbp-188h]
  __m128 *v74; // [rsp+38h] [rbp-180h]
  __int64 v75; // [rsp+40h] [rbp-178h] BYREF
  __int64 v76; // [rsp+48h] [rbp-170h] BYREF
  __m128 v77; // [rsp+50h] [rbp-168h] BYREF
  __m128 v78; // [rsp+60h] [rbp-158h] BYREF
  __int128 v79; // [rsp+70h] [rbp-148h] BYREF
  void *s1[2]; // [rsp+80h] [rbp-138h]
  __int128 v81; // [rsp+90h] [rbp-128h]
  void *ptr; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v83; // [rsp+A8h] [rbp-110h]
  _BYTE v84[64]; // [rsp+B0h] [rbp-108h] BYREF
  __m128i si128; // [rsp+F0h] [rbp-C8h] BYREF
  int v86; // [rsp+100h] [rbp-B8h]
  int v87; // [rsp+104h] [rbp-B4h]

  v73 = a2;
  p_ptr = &ptr;
  s2 = a3;
  ptr = v84;
  v83 = 0x400000000LL;
  if ( !a2 )
  {
    v79 = 0;
    *(_OWORD *)s1 = 0;
    v81 = 0;
    goto LABEL_71;
  }
  v8 = a2;
  v9 = 4;
  v10 = 0;
  while ( 1 )
  {
    v69.m128i_i64[0] = v8;
    v11 = (__m128i)_mm_loadh_ps((const double *)&s2);
    if ( v10 + 1 > v9 )
    {
      v69 = v11;
      sub_2237220(p_ptr, v84, v10 + 1, 16);
      v11 = _mm_load_si128(&v69);
      v12 = (__m128 *)((char *)ptr + 16 * (unsigned int)v83);
    }
    else
    {
      v12 = (__m128 *)((char *)ptr + 16 * v10);
    }
    *v12 = (__m128)v11;
    v10 = (unsigned int)(v83 + 1);
    LODWORD(v83) = v83 + 1;
    v8 = *(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v8 )
      break;
    v9 = HIDWORD(v83);
  }
  v13.m128_u64[0] = 0;
  v79 = 0;
  *(_OWORD *)s1 = 0;
  v81 = 0;
  if ( !(_DWORD)v10 )
    goto LABEL_32;
  v69.m128i_i64[0] = (__int64)&v79;
  v74 = &v78;
  while ( 2 )
  {
    v14 = (const __m128i *)((char *)ptr + 16 * (unsigned int)v10 - 16);
    v15 = v14->m128i_i64[0];
    v16 = (__m128)_mm_loadu_si128(v14);
    LODWORD(v83) = v10 - 1;
    v77 = v16;
    switch ( sub_E90000(v15) )
    {
      case 0LL:
        *(_QWORD *)&v71[0] = sub_E90530((__int64 *)&v77) >> 32;
        v55 = sub_E90530((__int64 *)&v77);
        v56 = 0;
        if ( (*(_BYTE *)(v15 + 8) & 6) == 0 )
          v56 = *(_QWORD *)(v15 + 16);
        v86 = v55;
        si128.m128i_i64[1] = v56;
        si128.m128i_i64[0] = a4;
        v57 = *a1;
        v87 = LODWORD(v71[0]);
        if ( !(unsigned __int8)sub_16A7490(v57, 0, (__int64)&si128, 0, v69.m128i_i64[0], a5, 0, 0, 0) )
          goto LABEL_30;
        goto LABEL_53;
      case 1LL:
        v47 = sub_E90060(v15);
        sub_E90530((__int64 *)&v77);
        v48 = sub_1B03C10((__int64)a1, v47);
        v49 = sub_E90530((__int64 *)&v77) >> 32;
        v50 = sub_E90530((__int64 *)&v77);
        sub_15AB7E0((__int32 *)v69.m128i_i64[0], *(_QWORD **)(*a1 + 248), v48, v50, v49);
        goto LABEL_30;
      case 2LL:
        v51 = sub_E90090(v15);
        sub_E90530((__int64 *)&v77);
        v52 = sub_1B03C10((__int64)a1, v51);
        v53 = sub_E90530((__int64 *)&v77) >> 32;
        v54 = sub_E90530((__int64 *)&v77);
        sub_15AB810((__int32 *)v69.m128i_i64[0], *(_QWORD **)(*a1 + 248), v52, v54, v53);
        goto LABEL_30;
      case 3LL:
        v23 = sub_E90670(&v77);
        v25 = *(double *)&v23;
        if ( (v23 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          v58 = sub_1BB7170(a1, v23, v24, a4, a5, v69.m128i_i64[0], *(double *)v13.m128_u64, v16);
          if ( !v58 )
            goto LABEL_53;
          *(_QWORD *)&v59 = v58 + 1;
          v23 = *v58;
          v71[0] = v59;
          v25 = *(double *)&v23;
        }
        else
        {
          *(_QWORD *)&v71[0] = v24;
        }
        v71[1] = v25;
        v13 = _mm_loadh_ps(v71);
        v78 = v13;
        if ( v25 == 0.0 )
          goto LABEL_53;
        v75 = v23;
        v26 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL);
        v27 = (*(_BYTE *)(v26 + 17) & 4) == 0;
        v28 = *(_QWORD *)(v26 + 8);
        if ( v27 )
        {
          v29 = *(_BYTE *)(*(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
          if ( v29 == 48 )
            goto LABEL_27;
          v30 = *a1;
          if ( (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 1LL) & 0x10) == 0 || v29 != 47 )
          {
            v65 = sub_B8F2F0((__int64 *)&v78);
            if ( !v65 || *(char *)(*(_QWORD *)(v65 + 32) + 28LL) >= 0 )
            {
              v66 = *a1;
              v67 = sub_F6CCB0((__int64 *)&v78, v13);
              sub_168B9F0((__int64)&si128, (__int64 *)(v66 + 8), v67, 0x10A1u, 0);
              v68 = sub_1605D30((__int64)&si128, &v75);
              v76 = v79;
              sub_1587DB0(v68, &v76);
              sub_15F7200(&si128);
            }
LABEL_53:
            v38 = 0;
            if ( !HIDWORD(s1[1]) )
              goto LABEL_36;
LABEL_54:
            free(s1[0]);
            goto LABEL_36;
          }
          goto LABEL_26;
        }
        if ( *(_BYTE *)(*(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 47 )
        {
          v30 = *a1;
LABEL_26:
          v31 = sub_F6CCB0((__int64 *)v74, v13);
          sub_168B9F0((__int64)&si128, (__int64 *)(v30 + 8), v31, 0x1A6Eu, 0);
          sub_15F7200(&si128);
          v25 = *(double *)v78.m128_u64;
          v23 = v78.m128_u64[0];
        }
LABEL_27:
        if ( (LOBYTE(v25) & 0xF) == 0 && *(_BYTE *)(*(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 24 )
        {
          v60 = v78.m128_u64[1];
          if ( v25 != 0.0 )
          {
            v61 = *(_QWORD *)(*(_QWORD *)&v25 + 32LL);
            if ( (unsigned __int8)(*(_WORD *)(*(_QWORD *)&v25 + 18LL) >> 3) != 6 || (v62 = 0, v61) )
              v62 = *(_QWORD *)(v78.m128_u64[1] + 8);
            v71[0] = v25;
            v63 = v78.m128_u64[1];
            sub_15AB8B0(v69.m128i_i64[0], v61, v62);
            if ( (unsigned __int8)(*(_WORD *)(*(_QWORD *)&v71[0] + 18LL) >> 3) != 6
              || *(_QWORD *)(*(_QWORD *)&v71[0] + 32LL) )
            {
              v63 = v60 + 16;
            }
            v64 = sub_F6C520(*(_QWORD *)(*(_QWORD *)&v71[0] + 40LL));
            v78.m128_u64[0] = *(_QWORD *)(*(_QWORD *)&v71[0] + 40LL);
            v78.m128_u64[1] = v64 * ((v63 != 0) + (v63 - (v63 != 0)) / v64);
          }
        }
        v32 = sub_E90530((__int64 *)&v77) >> 32;
        sub_15AB760((__m128i **)v69.m128i_i64[0], *(_QWORD **)(*a1 + 248), v78.m128_i64[0], v78.m128_i64[1], v32, v13);
LABEL_30:
        LODWORD(v10) = v83;
        a4 = 0;
        a5 = 0;
        if ( (_DWORD)v83 )
          continue;
        if ( v73 != *((_QWORD *)&v79 + 1) )
          goto LABEL_32;
LABEL_71:
        if ( !*(_DWORD *)(*a1 + 12632) )
        {
          v38 = v73;
          goto LABEL_35;
        }
LABEL_32:
        v33 = (int)s1[1];
        if ( (unsigned int)sub_E904D0(v73) == v33 && !memcmp(s1[0], s2, LODWORD(s1[1])) )
          v38 = *((_QWORD *)&v79 + 1);
        else
          v38 = sub_15AB9E0((__int64)&v79, *(_QWORD **)(*a1 + 248), v34, v35, v36, v37);
LABEL_35:
        if ( HIDWORD(s1[1]) )
          goto LABEL_54;
LABEL_36:
        if ( ptr != p_ptr + 2 )
          free(ptr);
        return v38;
      case 4LL:
        v20 = 0;
        if ( v77.m128_u64[0] )
        {
          si128 = _mm_load_si128((const __m128i *)&v77);
          v21 = *(_QWORD *)(v77.m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v21 )
          {
            v22 = 0;
            v71[0] = *(double *)&si128.m128i_i64[1];
            v13 = _mm_loadh_ps(v71);
            si128 = (__m128i)v13;
            while ( (*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v22 = 1;
              v21 = *(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            }
            if ( v22 )
              si128.m128i_i64[0] = v21;
          }
          v20 = sub_E90530(si128.m128i_i64);
        }
        sub_15AB840((int *)v69.m128i_i64[0], *(_QWORD **)(*a1 + 248), v20, v17, v18, v19);
        goto LABEL_30;
      case 5LL:
        v40 = sub_E900C0(v15);
        v41 = sub_1B03C10((__int64)a1, v40);
        v42 = sub_E90530((__int64 *)&v77);
        v43 = 0;
        v44 = HIDWORD(v42);
        if ( v77.m128_u64[0] )
        {
          si128 = _mm_load_si128((const __m128i *)&v77);
          v45 = *(_QWORD *)(v77.m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v45 )
          {
            v46 = 0;
            v71[0] = *(double *)&si128.m128i_i64[1];
            v13 = _mm_loadh_ps(v71);
            si128 = (__m128i)v13;
            while ( (*(_QWORD *)(v45 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v46 = 1;
              v45 = *(_QWORD *)(v45 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            }
            if ( v46 )
              si128.m128i_i64[0] = v45;
          }
          v43 = sub_E90530(si128.m128i_i64);
        }
        sub_15AB860((__int32 *)v69.m128i_i64[0], *(_QWORD **)(*a1 + 248), v41, v43, v44);
        goto LABEL_30;
      default:
        goto LABEL_30;
    }
  }
}
