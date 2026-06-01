__int64 __fastcall sub_C54860(__int64 *a1, __int64 a2, __int64 a3, struct _Unwind_Exception *a4)
{
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // r15
  void *v10; // r14
  void *v11; // r14
  void *v12; // r14
  void *v13; // rbx
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v17; // rdi
  char v18; // al
  __int64 v19; // rdi
  char v20; // al
  __int64 v21; // r12
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdi
  int v34; // ecx
  int v35; // r8d
  int v36; // r9d
  __int64 v37; // rax
  int v38; // ecx
  int v39; // r8d
  int v40; // r9d
  __int64 *v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rax
  __m128 v44; // xmm0
  __m128 v45; // xmm1
  __int64 v46; // rdi
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rax
  _Unwind_Exception_Class v51; // r14
  __int64 v52; // rsi
  void *v53; // rdi
  __int64 v54; // [rsp+30h] [rbp-1C0h]
  __int64 v55; // [rsp+38h] [rbp-1B8h] BYREF
  int v56[2]; // [rsp+40h] [rbp-1B0h]
  __int64 v57; // [rsp+48h] [rbp-1A8h]
  int v58[2]; // [rsp+50h] [rbp-1A0h]
  __int64 v59; // [rsp+58h] [rbp-198h] BYREF
  int v60[2]; // [rsp+60h] [rbp-190h]
  int v61[2]; // [rsp+68h] [rbp-188h]
  void *v62; // [rsp+70h] [rbp-180h]
  int v63[2]; // [rsp+78h] [rbp-178h]
  __int64 v64; // [rsp+80h] [rbp-170h]
  __int64 v65; // [rsp+88h] [rbp-168h]
  __int64 v66; // [rsp+90h] [rbp-160h]
  struct _Unwind_Exception *v67; // [rsp+98h] [rbp-158h]
  void *v68; // [rsp+A0h] [rbp-150h]
  void *v69; // [rsp+A8h] [rbp-148h]
  void *v70; // [rsp+B0h] [rbp-140h]
  void *v71; // [rsp+B8h] [rbp-138h]
  int v72[2]; // [rsp+C0h] [rbp-130h]
  __int64 v73; // [rsp+C8h] [rbp-128h]
  __int64 v74; // [rsp+D0h] [rbp-120h] BYREF
  __int64 v75; // [rsp+D8h] [rbp-118h]
  __int64 v76; // [rsp+E0h] [rbp-110h] BYREF
  __int64 v77; // [rsp+E8h] [rbp-108h]
  __int64 v78; // [rsp+F0h] [rbp-100h] BYREF
  __int64 v79; // [rsp+F8h] [rbp-F8h]
  __int64 v80; // [rsp+100h] [rbp-F0h] BYREF
  __int64 v81; // [rsp+108h] [rbp-E8h]
  __m128 v82; // [rsp+110h] [rbp-E0h] BYREF
  _QWORD v83[2]; // [rsp+120h] [rbp-D0h] BYREF
  _QWORD v84[2]; // [rsp+130h] [rbp-C0h] BYREF
  _QWORD v85[2]; // [rsp+140h] [rbp-B0h] BYREF
  _QWORD v86[2]; // [rsp+150h] [rbp-A0h] BYREF
  _QWORD v87[2]; // [rsp+160h] [rbp-90h] BYREF
  _QWORD v88[2]; // [rsp+170h] [rbp-80h] BYREF
  _QWORD v89[2]; // [rsp+180h] [rbp-70h] BYREF
  _QWORD v90[2]; // [rsp+190h] [rbp-60h] BYREF
  __m128 v91; // [rsp+1A0h] [rbp-50h] BYREF
  __int64 v92; // [rsp+1B0h] [rbp-40h] BYREF
  __int64 v93; // [rsp+1B8h] [rbp-38h]

  v6 = *a1;
  v67 = a4;
  v83[0] = 0;
  v73 = v6;
  v83[1] = 0;
  v84[0] = 1;
  v84[1] = 0;
  v85[0] = 0;
  v85[1] = 0;
  v86[0] = 1;
  v86[1] = 0;
  v87[0] = 0;
  v87[1] = 0;
  v88[0] = 1;
  v88[1] = 0;
  v89[0] = 0;
  v89[1] = 0;
  v90[0] = 1;
  v90[1] = 0;
  if ( (unsigned __int8)sub_C53830(a1, a2, a3, 1, 1, (int)a4) )
  {
    v7 = 0;
    v8 = 0;
    v9 = 0;
    *(_QWORD *)v72 = 0;
    v66 = v73;
    v64 = v73;
    v65 = v73;
    v71 = v87;
    LODWORD(v67) = 4;
    v68 = v83;
LABEL_3:
    v70 = v89;
    v69 = v85;
    goto LABEL_4;
  }
  v17 = a1[1];
  v74 = 0;
  v75 = v73;
  v77 = v73;
  v71 = v87;
  v76 = 0;
  v68 = v83;
  v62 = &v76;
  *(_QWORD *)v63 = &v74;
  v18 = sub_C50710(v17, a2, &v74, &v76, (__int64)v83, (__int64)v87);
  v9 = v74;
  v8 = v76;
  v64 = v77;
  v65 = v75;
  if ( !v18 )
  {
    v7 = 0;
    *(_QWORD *)v72 = 0;
    LODWORD(v67) = 5;
    v66 = v73;
    goto LABEL_3;
  }
  v19 = a1[1];
  v78 = 0;
  v79 = v73;
  v81 = v73;
  v70 = v89;
  v80 = 0;
  v69 = v85;
  *(_QWORD *)v60 = &v80;
  *(_QWORD *)v61 = &v78;
  v20 = sub_C50710(v19, a3, &v78, &v80, (__int64)v85, (__int64)v89);
  v7 = v80;
  *(_QWORD *)v72 = v78;
  v66 = v81;
  v73 = v79;
  if ( v20 && sub_3ED680((__int64)qword_1C7F2C0, (__int64)v71, (__int64)v70) )
  {
    sub_C528A0(
      (__int64 *)a1[1],
      *(__int64 **)v63,
      (__int64 *)v62,
      *(__int64 **)v61,
      *(__int64 **)v60,
      (__int64)v68,
      (__int64)v69);
    v9 = v74;
    *(_QWORD *)v63 = v80;
    v21 = v78;
    v22 = a1[1];
    v66 = v81;
    v8 = v76;
    v73 = v79;
    v64 = v77;
    v65 = v75;
    v23 = sub_C4F690(v22, v78, v74);
    *(_QWORD *)v72 = v23;
    if ( v23 )
      ++*(_DWORD *)(v23 + 8);
    sub_C4E2C0(v21, v73);
    v24 = sub_C4F690(a1[1], *(__int64 *)v63, v8);
    v7 = v24;
    if ( v24 )
      ++*(_DWORD *)(v24 + 8);
    sub_C4E2C0(*(__int64 *)v63, v66);
    v54 = *a1;
    *(_QWORD *)v63 = a1 + 2;
    LODWORD(v62) = sub_C4E2E0(*(__int64 *)v72);
    v91 = 0u;
    v92 = 1;
    v93 = 0;
    *(_QWORD *)v61 = &v92;
    sub_182CBA0(qword_1C7F2C0, &v92);
    v25 = (unsigned int)v62;
    BYTE4(v92) &= ~1u;
    LODWORD(v92) = 1;
    v62 = &v91;
    v26 = sub_1674520(a1 + 2, &v91, v25);
    *(_QWORD *)v60 = v26;
    if ( v26 )
      ++*(_DWORD *)(v26 + 8);
    sub_25A130((char *)v62);
    LODWORD(v59) = sub_C4E2E0(v7);
    v91 = 0u;
    v92 = 1;
    v93 = 0;
    sub_182CBA0(qword_1C7F2C0, *(_QWORD *)v61);
    LODWORD(v92) = 1;
    BYTE4(v92) &= ~1u;
    v27 = sub_1674520(*(_QWORD *)v63, v62, (unsigned int)v59);
    *(_QWORD *)v61 = v27;
    if ( v27 )
      ++*(_DWORD *)(v27 + 8);
    sub_25A130((char *)v62);
    v28 = sub_15E1B70(a1[3]);
    v29 = a1[3];
    *(_QWORD *)v58 = v28;
    sub_15E1B70(v29);
    v30 = sub_15E1B70(a1[3]);
    v31 = a1[3];
    v57 = v30;
    v32 = sub_15E1B70(v31);
    v33 = a1[1];
    *(_QWORD *)v56 = v32;
    v59 = *a1;
    v37 = sub_C524A0(v33, *(__int64 *)v72, *(__int64 *)v72, v34, v35, v36);
    *(_QWORD *)v63 = v37;
    if ( v37 )
      ++*(_DWORD *)(v37 + 8);
    v41 = (__int64 *)a1[1];
    v55 = *a1;
    v42 = sub_C524A0((__int64)v41, v7, v7, v38, v39, v40);
    v43 = sub_C527D0(v41, (__int64)v71, v42);
    v44 = _mm_loadh_ps((const double *)&v55);
    v45 = _mm_loadh_ps((const double *)&v59);
    if ( v43 )
      ++*(_DWORD *)(v43 + 8);
    v46 = a1[1];
    v91 = v44;
    v82 = v45;
    sub_C4F590(v46, (__int64 *)&v82, (__int64 *)v62);
    v55 = v91.m128_i64[1];
    v62 = (void *)v91.m128_u64[0];
    v59 = v82.m128_i64[1];
    v47 = a1[3];
    *(_QWORD *)v63 = v82.m128_u64[0];
    sub_15E1B70(v47);
    sub_15E1B70(a1[3]);
    sub_15E1B70(*a1);
    *(_QWORD *)v56 = *a1;
    sub_15E1A70(v56[0]);
    sub_15E1A70(*a1);
    v48 = sub_15E1BF0(v56[0]);
    v49 = *a1;
    *(_QWORD *)v56 = v48;
    *(_QWORD *)v58 = v49;
    sub_15E1A70(v49);
    sub_15E1A70(*a1);
    sub_15E1BF0(v58[0]);
    v50 = sub_15E1BF0(*a1);
    v51 = v50;
    if ( v50 )
      ++*(_DWORD *)(v50 + 8);
    sub_C4E2C0(v67->exception_class, (__int64)v67->exception_cleanup);
    v52 = v55;
    v53 = v62;
    v67->exception_class = v51;
    sub_C4E2C0((__int64)v53, v52);
    sub_C4E2C0(*(__int64 *)v63, v59);
    sub_C4E2C0(*(__int64 *)v61, v54);
    sub_C4E2C0(*(__int64 *)v60, v54);
    LODWORD(v67) = 4;
  }
  else
  {
    LODWORD(v67) = 5;
  }
LABEL_4:
  v10 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v70);
  sub_182CBA0(v10, v90);
  v11 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v71);
  sub_182CBA0(v11, v88);
  v12 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v69);
  sub_182CBA0(v12, v86);
  v13 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v68);
  sub_182CBA0(v13, v84);
  if ( v7 )
  {
    v14 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v66, v7);
  }
  v15 = *(_QWORD *)v72;
  if ( *(_QWORD *)v72 )
  {
    LODWORD(v71) = *(_DWORD *)(*(_QWORD *)v72 + 8LL);
    v14 = (_DWORD)v71 == 1;
    *(_DWORD *)(*(_QWORD *)v72 + 8LL) = (_DWORD)v71 - 1;
    if ( v14 )
      sub_15D7BC0(v73, v15);
  }
  if ( v8 )
  {
    v14 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v64, v8);
  }
  if ( v9 )
  {
    v14 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v65, v9);
  }
  return (unsigned int)v67;
}

