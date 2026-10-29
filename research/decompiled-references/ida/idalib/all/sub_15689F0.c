char __fastcall sub_15689F0(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rdx
  unsigned int v4; // eax
  __int64 v5; // rbp
  __int64 v6; // rbp
  size_t v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbp
  char v10; // al
  size_t v11; // rax
  __int64 v12; // rbp
  size_t v13; // rax
  __int64 v14; // rbp
  size_t v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 *v18; // rdi
  __int64 v20; // r12
  __int64 v21; // rax
  size_t v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbp
  size_t v25; // rax
  size_t v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbp
  size_t v29; // rax
  __int64 v30; // rax
  __int64 v31; // rbp
  size_t v32; // rax
  __int64 v33; // rax
  __int64 v34; // rbp
  size_t v35; // rax
  __int64 v36; // rax
  __int64 v37; // rbp
  size_t v38; // rax
  __int64 v39; // rax
  __int64 v40; // rbp
  size_t v41; // rax
  __int64 v42; // rax
  __int64 v43; // rbp
  size_t v44; // rax
  __int64 v45; // rax
  __int64 v46; // rbp
  size_t v47; // rax
  __int64 v48; // rax
  __int64 v49; // rbp
  size_t v50; // rax
  __int64 v51; // rax
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  size_t v81; // rax
  __int64 v82; // rax
  size_t v83; // rax
  __int64 v84; // rbp
  size_t v85; // rax
  __int64 v86; // rbp
  size_t v87; // rax
  __int64 v88; // rbp
  size_t v89; // rax
  __int64 v90; // rbp
  size_t v91; // rax
  __int64 v92; // rbp
  size_t v93; // rax
  __int64 v94; // rbp
  size_t v95; // rax
  __int64 v96; // rbp
  size_t v97; // rax
  __int64 v98; // rbp
  size_t v99; // rax
  __int64 v100; // rax

  v1 = *(_DWORD *)(a1 + 128);
  v3 = *(_QWORD *)(a1 + 96);
  if ( v1 )
  {
    v4 = v1 - 1;
    *(_DWORD *)(a1 + 128) = v4;
    v5 = *(_QWORD *)(a1 + 8LL * v4 + 136);
    sub_15ED360(v5, *(_QWORD *)(v3 + 608), 8);
  }
  else
  {
    v20 = *(_QWORD *)(v3 + 608);
    v5 = operator new(0x208u);
    v21 = *(_QWORD *)(a1 + 104);
    *(_QWORD *)(v5 + 88) = 32;
    *(_QWORD *)(v5 + 80) = v5 + 104;
    *(_DWORD *)(v5 + 96) = 0;
    *(_BYTE *)(v5 + 100) = 1;
    *(_QWORD *)(v5 + 368) = v5 + 384;
    *(_QWORD *)(v5 + 376) = 0x200000000LL;
    *(_QWORD *)(v5 + 400) = v21;
    *(_DWORD *)(v5 + 408) = *(_DWORD *)(v21 + 196);
    LODWORD(v21) = *(_DWORD *)(v21 + 200);
    *(_BYTE *)(v5 + 424) = 0;
    *(_DWORD *)(v5 + 412) = v21;
    *(_QWORD *)(v5 + 432) = v5 + 456;
    *(_QWORD *)(v5 + 440) = 8;
    *(_DWORD *)(v5 + 448) = 0;
    *(_BYTE *)(v5 + 452) = 1;
    sub_15ED360(v5, v20, 8);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL) = v5;
  sub_1601DB0(*(_QWORD *)(a1 + 96), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL));
  v6 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(*(_QWORD *)(v6 + 56) + 2LL) & 4) != 0 )
  {
    v83 = j__strlen("in");
    *(_QWORD *)(a1 + 2080) = sub_6F3470(v6 + 552, "in", v83);
    v84 = *(_QWORD *)(a1 + 8) + 552LL;
    v85 = j__strlen("out");
    *(_QWORD *)(a1 + 2088) = sub_6F3470(v84, "out", v85);
    v86 = *(_QWORD *)(a1 + 8) + 552LL;
    v87 = j__strlen("inout");
    *(_QWORD *)(a1 + 2096) = sub_6F3470(v86, "inout", v87);
    v88 = *(_QWORD *)(a1 + 8) + 552LL;
    v89 = j__strlen("oneway");
    *(_QWORD *)(a1 + 2104) = sub_6F3470(v88, "oneway", v89);
    v90 = *(_QWORD *)(a1 + 8) + 552LL;
    v91 = j__strlen("bycopy");
    *(_QWORD *)(a1 + 2112) = sub_6F3470(v90, "bycopy", v91);
    v92 = *(_QWORD *)(a1 + 8) + 552LL;
    v93 = j__strlen("byref");
    *(_QWORD *)(a1 + 2120) = sub_6F3470(v92, "byref", v93);
    v94 = *(_QWORD *)(a1 + 8) + 552LL;
    v95 = j__strlen("nonnull");
    *(_QWORD *)(a1 + 2128) = sub_6F3470(v94, "nonnull", v95);
    v96 = *(_QWORD *)(a1 + 8) + 552LL;
    v97 = j__strlen("nullable");
    *(_QWORD *)(a1 + 2136) = sub_6F3470(v96, "nullable", v97);
    v98 = *(_QWORD *)(a1 + 8) + 552LL;
    v99 = j__strlen("null_unspecified");
    v100 = sub_6F3470(v98, "null_unspecified", v99);
    v6 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 2144) = v100;
  }
  *(_QWORD *)(a1 + 2048) = 0;
  *(_QWORD *)(a1 + 1864) = 0;
  *(_OWORD *)(a1 + 1816) = 0;
  *(_OWORD *)(a1 + 1832) = 0;
  *(_OWORD *)(a1 + 1848) = 0;
  *(_OWORD *)(a1 + 344) = 0;
  v7 = j__strlen("super");
  v8 = sub_6F3470(v6 + 552, "super", v7);
  v9 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 2056) = v8;
  *(_OWORD *)(a1 + 376) = 0;
  *(_OWORD *)(a1 + 392) = 0;
  v10 = *(_BYTE *)(*(_QWORD *)(v9 + 56) + 13LL);
  if ( (v10 & 6) != 0 )
  {
    v11 = j__strlen("vector");
    *(_QWORD *)(a1 + 376) = sub_6F3470(v9 + 552, "vector", v11);
    v12 = *(_QWORD *)(a1 + 8) + 552LL;
    v13 = j__strlen("bool");
    *(_QWORD *)(a1 + 384) = sub_6F3470(v12, "bool", v13);
    v14 = *(_QWORD *)(a1 + 8) + 552LL;
    v15 = j__strlen("_Bool");
    v16 = sub_6F3470(v14, "_Bool", v15);
    v9 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 392) = v16;
    v10 = *(_BYTE *)(*(_QWORD *)(v9 + 56) + 13LL);
  }
  if ( (v10 & 2) != 0 )
  {
    v81 = j__strlen("pixel");
    v82 = sub_6F3470(v9 + 552, "pixel", v81);
    v9 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 400) = v82;
  }
  *(_OWORD *)(a1 + 408) = 0;
  *(_OWORD *)(a1 + 424) = 0;
  *(_OWORD *)(a1 + 448) = 0;
  *(_OWORD *)(a1 + 472) = 0;
  *(_OWORD *)(a1 + 488) = 0;
  *(_OWORD *)(a1 + 264) = 0;
  *(_OWORD *)(a1 + 280) = 0;
  *(_OWORD *)(a1 + 296) = 0;
  *(_OWORD *)(a1 + 312) = 0;
  *(_OWORD *)(a1 + 328) = 0;
  v17 = *(_QWORD *)(v9 + 56);
  if ( (*(_BYTE *)(v17 + 1) & 4) != 0 )
  {
    v26 = j__strlen("_exception_info");
    v27 = sub_6F3470(v9 + 552, "_exception_info", v26);
    v28 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 288) = v27;
    v29 = j__strlen("__exception_info");
    v30 = sub_6F3470(v28 + 552, "__exception_info", v29);
    v31 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 296) = v30;
    v32 = j__strlen("GetExceptionInformation");
    v33 = sub_6F3470(v31 + 552, "GetExceptionInformation", v32);
    v34 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 304) = v33;
    v35 = j__strlen("_exception_code");
    v36 = sub_6F3470(v34 + 552, "_exception_code", v35);
    v37 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 264) = v36;
    v38 = j__strlen("__exception_code");
    v39 = sub_6F3470(v37 + 552, "__exception_code", v38);
    v40 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 272) = v39;
    v41 = j__strlen("GetExceptionCode");
    v42 = sub_6F3470(v40 + 552, "GetExceptionCode", v41);
    v43 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 280) = v42;
    v44 = j__strlen("_abnormal_termination");
    v45 = sub_6F3470(v43 + 552, "_abnormal_termination", v44);
    v46 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 312) = v45;
    v47 = j__strlen("__abnormal_termination");
    v48 = sub_6F3470(v46 + 552, "__abnormal_termination", v47);
    v49 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 320) = v48;
    v50 = j__strlen("AbnormalTermination");
    v51 = sub_6F3470(v49 + 552, "AbnormalTermination", v50);
    v52 = *(_QWORD *)(a1 + 264);
    v53 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 328) = v51;
    sub_1462270(v53, v52, 58, v54, v55, v56);
    sub_1462270(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 272), 58, v57, v58, v59);
    sub_1462270(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 280), 58, v60, v61, v62);
    sub_1462270(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 288), 59, v63, v64, v65);
    sub_1462270(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 296), 59, v66, v67, v68);
    sub_1462270(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 304), 59, v69, v70, v71);
    sub_1462270(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 312), 60, v72, v73, v74);
    sub_1462270(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 320), 60, v75, v76, v77);
    sub_1462270(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 328), 60, v78, v79, v80);
    v9 = *(_QWORD *)(a1 + 8);
    v17 = *(_QWORD *)(v9 + 56);
  }
  if ( (*(_BYTE *)(v17 + 21) & 4) != 0 )
  {
    v22 = j__strlen("import");
    v23 = sub_6F3470(v9 + 552, "import", v22);
    v24 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 344) = v23;
    v25 = j__strlen("module");
    *(_QWORD *)(a1 + 352) = sub_6F3470(v24 + 552, "module", v25);
  }
  sub_15FB8B0(*(_QWORD *)(a1 + 96));
  v18 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  return sub_14634E0(v18, (int *)(a1 + 16));
}
