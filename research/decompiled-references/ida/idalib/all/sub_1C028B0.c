unsigned __int64 __fastcall sub_1C028B0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int a6,
        __m128 a7,
        __m128 a8,
        unsigned __int64 *a9,
        unsigned __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 *a13,
        int a14,
        char a15)
{
  void **v16; // rbp
  signed __int64 v18; // r12
  unsigned __int64 *v19; // rsi
  __int64 v20; // rdi
  int v21; // eax
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // r13
  int v26; // eax
  unsigned __int64 result; // rax
  size_t v28; // r14
  __int64 v29; // rsi
  void *v30; // rax
  __int64 v31; // r12
  __int64 v32; // r14
  __int64 v33; // r15
  int v34; // eax
  __int64 v35; // rax
  __int64 *v37; // rcx
  unsigned int v38; // edx
  __int64 v39; // rsi
  unsigned __int64 *v40; // r13
  unsigned __int64 *v41; // r14
  unsigned __int64 v42; // r15
  unsigned __int16 *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rbp
  unsigned int v48; // eax
  __int64 v49; // r9
  size_t v50; // r14
  __int64 v51; // rsi
  void *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  unsigned int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // r12
  unsigned __int64 v62; // r14
  _QWORD *v63; // r13
  _QWORD *v64; // rdi
  __int64 v65; // r8
  __int16 v66; // ax
  _BYTE *v67; // r8
  __int64 v68; // r15
  unsigned __int64 v69; // rdi
  char v70; // al
  unsigned __int64 v71; // rax
  size_t v72; // r14
  unsigned __int64 v73; // [rsp+8h] [rbp-930h]
  bool v75; // [rsp+20h] [rbp-918h]
  void **v76; // [rsp+20h] [rbp-918h]
  void **v77; // [rsp+48h] [rbp-8F0h]
  unsigned int v79; // [rsp+74h] [rbp-8C4h]
  int v80; // [rsp+78h] [rbp-8C0h]
  bool v81; // [rsp+7Fh] [rbp-8B9h]
  __int64 v82; // [rsp+88h] [rbp-8B0h] BYREF
  _QWORD v83[2]; // [rsp+90h] [rbp-8A8h] BYREF
  __int128 v84; // [rsp+A0h] [rbp-898h]
  __m128i v85; // [rsp+B0h] [rbp-888h] BYREF
  void *v86[2]; // [rsp+C0h] [rbp-878h]
  __int128 v87; // [rsp+D0h] [rbp-868h]
  _BYTE v88[64]; // [rsp+E0h] [rbp-858h] BYREF
  int v89; // [rsp+120h] [rbp-818h] BYREF
  _QWORD *v90; // [rsp+128h] [rbp-810h]
  int v91; // [rsp+130h] [rbp-808h]
  void *v92[2]; // [rsp+178h] [rbp-7C0h]
  __int16 v93; // [rsp+1C3h] [rbp-775h]
  char v94; // [rsp+1C6h] [rbp-772h]
  void *v95; // [rsp+1D0h] [rbp-768h] BYREF
  unsigned __int64 v96; // [rsp+1D8h] [rbp-760h]
  _BYTE v97[256]; // [rsp+1E0h] [rbp-758h] BYREF
  __int64 v98; // [rsp+2E0h] [rbp-658h]
  void *ptr; // [rsp+2F0h] [rbp-648h] BYREF
  unsigned __int64 v100; // [rsp+2F8h] [rbp-640h] BYREF
  unsigned __int64 v101; // [rsp+300h] [rbp-638h] BYREF
  _BYTE v102[1520]; // [rsp+308h] [rbp-630h] BYREF
  __int64 v103; // [rsp+8F8h] [rbp-40h]

  v16 = (void **)a3;
  switch ( a14 )
  {
    case 1:
      v37 = (__int64 *)*a13;
      v38 = *(_DWORD *)(a12 + 8);
      v39 = 21LL * v38;
      if ( *a13 != *(_QWORD *)a12 + 168LL * v38 && *(_DWORD *)(a12 + 2972) == 4 )
      {
        v68 = *v37;
        if ( *v37 )
        {
          if ( (*(_BYTE *)(v68 + 28) & 0x7Fu) - 35 <= 3 )
          {
            if ( (unsigned __int8)sub_B98200((_QWORD *)*v37, v39) )
            {
              v72 = j__strlen(&byte_22F0C30);
              sub_168B9B0((__int64)&v95, a1 + 8, 4142);
              sub_AE9DF0((unsigned __int8 **)&v95, 0, 2u);
              sub_AE9DF0((unsigned __int8 **)&v95, v68, 0xAu);
              LODWORD(ptr) = sub_EEB7E0((unsigned __int64)v16, v68, *(double *)a7.m128_u64);
              sub_1582CA0((__int64)&v100, (_BYTE **)&v95);
              sub_1C022A0(
                a12,
                (unsigned int *)&ptr,
                (__m128 *)a1,
                2,
                (__int64)a9,
                a10,
                a7,
                a8,
                &byte_22F0C30,
                v72,
                0,
                (unsigned __int8 (__fastcall *)(__int64, __int64))sub_16A7620,
                (__int64)&v89);
              if ( v100 && v101 )
                sub_1580C40(v101, v100);
              if ( v95 && v96 )
                sub_1580C40(v96, (unsigned __int64)v95);
              return 1;
            }
            v38 = *(_DWORD *)(a12 + 8);
          }
        }
      }
      v75 = 0;
      if ( !v38 )
        v75 = (*(_DWORD *)(a12 + 2864) & 0x3FFFFFFF) == 0;
      if ( *(_BYTE *)(a1 + 11161) )
        goto LABEL_30;
      ptr = (void *)a1;
      v103 = a1;
      v100 = (unsigned __int64)v102;
      v101 = 0xA00000000LL;
      sub_1849060(a1 + 15760, (__int64)&v100);
      a7 = 0;
      v85 = 0;
      *(_BYTE *)(a1 + 11161) = 1;
      a8 = (__m128)_mm_loadu_si128((const __m128i *)(a4 + 40));
      *(_OWORD *)v86 = 0;
      v87 = 0;
      sub_15AB8B0((__int64)&v85, a8.m128_i64[0], a8.m128_i64[1]);
      v79 = 0;
      if ( (*(_QWORD *)a4 & 0x80000) != 0 )
        v79 = sub_1BC7250(a4);
      v98 = 0;
      v95 = v97;
      v96 = 0x800000000LL;
      v80 = 0;
      v81 = sub_18C0AE0(a4);
      v77 = nullptr;
      if ( v81 )
      {
        sub_1BCD380(a4, (__int64)&v95);
        v80 = 1;
        v77 = &v95;
      }
      sub_1BCD470((__int64)&v89, a1, *(_QWORD *)(a4 + 16), *(_DWORD *)(a4 + 24), 0, 0);
      v82 = 0;
      v56 = sub_C00A40((unsigned __int64)v16, a1, v53, v54, v55);
      if ( !(unsigned __int8)sub_1BF78E0(
                               a1,
                               v56,
                               (__int64)&v85,
                               (__int64)&v89,
                               0,
                               (__int64)v77,
                               (__m128)0LL,
                               a8,
                               a9,
                               a10,
                               &v82) )
      {
        if ( v75 )
        {
          v89 = 0;
          v91 = 0;
          if ( v92[0] )
            sub_1A39780((char *)v92[0]);
          a7 = 0;
          v65 = 0;
          *(_OWORD *)v92 = 0;
          v94 = 0;
          v84 = 0;
          v83[0] = off_2BC7950;
          v66 = *(_WORD *)v16;
          v83[1] = 0;
          if ( (v66 & 0x1FF) == 0x2E )
            v65 = (__int64)v16;
          sub_1A3A1D0((__int64)v88, a1, a10, v80, v65);
          v67 = v83;
          if ( a15 )
            v67 = v88;
          if ( (unsigned __int8)sub_18DE2E0(
                                  a1,
                                  a2,
                                  (unsigned int *)&v85,
                                  (__int64)&v89,
                                  (__int64)v67,
                                  (__int64)v77,
                                  (__int64)a9,
                                  a10,
                                  0) )
            goto LABEL_51;
        }
        else
        {
          v61 = 0;
          if ( !v82 || (**(_BYTE **)(a1 + 232) & 0x20) == 0 )
            goto LABEL_52;
          if ( (unsigned __int8)sub_18CDC20(a1, (__int64)&v89, v57, v58, v59, v60) )
            goto LABEL_51;
        }
      }
      if ( v89 == 5 )
      {
        v93 = 0;
LABEL_51:
        v61 = 1;
        goto LABEL_52;
      }
      v69 = *(_QWORD *)((*v90 & 0xFFFFFFFFFFFFFFF8LL) + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)((*v90 & 0xFFFFFFFFFFFFFFF8LL) + 16) & 4) != 0 )
        v69 = *(_QWORD *)v69;
      v70 = *(_BYTE *)(v69 + 8) & 0x7F;
      if ( v70 == 62 )
        v70 = *(_BYTE *)(sub_B8EAA0(v69) + 8) & 0x7F;
      if ( ((v70 + 70) & 0x7Fu) <= 3 )
      {
        v71 = (unsigned __int64)sub_19CC8A0(a1, &v85, v79, (__int64)&v89, (__int64)v77, a2, a7, a8);
      }
      else if ( v79 || v81 )
      {
        v71 = sub_1CD7830(a1, &v85, v79, &v89, 0, v77);
      }
      else
      {
        v71 = sub_190B490(a1, v85.m128i_i64, (__int64)&v89, 0, 0, v60, (__m128i)a7, a8);
      }
      if ( v71 == 1 )
        goto LABEL_51;
      v61 = sub_192A5E0(a1, 0, (unsigned __int16 *)(v71 & 0xFFFFFFFFFFFFFFFELL), a5, a9, a10, a7, a8, a6, 0, 0, 0);
