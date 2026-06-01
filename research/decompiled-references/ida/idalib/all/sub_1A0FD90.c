__int64 __fastcall sub_1A0FD90(
        _QWORD *a1,
        __int64 a2,
        int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // rbx
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  __int64 *v12; // rax
  _QWORD *v13; // r13
  unsigned int v14; // r15d
  __int64 v16; // rax
  int v17; // eax
  __m128 *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  char *v24; // r13
  char *v25; // rbp
  _BYTE *i; // rax
  __int64 v27; // rsi
  unsigned int v28; // ecx
  __int64 v29; // rdi
  __int64 *v30; // rbp
  __int64 *v31; // r12
  __int64 v32; // rsi
  __int64 v33; // rdi
  _QWORD *v34; // r13
  _QWORD *v35; // r12
  _QWORD *v36; // rdi
  _QWORD *v37; // r14
  _QWORD *v38; // rbp
  char *v39; // rdi
  unsigned int v40; // r12d
  int v41; // r13d
  __int64 v42; // r14
  __int64 v43; // rsi
  size_t v44; // r14
  int v45; // edx
  __int64 v46; // rsi
  void *v47; // rax
  __int64 v48; // rax
  __int64 v49; // r12
  size_t v50; // r14
  __int64 v51; // rsi
  void *v52; // rax
  char v53; // dl
  char v54; // dl
  __int64 v55; // rsi
  bool v56; // al
  __int64 v57; // rdx
  __int64 v58; // rcx
  _BOOL8 v59; // r9
  unsigned __int64 v60; // rdx
  __int64 v61; // r8
  unsigned __int64 v62; // rcx
  __int64 v63; // r13
  __int64 v64; // rax
  char v66; // [rsp+10h] [rbp-2008h]
  unsigned int v67; // [rsp+40h] [rbp-1FD8h]
  unsigned int v68; // [rsp+4Ch] [rbp-1FCCh]
  int v69; // [rsp+54h] [rbp-1FC4h] BYREF
  unsigned __int64 v70; // [rsp+58h] [rbp-1FC0h] BYREF
  __int64 *v71; // [rsp+60h] [rbp-1FB8h] BYREF
  __int64 v72; // [rsp+68h] [rbp-1FB0h] BYREF
  _BYTE *v73; // [rsp+70h] [rbp-1FA8h] BYREF
  unsigned __int64 v74; // [rsp+78h] [rbp-1FA0h]
  void *ptr; // [rsp+90h] [rbp-1F88h] BYREF
  unsigned __int64 v76; // [rsp+98h] [rbp-1F80h] BYREF
  unsigned __int64 v77[16]; // [rsp+A0h] [rbp-1F78h] BYREF
  _BYTE *v78; // [rsp+120h] [rbp-1EF8h] BYREF
  __int64 v79; // [rsp+128h] [rbp-1EF0h]
  _BYTE v80[2688]; // [rsp+130h] [rbp-1EE8h] BYREF
  void *v81; // [rsp+BB0h] [rbp-1468h]
  __int64 v82; // [rsp+BB8h] [rbp-1460h]
  int v83; // [rsp+BC0h] [rbp-1458h]
  char v84; // [rsp+BC4h] [rbp-1454h]
  char v85; // [rsp+BC8h] [rbp-1450h] BYREF
  __int64 v86; // [rsp+C48h] [rbp-13D0h]
  int v87; // [rsp+C50h] [rbp-13C8h]
  __int64 v88; // [rsp+C58h] [rbp-13C0h]
  __int64 v89; // [rsp+C60h] [rbp-13B8h]
  void *v90; // [rsp+C68h] [rbp-13B0h]
  __int64 v91; // [rsp+C70h] [rbp-13A8h]
  _BYTE v92[32]; // [rsp+C78h] [rbp-13A0h] BYREF
  __int64 *v93; // [rsp+C98h] [rbp-1380h]
  __int64 v94; // [rsp+CA0h] [rbp-1378h]
  _QWORD v95[2]; // [rsp+CA8h] [rbp-1370h] BYREF
  unsigned int v96; // [rsp+CB8h] [rbp-1360h]
  int v97; // [rsp+CBCh] [rbp-135Ch]
  __int64 v98; // [rsp+CC0h] [rbp-1358h]
  char v99; // [rsp+CC8h] [rbp-1350h]
  int v100; // [rsp+CCCh] [rbp-134Ch]
  int v101; // [rsp+1FD0h] [rbp-48h]

  v8 = 1;
  if ( a4 == 1 )
    return v8;
  v66 = a5;
  v9 = a4 & 0xFFFFFFFFFFFFFFFELL;
  v8 = a4;
  v10 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v70 = a4 & 0xFFFFFFFFFFFFFFFELL;
  v12 = (__int64 *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*v12 + 16) != 48 )
    return v8;
  v13 = sub_F60F10(*v12, a2, (__int64)a3, a4, a5, a6);
  if ( !v13 )
    return v8;
  v14 = sub_1A0B650(a3, v9, *(double *)a7.m128_u64);
  if ( (unsigned __int8)sub_1E63CF0(a1, v14, a2, 1, 5084) )
    return v8;
  v78 = v80;
  v79 = 0x1000000000LL;
  v81 = &v85;
  v90 = v92;
  v91 = 0x400000000LL;
  v82 = 16;
  v83 = 0;
  v84 = 1;
  v86 = 0;
  v87 = 0;
  v88 = 0;
  v89 = 0;
  v93 = v95;
  v94 = 0;
  v95[0] = 0;
  v95[1] = 1;
  v96 = v14;
  v97 = 0;
  v98 = 0;
  v99 = 0;
  v100 = 0;
  v101 = 0;
  v16 = sub_1A3D890(a1, v13);
  v17 = sub_1A0AAD0((__int64)a1, v14, (__int64)&v70, 1, (__int64)&v78, a2, v16, (__int64)&v71, 0, 1, 0, 0, 0, 1);
  switch ( v17 )
  {
    case 2:
      v50 = j__strlen(&byte_22F0C30);
      sub_168B9B0((__int64)&v73, (__int64)(a1 + 1), 5082);
      sub_AE9DF0(&v73, *a3, 2u);
      v51 = *(_QWORD *)(v70 + 8);
      sub_AE9DF0(&v73, v51, 8u);
      v52 = (void *)sub_EEC8C0(v70, v51, *(double *)a7.m128_u64);
      LOBYTE(v76) = 1;
      ptr = v52;
      sub_AEC610((__int64 *)&v73, (__int64 *)&ptr);
      LODWORD(ptr) = v14;
      sub_1582CA0((__int64)&v76, &v73);
      sub_1C022A0(
        (unsigned int)&v78,
        (unsigned int)&ptr,
        (_DWORD)a1,
        2,
        (unsigned int)&v70,
        1,
        (__int64)&byte_22F0C30,
        v50,
        0,
        (__int64)sub_16A7620,
        (__int64)&v72);
      if ( v76 && v77[0] )
        sub_1580C40(v77[0], v76);
      if ( v73 && v74 )
        sub_1580C40(v74, (unsigned __int64)v73);
      break;
    case 3:
      sub_168B9F0((__int64)&ptr, a1 + 1, v14, 0x13DBu, 0);
      v69 = *a3;
      v48 = sub_1587D10((__int64)&ptr, &v69);
      v72 = *(_QWORD *)(v70 + 8);
      v49 = sub_162B6D0(v48, &v72);
      v73 = (_BYTE *)sub_EEC8C0(v70, (__int64)&v72, *(double *)a7.m128_u64);
      sub_1587DB0(v49, (__int64 *)&v73);
      sub_15F7200(&ptr);
      sub_18F5080((__int64)a1, *v71);
      break;
    case 1:
      v43 = (__int64)(a1 + 1);
      v44 = j__strlen(&byte_22F0C30);
      if ( !v66 || (sub_1DBADC0(a1), v43 = (__int64)(a1 + 1), v54) )
        v45 = 5085;
      else
        v45 = 5667;
      sub_168B9B0((__int64)&v73, v43, v45);
      sub_AE9DF0(&v73, *a3, 2u);
      v46 = *(_QWORD *)(v70 + 8);
      sub_AE9DF0(&v73, v46, 8u);
      v47 = (void *)sub_EEC8C0(v70, v46, *(double *)a7.m128_u64);
      LOBYTE(v76) = 1;
      ptr = v47;
      sub_AEC610((__int64 *)&v73, (__int64 *)&ptr);
      LODWORD(ptr) = v14;
      sub_1582CA0((__int64)&v76, &v73);
      sub_1C022A0(
        (unsigned int)&v78,
        (unsigned int)&ptr,
        (_DWORD)a1,
        0,
        (unsigned int)&v70,
        1,
        (__int64)&byte_22F0C30,
        v44,
        0,
        (__int64)sub_16A7620,
        (__int64)&v72);
      if ( v76 && v77[0] )
        sub_1580C40(v77[0], v76);
      if ( v73 && v74 )
        sub_1580C40(v74, (unsigned __int64)v73);
      if ( v66 )
      {
        sub_1DBADC0(a1);
        if ( !v53 )
          goto LABEL_14;
      }
      break;
    default:
      v67 = v79;
      v68 = v87 & 0x3FFFFFFF;
      v18 = (__m128 *)*v71;
      ptr = v77;
      v76 = 0x800000000LL;
      sub_1661560(a1, v14, (__int64)v18, v71[1], (__int64)a3, v66);
      if ( v66 )
      {
        v40 = 1;
        v41 = sub_B76070((__int64)v18, v14, v19, v20);
        if ( v41 != 1 )
        {
          do
          {
            v42 = *(_QWORD *)(v18[7].m128_u64[1] + 8LL * v40);
            if ( (unsigned __int8)sub_1E63CF0(a1, v14, *(_QWORD *)(v42 + 48), 1, 3380) )
              break;
            ++v40;
            sub_190FB60((__int64)a1, v14, (__int64)v18, v42, nullptr, *(double *)a7.m128_u64, a8);
          }
          while ( v41 != v40 );
        }
        v8 = v70;
      }
      else if ( (unsigned __int8)sub_183E070(
                                   (__int64)a1,
                                   v18,
                                   a2,
                                   (__int64)&v70,
                                   1u,
                                   v14,
                                   (__m128i)a7,
                                   (__int64)&ptr,
                                   0,
                                   0) )
      {
        v8 = 1;
      }
      else
      {
        v55 = a1[31];
        v56 = sub_BFE060(v70, v55, (__int64)v13, v21, v22, v23);
        v59 = 0;
        if ( v56 )
        {
          v63 = *(_QWORD *)(v70 + 8);
          v73 = *(_BYTE **)(**(_QWORD **)(*v71 + 120) + 48LL);
          v64 = sub_C1BEF0((__int64)&v73, v55, v57, v58);
          v59 = sub_1A0A350(v64, v63);
        }
        v8 = sub_1887390(
               (__int64)a1,
               v14,
               a2,
               v71[1] & 0xFFFFFFFFFFFFFFF8LL,
               v18,
               v59,
               (__int64)ptr,
               (unsigned int)v76,
               v68 + (unsigned __int64)v67 > 1,
               0,
               0,
               0,
               0,
               0);
        if ( v8 != 1 )
        {
          v62 = (unsigned int)*a3;
          if ( ((1LL << v62) & 0x23FDFD) == 0 )
            v8 = (__int64)sub_19A3E40(
                            (__int64)a1,
                            (unsigned __int16 *)(v8 & 0xFFFFFFFFFFFFFFFELL),
                            v60,
                            v62,
                            v61,
                            a7,
                            a8);
        }
      }
      if ( ptr != v77 )
        free(ptr);
      goto LABEL_14;
  }
  v8 = 1;
