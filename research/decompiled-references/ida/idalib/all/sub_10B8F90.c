__int64 __fastcall sub_10B8F90(__int64 *a1)
{
  __int64 v1; // rbp
  unsigned int v2; // eax
  unsigned int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // r13d
  __int64 *v8; // r12
  __int64 *v9; // rax
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // r12
  unsigned int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // r14d
  __int64 *v19; // r13
  __int64 *v20; // rax
  __int64 v21; // rax
  unsigned int v22; // eax
  __int64 v23; // r12
  unsigned int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // r14d
  __int64 *v30; // r13
  __int64 *v31; // rax
  __int64 v32; // rax
  __m128i si128; // xmm0
  unsigned int v34; // eax
  __int64 v35; // r12
  unsigned int v36; // eax
  unsigned int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned int v41; // r14d
  __int64 *v42; // r13
  __int64 *v43; // rax
  __int64 v44; // rax
  unsigned int v45; // eax
  __int64 v46; // r12
  unsigned int v47; // eax
  unsigned int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  unsigned int v52; // r14d
  __int64 *v53; // r13
  __int64 *v54; // rax
  __int64 v55; // rax
  unsigned int v56; // eax
  __int64 v57; // r12
  unsigned int v58; // eax
  unsigned int v59; // eax
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  unsigned int v63; // r14d
  __int64 *v64; // r13
  __int64 *v65; // rax
  __int64 v66; // rax
  __m128i v67; // xmm0
  unsigned int v68; // eax
  __int64 v69; // r12
  unsigned int v70; // eax
  unsigned int v71; // eax
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  unsigned int v75; // r14d
  __int64 *v76; // r13
  __int64 *v77; // rax
  __int64 v78; // rax
  unsigned int v79; // eax
  __int64 v80; // rbx
  unsigned int v81; // eax
  unsigned int v82; // eax
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  unsigned int v86; // r13d
  __int64 *v87; // r12
  __int64 *v88; // rax
  __int64 v89; // rax
  unsigned int v90; // eax
  __int64 result; // rax
  __int64 *v92[6]; // [rsp+8h] [rbp-30h] BYREF

  v1 = *a1;
  v2 = sub_2244B30("bulk-memory", 11);
  v3 = sub_2244CB0(v1, "bulk-memory", 11, v2);
  v7 = v3;
  v8 = (__int64 *)(*(_QWORD *)v1 + 8LL * v3);
  if ( *v8 )
  {
    if ( *v8 != -8 )
    {
      sub_10298F0(v92, v8, 0);
      v9 = v92[0];
      goto LABEL_6;
    }
    --*(_DWORD *)(v1 + 16);
  }
  v10 = sub_22300B0(28, 8, v3, v4, v5, v6);
  strcpy((char *)(v10 + 16), "bulk-memory");
  *(_QWORD *)v10 = 11;
  *(_BYTE *)(v10 + 8) = 0;
  *v8 = v10;
  ++*(_DWORD *)(v1 + 12);
  v11 = sub_22450D0(v1, v7);
  sub_10298F0(v92, (__int64 *)(*(_QWORD *)v1 + 8LL * v11), 0);
  v9 = v92[0];
LABEL_6:
  v12 = *a1;
  *(_BYTE *)(*v9 + 8) = 1;
  v13 = sub_2244B30("bulk-memory-opt", 15);
  v14 = sub_2244CB0(v12, "bulk-memory-opt", 15, v13);
  v18 = v14;
  v19 = (__int64 *)(*(_QWORD *)v12 + 8LL * v14);
  if ( *v19 )
  {
    if ( *v19 != -8 )
    {
      sub_10298F0(v92, v19, 0);
      v20 = v92[0];
      goto LABEL_11;
    }
    --*(_DWORD *)(v12 + 16);
  }
  v21 = sub_22300B0(32, 8, v14, v15, v16, v17);
  strcpy((char *)(v21 + 16), "bulk-memory-opt");
  *(_QWORD *)v21 = 15;
  *(_BYTE *)(v21 + 8) = 0;
  *v19 = v21;
  ++*(_DWORD *)(v12 + 12);
  v22 = sub_22450D0(v12, v18);
  sub_10298F0(v92, (__int64 *)(*(_QWORD *)v12 + 8LL * v22), 0);
  v20 = v92[0];
LABEL_11:
  v23 = *a1;
  *(_BYTE *)(*v20 + 8) = 1;
  v24 = sub_2244B30("call-indirect-overlong", 22);
  v25 = sub_2244CB0(v23, "call-indirect-overlong", 22, v24);
  v29 = v25;
  v30 = (__int64 *)(*(_QWORD *)v23 + 8LL * v25);
  if ( *v30 )
  {
    if ( *v30 != -8 )
    {
      sub_10298F0(v92, v30, 0);
      v31 = v92[0];
      goto LABEL_16;
    }
    --*(_DWORD *)(v23 + 16);
  }
  v32 = sub_22300B0(39, 8, v25, v26, v27, v28);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A97B0);
  strcpy((char *)(v32 + 32), "erlong");
  *(__m128i *)(v32 + 16) = si128;
  *(_QWORD *)v32 = 22;
  *(_BYTE *)(v32 + 8) = 0;
  *v30 = v32;
  ++*(_DWORD *)(v23 + 12);
  v34 = sub_22450D0(v23, v29);
  sub_10298F0(v92, (__int64 *)(*(_QWORD *)v23 + 8LL * v34), 0);
  v31 = v92[0];