LABEL_52:
      sub_169D230((__int64)&v89);
      if ( v95 != v97 )
        free(v95);
      if ( HIDWORD(v86[1]) )
        free(v86[0]);
      v39 = (__int64)&v100;
      *((_BYTE *)ptr + 11161) = 0;
      sub_1849060(v103 + 15760, (__int64)&v100);
      v62 = v100;
      v63 = (_QWORD *)(v100 + 152LL * (unsigned int)v101);
      if ( (_QWORD *)v100 != v63 )
      {
        do
        {
          while ( 1 )
          {
            v63 -= 19;
            v64 = (_QWORD *)v63[1];
            if ( v64 == v63 + 3 )
              break;
            free(v64);
            if ( (_QWORD *)v62 == v63 )
              goto LABEL_59;
          }
        }
        while ( (_QWORD *)v62 != v63 );
LABEL_59:
        v63 = (_QWORD *)v100;
      }
      if ( v63 != (_QWORD *)v102 )
        free(v63);
      if ( v61 )
        return v61;
LABEL_30:
      v18 = 8 * a10;
      v40 = &a9[a10];
      v41 = a9;
      if ( a9 == v40 )
      {
LABEL_38:
        v50 = j__strlen(&byte_22F0C30);
        sub_168B9B0((__int64)&v95, a1 + 8, 4762);
        v51 = *(_QWORD *)(a4 + 16);
        sub_AE9DF0((unsigned __int8 **)&v95, v51, 9u);
        v52 = (void *)sub_EEC8C0((unsigned __int64)v16, v51, *(double *)a7.m128_u64);
        LOBYTE(v100) = 1;
        ptr = v52;
        sub_AEC610((__int64 *)&v95, (__int64 *)&ptr);
        LODWORD(ptr) = sub_EEB7E0((unsigned __int64)v16, (__int64)&ptr, *(double *)a7.m128_u64);
        sub_1582CA0((__int64)&v100, (_BYTE **)&v95);
        sub_1C022A0(
          a12,
          (unsigned int *)&ptr,
          (__m128 *)a1,
          0,
          (__int64)a9,
          a10,
          a7,
          a8,
          &byte_22F0C30,
          v50,
          0,
          (unsigned __int8 (__fastcall *)(__int64, __int64))sub_16A7620,
          (__int64)&v89);
        if ( v100 && v101 )
          sub_1580C40(v101, v100);
        if ( v95 && v96 )
          sub_1580C40(v96, (unsigned __int64)v95);
        goto LABEL_6;
      }
      v76 = v16;
      while ( 1 )
      {
        v42 = *v41;
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v41 + 8)
                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                      + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 25 <= 1 )
        {
          v43 = (unsigned __int16 *)sub_BFBAE0(*v41);
          v46 = *v43;
          LOWORD(v46) = v46 & 0x1FF;
          if ( (_WORD)v46 == 71 )
          {
            v47 = *((_QWORD *)v43 + 2);
            if ( (*(_BYTE *)(v47 + 28) & 0x7Fu) - 34 <= 5 )
            {
              v48 = sub_C00A40(v42, v39, v46, v44, v45);
              v39 = v47;
              if ( !(unsigned __int8)sub_1BDFA80(a1, (__int128 *)v47, 1, 0, v48, v49) )
                return 1;
            }
          }
        }
        if ( v40 == ++v41 )
        {
          v16 = v76;
          goto LABEL_38;
        }
      }
    case 0:
      v31 = *(_QWORD *)*a13;
      sub_165EC80((_QWORD *)a1, a4, *(_QWORD *)(*a13 + 8), *(double *)a7.m128_u64);
      LODWORD(ptr) = *(_DWORD *)(a4 + 24);
      if ( (unsigned __int8)sub_18F5260(a1, v31, (int *)&ptr, 1u, 0, 0, (__m128i)a7, *(double *)a8.m128_u64, 0, 0, 0) )
        return 1;
      goto LABEL_23;
    case 2:
      v28 = j__strlen(&byte_22F0C30);
      sub_168B9B0((__int64)&v95, a1 + 8, 4742);
      v29 = *(_QWORD *)(a4 + 16);
      sub_AE9DF0((unsigned __int8 **)&v95, v29, 9u);
      v30 = (void *)sub_EEC8C0((unsigned __int64)v16, v29, *(double *)a7.m128_u64);
      LOBYTE(v100) = 1;
      ptr = v30;
      sub_AEC610((__int64 *)&v95, (__int64 *)&ptr);
      LODWORD(ptr) = sub_EEB7E0((unsigned __int64)v16, (__int64)&ptr, *(double *)a7.m128_u64);
      sub_1582CA0((__int64)&v100, (_BYTE **)&v95);
      sub_1C022A0(
        a12,
        (unsigned int *)&ptr,
        (__m128 *)a1,
        2,
        (__int64)a9,
        a10,
        a7,
        a8,
        &byte_22F0C30,
        v28,
        0,
        (unsigned __int8 (__fastcall *)(__int64, __int64))sub_16A7620,
        (__int64)&v89);
      if ( v100 && v101 )
        sub_1580C40(v101, v100);
      if ( v95 && v96 )
        sub_1580C40(v96, (unsigned __int64)v95);
      v18 = 8 * a10;
      goto LABEL_6;
    case 3:
      v31 = *(_QWORD *)*a13;
      v32 = *(_QWORD *)(a4 + 16);
      v33 = sub_EEC8C0(a3, a2, *(double *)a7.m128_u64);
      v34 = sub_EEB7E0((unsigned __int64)v16, a2, *(double *)a7.m128_u64);
      sub_1C026E0((__m128 *)a1, v34, v33, v32, a12, v31, a7, a8, (__int64)a9, a10, 0);
