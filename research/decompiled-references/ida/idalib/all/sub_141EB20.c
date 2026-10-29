unsigned __int64 __fastcall sub_141EB20(
        __int64 a1,
        int a2,
        void *a3,
        size_t a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __m128i *a9,
        __int64 *a10,
        _QWORD *a11,
        __int64 *a12,
        _BYTE *a13,
        char *a14,
        unsigned __int8 a15,
        int a16,
        int a17)
{
  __int64 v17; // r12
  __m128i *v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // r15
  _BYTE *v23; // rax
  bool v24; // zf
  unsigned int v25; // edx
  __int64 v26; // rcx
  __int64 v27; // r8
  __m128i v28; // xmm2
  void *v29; // rax
  __int64 v31; // rdi
  unsigned __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rdx
  unsigned __int64 v35; // r9
  __int64 v36; // rdx
  unsigned __int8 v37; // r11
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rbx
  __int64 v41; // rax
  __int64 v42; // rdi
  char v43; // al
  __int64 v44; // rbx
  __int64 v45; // r13
  char *i; // rbp
  __int64 v47; // rax
  __int64 v48; // rdi
  char v49; // al
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  unsigned __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdi
  int v58; // r13d
  __int64 v59; // rax
  __int64 v60; // r14
  __int64 v61; // rax
  __int64 v62; // r13
  unsigned __int64 v63; // rdx
  _QWORD *v64; // rax
  int v65; // esi
  __int64 v66; // r13
  __int64 v67; // rax
  __int64 v68; // r13
  __int64 v69; // rax
  unsigned __int64 v70; // rdx
  _QWORD *v71; // rax
  __int64 v72; // r13
  size_t v73; // rax
  __int64 v74; // r13
  __int64 v75; // rax
  unsigned __int64 v76; // rdx
  __m128i v77; // xmm0
  __int64 v78; // r14
  __int64 v79; // rbp
  unsigned __int8 v80; // r13
  __int64 v81; // rax
  __int64 v82; // rdi
  char v83; // al
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 *v86; // r8
  unsigned __int64 v87; // rdx
  __int64 *v88; // rdx
  __int64 v89; // rax
  _QWORD *v90; // r14
  _QWORD *v91; // rax
  __int64 v92; // rdi
  _DWORD *v93; // rax
  _DWORD *v94; // rdx
  __m128i v95; // [rsp+0h] [rbp-1D8h] BYREF
  size_t v96; // [rsp+18h] [rbp-1C0h]
  __m128i *v97; // [rsp+20h] [rbp-1B8h]
  __int64 v98; // [rsp+28h] [rbp-1B0h]
  int v99; // [rsp+30h] [rbp-1A8h]
  unsigned int v100; // [rsp+34h] [rbp-1A4h]
  __int64 v101; // [rsp+38h] [rbp-1A0h]
  __int64 v102; // [rsp+40h] [rbp-198h]
  void *v103; // [rsp+48h] [rbp-190h]
  void **p_ptr; // [rsp+50h] [rbp-188h]
  int v105; // [rsp+58h] [rbp-180h]
  int v106; // [rsp+5Ch] [rbp-17Ch]
  _QWORD *v107; // [rsp+68h] [rbp-170h] BYREF
  _QWORD v108[2]; // [rsp+70h] [rbp-168h] BYREF
  __m128i v109; // [rsp+80h] [rbp-158h] BYREF
  void *ptr; // [rsp+90h] [rbp-148h] BYREF
  __int64 v111; // [rsp+98h] [rbp-140h]
  _BYTE v112[312]; // [rsp+A0h] [rbp-138h] BYREF
  __m128i *v113; // [rsp+1F0h] [rbp+18h]

  v17 = a1;
  v103 = a3;
  v100 = a2;
  v105 = a16;
  v96 = a4;
  v106 = a17;
  v101 = a6;
  v102 = a7;
  v19 = (__m128i *)v108;
  if ( a9 )
    v19 = a9;
  v108[0] = 0;
  v113 = v19;
  v20 = *(_QWORD *)(a1 + 56);
  v108[1] = 0;
  v21 = sub_141E3D0(a1, a2, (*(_BYTE *)(v20 + 22) & 0x10) != 0);
  p_ptr = &ptr;
  v22 = v21;
  v23 = v112;
  v111 = 0x1000000000LL;
  ptr = v112;
  v99 = a5;
  if ( v102 )
  {
    v24 = v101 == 0;
    *v113 = _mm_loadu_si128((const __m128i *)(a1 + 1128));
    if ( v24 )
    {
      v36 = 0;
      v37 = 0;
      goto LABEL_14;
    }
    goto LABEL_5;
  }
  if ( !v101 )
  {
    v52 = sub_1436660(a1);
    v57 = *(_QWORD *)(a1 + 88);
    v58 = *(_DWORD *)(v52 + 16);
    v109.m128i_i8[0] = 0;
    if ( (unsigned int)(v58 + 1) <= 1 )
      goto LABEL_58;
    if ( v58 < 0 )
    {
      v54 = (unsigned int)(-2 - v58);
      v89 = *(_QWORD *)(*(_QWORD *)(v57 + 320) + 8LL * ((unsigned int)v54 >> 6));
      if ( _bittest64(&v89, v54) )
      {
        v90 = (_QWORD *)(*(_QWORD *)(v57 + 272) + 8 * ((unsigned __int64)(int)v54 >> 5));
        if ( *v90 )
        {
          v53 = 3LL * ((-2 - (_BYTE)v58) & 0x1F);
          v59 = *v90 + 24LL * ((-2 - (_BYTE)v58) & 0x1F);
          goto LABEL_45;
        }
        v92 = *(_QWORD *)(v57 + 288);
        v95.m128i_i32[0] = -2 - v58;
        v93 = (_DWORD *)sub_9C3B30((__int64 *)(v92 & 0xFFFFFFFFFFFFFFF8LL), 768, 3u);
        v54 = (unsigned int)(-2 - v58);
        *v90 = v93;
        v94 = v93 + 192;
        do
        {
          *v93 = 0;
          v93 += 6;
          *((_OWORD *)v93 - 1) = 0;
          *((_QWORD *)v93 - 1) = 0;
        }
        while ( v93 != v94 );
        v53 = v109.m128i_u8[0];
        v59 = *v90 + 24LL * ((-2 - (_BYTE)v58) & 0x1F);
      }
      else
      {
        v59 = sub_101F930(v57, v54, &v109);
        v53 = v109.m128i_u8[0];
      }
      if ( (_BYTE)v53 )
      {
LABEL_57:
        v57 = *(_QWORD *)(v17 + 88);
LABEL_58:
        v65 = *(_DWORD *)(v57 + 520);
        if ( v65 == v58 && *(_QWORD *)(v17 + 992) )
        {
          v66 = *(_QWORD *)(v17 + 104) + 632LL;
          v67 = sub_145C8F0(v17);
          if ( (unsigned __int8)sub_13F4960(v66, (__int64)v103, v96, v67) )
            v68 = *(_QWORD *)(*(_QWORD *)(v17 + 104) + 696LL);
          else
            v68 = *(_QWORD *)(v17 + 992);
          v69 = (unsigned int)v111;
          v70 = (unsigned int)v111 + 1LL;
          if ( v70 > HIDWORD(v111) )
          {
            sub_2237220(p_ptr, p_ptr + 2, v70, 16);
            v69 = (unsigned int)v111;
          }
          v71 = (char *)ptr + 16 * v69;
          *v71 = 0;
          v71[1] = v68;
          LODWORD(v111) = v111 + 1;
          v37 = (*(_BYTE *)(sub_145C8F0(v17) + 904) & 0x40) != 0;
          goto LABEL_52;
        }
        if ( sub_1366CC0((_QWORD *)v57, v65, v53, v54, v55, v56) )
        {
          v72 = *(_QWORD *)(v17 + 80);
          v73 = j__strlen(".");
          v97 = &v109;
          sub_FD9440((__int64)&v109, v72, ".", v73, 1);
          if ( (v109.m128i_i8[8] & 1) != 0 )
          {
            v91 = (_QWORD *)v109.m128i_i64[0];
            v109.m128i_i64[0] = 0;
            v107 = v91;
            sub_A0E8E0(&v107);
            if ( v107 )
              (*(void (__fastcall **)(_QWORD *))(*v107 + 8LL))(v107);
            v74 = 0;
          }
          else
          {
            v74 = v109.m128i_i64[0];
          }
          sub_A04D70(v97->m128i_i64);
          v75 = (unsigned int)v111;
          v95.m128i_i64[0] = v74;
          v76 = (unsigned int)v111 + 1LL;
          v77 = (__m128i)_mm_loadh_ps((const double *)v95.m128i_i64);
          if ( v76 > HIDWORD(v111) )
          {
            v95 = v77;
            sub_2237220(p_ptr, p_ptr + 2, v76, 16);
            v75 = (unsigned int)v111;
            v77 = _mm_load_si128(&v95);
          }
          v37 = 0;
          *((__m128i *)ptr + v75) = v77;
          LODWORD(v111) = v111 + 1;
          goto LABEL_52;
        }
LABEL_51:
        v37 = 0;
LABEL_52:
        if ( (**(_BYTE **)(v17 + 56) & 0x20) != 0 && !a5 )
        {
          v78 = *(_QWORD *)(v17 + 1168);
          v79 = *(_QWORD *)(v17 + 1176);
          if ( v79 != v78 )
          {
            v80 = v37;
            v95.m128i_i64[0] = (__int64)(p_ptr + 2);
            do
            {
              v81 = *(_QWORD *)(v79 - 40);
              v82 = *(_QWORD *)(v79 - 32);
              if ( v81 )
                v83 = *(_BYTE *)(v81 + 145) ^ 1;
              else
                v83 = v82 != 0;
              if ( v83 )
              {
                v84 = sub_1465F30(v82);
                if ( v84 )
                {
                  v85 = (unsigned int)v111;
                  v86 = *(__int64 **)(v84 + 16);
                  v87 = (unsigned int)v111 + 1LL;
                  if ( v87 > HIDWORD(v111) )
                  {
                    v101 = v84;
                    v97 = (__m128i *)v86;
                    sub_2237220(p_ptr, v95.m128i_i64[0], v87, 16);
                    v84 = v101;
                    v86 = (__int64 *)v97;
                    v85 = (unsigned int)v111;
                  }
                  v88 = (__int64 *)((char *)ptr + 16 * v85);
                  *v88 = v84;
                  v88[1] = (__int64)v86;
                  LODWORD(v111) = v111 + 1;
                }
              }
              v79 -= 56;
            }
            while ( v78 != v79 );
            v37 = v80;
          }
        }
        v36 = (unsigned int)v111;
        v102 = 0;
        *v113 = _mm_loadu_si128((const __m128i *)(v17 + 1128));
        v23 = ptr;
        goto LABEL_14;
      }
    }
    else
    {
      v53 = 3LL * (unsigned int)v58;
      v59 = *(_QWORD *)(v57 + 184) + 24LL * (unsigned int)v58;
    }
LABEL_45:
    if ( v59 )
    {
      if ( *(char *)(v59 + 3) >= 0 )
      {
        v60 = *(_QWORD *)((*(_QWORD *)(v59 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
        if ( v60 )
        {
          v61 = (unsigned int)v111;
          v62 = *(_QWORD *)(v60 + 16);
          v63 = (unsigned int)v111 + 1LL;
          if ( v63 > HIDWORD(v111) )
          {
            sub_2237220(p_ptr, p_ptr + 2, v63, 16);
            v61 = (unsigned int)v111;
          }
          v64 = (char *)ptr + 16 * v61;
          *v64 = v60;
          v64[1] = v62;
          LODWORD(v111) = v111 + 1;
          goto LABEL_51;
        }
      }
    }
    goto LABEL_57;
  }
  *v113 = _mm_loadu_si128((const __m128i *)(a1 + 1128));
LABEL_5:
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = _mm_loadu_si128(v113);
  v98 = v28.m128i_i64[1];
  v29 = p_ptr + 2;
  v97 = &v109;
  v109 = v28;
  while ( 2 )
  {
    v95.m128i_i64[0] = (__int64)v29;
    v31 = *(_QWORD *)(a1 + 104);
    v95.m128i_i64[1] = v25;
    v32 = sub_13CAB60(
            v31,
            v103,
            v96,
            v100,
            v99,
            (__int64 **)v97,
            v27,
            v26,
            (__int64)v29,
            v25,
            a10,
            a11,
            v22,
            a12,
            nullptr,
            nullptr,
            a15,
            0,
            1u,
            1u);
    if ( v32 )
    {
      v33 = v109.m128i_i64[1];
      v27 = v109.m128i_i64[0];
      v26 = v109.m128i_i64[1] + 1;
      do
      {
        v34 = *(_QWORD *)(v32 + 8);
        if ( !v34 )
          goto LABEL_12;
        v35 = v34 & 0xFFFFFFFFFFFFFFF8LL;
        v32 = v34 & 0xFFFFFFFFFFFFFFF8LL;
      }
      while ( (v34 & 4) != 0 && v35 );
      if ( v101 != v35 )
      {
LABEL_12:
        v29 = ptr;
        v25 = v111;
        continue;
      }
      v17 = a1;
      v102 = v109.m128i_i64[0];
      a8 = v109.m128i_i64[1] + 1;
      v113->m128i_i64[0] = v109.m128i_i64[0];
      v113->m128i_i64[1] = v33;
    }
    else
    {
      v17 = a1;
    }
    break;
  }
  v23 = ptr;
  v36 = (unsigned int)v111;
  v37 = 0;
LABEL_14:
  v38 = sub_13CAB60(
          *(_QWORD *)(v17 + 104),
          v103,
          v96,
          v100,
          v99,
          (__int64 **)v113,
          v102,
          a8,
          (__int64)v23,
          v36,
          a10,
          a11,
          v22,
          a12,
          a13,
          a14,
          a15,
          v37,
          v105,
          v106);
  if ( v38
    || ((v41 = *(_QWORD *)(v17 + 1112), v42 = *(_QWORD *)(v17 + 1120), !v41)
      ? (v43 = v42 != 0)
      : (v43 = *(_BYTE *)(v41 + 145) ^ 1),
        v43
     && (v51 = sub_1465F30(v42)) != 0
     && (v38 = sub_13CBB60(*(_QWORD *)(v17 + 104), (char *)v103, v96, v51, a10, a11, v22, a12)) != 0) )
  {
LABEL_15:
    v39 = v38;
    goto LABEL_16;
  }
  v44 = *(_QWORD *)(v17 + 1168);
  v45 = *(_QWORD *)(v17 + 1176);
  for ( i = (char *)v103; v44 != v45; v45 -= 56 )
  {
    while ( 1 )
    {
      v47 = *(_QWORD *)(v45 - 40);
      v48 = *(_QWORD *)(v45 - 32);
      v49 = v47 ? *(_BYTE *)(v47 + 145) ^ 1 : v48 != 0;
      if ( v49 )
      {
        v50 = sub_1465F30(v48);
        if ( v50 )
          break;
      }
      v45 -= 56;
      if ( v44 == v45 )
        goto LABEL_34;
    }
    v38 = sub_13CBB60(*(_QWORD *)(v17 + 104), i, v96, v50, a10, a11, v22, a12);
    if ( v38 )
      goto LABEL_15;
  }
LABEL_34:
  v39 = 0;
LABEL_16:
  if ( ptr != p_ptr + 2 )
    free(ptr);
  return v39;
}