LABEL_16:
  v35 = *a1;
  *(_BYTE *)(*v31 + 8) = 1;
  v36 = sub_2244B30("multivalue", 10);
  v37 = sub_2244CB0(v35, "multivalue", 10, v36);
  v41 = v37;
  v42 = (__int64 *)(*(_QWORD *)v35 + 8LL * v37);
  if ( *v42 )
  {
    if ( *v42 != -8 )
    {
      sub_10298F0(v92, v42, 0);
      v43 = v92[0];
      goto LABEL_21;
    }
    --*(_DWORD *)(v35 + 16);
  }
  v44 = sub_22300B0(27, 8, v37, v38, v39, v40);
  strcpy((char *)(v44 + 16), "multivalue");
  *(_QWORD *)v44 = 10;
  *(_BYTE *)(v44 + 8) = 0;
  *v42 = v44;
  ++*(_DWORD *)(v35 + 12);
  v45 = sub_22450D0(v35, v41);
  sub_10298F0(v92, (__int64 *)(*(_QWORD *)v35 + 8LL * v45), 0);
  v43 = v92[0];
LABEL_21:
  v46 = *a1;
  *(_BYTE *)(*v43 + 8) = 1;
  v47 = sub_2244B30("mutable-globals", 15);
  v48 = sub_2244CB0(v46, "mutable-globals", 15, v47);
  v52 = v48;
  v53 = (__int64 *)(*(_QWORD *)v46 + 8LL * v48);
  if ( *v53 )
  {
    if ( *v53 != -8 )
    {
      sub_10298F0(v92, v53, 0);
      v54 = v92[0];
      goto LABEL_26;
    }
    --*(_DWORD *)(v46 + 16);
  }
  v55 = sub_22300B0(32, 8, v48, v49, v50, v51);
  strcpy((char *)(v55 + 16), "mutable-globals");
  *(_QWORD *)v55 = 15;
  *(_BYTE *)(v55 + 8) = 0;
  *v53 = v55;
  ++*(_DWORD *)(v46 + 12);
  v56 = sub_22450D0(v46, v52);
  sub_10298F0(v92, (__int64 *)(*(_QWORD *)v46 + 8LL * v56), 0);
  v54 = v92[0];
LABEL_26:
  v57 = *a1;
  *(_BYTE *)(*v54 + 8) = 1;
  v58 = sub_2244B30("nontrapping-fptoint", 19);
  v59 = sub_2244CB0(v57, "nontrapping-fptoint", 19, v58);
  v63 = v59;
  v64 = (__int64 *)(*(_QWORD *)v57 + 8LL * v59);
  if ( *v64 )
  {
    if ( *v64 != -8 )
    {
      sub_10298F0(v92, v64, 0);
      v65 = v92[0];
      goto LABEL_31;
    }
    --*(_DWORD *)(v57 + 16);
  }
  v66 = sub_22300B0(36, 8, v59, v60, v61, v62);
  v67 = _mm_load_si128((const __m128i *)&xmmword_23A97C0);
  *(_WORD *)(v66 + 32) = 28265;
  *(_BYTE *)(v66 + 34) = 116;
  *(__m128i *)(v66 + 16) = v67;
  *(_BYTE *)(v66 + 35) = 0;
  *(_QWORD *)v66 = 19;
  *(_BYTE *)(v66 + 8) = 0;
  *v64 = v66;
  ++*(_DWORD *)(v57 + 12);
  v68 = sub_22450D0(v57, v63);
  sub_10298F0(v92, (__int64 *)(*(_QWORD *)v57 + 8LL * v68), 0);
  v65 = v92[0];
LABEL_31:
  v69 = *a1;
  *(_BYTE *)(*v65 + 8) = 1;
  v70 = sub_2244B30("reference-types", 15);
  v71 = sub_2244CB0(v69, "reference-types", 15, v70);
  v75 = v71;
  v76 = (__int64 *)(*(_QWORD *)v69 + 8LL * v71);
  if ( *v76 )
  {
    if ( *v76 != -8 )
    {
      sub_10298F0(v92, v76, 0);
      v77 = v92[0];
      goto LABEL_36;
    }
    --*(_DWORD *)(v69 + 16);
  }
  v78 = sub_22300B0(32, 8, v71, v72, v73, v74);
  strcpy((char *)(v78 + 16), "reference-types");
  *(_QWORD *)v78 = 15;
  *(_BYTE *)(v78 + 8) = 0;
  *v76 = v78;
  ++*(_DWORD *)(v69 + 12);
  v79 = sub_22450D0(v69, v75);
  sub_10298F0(v92, (__int64 *)(*(_QWORD *)v69 + 8LL * v79), 0);
  v77 = v92[0];
LABEL_36:
  v80 = *a1;
  *(_BYTE *)(*v77 + 8) = 1;
  v81 = sub_2244B30("sign-ext", 8);
  v82 = sub_2244CB0(v80, "sign-ext", 8, v81);
  v86 = v82;
  v87 = (__int64 *)(*(_QWORD *)v80 + 8LL * v82);
  if ( !*v87 )
  {
LABEL_40:
    v89 = sub_22300B0(25, 8, v82, v83, v84, v85);
    strcpy((char *)(v89 + 16), "sign-ext");
    *(_QWORD *)v89 = 8;
    *(_BYTE *)(v89 + 8) = 0;
    *v87 = v89;
    ++*(_DWORD *)(v80 + 12);
    v90 = sub_22450D0(v80, v86);
    sub_10298F0(v92, (__int64 *)(*(_QWORD *)v80 + 8LL * v90), 0);
    v88 = v92[0];
    goto LABEL_41;
  }
  if ( *v87 == -8 )
  {
    --*(_DWORD *)(v80 + 16);
    goto LABEL_40;
  }
  sub_10298F0(v92, v87, 0);
  v88 = v92[0];
LABEL_41:
  result = *v88;
  *(_BYTE *)(result + 8) = 1;
  return result;
}