LABEL_23:
      v35 = sub_1BD6F50(a1, v16, *(_QWORD *)(*a13 + 8), v31, a7, a8);
      if ( v35 != 1 )
        return sub_192ED50(
                 a1,
                 v35 & 0xFFFFFFFFFFFFFFFELL,
                 v31,
                 a5,
                 a9,
                 a10,
                 a7,
                 a8,
                 a6,
                 a11,
                 0,
                 (*(_BYTE *)(*a13 + 104) & 0x40) != 0);
      return 1;
  }
  v18 = 8 * a10;
LABEL_6:
  v19 = &v101;
  v101 = (unsigned __int64)v16;
  v100 = 0x800000001LL;
  v20 = 1;
  v21 = 1;
  v22 = (v18 >> 3) + 1;
  ptr = &v101;
  if ( v22 > 8 )
  {
    sub_2237220(&ptr, &v101, v22, 8);
    v21 = v100;
    v19 = (unsigned __int64 *)ptr;
    v20 = (unsigned int)v100;
  }
  if ( v18 )
  {
    memcpy(&v19[v20], a9, v18);
    v21 = v100;
  }
  LODWORD(v100) = v21 + (v18 >> 3);
  v23 = sub_1BCC960(a12, a13);
  v24 = (unsigned int)v100;
  v25 = v23;
  v26 = sub_EEB7E0((unsigned __int64)v16, (__int64)a13, *(double *)a7.m128_u64);
  result = sub_18C4330(a1, v26, a6, ptr, v24, v25);
  if ( ptr != &v101 )
  {
    v73 = result;
    free(ptr);
    return v73;
  }
  return result;
}