LABEL_14:
  sub_1BD27A0(&v78);
  v24 = (char *)v90;
  v25 = (char *)v90 + 8 * (unsigned int)v91;
  if ( v90 != v25 )
  {
    for ( i = v90; ; i = v90 )
    {
      v27 = 0x40000000000LL;
      v28 = (unsigned int)((v24 - i) >> 3) >> 7;
      if ( v28 <= 0x1D )
        v27 = 4096LL << v28;
      v29 = *(_QWORD *)v24;
      v24 += 8;
      operator delete(v29, v27, 16);
      if ( v25 == v24 )
        break;
    }
  }
  v30 = v93;
  v31 = &v93[2 * (unsigned int)v94];
  if ( v93 != v31 )
  {
    do
    {
      v32 = v30[1];
      v33 = *v30;
      v30 += 2;
      operator delete(v33, v32, 16);
    }
    while ( v31 != v30 );
    v31 = v93;
  }
  if ( v31 != v95 )
    free(v31);
  if ( v90 != v92 )
    free(v90);
  if ( !v84 )
    free(v81);
  v34 = v78;
  v35 = &v78[168 * (unsigned int)v79];
  if ( v78 != (_BYTE *)v35 )
  {
    do
    {
      while ( 1 )
      {
        v35 -= 21;
        v36 = (_QWORD *)v35[8];
        v37 = (_QWORD *)v35[9];
        v38 = v36;
        if ( v37 != v36 )
        {
          do
          {
            while ( 1 )
            {
              v39 = (char *)v38[3];
              if ( v39 == (char *)(v38 + 5) )
                break;
              operator delete(v39);
              v38 += 8;
              if ( v37 == v38 )
                goto LABEL_33;
            }
            v38 += 8;
          }
          while ( v37 != v38 );
LABEL_33:
          v36 = (_QWORD *)v35[8];
        }
        if ( !v36 )
          break;
        operator delete(v36);
        if ( v34 == v35 )
          goto LABEL_36;
      }
    }
    while ( v34 != v35 );
LABEL_36:
    v35 = v78;
  }
  if ( v35 != (_QWORD *)v80 )
    free(v35);
  return v8;
}
