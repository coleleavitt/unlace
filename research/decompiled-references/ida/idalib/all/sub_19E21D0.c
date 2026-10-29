__int64 __fastcall sub_19E21D0(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 *a5,
        unsigned int a6,
        __m128 a7,
        __m128 a8)
{
  int v8; // r15d
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // r15d
  __int64 result; // rax
  size_t v21; // rax
  __int64 v22; // r14
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r14
  int v28; // eax
  size_t v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 *v33; // r12
  unsigned __int64 (__fastcall *v34)(__int64, __int64, __int64, __int64, __int64, __int64); // rax
  unsigned int v35; // edx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned __int64 v39; // rax
  unsigned __int16 *v40; // rax
  _BYTE *v41; // rdi
  unsigned __int64 v42; // rdi
  __int64 v43; // r14
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  int v48; // r14d
  __int64 *v49; // r12
  unsigned __int64 (__fastcall *v50)(__int64, __int64, __int64, __int64, __int64, __int64); // rax
  unsigned int v51; // edx
  unsigned __int64 v52; // rsi
  unsigned int v53; // ecx
  unsigned int v54; // eax
  _QWORD *v55; // r8
  unsigned __int16 *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  size_t v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  int v64; // eax
  __int64 v65; // [rsp+8h] [rbp-1D0h]
  unsigned __int64 v66; // [rsp+8h] [rbp-1D0h]
  __int64 v67; // [rsp+8h] [rbp-1D0h]
  __int64 v68; // [rsp+8h] [rbp-1D0h]
  __int64 v69; // [rsp+18h] [rbp-1C0h]
  __int64 v70; // [rsp+20h] [rbp-1B8h]
  size_t v71; // [rsp+20h] [rbp-1B8h]
  int v72; // [rsp+2Ch] [rbp-1ACh]
  unsigned __int64 v73; // [rsp+30h] [rbp-1A8h] BYREF
  unsigned __int64 v74; // [rsp+38h] [rbp-1A0h] BYREF
  unsigned __int8 v75; // [rsp+47h] [rbp-191h] BYREF
  __int64 *v76; // [rsp+48h] [rbp-190h] BYREF
  unsigned __int64 v77; // [rsp+50h] [rbp-188h] BYREF
  unsigned __int64 v78; // [rsp+58h] [rbp-180h] BYREF
  __int64 v79; // [rsp+60h] [rbp-178h] BYREF
  __int64 v80; // [rsp+68h] [rbp-170h] BYREF
  void *v81; // [rsp+70h] [rbp-168h] BYREF
  unsigned __int64 v82; // [rsp+78h] [rbp-160h]
  _BYTE v83[16]; // [rsp+80h] [rbp-158h] BYREF
  __int64 v84[3]; // [rsp+90h] [rbp-148h] BYREF
  void *v85; // [rsp+A8h] [rbp-130h]
  _BYTE v86[24]; // [rsp+B8h] [rbp-120h] BYREF
  __int64 v87[3]; // [rsp+D0h] [rbp-108h] BYREF
  void *v88; // [rsp+E8h] [rbp-F0h]
  _BYTE v89[24]; // [rsp+F8h] [rbp-E0h] BYREF
  void *v90; // [rsp+110h] [rbp-C8h] BYREF
  size_t v91; // [rsp+118h] [rbp-C0h]
  _BYTE v92[184]; // [rsp+120h] [rbp-B8h] BYREF

  v74 = a3;
  v73 = a4;
  v65 = sub_168B6C0((__int64)a1);
  v14 = sub_19CF160(v73, a2, v12, v13);
  v17 = sub_19CF160(v74, a2, v15, v16);
  LOBYTE(v8) = v14 == 4;
  LOBYTE(v18) = v17 == 1;
  v19 = v18 & v8;
  if ( (v17 != 4 || v14 != 1) && !(_BYTE)v19 )
    return 0;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  result = sub_19DCB10(a1, a2, v74, v73, (unsigned __int64 *)&v76, &v77, &v78, (__int64)&v79, (unsigned __int8)v19, a6);
  if ( !(_BYTE)result )
    return 0;
  if ( (_BYTE)v19 )
  {
    if ( v77 )
    {
      result = v19;
      if ( (_BYTE)a6 )
      {
        v81 = v83;
        v21 = j__strlen("[");
        sub_19CF0A0(&v81, "[", (__int64)&asc_2327A0E[v21 + 2]);
        sub_B86A00((__int64)&v90, v76 + 5);
        sub_9EE560(&v81, v90, v91);
        if ( v90 != v92 )
          operator delete(v90);
        sub_9EE7C0(&v81, " ");
        v87[0] = *(_QWORD *)(v77 + 40);
        sub_FDEB80((__int64)&v90, v87);
        sub_9EE560(&v81, v90, v91);
        if ( v90 != v92 )
          operator delete(v90);
        v22 = *a1;
        v23 = sub_EEC140(*a5);
        v72 = sub_15F0EF0(v22, v23, 0, (__m128i)a7, *(double *)a8.m128_u64);
        sub_168B9F0((__int64)&v90, a1, a2, 0x10FBu, 0);
        v24 = sub_1605D30((__int64)&v90, (__int64 *)&v73);
        v25 = sub_1605D30(v24, (__int64 *)&v74);
        v80 = *(_QWORD *)(v77 + 40);
        v26 = sub_19D6730(v25, &v80);
        v75 = 0;
        v27 = sub_1588420(v26, &v75);
        v28 = sub_EEB7E0(*a5, (__int64)&v75, *(double *)a7.m128_u64);
        sub_9EC740((__int64)v84, v28, v81, v82, 0);
        v70 = sub_1589170(v27, v84);
        v29 = j__strlen("]");
        sub_9EC740((__int64)v87, v72, "]", v29, 0);
        sub_1589170(v70, v87);
        if ( v88 != v89 )
          operator delete(v88);
        if ( v85 != v86 )
          operator delete(v85);
        sub_15F7200(&v90);
        v33 = v76;
        v34 = *(unsigned __int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*v76 + 16);
        if ( v34 == sub_BAC570 )
        {
          if ( !v76[15] )
            sub_A794E0((__int64 *)(v76[12] + 88), v76[12], (__int64)sub_BAC570, v30, v31, v32);
          v35 = *((_DWORD *)v33 + 15);
        }
        else
        {
          v35 = ((__int64 (__fastcall *)(__int64 *))v34)(v76);
        }
        sub_168B9F0((__int64)&v90, a1, v35, 0x67u, 0);
        sub_15F7200(&v90);
        sub_168B9F0((__int64)&v90, a1, *(_DWORD *)(v79 + 56), 0x67u, 0);
        sub_15F7200(&v90);
        v39 = sub_A82070(v65, (__int64)v76, 0, v36, v37, v38);
        v90 = (void *)*a5;
        v40 = sub_19E2120(a1, v39, 0, *(_DWORD *)(v77 + 24), *(_QWORD *)(v77 + 40), v77, a7, a8, (__int64 *)&v90, 1);
        v41 = v81;
        *a5 = (unsigned __int64)v40 & 0xFFFFFFFFFFFFFFFELL;
        if ( v41 == v83 )
          return a6;
        goto LABEL_22;
      }
      return result;
    }
    return 0;
  }
  if ( !v78 )
    return 0;
  if ( (_BYTE)a6 )
  {
    v42 = *a5;
    v43 = *a1;
    v82 = 0;
    v81 = v83;
    v83[0] = 0;
    v44 = sub_EEC140(v42);
    v48 = sub_15F0EF0(v43, v44, 0, (__m128i)a7, *(double *)a8.m128_u64);
    if ( (*(_BYTE *)(v78 + 58) & 8) != 0 )
    {
      v66 = sub_BACEB0(v78, 1);
      if ( v66 )
      {
        sub_99BDC0(&v81, 0, v82, ".", 1u);
        sub_B86A00((__int64)&v90, (__int64 *)(v66 + 40));
        sub_9EE560(&v81, v90, v91);
        if ( v90 != v92 )
          operator delete(v90);
        sub_168B9F0((__int64)&v90, a1, a2, 0x10FBu, 0);
        v57 = sub_1605D30((__int64)&v90, (__int64 *)&v73);
        v58 = sub_1605D30(v57, (__int64 *)&v74);
        v84[0] = *(_QWORD *)(v78 + 40);
        v59 = sub_19D6730(v58, v84);
        LOBYTE(v80) = 1;
        v69 = sub_1588420(v59, (unsigned __int8 *)&v80);
        sub_9EC740((__int64)v87, v48, v81, v82, 0);
        sub_1589170(v69, v87);
        if ( v88 != v89 )
          operator delete(v88);
        sub_15F7200(&v90);
      }
    }
    if ( !v82 )
    {
      v60 = j__strlen(" ");
      sub_99BDC0(&v81, 0, 0, " ", v60);
      v87[0] = *(_QWORD *)(v78 + 40);
      sub_FDEB80((__int64)&v90, v87);
      sub_9EE560(&v81, v90, v91);
      if ( v90 != v92 )
        operator delete(v90);
      sub_9EE7C0(&v81, "]");
      sub_168B9F0((__int64)&v90, a1, a2, 0x10FBu, 0);
      v61 = sub_1605D30((__int64)&v90, (__int64 *)&v73);
      v62 = sub_1605D30(v61, (__int64 *)&v74);
      v80 = *(_QWORD *)(v78 + 40);
      v63 = sub_19D6730(v62, &v80);
      v75 = 1;
      v67 = sub_1588420(v63, &v75);
      v71 = j__strlen("[");
      v64 = sub_EEB7E0(*a5, (__int64)&v75, *(double *)a7.m128_u64);
      sub_9EC740((__int64)v84, v64, "[", v71, 0);
      v68 = sub_1589170(v67, v84);
      sub_9EC740((__int64)v87, v48, v81, v82, 0);
      sub_1589170(v68, v87);
      if ( v88 != v89 )
        operator delete(v88);
      if ( v85 != v86 )
        operator delete(v85);
      sub_15F7200(&v90);
    }
    v49 = v76;
    v50 = *(unsigned __int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*v76 + 16);
    if ( v50 == sub_BAC570 )
    {
      if ( !v76[15] )
        sub_A794E0((__int64 *)(v76[12] + 88), v76[12], (__int64)sub_BAC570, v45, v46, v47);
      v51 = *((_DWORD *)v49 + 15);
    }
    else
    {
      v51 = ((__int64 (__fastcall *)(__int64 *))v50)(v76);
    }
    sub_168B9F0((__int64)&v90, a1, v51, 0x67u, 0);
    sub_15F7200(&v90);
    sub_168B9F0((__int64)&v90, a1, *(_DWORD *)(v79 + 56), 0x67u, 0);
    sub_15F7200(&v90);
    v52 = *a5;
    v53 = 0;
    v54 = *(_DWORD *)(v78 + 24);
    v55 = *(_QWORD **)(v78 + 40);
    if ( !*a5 )
      v53 = *(_DWORD *)(v78 + 24);
    LODWORD(v90) = *(_DWORD *)(v78 + 24);
    v56 = sub_19DEE70(a1, v52, v73, v53, v55, v78, a7, a8, v54, (unsigned int *)&v90, 1u, v54, nullptr, 0, 1);
    v41 = v81;
    *a5 = (unsigned __int64)v56 & 0xFFFFFFFFFFFFFFFELL;
    if ( v41 != v83 )
    {
LABEL_22:
      operator delete(v41);
      return a6;
    }
    return a6;
  }
  return result;
}
