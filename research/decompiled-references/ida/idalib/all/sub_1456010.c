_QWORD *__fastcall sub_1456010(__int64 a1)
{
  _QWORD *v2; // r12
  __int64 v3; // rdi
  _QWORD *v4; // r12
  size_t v5; // rax
  __int64 v6; // rdi
  _QWORD *v7; // r12
  size_t v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // r12
  size_t v11; // rax
  __int64 v12; // rdi
  __int64 v13; // r12
  size_t v14; // rax
  __int64 v15; // rdi
  _QWORD *v16; // r13
  size_t v17; // rax
  size_t v18; // rax
  _QWORD *v19; // r13
  size_t v20; // rax
  size_t v21; // rax
  _QWORD *v22; // r13
  size_t v23; // rax
  _QWORD *v24; // r13
  size_t v25; // rax
  size_t v26; // rax
  __int64 v27; // r13
  size_t v28; // rax
  __int64 v29; // r13
  size_t v30; // rax
  size_t v31; // rax
  _QWORD *v32; // r13
  size_t v33; // rax
  size_t v34; // rax
  _QWORD *v35; // r13
  size_t v36; // rax
  size_t v37; // rax
  _QWORD *v38; // r13
  size_t v39; // rax
  size_t v40; // rax
  _QWORD *v41; // r13
  size_t v42; // rax
  _QWORD *v43; // r13
  size_t v44; // rax
  size_t v45; // rax
  _QWORD *v46; // r13
  size_t v47; // rax
  _QWORD *v48; // r13
  size_t v49; // rax
  size_t v50; // rax
  _QWORD *v51; // r13
  size_t v52; // rax
  size_t v53; // rax
  _QWORD *v54; // r13
  size_t v55; // rax
  _QWORD *v56; // r13
  size_t v57; // rax
  size_t v58; // rax
  size_t v59; // r15
  __int64 v60; // r13
  __m128i si128; // xmm0
  size_t v62; // rax
  _QWORD *v63; // r15
  size_t v64; // rax
  _QWORD *v65; // r15
  size_t v66; // rax
  _QWORD *v67; // r15
  size_t v68; // rax
  _QWORD *v69; // r15
  size_t v70; // rax
  _QWORD *v71; // r15
  size_t v72; // rax
  _QWORD *v73; // r13
  size_t v74; // rax
  size_t v75; // rax
  _QWORD *v76; // r12
  size_t v77; // rax
  _QWORD *v78; // r12
  size_t v79; // rax
  _QWORD *result; // rax
  _QWORD *v81; // rbx
  __int64 v82; // rsi
  __int64 v83; // rdi
  _QWORD *v84; // r12
  size_t v85; // rax
  __int64 v86; // rdi
  _QWORD *v87; // r12
  size_t v88; // rax
  __int64 v89; // rdi
  _QWORD *v90; // r12
  size_t v91; // rax
  __int64 v92; // rdi
  _QWORD *v93; // r12
  size_t v94; // rax
  __int64 v95; // rdi
  _QWORD *v96; // r12
  size_t v97; // rax
  __int64 v98; // rdi
  _QWORD *v99; // r12
  size_t v100; // rax
  _QWORD *v101; // r12
  size_t v102; // rax
  size_t v103; // [rsp+8h] [rbp-50h]
  __int64 v104[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = (_QWORD *)operator new(0x28u);
  v2[1] = v2 + 3;
  *v2 = &unk_2C446A0;
  sub_144EF90(v2 + 1, "once", (__int64)"");
  v3 = *(_QWORD *)(a1 + 696);
  *v2 = &off_2BB2CB0;
  sub_1455E10(v3, (__int64)v2);
  v4 = (_QWORD *)operator new(0x28u);
  v5 = j__strlen("mark");
  *v4 = &unk_2C446A0;
  v4[1] = v4 + 3;
  sub_144EF90(v4 + 1, "mark", (__int64)&aExclamationMar[v5 + 12]);
  v6 = *(_QWORD *)(a1 + 696);
  *v4 = &off_2BB2CE0;
  sub_1455E10(v6, (__int64)v4);
  v7 = (_QWORD *)operator new(0x28u);
  v8 = j__strlen("push_macro");
  *v7 = &unk_2C446A0;
  v7[1] = v7 + 3;
  sub_144EF90(v7 + 1, "push_macro", (__int64)&aPushMacro[v8]);
  v9 = *(_QWORD *)(a1 + 696);
  *v7 = &off_2BB3010;
  sub_1455E10(v9, (__int64)v7);
  v10 = (_QWORD *)operator new(0x28u);
  v11 = j__strlen("pop_macro");
  *v10 = &unk_2C446A0;
  v10[1] = v10 + 3;
  sub_144EF90(v10 + 1, "pop_macro", (__int64)&aPopMacro[v11]);
  v12 = *(_QWORD *)(a1 + 696);
  *v10 = &off_2BB3040;
  sub_1455E10(v12, (__int64)v10);
  v13 = operator new(0x40u);
  v14 = j__strlen("message");
  *(_QWORD *)v13 = &unk_2C446A0;
  *(_QWORD *)(v13 + 8) = v13 + 24;
  sub_144EF90((_QWORD *)(v13 + 8), "message", (__int64)&aPragmaMessage[v14 + 7]);
  v15 = *(_QWORD *)(a1 + 696);
  *(_QWORD *)v13 = &off_2BB2EF0;
  *(_DWORD *)(v13 + 40) = 0;
  *(_QWORD *)(v13 + 48) = 0;
  *(_QWORD *)(v13 + 56) = 0;
  sub_1455E10(v15, v13);
  v16 = (_QWORD *)operator new(0x28u);
  v17 = j__strlen("poison");
  *v16 = &unk_2C446A0;
  v16[1] = v16 + 3;
  sub_144EF90(v16 + 1, "poison", (__int64)&aPoison[v17]);
  *v16 = &off_2BB2D10;
  v18 = j__strlen("GCC");
  sub_1455F40(a1, "GCC", v18, (__int64)v16);
  v19 = (_QWORD *)operator new(0x28u);
  v20 = j__strlen("system_header");
  *v19 = &unk_2C446A0;
  v19[1] = v19 + 3;
  sub_144EF90(v19 + 1, "system_header", (__int64)&aSystemHeader[v20]);
  *v19 = &off_2BB2D40;
  v21 = j__strlen("GCC");
  sub_1455F40(a1, "GCC", v21, (__int64)v19);
  v22 = (_QWORD *)operator new(0x28u);
  *v22 = &unk_2C446A0;
  v22[1] = v22 + 3;
  sub_144EF90(v22 + 1, "dependency", (__int64)"");
  *v22 = &off_2BB2D70;
  v23 = j__strlen("GCC");
  sub_1455F40(a1, "GCC", v23, (__int64)v22);
  v24 = (_QWORD *)operator new(0x30u);
  v25 = j__strlen("diagnostic");
  *v24 = &unk_2C446A0;
  v24[1] = v24 + 3;
  sub_144EF90(v24 + 1, "diagnostic", (__int64)&aPragmaDiagnost[v25 + 7]);
  v24[5] = "GCC";
  *v24 = &off_2BB2E00;
  v26 = j__strlen("GCC");
  sub_1455F40(a1, "GCC", v26, (__int64)v24);
  v103 = j__strlen("GCC");
  v27 = operator new(0x40u);
  v28 = j__strlen("warning");
  *(_QWORD *)v27 = &unk_2C446A0;
  *(_QWORD *)(v27 + 8) = v27 + 24;
  sub_144EF90((_QWORD *)(v27 + 8), "warning", (__int64)&aPragmaWarning[v28 + 7]);
  *(_QWORD *)(v27 + 48) = "GCC";
  *(_QWORD *)v27 = &off_2BB2EF0;
  *(_QWORD *)(v27 + 56) = v103;
  *(_DWORD *)(v27 + 40) = 1;
  sub_1455F40(a1, "GCC", 3, v27);
  v29 = operator new(0x40u);
  v30 = j__strlen("error");
  *(_QWORD *)v29 = &unk_2C446A0;
  *(_QWORD *)(v29 + 8) = v29 + 24;
  sub_144EF90((_QWORD *)(v29 + 8), "error", (__int64)&aIOError[v30 + 4]);
  *(_QWORD *)(v29 + 48) = "GCC";
  *(_QWORD *)v29 = &off_2BB2EF0;
  *(_DWORD *)(v29 + 40) = 2;
  *(_QWORD *)(v29 + 56) = 3;
  v31 = j__strlen("GCC");
  sub_1455F40(a1, "GCC", v31, v29);
  v32 = (_QWORD *)operator new(0x28u);
  v33 = j__strlen("poison");
  *v32 = &unk_2C446A0;
  v32[1] = v32 + 3;
  sub_144EF90(v32 + 1, "poison", (__int64)&aPoison[v33]);
  *v32 = &off_2BB2D10;
  v34 = j__strlen("clang");
  sub_1455F40(a1, "clang", v34, (__int64)v32);
  v35 = (_QWORD *)operator new(0x28u);
  v36 = j__strlen("system_header");
  *v35 = &unk_2C446A0;
  v35[1] = v35 + 3;
  sub_144EF90(v35 + 1, "system_header", (__int64)&aSystemHeader[v36]);
  *v35 = &off_2BB2D40;
  v37 = j__strlen("clang");
  sub_1455F40(a1, "clang", v37, (__int64)v35);
  v38 = (_QWORD *)operator new(0x28u);
  v39 = j__strlen("__debug");
  *v38 = &unk_2C446A0;
  v38[1] = v38 + 3;
  sub_144EF90(v38 + 1, "__debug", (__int64)&aDebug_0[v39]);
  *v38 = &off_2BB2DA0;
  v40 = j__strlen("clang");
  sub_1455F40(a1, "clang", v40, (__int64)v38);
  v41 = (_QWORD *)operator new(0x28u);
  v42 = j__strlen("dependency");
  *v41 = &unk_2C446A0;
  v41[1] = v41 + 3;
  sub_144EF90(v41 + 1, "dependency", (__int64)&aCarriesDepende[v42 + 10]);
  *v41 = &off_2BB2D70;
  sub_1455F40(a1, "clang", 5, (__int64)v41);
  v43 = (_QWORD *)operator new(0x30u);
  v44 = j__strlen("diagnostic");
  *v43 = &unk_2C446A0;
  v43[1] = v43 + 3;
  sub_144EF90(v43 + 1, "diagnostic", (__int64)&aPragmaDiagnost[v44 + 7]);
  v43[5] = "clang";
  *v43 = &off_2BB2E00;
  v45 = j__strlen("clang");
  sub_1455F40(a1, "clang", v45, (__int64)v43);
  v46 = (_QWORD *)operator new(0x28u);
  *v46 = &unk_2C446A0;
  v46[1] = v46 + 3;
  sub_144EF90(v46 + 1, "arc_cf_code_audited", (__int64)"");
  *v46 = &off_2BB3070;
  v47 = j__strlen("clang");
  sub_1455F40(a1, "clang", v47, (__int64)v46);
  v48 = (_QWORD *)operator new(0x28u);
  v49 = j__strlen("assume_nonnull");
  *v48 = &unk_2C446A0;
  v48[1] = v48 + 3;
  sub_144EF90(v48 + 1, "assume_nonnull", (__int64)&aAssumeNonnull[v49]);
  *v48 = &off_2BB30A0;
  v50 = j__strlen("clang");
  sub_1455F40(a1, "clang", v50, (__int64)v48);
  v51 = (_QWORD *)operator new(0x28u);
  v52 = j__strlen("deprecated");
  *v51 = &unk_2C446A0;
  v51[1] = v51 + 3;
  sub_144EF90(v51 + 1, "deprecated", (__int64)&aPragmaClangDep_0[v52 + 14]);
  *v51 = &off_2BB3130;
  v53 = j__strlen("clang");
  sub_1455F40(a1, "clang", v53, (__int64)v51);
  v54 = (_QWORD *)operator new(0x28u);
  *v54 = &unk_2C446A0;
  v54[1] = v54 + 3;
  sub_144EF90(v54 + 1, "restrict_expansion", (__int64)"");
  *v54 = &off_2BB3160;
  v55 = j__strlen("clang");
  sub_1455F40(a1, "clang", v55, (__int64)v54);
  v56 = (_QWORD *)operator new(0x28u);
  v57 = j__strlen("final");
  *v56 = &unk_2C446A0;
  v56[1] = v56 + 3;
  sub_144EF90(v56 + 1, "final", (__int64)&aFinal[v57 + 1]);
  *v56 = &off_2BB3190;
  v58 = j__strlen("clang");
  sub_1455F40(a1, "clang", v58, (__int64)v56);
  v59 = j__strlen("module");
  v60 = operator new(0x40u);
  *(_QWORD *)v60 = &unk_2C446A0;
  *(_QWORD *)(v60 + 8) = v60 + 24;
  sub_144EF90((_QWORD *)(v60 + 8), "module", (__int64)&aFrameworkModul[v59 + 10]);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  *(_QWORD *)(v60 + 40) = 0;
  *(__m128i *)(v60 + 48) = si128;
  *(_QWORD *)v60 = &off_2BB2C80;
  v62 = j__strlen("clang");
  sub_1455F40(a1, "clang", v62, v60);
  v63 = (_QWORD *)operator new(0x28u);
  v64 = j__strlen("import");
  *v63 = &unk_2C446A0;
  v63[1] = v63 + 3;
  sub_144EF90(v63 + 1, "import", (__int64)&aDisableAutoImp[v64 + 15]);
  *v63 = &off_2BB2F20;
  sub_1455E10(v60, (__int64)v63);
  v65 = (_QWORD *)operator new(0x28u);
  v66 = j__strlen("begin");
  *v65 = &unk_2C446A0;
  v65[1] = v65 + 3;
  sub_144EF90(v65 + 1, "begin", (__int64)&aBegin[v66 + 2]);
  *v65 = &off_2BB2F50;
  sub_1455E10(v60, (__int64)v65);
  v67 = (_QWORD *)operator new(0x28u);
  v68 = j__strlen("end");
  *v67 = &unk_2C446A0;
  v67[1] = v67 + 3;
  sub_144EF90(v67 + 1, "end", (__int64)&aIsMissingAAtTh[v68 + 26]);
  *v67 = &off_2BB2F80;
  sub_1455E10(v60, (__int64)v67);
  v69 = (_QWORD *)operator new(0x28u);
  v70 = j__strlen("build");
  *v69 = &unk_2C446A0;
  v69[1] = v69 + 3;
  sub_144EF90(v69 + 1, "build", (__int64)&aEndbuild[v70 + 3]);
  *v69 = &off_2BB2FB0;
  sub_1455E10(v60, (__int64)v69);
  v71 = (_QWORD *)operator new(0x28u);
  v72 = j__strlen("load");
  *v71 = &unk_2C446A0;
  v71[1] = v71 + 3;
  sub_144EF90(v71 + 1, "load", (__int64)&aCannotLoad[v72 + 7]);
  *v71 = &off_2BB2FE0;
  sub_1455E10(v60, (__int64)v71);
  v73 = (_QWORD *)operator new(0x28u);
  v74 = j__strlen("unsafe_buffer_usage");
  *v73 = &unk_2C446A0;
  v73[1] = v73 + 3;
  sub_144EF90(v73 + 1, "unsafe_buffer_usage", (__int64)&aClangUnsafeBuf[v74 + 9]);
  *v73 = &off_2BB2DD0;
  v75 = j__strlen("clang");
  sub_1455F40(a1, "clang", v75, (__int64)v73);
  v76 = (_QWORD *)operator new(0x28u);
  v77 = j__strlen("region");
  *v76 = &unk_2C446A0;
  v76[1] = v76 + 3;
  sub_144EF90(v76 + 1, "region", (__int64)&aOpenmpRegion[v77 + 7]);
  *v76 = &off_2BB30D0;
  sub_1455E10(*(_QWORD *)(a1 + 696), (__int64)v76);
  v78 = (_QWORD *)operator new(0x28u);
  v79 = j__strlen("endregion");
  *v78 = &unk_2C446A0;
  v78[1] = v78 + 3;
  sub_144EF90(v78 + 1, "endregion", (__int64)&aEndregion[v79]);
  *v78 = &off_2BB30D0;
  sub_1455E10(*(_QWORD *)(a1 + 696), (__int64)v78);
  if ( **(char **)(a1 + 56) < 0 )
  {
    v84 = (_QWORD *)operator new(0x28u);
    v85 = j__strlen("warning");
    *v84 = &unk_2C446A0;
    v84[1] = v84 + 3;
    sub_144EF90(v84 + 1, "warning", (__int64)&aPragmaWarning[v85 + 7]);
    v86 = *(_QWORD *)(a1 + 696);
    *v84 = &off_2BB2E60;
    sub_1455E10(v86, (__int64)v84);
    v87 = (_QWORD *)operator new(0x28u);
    v88 = j__strlen("execution_character_set");
    *v87 = &unk_2C446A0;
    v87[1] = v87 + 3;
    sub_144EF90(v87 + 1, "execution_character_set", (__int64)&aExecutionChara[v88]);
    v89 = *(_QWORD *)(a1 + 696);
    *v87 = &off_2BB2E90;
    sub_1455E10(v89, (__int64)v87);
    v90 = (_QWORD *)operator new(0x28u);
    v91 = j__strlen("include_alias");
    *v90 = &unk_2C446A0;
    v90[1] = v90 + 3;
    sub_144EF90(v90 + 1, "include_alias", (__int64)&aIncludeAlias[v91]);
    v92 = *(_QWORD *)(a1 + 696);
    *v90 = &off_2BB2EC0;
    sub_1455E10(v92, (__int64)v90);
    v93 = (_QWORD *)operator new(0x28u);
    v94 = j__strlen("hdrstop");
    *v93 = &unk_2C446A0;
    v93[1] = v93 + 3;
    sub_144EF90(v93 + 1, "hdrstop", (__int64)&aPragmaHdrstop[v94 + 7]);
    v95 = *(_QWORD *)(a1 + 696);
    *v93 = &off_2BB2E30;
    sub_1455E10(v95, (__int64)v93);
    v96 = (_QWORD *)operator new(0x28u);
    v97 = j__strlen("system_header");
    *v96 = &unk_2C446A0;
    v96[1] = v96 + 3;
    sub_144EF90(v96 + 1, "system_header", (__int64)&aSystemHeader[v97]);
    v98 = *(_QWORD *)(a1 + 696);
    *v96 = &off_2BB2D40;
    sub_1455E10(v98, (__int64)v96);
    v99 = (_QWORD *)operator new(0x28u);
    v100 = j__strlen("managed");
    *v99 = &unk_2C446A0;
    v99[1] = v99 + 3;
    sub_144EF90(v99 + 1, "managed", (__int64)&aAttributeManag[v100 + 15]);
    *v99 = &off_2BB3100;
    sub_1455E10(*(_QWORD *)(a1 + 696), (__int64)v99);
    v101 = (_QWORD *)operator new(0x28u);
    v102 = j__strlen("unmanaged");
    *v101 = &unk_2C446A0;
    v101[1] = v101 + 3;
    sub_144EF90(v101 + 1, "unmanaged", (__int64)&aUnmanaged[v102]);
    *v101 = &off_2BB3100;
    sub_1455E10(*(_QWORD *)(a1 + 696), (__int64)v101);
  }
  result = &qword_2CD8AC0;
  v81 = (_QWORD *)qword_2CD8AC0;
  if ( qword_2CD8AC0 )
  {
    do
    {
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64 *))(v81[1] + 32LL))(v104);
        v82 = v104[0];
        v83 = *(_QWORD *)(a1 + 696);
        v104[0] = 0;
        result = (_QWORD *)sub_1455E10(v83, v82);
        if ( !v104[0] )
          break;
        result = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v104[0] + 8LL))(v104[0]);
        v81 = (_QWORD *)*v81;
        if ( !v81 )
          return result;
      }
      v81 = (_QWORD *)*v81;
    }
    while ( v81 );
  }
  return result;
}
