unsigned __int64 __fastcall sub_210EE10(_QWORD *a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rax
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // rax
  __int64 v16; // rdi
  unsigned __int64 v17; // rax
  __int64 v18; // rdi
  unsigned __int64 v19; // rax
  __int64 v20; // rdi
  unsigned __int64 v21; // rax
  __int64 v22; // rdi
  unsigned __int64 v23; // rax
  __int64 v24; // rdi
  unsigned __int64 v25; // rax
  __int64 v26; // rdi
  unsigned __int64 v27; // rax
  __int64 v28; // rdi
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
  __int64 v40; // rdi
  unsigned __int64 v41; // rax
  __int64 v42; // rdi
  unsigned __int64 v43; // rax
  __int64 v44; // rdi
  unsigned __int64 v45; // rax
  __int64 v46; // rdi
  unsigned __int64 v47; // rax
  __int64 v48; // rdi
  unsigned __int64 v49; // rax
  __int64 v50; // rdi
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
  __int64 v62; // rdi
  __int64 v63; // rdi
  unsigned __int64 v64; // rax
  __int64 v65; // rdi
  unsigned __int64 v66; // rax
  __int64 v67; // rdi
  __int64 v68; // rdi
  unsigned __int64 result; // rax
  _BYTE v70[32]; // [rsp+0h] [rbp-88h] BYREF
  __int16 v71; // [rsp+20h] [rbp-68h]
  _QWORD v72[4]; // [rsp+30h] [rbp-58h] BYREF
  __int16 v73; // [rsp+50h] [rbp-38h]

  v2 = a1[112];
  v72[0] = ".text";
  v71 = 257;
  v73 = 259;
  v3 = sub_21092C0(v2, (__int64)v72, 2, 0, (__int64)v70, -1);
  v4 = a1[112];
  a1[3] = v3;
  v73 = 259;
  v71 = 257;
  v72[0] = ".data";
  v5 = sub_21092C0(v4, (__int64)v72, 19, 0, (__int64)v70, -1);
  v6 = a1[112];
  a1[4] = v5;
  v73 = 259;
  v71 = 257;
  v72[0] = ".debug_line";
  a1[12] = sub_21092C0(v6, (__int64)v72, 0, 0, (__int64)v70, -1);
  v7 = a1[112];
  v71 = 257;
  v73 = 259;
  v72[0] = ".debug_line_str";
  a1[13] = sub_21092C0(v7, (__int64)v72, 0, 1, (__int64)v70, -1);
  v8 = a1[112];
  v73 = 259;
  v71 = 257;
  v72[0] = ".debug_str";
  v9 = sub_21092C0(v8, (__int64)v72, 0, 1, (__int64)v70, -1);
  v10 = a1[112];
  a1[17] = v9;
  v72[0] = ".debug_loc";
  v73 = 259;
  v71 = 257;
  v11 = sub_21092C0(v10, (__int64)v72, 0, 0, (__int64)v70, -1);
  v12 = a1[112];
  a1[18] = v11;
  v72[0] = ".debug_abbrev";
  v73 = 259;
  v71 = 257;
  v13 = sub_21092C0(v12, (__int64)v72, 0, 0, (__int64)v70, -1);
  v14 = a1[112];
  a1[10] = v13;
  v72[0] = ".debug_aranges";
  v73 = 259;
  v71 = 257;
  v15 = sub_21092C0(v14, (__int64)v72, 0, 0, (__int64)v70, -1);
  v73 = 259;
  v16 = a1[112];
  a1[19] = v15;
  v71 = 257;
  v72[0] = ".debug_ranges";
  v17 = sub_21092C0(v16, (__int64)v72, 0, 0, (__int64)v70, -1);
  v18 = a1[112];
  a1[20] = v17;
  v73 = 259;
  v71 = 257;
  v72[0] = ".debug_macinfo";
  v19 = sub_21092C0(v18, (__int64)v72, 0, 0, (__int64)v70, -1);
  v20 = a1[112];
  a1[21] = v19;
  v73 = 259;
  v71 = 257;
  v72[0] = ".debug_macro";
  v21 = sub_21092C0(v20, (__int64)v72, 0, 0, (__int64)v70, -1);
  v22 = a1[112];
  a1[22] = v21;
  v73 = 259;
  v72[0] = ".debug_cu_index";
  v71 = 257;
  v23 = sub_21092C0(v22, (__int64)v72, 0, 0, (__int64)v70, -1);
  v24 = a1[112];
  a1[44] = v23;
  v73 = 259;
  v72[0] = ".debug_tu_index";
  v71 = 257;
  v25 = sub_21092C0(v24, (__int64)v72, 0, 0, (__int64)v70, -1);
  v26 = a1[112];
  a1[45] = v25;
  v72[0] = ".debug_info";
  v73 = 259;
  v71 = 257;
  v27 = sub_21092C0(v26, (__int64)v72, 0, 0, (__int64)v70, -1);
  v28 = a1[112];
  a1[11] = v27;
  v72[0] = ".debug_frame";
  v73 = 259;
  v71 = 257;
  a1[14] = sub_21092C0(v28, (__int64)v72, 0, 0, (__int64)v70, -1);
  v29 = a1[112];
  v73 = 259;
  v71 = 257;
  v72[0] = ".debug_pubnames";
  v30 = sub_21092C0(v29, (__int64)v72, 0, 0, (__int64)v70, -1);
  v31 = a1[112];
  a1[23] = v30;
  v73 = 259;
  v71 = 257;
  v72[0] = ".debug_pubtypes";
  v32 = sub_21092C0(v31, (__int64)v72, 0, 0, (__int64)v70, -1);
  v33 = a1[112];
  a1[15] = v32;
  v73 = 259;
  v71 = 257;
  v72[0] = ".debug_gnu_pubnames";
  v34 = sub_21092C0(v33, (__int64)v72, 0, 0, (__int64)v70, -1);
  v35 = a1[112];
  a1[46] = v34;
  v72[0] = ".debug_gnu_pubtypes";
  v73 = 259;
  v71 = 257;
  v36 = sub_21092C0(v35, (__int64)v72, 0, 0, (__int64)v70, -1);
  v37 = a1[112];
  a1[47] = v36;
  v72[0] = ".debug_names";
  v73 = 259;
  v71 = 257;
  v38 = sub_21092C0(v37, (__int64)v72, 0, 0, (__int64)v70, -1);
  v39 = a1[112];
  a1[24] = v38;
  v72[0] = ".debug_str_offsets";
  v73 = 259;
  v71 = 257;
  a1[38] = sub_21092C0(v39, (__int64)v72, 0, 0, (__int64)v70, -1);
  v40 = a1[112];
  v72[0] = ".debug_addr";
  v71 = 257;
  v73 = 259;
  v41 = sub_21092C0(v40, (__int64)v72, 0, 0, (__int64)v70, -1);
  v42 = a1[112];
  a1[39] = v41;
  v73 = 259;
  v71 = 257;
  v72[0] = ".debug_rnglists";
  v43 = sub_21092C0(v42, (__int64)v72, 0, 0, (__int64)v70, -1);
  v44 = a1[112];
  a1[40] = v43;
  v73 = 259;
  v71 = 257;
  v72[0] = ".debug_loclists";
  v45 = sub_21092C0(v44, (__int64)v72, 0, 0, (__int64)v70, -1);
  v46 = a1[112];
  a1[41] = v45;
  v71 = 257;
  v73 = 259;
  v72[0] = ".debug_info.dwo";
  v47 = sub_21092C0(v46, (__int64)v72, 0, 0, (__int64)v70, -1);
  v48 = a1[112];
  a1[29] = v47;
  v72[0] = ".debug_types.dwo";
  v73 = 259;
  v71 = 257;
  v49 = sub_21092C0(v48, (__int64)v72, 0, 0, (__int64)v70, -1);
  v50 = a1[112];
  a1[30] = v49;
  v72[0] = ".debug_abbrev.dwo";
  v73 = 259;
  v71 = 257;
  a1[31] = sub_21092C0(v50, (__int64)v72, 0, 0, (__int64)v70, -1);
  v51 = a1[112];
  v72[0] = ".debug_str.dwo";
  v73 = 259;
  v71 = 257;
  v52 = sub_21092C0(v51, (__int64)v72, 0, 1, (__int64)v70, -1);
  v73 = 259;
  v53 = a1[112];
  a1[32] = v52;
  v71 = 257;
  v72[0] = ".debug_line.dwo";
  v54 = sub_21092C0(v53, (__int64)v72, 0, 0, (__int64)v70, -1);
  v55 = a1[112];
  a1[33] = v54;
  v73 = 259;
  v71 = 257;
  v72[0] = ".debug_loc.dwo";
  v56 = sub_21092C0(v55, (__int64)v72, 0, 0, (__int64)v70, -1);
  v57 = a1[112];
  a1[34] = v56;
  v73 = 259;
  v71 = 257;
  v72[0] = ".debug_str_offsets.dwo";
  v58 = sub_21092C0(v57, (__int64)v72, 0, 0, (__int64)v70, -1);
  v59 = a1[112];
  a1[35] = v58;
  v72[0] = ".debug_rnglists.dwo";
  v73 = 259;
  v71 = 257;
  v60 = sub_21092C0(v59, (__int64)v72, 0, 0, (__int64)v70, -1);
  v61 = a1[112];
  a1[42] = v60;
  v72[0] = ".debug_macinfo.dwo";
  v73 = 259;
  v71 = 257;
  a1[36] = sub_21092C0(v61, (__int64)v72, 0, 0, (__int64)v70, -1);
  v62 = a1[112];
  v72[0] = ".debug_macro.dwo";
  v73 = 259;
  v71 = 257;
  a1[37] = sub_21092C0(v62, (__int64)v72, 0, 0, (__int64)v70, -1);
  v63 = a1[112];
  v71 = 257;
  v72[0] = ".debug_loclists.dwo";
  v73 = 259;
  v64 = sub_21092C0(v63, (__int64)v72, 0, 0, (__int64)v70, -1);
  v73 = 259;
  v65 = a1[112];
  a1[43] = v64;
  v71 = 257;
  v72[0] = ".debug_cu_index";
  v66 = sub_21092C0(v65, (__int64)v72, 0, 0, (__int64)v70, -1);
  v67 = a1[112];
  a1[44] = v66;
  v73 = 259;
  v71 = 257;
  v72[0] = ".debug_tu_index";
  a1[45] = sub_21092C0(v67, (__int64)v72, 0, 0, (__int64)v70, -1);
  v68 = a1[112];
  v72[0] = ".rodata.gcc_except_table";
  v73 = 259;
  v71 = 257;
  result = sub_21092C0(v68, (__int64)v72, 20, 0, (__int64)v70, -1);
  a1[7] = result;
  return result;
}
