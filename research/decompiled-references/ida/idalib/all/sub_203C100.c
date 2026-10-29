__int64 __fastcall sub_203C100(__int64 a1, __int64 a2, const char *a3)
{
  unsigned int v5; // r13d
  size_t v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // r13
  unsigned __int8 v9; // al
  __int64 *v10; // rax
  size_t v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 v15; // r14
  size_t v16; // rax
  size_t v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r13
  __int64 v21; // r14
  size_t v22; // rax
  size_t v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r13
  __int64 v27; // r14
  size_t v28; // rax
  unsigned int v29; // r14d
  size_t v30; // rax
  __int64 v31; // rdi
  size_t v32; // r13
  __int64 v33; // rax
  __int64 v34; // r13
  const char *v35; // rax
  unsigned __int8 v36; // al
  __int64 v37; // rax
  __int64 v38; // r13
  size_t v39; // rax
  unsigned __int8 v40; // al
  __int64 v41; // rax
  __int64 v42; // r13
  size_t v43; // rax
  unsigned __int8 v44; // al
  __int64 v45; // rax
  __int64 v46; // r13
  size_t v47; // rax
  unsigned __int8 v48; // al
  __int64 v49; // rax
  __int64 v50; // r13
  size_t v51; // rax
  unsigned __int8 v52; // al
  __int64 v53; // rax
  __int64 v54; // r13
  size_t v55; // rax
  __int64 v56; // r13
  size_t v57; // rax
  size_t v58; // rax
  size_t v59; // rax
  unsigned int v60; // r13d
  size_t v61; // r14
  __int64 v62; // rdi
  __int64 v63; // rax
  __int64 v64; // r14
  const char *v65; // rax
  char v66; // r13
  size_t v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // r13
  __int64 v71; // r14
  size_t v72; // rax
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rbx
  __int64 v76; // r13
  size_t v77; // rax
  __int64 v79; // [rsp+0h] [rbp-48h] BYREF
  char v80; // [rsp+8h] [rbp-40h]
  const char *v81[7]; // [rsp+10h] [rbp-38h] BYREF

  sub_995540(a1, "!DICompileUnit(");
  v5 = *(_DWORD *)(a2 + 16);
  v81[1] = a3;
  v79 = a1;
  v80 = 1;
  v81[0] = ", ";
  v6 = j__strlen("language");
  v7 = v5;
  v8 = a2;
  sub_20316C0(&v79, "language", v6, v7, (__int64 (__fastcall *)(_QWORD))sub_201E610, 0);
  if ( *(_BYTE *)a2 != 16 )
  {
    v9 = *(_BYTE *)(a2 - 16);
    if ( (v9 & 2) != 0 )
      v10 = *(__int64 **)(a2 - 32);
    else
      v10 = (__int64 *)(a2 - 8LL * ((v9 >> 2) & 0xF) - 16);
    v8 = *v10;
  }
  v11 = j__strlen("file");
  sub_2039D00((__int64)&v79, "file", v11, v8, 0);
  v12 = sub_2031EC0(a2, 1u);
  v14 = v13;
  v15 = v12;
  v16 = j__strlen("producer");
  sub_2030E00(&v79, "producer", v16, v15, v14);
  LOBYTE(v15) = *(_BYTE *)(a2 + 40);
  v17 = j__strlen("isOptimized");
  sub_2030C50((__int64)&v79, "isOptimized", v17, v15);
  v18 = sub_2031EC0(a2, 2u);
  v20 = v19;
  v21 = v18;
  v22 = j__strlen("flags");
  sub_2030E00(&v79, "flags", v22, v21, v20);
  LODWORD(v20) = *(_DWORD *)(a2 + 20);
  v23 = j__strlen("runtimeVersion");
  sub_2031410((__int64)&v79, "runtimeVersion", v23, v20, 0);
  v24 = sub_2031EC0(a2, 3u);
  v26 = v25;
  v27 = v24;
  v28 = j__strlen("splitDebugFilename");
  sub_2030E00(&v79, "splitDebugFilename", v28, v27, v26);
  v29 = *(_DWORD *)(a2 + 32);
  v30 = j__strlen("emissionKind");
  v31 = v79;
  v32 = v30;
  if ( v80 )
    v80 = 0;
  else
    v31 = sub_202F8E0(v79, v81);
  v33 = sub_9954E0(v31, "emissionKind", v32);
  v34 = sub_995540(v33, ": ");
  v35 = (const char *)sub_206D6C0(v29);
  sub_995540(v34, v35);
  v36 = *(_BYTE *)(a2 - 16);
  if ( (v36 & 2) != 0 )
    v37 = *(_QWORD *)(a2 - 32);
  else
    v37 = a2 - 8LL * ((v36 >> 2) & 0xF) - 16;
  v38 = *(_QWORD *)(v37 + 32);
  v39 = j__strlen("enums");
  sub_203A140((__int64)&v79, "enums", v39, v38);
  v40 = *(_BYTE *)(a2 - 16);
  if ( (v40 & 2) != 0 )
    v41 = *(_QWORD *)(a2 - 32);
  else
    v41 = a2 - 8LL * ((v40 >> 2) & 0xF) - 16;
  v42 = *(_QWORD *)(v41 + 40);
  v43 = j__strlen("retainedTypes");
  sub_203A140((__int64)&v79, "retainedTypes", v43, v42);
  v44 = *(_BYTE *)(a2 - 16);
  if ( (v44 & 2) != 0 )
    v45 = *(_QWORD *)(a2 - 32);
  else
    v45 = a2 - 8LL * ((v44 >> 2) & 0xF) - 16;
  v46 = *(_QWORD *)(v45 + 48);
  v47 = j__strlen("globals");
  sub_203A140((__int64)&v79, "globals", v47, v46);
  v48 = *(_BYTE *)(a2 - 16);
  if ( (v48 & 2) != 0 )
    v49 = *(_QWORD *)(a2 - 32);
  else
    v49 = a2 - 8LL * ((v48 >> 2) & 0xF) - 16;
  v50 = *(_QWORD *)(v49 + 56);
  v51 = j__strlen("imports");
  sub_203A140((__int64)&v79, "imports", v51, v50);
  v52 = *(_BYTE *)(a2 - 16);
  if ( (v52 & 2) != 0 )
    v53 = *(_QWORD *)(a2 - 32);
  else
    v53 = a2 - 8LL * ((v52 >> 2) & 0xF) - 16;
  v54 = *(_QWORD *)(v53 + 64);
  v55 = j__strlen("macros");
  sub_203A140((__int64)&v79, "macros", v55, v54);
  v56 = *(_QWORD *)(a2 + 24);
  v57 = j__strlen("dwoId");
  sub_2031390((__int64)&v79, "dwoId", v57, v56, 1);
  LOBYTE(v56) = *(_BYTE *)(a2 + 41);
  v58 = j__strlen("splitDebugInlining");
  sub_2030CE0((__int64)&v79, "splitDebugInlining", v58, v56, 1);
  LOBYTE(v56) = *(_BYTE *)(a2 + 42);
  v59 = j__strlen("debugInfoForProfiling");
  sub_2030CE0((__int64)&v79, "debugInfoForProfiling", v59, v56, 0);
  v60 = *(_DWORD *)(a2 + 36);
  v61 = j__strlen("nameTableKind");
  if ( v60 )
  {
    v62 = v79;
    if ( v80 )
      v80 = 0;
    else
      v62 = sub_202F8E0(v79, v81);
    v63 = sub_9954E0(v62, "nameTableKind", v61);
    v64 = sub_995540(v63, ": ");
    v65 = (const char *)sub_206D700(v60);
    sub_995540(v64, v65);
  }
  v66 = *(_BYTE *)(a2 + 43);
  v67 = j__strlen("rangesBaseAddress");
  sub_2030CE0((__int64)&v79, "rangesBaseAddress", v67, v66, 0);
  v68 = sub_2031EC0(a2, 9u);
  v70 = v69;
  v71 = v68;
  v72 = j__strlen("sysroot");
  sub_2030E00(&v79, "sysroot", v72, v71, v70);
  v73 = sub_2031EC0(a2, 0xAu);
  v75 = v74;
  v76 = v73;
  v77 = j__strlen("sdk");
  sub_2030E00(&v79, "sdk", v77, v76, v75);
  return sub_995540(a1, ")");
}
