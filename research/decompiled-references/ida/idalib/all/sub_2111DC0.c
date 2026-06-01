unsigned __int64 __fastcall sub_2111DC0(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rdi
  int v5; // r12d
  unsigned __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // rdi
  unsigned __int64 v20; // rax
  __int64 v21; // rdi
  unsigned __int64 v22; // rax
  __int64 v23; // rdi
  unsigned __int64 v24; // rax
  __int64 v25; // rdi
  unsigned __int64 v26; // rax
  __int64 v27; // rdi
  unsigned __int64 v28; // rax
  __int64 v29; // rdi
  unsigned __int64 v30; // rax
  __int64 v31; // rdi
  unsigned __int64 v32; // rax
  __int64 v33; // rdi
  unsigned __int64 v34; // rax
  __int64 v35; // rdi
  unsigned __int64 v36; // rax
  __int64 v37; // rdi
  unsigned __int64 v38; // rax
  __int64 v39; // rdi
  unsigned __int64 v40; // rax
  __int64 v41; // rdi
  unsigned __int64 v42; // rax
  __int64 v43; // rdi
  unsigned __int64 v44; // rax
  __int64 v45; // rdi
  unsigned __int64 v46; // rax
  __int64 v47; // rdi
  unsigned __int64 v48; // rax
  __int64 v49; // rdi
  unsigned __int64 v50; // rax
  __int64 v51; // rdi
  unsigned __int64 v52; // rax
  __int64 v53; // rdi
  unsigned __int64 v54; // rax
  __int64 v55; // rdi
  unsigned __int64 v56; // rax
  __int64 v57; // rdi
  unsigned __int64 v58; // rax
  __int64 v59; // rdi
  unsigned __int64 v60; // rax
  __int64 v61; // rdi
  unsigned __int64 v62; // rax
  __int64 v63; // rdi
  unsigned __int64 v64; // rax
  __int64 v65; // rdi
  unsigned __int64 v66; // rax
  __int64 v67; // rdi
  unsigned __int64 v68; // rax
  __int64 v69; // rdi
  unsigned __int64 v70; // rax
  __int64 v71; // rdi
  unsigned __int64 v72; // rax
  __int64 v73; // rdi
  unsigned __int64 v74; // rax
  __int64 v75; // rdi
  unsigned __int64 v76; // rax
  __int64 v77; // rdi
  unsigned __int64 v78; // rax
  __int64 v79; // rdi
  unsigned __int64 v80; // rax
  __int64 v81; // rdi
  unsigned __int64 v82; // rax
  __int64 v83; // rdi
  unsigned __int64 v84; // rax
  __int64 v85; // rdi
  unsigned __int64 v86; // rax
  __int64 v87; // rdi
  unsigned __int64 v88; // rax
  __int64 v89; // rdi
  unsigned __int64 v90; // rax
  __int64 v91; // rdi
  unsigned __int64 v92; // rax
  __int64 v93; // rdi
  unsigned __int64 v94; // rax
  __int64 v95; // rdi
  unsigned __int64 v96; // rax
  __int64 v97; // rdi
  unsigned __int64 v98; // rax
  __int64 v99; // rdi
  unsigned __int64 v100; // rax
  __int64 v101; // rdi
  unsigned __int64 v102; // rax
  __int64 v103; // rdi
  unsigned __int64 v104; // rax
  __int64 v105; // rdi
  unsigned __int64 v106; // rax
  __int64 v107; // rdi
  unsigned __int64 v108; // rax
  __int64 v109; // rdi
  unsigned __int64 result; // rax
  __int64 v111; // rdx
  unsigned __int64 v112; // rax
  unsigned __int64 v113; // rax

  v3 = sub_210AE90(a1[112], ".eh_frame", 9u, 0x40000040u);
  v4 = a1[112];
  v5 = *(_DWORD *)(a2 + 32);
  a1[58] = v3;
  v6 = sub_210AE90(v4, ".bss", 4u, 0xC0000080);
  v7 = 1610743840;
  v8 = a1[112];
  a1[5] = v6;
  if ( v5 != 35 )
    v7 = 1610612768;
  v9 = sub_210AE90(v8, ".text", 5u, v7);
  v10 = a1[112];
  a1[3] = v9;
  v11 = sub_210AE90(v10, ".data", 5u, 0xC0000040);
  v12 = a1[112];
  a1[4] = v11;
  v13 = sub_210AE90(v12, ".rdata", 6u, 0x40000040u);
  v14 = a1[112];
  a1[6] = v13;
  v15 = *(unsigned int *)(a2 + 32);
  if ( (unsigned int)v15 <= 0x26 && (v111 = 0x480000000ALL, _bittest64(&v111, v15)) )
  {
    a1[7] = 0;
    if ( (_DWORD)v15 == 3 )
      goto LABEL_10;
  }
  else
  {
    v15 = sub_210AE90(v14, ".gcc_except_table", 0x11u, 0x40000040u);
    v14 = a1[112];
    a1[7] = v15;
    LODWORD(v15) = *(_DWORD *)(a2 + 32);
    if ( (_DWORD)v15 == 3 )
    {
LABEL_10:
      v112 = sub_210AE90(v14, ".impcall", 8u, 0x200u);
      v14 = a1[112];
      a1[9] = v112;
      goto LABEL_7;
    }
  }
  if ( (_DWORD)v15 == 38 )
  {
    v113 = sub_210AE90(v14, ".retplne", 8u, 0x200u);
    v14 = a1[112];
    a1[9] = v113;
  }
LABEL_7:
  v16 = sub_210AE90(v14, ".debug$S", 8u, 0x42000040u);
  v17 = a1[112];
  a1[49] = v16;
  v18 = sub_210AE90(v17, ".debug$T", 8u, 0x42000040u);
  v19 = a1[112];
  a1[50] = v18;
  v20 = sub_210AE90(v19, ".debug$H", 8u, 0x42000040u);
  v21 = a1[112];
  a1[51] = v20;
  v22 = sub_210AE90(v21, ".debug_abbrev", 0xDu, 0x42000040u);
  v23 = a1[112];
  a1[10] = v22;
  v24 = sub_210AE90(v23, ".debug_info", 0xBu, 0x42000040u);
  v25 = a1[112];
  a1[11] = v24;
  v26 = sub_210AE90(v25, ".debug_line", 0xBu, 0x42000040u);
  v27 = a1[112];
  a1[12] = v26;
  v28 = sub_210AE90(v27, ".debug_line_str", 0xFu, 0x42000040u);
  v29 = a1[112];
  a1[13] = v28;
  v30 = sub_210AE90(v29, ".debug_frame", 0xCu, 0x42000040u);
  v31 = a1[112];
  a1[14] = v30;
  v32 = sub_210AE90(v31, ".debug_pubnames", 0xFu, 0x42000040u);
  v33 = a1[112];
  a1[23] = v32;
  v34 = sub_210AE90(v33, ".debug_pubtypes", 0xFu, 0x42000040u);
  v35 = a1[112];
  a1[15] = v34;
  v36 = sub_210AE90(v35, ".debug_gnu_pubnames", 0x13u, 0x42000040u);
  v37 = a1[112];
  a1[46] = v36;
  v38 = sub_210AE90(v37, ".debug_gnu_pubtypes", 0x13u, 0x42000040u);
  v39 = a1[112];
  a1[47] = v38;
  v40 = sub_210AE90(v39, ".debug_str", 0xAu, 0x42000040u);
  v41 = a1[112];
  a1[17] = v40;
  v42 = sub_210AE90(v41, ".debug_str_offsets", 0x12u, 0x42000040u);
  v43 = a1[112];
  a1[38] = v42;
  v44 = sub_210AE90(v43, ".debug_loc", 0xAu, 0x42000040u);
  v45 = a1[112];
  a1[18] = v44;
  v46 = sub_210AE90(v45, ".debug_loclists", 0xFu, 0x42000040u);
  v47 = a1[112];
  a1[41] = v46;
  v48 = sub_210AE90(v47, ".debug_aranges", 0xEu, 0x42000040u);
  v49 = a1[112];
  a1[19] = v48;
  v50 = sub_210AE90(v49, ".debug_ranges", 0xDu, 0x42000040u);
  v51 = a1[112];
  a1[20] = v50;
  v52 = sub_210AE90(v51, ".debug_rnglists", 0xFu, 0x42000040u);
  v53 = a1[112];
  a1[40] = v52;
  v54 = sub_210AE90(v53, ".debug_macinfo", 0xEu, 0x42000040u);
  v55 = a1[112];
  a1[21] = v54;
  v56 = sub_210AE90(v55, ".debug_macro", 0xCu, 0x42000040u);
  v57 = a1[112];
  a1[22] = v56;
  v58 = sub_210AE90(v57, ".debug_macinfo.dwo", 0x12u, 0x42000040u);
  v59 = a1[112];
  a1[36] = v58;
  v60 = sub_210AE90(v59, ".debug_macro.dwo", 0x10u, 0x42000040u);
  v61 = a1[112];
  a1[37] = v60;
  v62 = sub_210AE90(v61, ".debug_info.dwo", 0xFu, 0x42000040u);
  v63 = a1[112];
  a1[29] = v62;
  v64 = sub_210AE90(v63, ".debug_types.dwo", 0x10u, 0x42000040u);
  v65 = a1[112];
  a1[30] = v64;
  v66 = sub_210AE90(v65, ".debug_abbrev.dwo", 0x11u, 0x42000040u);
  v67 = a1[112];
  a1[31] = v66;
  v68 = sub_210AE90(v67, ".debug_str.dwo", 0xEu, 0x42000040u);
  v69 = a1[112];
  a1[32] = v68;
  v70 = sub_210AE90(v69, ".debug_line.dwo", 0xFu, 0x42000040u);
  v71 = a1[112];
  a1[33] = v70;
  v72 = sub_210AE90(v71, ".debug_loc.dwo", 0xEu, 0x42000040u);
  v73 = a1[112];
  a1[34] = v72;
  v74 = sub_210AE90(v73, ".debug_str_offsets.dwo", 0x16u, 0x42000040u);
  v75 = a1[112];
  a1[35] = v74;
  v76 = sub_210AE90(v75, ".debug_addr", 0xBu, 0x42000040u);
  v77 = a1[112];
  a1[39] = v76;
  v78 = sub_210AE90(v77, ".debug_cu_index", 0xFu, 0x42000040u);
  v79 = a1[112];
  a1[44] = v78;
  v80 = sub_210AE90(v79, ".debug_tu_index", 0xFu, 0x42000040u);
  v81 = a1[112];
  a1[45] = v80;
  v82 = sub_210AE90(v81, ".debug_names", 0xCu, 0x42000040u);
  v83 = a1[112];
  a1[24] = v82;
  v84 = sub_210AE90(v83, ".apple_names", 0xCu, 0x42000040u);
  v85 = a1[112];
  a1[25] = v84;
  v86 = sub_210AE90(v85, ".apple_namespaces", 0x11u, 0x42000040u);
  v87 = a1[112];
  a1[27] = v86;
  v88 = sub_210AE90(v87, ".apple_types", 0xCu, 0x42000040u);
  v89 = a1[112];
  a1[28] = v88;
  v90 = sub_210AE90(v89, ".apple_objc", 0xBu, 0x42000040u);
  v91 = a1[112];
  a1[26] = v90;
  v92 = sub_210AE90(v91, ".drectve", 8u, 0xA00u);
  v93 = a1[112];
  a1[86] = v92;
  v94 = sub_210AE90(v93, ".pdata", 6u, 0x40000040u);
  v95 = a1[112];
  a1[87] = v94;
  v96 = sub_210AE90(v95, ".xdata", 6u, 0x40000040u);
  v97 = a1[112];
  a1[88] = v96;
  v98 = sub_210AE90(v97, ".sxdata", 7u, 0x200u);
  v99 = a1[112];
  a1[89] = v98;
  v100 = sub_210AE90(v99, ".gehcont$y", 0xAu, 0x40000040u);
  v101 = a1[112];
  a1[90] = v100;
  v102 = sub_210AE90(v101, ".gfids$y", 8u, 0x40000040u);
  v103 = a1[112];
  a1[91] = v102;
  v104 = sub_210AE90(v103, ".giats$y", 8u, 0x40000040u);
  v105 = a1[112];
  a1[92] = v104;
  v106 = sub_210AE90(v105, ".gljmp$y", 8u, 0x40000040u);
  v107 = a1[112];
  a1[93] = v106;
  v108 = sub_210AE90(v107, ".tls$", 5u, 0xC0000040);
  v109 = a1[112];
  a1[53] = v108;
  result = sub_210AE90(v109, ".llvm_stackmaps", 0xFu, 0x40000040u);
  a1[55] = result;
  return result;
}
