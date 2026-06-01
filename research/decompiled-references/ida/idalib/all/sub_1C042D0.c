__int64 __fastcall sub_1C042D0(
        __m128 *a1,
        __m128 a2,
        __m128 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char *a7,
        __int64 a8)
{
  unsigned int v8; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  unsigned __int64 v15; // r14
  unsigned int v16; // eax
  unsigned __int64 v17; // rcx
  __int64 v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rbp
  __int64 v28; // r14
  unsigned int v29; // eax
  __int64 v30; // rbp
  int v31; // eax
  __int64 v32; // r9
  __int64 v33; // r14
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rbp
  int v39; // eax
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned __int16 *v43; // rbp
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 *v48; // rax
  __int64 v49; // rcx
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rcx
  __int64 v52; // r8
  unsigned int *v53; // rax
  __int64 v54; // r14
  signed __int64 v55; // rdx
  void *v56; // rax
  __int64 v57; // rsi
  void *v58; // rax
  const char *v59; // rsi
  size_t v60; // rax
  __m128 *v61; // rsi
  unsigned __int16 *v62; // rax
  size_t v63; // rax
  _BYTE *v64; // rdi
  unsigned __int64 v65; // rax
  size_t v66; // rdx
  __int64 v67; // [rsp-8h] [rbp-2200h]
  char *v68; // [rsp+0h] [rbp-21F8h] BYREF
  size_t v69; // [rsp+8h] [rbp-21F0h]
  __int64 *p_ptr; // [rsp+10h] [rbp-21E8h]
  int *v71; // [rsp+18h] [rbp-21E0h]
  unsigned __int8 (__fastcall *v72)(__int64, __int64); // [rsp+20h] [rbp-21D8h]
  __int64 *v73; // [rsp+28h] [rbp-21D0h]
  _BOOL8 v74; // [rsp+30h] [rbp-21C8h]
  unsigned __int64 v75; // [rsp+38h] [rbp-21C0h] BYREF
  __int64 *v76; // [rsp+40h] [rbp-21B8h] BYREF
  __int64 v77; // [rsp+48h] [rbp-21B0h] BYREF
  void *src; // [rsp+50h] [rbp-21A8h] BYREF
  size_t n; // [rsp+58h] [rbp-21A0h]
  _QWORD v80[2]; // [rsp+60h] [rbp-2198h] BYREF
  __int64 v81; // [rsp+70h] [rbp-2188h] BYREF
  char v82; // [rsp+78h] [rbp-2180h]
  __int64 v83; // [rsp+7Ch] [rbp-217Ch]
  char v84; // [rsp+84h] [rbp-2174h]
  void *dest; // [rsp+88h] [rbp-2170h]
  __m128 v86; // [rsp+90h] [rbp-2168h] BYREF
  char v87; // [rsp+A8h] [rbp-2150h]
  _BYTE *v88; // [rsp+B0h] [rbp-2148h] BYREF
  unsigned __int64 v89; // [rsp+B8h] [rbp-2140h]
  unsigned __int8 *v90; // [rsp+D0h] [rbp-2128h] BYREF
  char v91; // [rsp+128h] [rbp-20D0h]
  char v92; // [rsp+134h] [rbp-20C4h]
  int v93; // [rsp+140h] [rbp-20B8h] BYREF
  __int64 v94; // [rsp+148h] [rbp-20B0h]
  unsigned int v95; // [rsp+150h] [rbp-20A8h]
  char v96; // [rsp+1E3h] [rbp-2015h]
  void *ptr; // [rsp+1F0h] [rbp-2008h] BYREF
  unsigned __int64 v98; // [rsp+1F8h] [rbp-2000h]
  unsigned __int64 *v99; // [rsp+200h] [rbp-1FF8h]
  _QWORD *v100; // [rsp+300h] [rbp-1EF8h] BYREF
  __int64 v101; // [rsp+308h] [rbp-1EF0h]
  _QWORD v102[338]; // [rsp+310h] [rbp-1EE8h] BYREF
  int v103; // [rsp+DA0h] [rbp-1458h]
  char v104; // [rsp+DA4h] [rbp-1454h]
  _QWORD v105[17]; // [rsp+DA8h] [rbp-1450h] BYREF
  int v106; // [rsp+E30h] [rbp-13C8h]
  __int64 v107; // [rsp+E38h] [rbp-13C0h]
  __int64 v108; // [rsp+E40h] [rbp-13B8h]
  _QWORD *v109; // [rsp+E48h] [rbp-13B0h]
  __int64 v110; // [rsp+E50h] [rbp-13A8h]
  _QWORD v111[6]; // [rsp+E58h] [rbp-13A0h] BYREF
  _QWORD v112[2]; // [rsp+E88h] [rbp-1370h] BYREF
  unsigned int v113; // [rsp+E98h] [rbp-1360h]
  int v114; // [rsp+E9Ch] [rbp-135Ch]
  __int64 v115; // [rsp+EA0h] [rbp-1358h]
  char v116; // [rsp+EA8h] [rbp-1350h]
  int v117; // [rsp+EACh] [rbp-134Ch]
  int v118; // [rsp+21B0h] [rbp-48h]

  v8 = a6;
  v75 = a5;
  v68 = a7;
  if ( !(unsigned __int8)sub_1BC8220((__int64)a1, (__int64 *)&v75, (__m128i)a2, a3, a5, a6, (__int64)a7, a8) )
  {
    v15 = v75;
    v16 = sub_C00A40(v75, (__int64)&v75, v10, v11, v12);
    v17 = a1[15].m128_u64[1];
    v100 = v102;
    v102[336] = v105;
    v109 = v111;
    v18 = (v17 + 18248) | 6;
    v101 = 0x1000000000LL;
    v110 = 0x400000000LL;
    v102[337] = 16;
    v103 = 0;
    v104 = 1;
    v105[16] = 0;
    v106 = 0;
    v107 = 0;
    v108 = 0;
    v111[4] = v112;
    v111[5] = 0;
    v112[0] = 0;
    v112[1] = 1;
    v113 = v16;
    v114 = 1;
    v115 = 0;
    v116 = 0;
    v117 = 0;
    v118 = 0;
    v19 = *(_QWORD *)(v15 + 8);
    ptr = off_2BC64D8;
    p_ptr = (__int64 *)&ptr;
    LODWORD(v98) = 5278;
    v99 = &v75;
    if ( (unsigned __int8)sub_1E63C20(a1, v16, v19, 1, &ptr) )
    {
      v13 = 1;
LABEL_6:
      sub_17A20D0((__int64)&v100);
      return v13;
    }
    v71 = &v93;
    sub_1BCD470((__int64)&v93, (__int64)a1, v18, v8, 0, 0);
    v24 = sub_F60F10(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v75 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL),
            (__int64)a1,
            v20,
            v21,
            v22,
            v23);
    if ( v24 )
      v24 += 8;
    sub_1A48440((__int64)a1, (__int64)&v93, (__int64)v24, 0);
    v27 = v94;
    v96 = 0;
    v28 = v94 + 8LL * v95;
    if ( v28 != v94 )
    {
      do
      {
        v27 += 8;
        v29 = sub_C0EB40(v75, a1[15].m128_i64[1], nullptr, v25, v26);
        sub_1BF0CF0(
          (__int64)a1,
          *(_QWORD *)(v27 - 8),
          *(_QWORD *)(v75 + 8),
          v29,
          0,
          0,
          a2,
          a3,
          (unsigned int *)&v100,
          0,
          0);
      }
      while ( v28 != v27 );
    }
    v30 = (unsigned int)v101;
    LODWORD(v72) = v106 & 0x3FFFFFFF;
    v31 = sub_1BF27B0((__int64)&v100, a1, v8, &v76, *(double *)a2.m128_u64, a3);
    switch ( v31 )
    {
      case 2:
        if ( v93 == 5 )
          goto LABEL_23;
        v68 = (char *)&byte_22F0C30;
        v72 = (unsigned __int8 (__fastcall *)(__int64, __int64))sub_16A7620;
        v73 = &v81;
        v69 = j__strlen(&byte_22F0C30);
        sub_168B9B0((__int64)&v88, (__int64)&a1->m128_i64[1], 4748);
        sub_AE9DF0(&v88, (__int64)"->", 1u);
        v57 = *(_QWORD *)(v75 + 8);
        sub_AE9DF0(&v88, v57, 8u);
        v58 = (void *)sub_EEC8C0(v75, v57, *(double *)a2.m128_u64);
        LOBYTE(v98) = 1;
        ptr = v58;
        sub_AEC610((__int64 *)&v88, p_ptr);
        LODWORD(ptr) = v8;
        sub_1582CA0((__int64)(p_ptr + 1), &v88);
        sub_1C022A0(
          (__int64)&v100,
          (unsigned int *)p_ptr,
          a1,
          2,
          (__int64)&v75,
          1u,
          a2,
          a3,
          &byte_22F0C30,
          v69,
          0,
          (unsigned __int8 (__fastcall *)(__int64, __int64))sub_16A7620,
          (__int64)&v81);
        break;
      case 3:
        if ( (*(_BYTE *)(*v76 + 83) & 8) != 0 && (v53 = *(unsigned int **)(*v76 + 128), *((_BYTE *)v53 + 4)) )
        {
          v54 = *(_QWORD *)&v53[2 * *v53 + 2];
          v74 = v54 != 0;
        }
        else
        {
          v74 = 0;
          v54 = 0;
        }
        v72 = (unsigned __int8 (__fastcall *)(__int64, __int64))sub_16A7620;
        v73 = &v81;
        v68 = (char *)&byte_22F0C30;
        v69 = j__strlen(&byte_22F0C30);
        sub_168B9B0((__int64)&v88, (__int64)&a1->m128_i64[1], 4755);
        sub_AE9DF0(&v88, (__int64)"->", 1u);
        sub_AE9DF0(&v88, v74, 2u);
        v55 = 0;
        if ( v54 )
        {
          v55 = *(_DWORD *)(v54 + 16) * ((*(_WORD *)(v54 + 2) >> 6) & 7u);
          v54 += 4LL * *(unsigned int *)(v54 + 4) + 20;
        }
        sub_AEC220(&v88, (_BYTE *)v54, v55);
        v56 = (void *)sub_EEC8C0(v75, v54, *(double *)a2.m128_u64);
        LOBYTE(v98) = 1;
        ptr = v56;
        sub_AEC610((__int64 *)&v88, p_ptr);
        LODWORD(ptr) = v8;
        sub_1582CA0((__int64)(p_ptr + 1), &v88);
        sub_1C022A0(
          (__int64)&v100,
          (unsigned int *)p_ptr,
          a1,
          0,
          (__int64)&v75,
          1u,
          a2,
          a3,
          v68,
          v69,
          0,
          v72,
          (__int64)v73);
        break;
      case 1:
        sub_1C004B0(
          (__int64)p_ptr,
          (__int64)&v100,
          a1,
          0,
          (__int64)&v75,
          1u,
          a2,
          a3,
          (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1837230,
          (__int64)&v88);
        if ( (unsigned int)v101 | v106 & 0x3FFFFFFF )
        {
          v59 = &a1->m128_i8[8];
          sub_168B9F0((__int64)&v88, &a1->m128_i64[1], v8, 0x129Fu, 0);
          if ( v91 )
          {
            v59 = "operator->";
            sub_AE9DF0(&v90, (__int64)"operator->", 1u);
          }
          else if ( v92 )
          {
            v59 = "operator->";
            sub_1BDB5C0((__int64)&v88, (__int64)"operator->");
          }
          v81 = sub_EEC8C0(v75, (__int64)v59, *(double *)a2.m128_u64);
          sub_1587DB0((__int64)&v88, &v81);
          sub_15F7200(&v88);
          goto LABEL_50;
        }
        v77 = *(_QWORD *)(v75 + 8);
        if ( v68 )
        {
          v13 = 1;
          *v68 = 1;
          goto LABEL_30;
        }
        v72 = (unsigned __int8 (__fastcall *)(__int64, __int64))&a1->m128_u16[4];
        sub_168B9F0((__int64)&v88, &a1->m128_i64[1], v8, 0x14ABu, 0);
        v68 = (char *)sub_1605D30((__int64)&v88, &v77);
        v81 = sub_EEC8C0(v75, (__int64)&v77, *(double *)a2.m128_u64);
        sub_1587DB0((__int64)v68, &v81);
        sub_15F7200(&v88);
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v77 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) != 48 )
        {
LABEL_50:
          v60 = j__strlen(&byte_22F0C30);
          v61 = a1;
          v13 = 1;
          sub_1C007F0(
            (__int64)&v100,
            v61,
            (__int64)&v75,
            1u,
            (__int64 *)ptr,
            (unsigned int)v98,
            a2,
            a3,
            &byte_22F0C30,
            v60,
            0);
LABEL_30:
          if ( ptr != p_ptr + 2 )
            free(ptr);
          goto LABEL_24;
        }
        sub_168B9F0((__int64)&v88, (__int64 *)v72, v8, 0x191Bu, 0);
        v63 = j__strlen(".");
        LODWORD(v81) = v8;
        HIDWORD(v81) = v8;
        dest = &v86.m128_u16[4];
        v72 = (unsigned __int8 (__fastcall *)(__int64, __int64))&v86.m128_u16[4];
        src = v80;
        v68 = (char *)v80;
        v83 = 0;
        v84 = 0;
        v86.m128_u64[0] = 0;
        v86.m128_i8[8] = 0;
        v87 = 0;
        v82 = 1;
        sub_1BC95E0(&src, ".", (__int64)&asc_22F4318[v63 + 1]);
        v64 = dest;
        if ( src == v80 )
        {
          v66 = n;
          if ( n )
          {
            if ( n == 1 )
              *(_BYTE *)dest = v80[0];
            else
              memcpy(dest, src, n);
            v64 = dest;
            v66 = n;
          }
          v86.m128_u64[0] = v66;
          v64[v66] = 0;
          goto LABEL_59;
        }
        v68 = (char *)v80[0];
        if ( dest == v72 )
        {
          dest = src;
          a2 = _mm_loadh_ps((const double *)&v68);
          v86 = a2;
        }
        else
        {
          a2 = _mm_loadh_ps((const double *)&v68);
          v65 = v86.m128_u64[1];
          dest = src;
          v86 = a2;
          if ( v64 )
          {
            src = v64;
            v80[0] = v65;
LABEL_59:
            n = 0;
            *(_BYTE *)src = 0;
            if ( src != v80 )
              operator delete(src);
            sub_1589170((__int64)&v88, &v81);
            if ( dest != &v86.m128_u16[4] )
              operator delete(dest);
            sub_15F7200(&v88);
            goto LABEL_50;
          }
        }
        src = v80;
        goto LABEL_59;
      default:
        sub_1663420(a1, v8, v75, 0, v76[1], v32, *(double *)a2.m128_u64);
        v33 = *v76;
        if ( (unsigned __int8)sub_B981D0((_QWORD *)*v76, v8) )
        {
          v36 = sub_1BCBCC0((__int64)a1, v75, v33, v34, v35, a2, a3);
          if ( v36 == 1 )
            goto LABEL_23;
        }
        else
        {
          v36 = sub_1BF87F0((__int64)a1, v75, 0, v76[1] & 0xFFFFFFFFFFFFFFF8LL, v33, a2, a3);
          if ( v36 == 1 )
            goto LABEL_23;
        }
        v75 = v36 & 0xFFFFFFFFFFFFFFFELL;
        ptr = nullptr;
        v38 = sub_1BC7390(
                a1,
                v33,
                v76[1] & 0xFFFFFFFFFFFFFFF8LL,
                v36 & 0xFFFFFFFFFFFFFFFELL,
                (unsigned __int64)(unsigned int)v72 + v30 > 1,
                v8,
                a2,
                a3,
                p_ptr);
        if ( v38 != 1 )
        {
          ptr = (void *)sub_C1D490(v33, v33, v67, v37);
          v39 = sub_18C0240((__int64)ptr, v33);
          v40 = a1[15].m128_i64[1];
          LODWORD(v68) = v39;
          ptr = (void *)sub_F67970(p_ptr, v40);
          v41 = a1[122].m128_u32[0];
          v42 = a1[122].m128_u32[1];
          if ( a1[121].m128_u64[1] == __PAIR64__(v42, v41) )
          {
            v42 = 0;
            v41 = 0;
          }
          v43 = (unsigned __int16 *)sub_C98520(
                                      (_QWORD *)a1[15].m128_u64[1],
                                      41,
                                      v38 & 0xFFFFFFFFFFFFFFFELL,
                                      &v75,
                                      1,
                                      (__int64)ptr,
                                      (char)v68,
                                      v8,
                                      (v42 << 32) | v41,
                                      0);
          v46 = sub_C1D490(v33, 41, v44, v45);
          if ( !(unsigned __int8)sub_18C4140((__int64)a1, v46, v8, (__int64)v43, v33) )
          {
            v48 = (__int64 *)(*(_QWORD *)(v33 + 48) & 0xFFFFFFFFFFFFFFF0LL);
            v49 = *v48;
            if ( *(_BYTE *)(*v48 + 16) != 26 )
              v49 = sub_F63050(*v48, v46, v47, v49);
            if ( !(unsigned __int8)sub_16F8E60(
                                     (__int64 *)a1,
                                     v33,
                                     (unsigned __int64)v43,
                                     v49,
                                     (__m128i)a2,
                                     *(double *)a3.m128_u64) )
            {
              v62 = sub_19A3E40((__int64)a1, v43, v50, v51, v52, a2, a3);
              v13 = sub_18C3A50((__int64)a1, (unsigned __int64)v62, v33);
              goto LABEL_24;
            }
          }
        }
LABEL_23:
        v13 = 1;
LABEL_24:
        sub_169D230((__int64)v71);
        goto LABEL_6;
    }
    if ( v98 && v99 )
      sub_1580C40((unsigned __int64)v99, v98);
    if ( v88 && v89 )
      sub_1580C40(v89, (unsigned __int64)v88);
    goto LABEL_23;
  }
  return 1;
}
