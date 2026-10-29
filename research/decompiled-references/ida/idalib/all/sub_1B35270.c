unsigned __int64 __fastcall sub_1B35270(
        __int64 *a1,
        unsigned __int64 *a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 *v12; // rbp
  int v14; // eax
  unsigned __int64 *v15; // r14
  unsigned __int64 v16; // r13
  __int64 v17; // rdi
  __int64 v18; // rax
  char v19; // dl
  unsigned __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rsi
  int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned int v32; // r15d
  __int64 v33; // rdx
  __int64 v34; // r15
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdi
  _QWORD *v39; // r9
  const char *v40; // rax
  size_t v41; // rdx
  __int64 v42; // r15
  unsigned __int64 v43; // rax
  __int64 v44; // r15
  __int64 v45; // rax
  __int64 v46; // rbx
  _BYTE *v47; // rdi
  unsigned __int64 v48; // rbp
  __int64 v49; // r14
  void *v50; // r13
  void *v51; // rbp
  __int64 v52; // rax
  unsigned __int64 v53; // rax
  __int64 v55; // rcx
  unsigned __int64 v56; // rdx
  __int64 v57; // rcx
  unsigned __int64 v58; // rdx
  __int64 v59; // rdi
  __int64 v60; // r13
  __int64 v61; // r13
  __int64 v62; // rdx
  void *v63; // rdi
  __int64 v64; // rax
  __int64 v65; // r13
  __int64 v66; // rdx
  __int64 v67; // rax
  int v68; // eax
  unsigned int v69; // ecx
  _QWORD *v70; // rax
  __int64 v71; // r13
  __int64 v72; // rbx
  __int64 v73; // rsi
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  int v77; // ebx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rax
  __int128 v82; // [rsp-10h] [rbp-298h]
  __int64 v83; // [rsp+38h] [rbp-250h]
  __int64 v84; // [rsp+38h] [rbp-250h]
  __int64 v85; // [rsp+38h] [rbp-250h]
  int v89; // [rsp+60h] [rbp-228h]
  unsigned int v90; // [rsp+64h] [rbp-224h]
  __int64 v91; // [rsp+68h] [rbp-220h]
  unsigned int v92; // [rsp+78h] [rbp-210h] BYREF
  unsigned int v93; // [rsp+7Ch] [rbp-20Ch] BYREF
  unsigned __int64 v94; // [rsp+80h] [rbp-208h] BYREF
  __int64 v95; // [rsp+88h] [rbp-200h] BYREF
  unsigned __int64 v96; // [rsp+90h] [rbp-1F8h] BYREF
  __int64 v97; // [rsp+98h] [rbp-1F0h] BYREF
  _QWORD v98[2]; // [rsp+A0h] [rbp-1E8h] BYREF
  __m128i v99; // [rsp+B0h] [rbp-1D8h] BYREF
  __int64 v100; // [rsp+C0h] [rbp-1C8h] BYREF
  __m128i v101; // [rsp+D0h] [rbp-1B8h] BYREF
  _BYTE v102[16]; // [rsp+E0h] [rbp-1A8h] BYREF
  unsigned int v103; // [rsp+F0h] [rbp-198h] BYREF
  unsigned int v104; // [rsp+F4h] [rbp-194h]
  void *v105; // [rsp+120h] [rbp-168h] BYREF
  __int64 v106; // [rsp+128h] [rbp-160h]
  _BYTE v107[64]; // [rsp+130h] [rbp-158h] BYREF
  void *ptr; // [rsp+170h] [rbp-118h] BYREF
  __int64 v109; // [rsp+178h] [rbp-110h]
  _BYTE v110[64]; // [rsp+180h] [rbp-108h] BYREF
  _QWORD v111[25]; // [rsp+1C0h] [rbp-C8h] BYREF

  v12 = a2;
  v105 = v107;
  v106 = 0x800000000LL;
  ptr = v110;
  v109 = 0x800000000LL;
  v90 = *(_DWORD *)(sub_168B6E0((__int64)a1) + 64);
  v14 = a5 | a4;
  v15 = &a2[a3];
  v89 = a6 | v14;
  if ( a2 != v15 )
  {
    while ( 1 )
    {
      v16 = *v12;
      v92 = 0;
      v17 = *a1;
      v94 = v16;
      v97 = 0;
      v18 = sub_1B31D70(v17, &v94, &v92, &v97, (__int64)&byte_22F0C30, 0, *(double *)a7.m128_u64);
      if ( v19 )
      {
        v55 = (unsigned int)v106;
        v56 = (unsigned int)v106 + 1LL;
        if ( v56 > HIDWORD(v106) )
        {
          v85 = v18;
          sub_2237220(&v105, v107, v56, 8);
          v55 = (unsigned int)v106;
          v18 = v85;
        }
        *((_QWORD *)v105 + v55) = v16;
        v57 = (unsigned int)v109;
        LODWORD(v106) = v106 + 1;
        v58 = (unsigned int)v109 + 1LL;
        if ( v58 > HIDWORD(v109) )
        {
          v84 = v18;
          sub_2237220(&ptr, v110, v58, 8);
          v57 = (unsigned int)v109;
          v18 = v84;
        }
        *((_QWORD *)ptr + v57) = 0;
        LODWORD(v109) = v109 + 1;
      }
      v95 = v18;
      if ( !v18 )
        goto LABEL_24;
      v20 = *(_QWORD *)(v18 + 48);
      v21 = 0;
      v22 = *a1;
      v23 = v92;
      v24 = *(_BYTE *)(v18 + 28) & 0x7F;
      v96 = v20;
      if ( (unsigned int)(v24 - 40) < 7 )
        v21 = v18;
      if ( (unsigned __int8)sub_1E63CF0(v22, v92, v20, 1, 4580) )
        goto LABEL_24;
      v27 = sub_C1BEF0((__int64)&v96, v23, v25, v26);
      v28 = *a1;
      v96 = v27;
      if ( (unsigned __int8)sub_1B310E0(v28, v95, v27, 0x52u, v92) )
        goto LABEL_24;
      v29 = a1[1];
      sub_1AFBE90((__int64)&v103, v29, v95);
      if ( v104 != 106 && v104 != 82 )
        break;
      v30 = sub_1AE5FF0(a1[1]);
      if ( v30 )
        v32 = *(_DWORD *)(v30 + 976);
      else
        v32 = 103;
      v33 = *(_QWORD *)(v96 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v33 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7) == 0x22
        || (*(_BYTE *)(v33 + 17) & 8) == 0
        || !(unsigned __int8)sub_FFEF70(v32, v29, v33, v31) )
      {
        if ( (*(_DWORD *)(sub_168B6E0((__int64)a1) + 64) > 0x2Du || !sub_FFE8A0(v32)) && v32 != 70
          || (v59 = a1[1],
              v29 = v21,
              v111[0] = &v93,
              !(unsigned __int8)sub_1AEA760(
                                  v59,
                                  v21,
                                  1,
                                  (__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))sub_1AE66C0,
                                  (__int64)v111)) )
        {
          v34 = 0;
          v96 = sub_6D5440(&v96);
          if ( v21 )
            v34 = v94;
          v38 = v95;
          v39 = nullptr;
          if ( (*(_BYTE *)(v95 + 29) & 1) != 0 )
          {
            v70 = sub_B8C3D0(v95, v29, v35, v36, v37, 0);
            v38 = v95;
            v39 = v70;
          }
          v83 = (__int64)v39;
          v40 = sub_995750(v38);
          v42 = sub_1AFE600((_QWORD *)*a1, v92, v96, v40, v41, v83, v34);
          sub_17D5BF0(*a1, (__int64 *)v42, *(double *)a7.m128_u64, *(double *)a8.m128_u64);
          if ( *(char *)(v42 + 28) >= 0 )
          {
            v111[0] = *(_QWORD *)(v16 + 8);
            v43 = sub_6D5440(v111);
            v44 = sub_1AE9760(*a1, v42, v43, v92);
            if ( v21 )
            {
              v45 = sub_BFB9F0(v16);
              v21 = v45;
              if ( v89 )
              {
                sub_1AEF810(a1[1], v95, v45, 0x52u, 0, 0, 0);
                v21 = sub_BFB9F0(v16);
              }
            }
            else
            {
              if ( !(unsigned __int8)sub_B8E180(*(_QWORD *)(*a1 + 544)) )
              {
                v72 = v95;
                if ( (*(_BYTE *)(v95 + 28) & 0x7Fu) - 49 <= 2 && (v73 = v95, (v91 = sub_1AE6110(a1[1], v95)) != 0) )
                {
                  v77 = sub_C00A40(v16, v73, v74, v75, v76);
                  v111[0] = *(_QWORD *)(v91 + 48);
                  v80 = sub_C1BEF0((__int64)v111, v91, v78, v79);
                  v21 = sub_1AE9760(*a1, v91, v80, v77);
                }
                else
                {
                  v21 = sub_1B22DF0(*a1, v72, v94, 0, a7, a8);
                }
              }
              if ( v89 )
              {
                v81 = sub_BFB9F0(v16);
                sub_1AEF810(a1[1], v95, v81, 0x52u, v21, 0, 0);
              }
              if ( (unsigned __int8)sub_B8E180(*(_QWORD *)(*a1 + 544)) )
                v21 = sub_BFB9F0(v16);
            }
            sub_14B7B40((__int64)&v105, v21);
            sub_14B7B40((__int64)&ptr, v44);
          }
          goto LABEL_24;
        }
        sub_168B9F0((__int64)v111, a1, v92, 0x1224u, 0);
        sub_1AF81E0(&v99, 0x52u);
        v60 = sub_1682AF0((__int64)v111, (__int64)&v99);
        sub_1AF81E0(&v101, v93);
        v61 = sub_1682AF0(v60, (__int64)&v101);
        v98[0] = sub_20EAB70(v32, v90);
        v98[1] = v62;
        sub_166BAF0(v61, (__int64)v98);
        v63 = (void *)v101.m128i_i64[0];
        if ( (_BYTE *)v101.m128i_i64[0] != v102 )
LABEL_40:
          operator delete(v63);
LABEL_41:
        if ( (__int64 *)v99.m128i_i64[0] != &v100 )
          operator delete((void *)v99.m128i_i64[0]);
        sub_15F7200(v111);
        sub_1B20830(*a1, a1[1], v95, &v103, 0);
        goto LABEL_24;
      }
      sub_168B9F0((__int64)v111, a1, v92, 0x1225u, 0);
      sub_1AF81E0(&v101, 0x52u);
      v64 = sub_1682AF0((__int64)v111, (__int64)&v101);
      v65 = sub_1605D30(v64, (__int64 *)&v96);
      v99.m128i_i64[0] = sub_20EAB70(v32, v90);
      v99.m128i_i64[1] = v66;
      sub_166BAF0(v65, (__int64)&v99);
      if ( (_BYTE *)v101.m128i_i64[0] != v102 )
        operator delete((void *)v101.m128i_i64[0]);
      sub_15F7200(v111);
      if ( !v21 || (v67 = sub_168B6C0((__int64)a1), v68 = sub_B74100(v21, v67), v69 = 5899, !v68) )
        v69 = 6283;
      sub_168B9F0((__int64)v111, a1, *(_DWORD *)(v95 + 24), v69, 0);
      sub_15993D0((__int64)v111, &v95);
      sub_15F7200(v111);
LABEL_24:
      if ( v15 == ++v12 )
        goto LABEL_25;
    }
    sub_168B9F0((__int64)v111, a1, v92, 0x1229u, 0);
    sub_1AF81E0(&v99, v104);
    v71 = sub_1682AF0((__int64)v111, (__int64)&v99);
    sub_1AF81E0(&v101, 0x52u);
    sub_1682AF0(v71, (__int64)&v101);
    v63 = (void *)v101.m128i_i64[0];
    if ( (_BYTE *)v101.m128i_i64[0] != v102 )
      goto LABEL_40;
    goto LABEL_41;
  }
LABEL_25:
  v46 = (unsigned int)v106;
  v47 = ptr;
  v48 = 0;
  if ( (_DWORD)v106 )
  {
    v49 = (unsigned int)v109;
    v50 = ptr;
    v51 = v105;
    v52 = sub_168B6C0((__int64)a1);
    *((_QWORD *)&v82 + 1) = v49;
    *(_QWORD *)&v82 = v50;
    v53 = sub_EBDA80(v52, a4, a5, a6, (__int64)v51, v46, v82);
    v47 = ptr;
    v48 = v53;
  }
  if ( v47 != v110 )
    free(v47);
  if ( v105 != v107 )
    free(v105);
  return v48;
}
