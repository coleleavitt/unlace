_QWORD *sub_85800()
{
  __int64 v0; // rax
  __int64 v1; // r9
  void *v2; // rax
  void *v3; // rbp
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  void *v6; // rax
  void *v7; // rax
  void *v8; // rax
  void *v9; // rax
  void *v10; // rax
  void *v11; // rax
  void *v12; // rax
  void *v13; // rax
  void *v14; // rax
  void *v15; // rax
  void *v16; // rax
  void *v17; // rax
  void *v18; // rax
  void *v19; // rax
  void *v20; // rax
  void *v21; // rax
  void *v22; // rax
  void *v23; // rax
  void *v24; // rax
  void *v25; // rax
  void *v26; // rax
  void *v27; // rax
  void *v28; // rax
  void *v29; // rax
  void *v30; // rax
  void *v31; // rax
  void *v32; // rax
  void *v33; // rax
  void *v34; // rax
  void *v35; // rax
  void *v36; // rax
  void *v37; // rax
  void *v38; // rax
  void *v39; // rax
  void *v40; // rax
  void *v41; // rax
  void *v42; // rax
  void *v43; // rax
  void *v44; // rax
  void *v45; // rax
  void *v46; // rax
  void *v47; // rax
  void *v48; // rax
  void *v49; // rax
  void *v50; // rax
  void *v51; // rax
  void *v52; // rax
  void *v53; // rax
  void *v54; // rax
  void *v55; // rax
  void *v56; // rax
  void *v57; // rax
  void *v58; // rax
  void *v59; // rax
  void *v60; // rax
  void *v61; // rax
  void *v62; // rax
  void *v63; // rax
  void *v64; // rax
  void (__fastcall *v65)(_QWORD); // rax
  void (__fastcall *v66)(_QWORD); // r12
  void *v67; // rax
  void *v68; // rax
  void *v69; // rax
  void *v70; // rax
  void *v71; // rax
  void *v72; // rax
  void *v73; // rax
  void *v74; // rax
  void *v75; // rax
  void *v76; // rax
  void *v77; // rax
  void *v78; // rax
  void *v79; // rax
  void *v80; // rax
  void *v81; // rax
  void *v82; // rax
  void *v83; // rax
  void *v84; // rax
  void *v85; // rax
  void *v86; // rax
  void *v87; // rax
  void *v88; // rax
  void *v89; // rax
  void *v90; // rax
  void *v91; // rax
  char v93[4104]; // [rsp+0h] [rbp-1038h] BYREF
  unsigned __int64 v94; // [rsp+1008h] [rbp-30h]

  v94 = __readfsqword(0x28u);
  v0 = idadir(0);
  qmakepath(v93, 4096, v0, "libdwarf.so", 0, v1);
  v2 = dlopen(v93, 2);
  if ( !v2 )
    return nullptr;
  v3 = v2;
  v4 = (_QWORD *)operator new(0x2B0u);
  *v4 = 0;
  v5 = v4;
  memset(
    (void *)((unsigned __int64)(v4 + 1) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v4 - (((_DWORD)v4 + 8) & 0xFFFFFFF8) + 688) >> 3));
  v4[85] = v3;
  v6 = dlsym(v3, "dwarf_object_init_b");
  *v5 = v6;
  if ( !v6 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_object_init_b");
    if ( !v5 )
      return nullptr;
LABEL_90:
    operator delete(v5, 0x2B0u);
    return nullptr;
  }
  v7 = dlsym(v3, "dwarf_object_finish");
  v5[1] = v7;
  if ( !v7 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_object_finish");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v8 = dlsym(v3, "dwarf_next_cu_header_d");
  v5[2] = v8;
  if ( !v8 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_next_cu_header_d");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v9 = dlsym(v3, "dwarf_siblingof_b");
  v5[3] = v9;
  if ( !v9 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_siblingof_b");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v10 = dlsym(v3, "dwarf_child");
  v5[4] = v10;
  if ( !v10 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_child");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v11 = dlsym(v3, "dwarf_offdie_b");
  v5[5] = v11;
  if ( !v11 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_offdie_b");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v12 = dlsym(v3, "dwarf_get_die_infotypes_flag");
  v5[6] = v12;
  if ( !v12 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_get_die_infotypes_flag");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v13 = dlsym(v3, "dwarf_tag");
  v5[7] = v13;
  if ( !v13 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_tag");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v14 = dlsym(v3, "dwarf_dieoffset");
  v5[8] = v14;
  if ( !v14 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_dieoffset");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v15 = dlsym(v3, "dwarf_CU_dieoffset_given_die");
  v5[9] = v15;
  if ( !v15 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_CU_dieoffset_given_die");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v16 = dlsym(v3, "dwarf_die_CU_offset_range");
  v5[10] = v16;
  if ( !v16 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_die_CU_offset_range");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v17 = dlsym(v3, "dwarf_attr");
  v5[11] = v17;
  if ( !v17 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_attr");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v18 = dlsym(v3, "dwarf_diename");
  v5[12] = v18;
  if ( !v18 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_diename");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v19 = dlsym(v3, "dwarf_validate_die_sibling");
  v5[13] = v19;
  if ( !v19 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_validate_die_sibling");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v20 = dlsym(v3, "dwarf_hasattr");
  v5[14] = v20;
  if ( !v20 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_hasattr");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v21 = dlsym(v3, "dwarf_get_loclist_c");
  v5[15] = v21;
  if ( !v21 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_get_loclist_c");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v22 = dlsym(v3, "dwarf_get_location_op_value_c");
  v5[16] = v22;
  if ( !v22 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_get_location_op_value_c");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v23 = dlsym(v3, "dwarf_loclist_from_expr_c");
  v5[17] = v23;
  if ( !v23 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_loclist_from_expr_c");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v24 = dlsym(v3, "dwarf_lowpc");
  v5[18] = v24;
  if ( !v24 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_lowpc");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v25 = dlsym(v3, "dwarf_highpc_b");
  v5[19] = v25;
  if ( !v25 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_highpc_b");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v26 = dlsym(v3, "dwarf_bytesize");
  v5[20] = v26;
  if ( !v26 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_bytesize");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v27 = dlsym(v3, "dwarf_bitsize");
  v5[21] = v27;
  if ( !v27 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_bitsize");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v28 = dlsym(v3, "dwarf_bitoffset");
  v5[22] = v28;
  if ( !v28 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_bitoffset");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v29 = dlsym(v3, "dwarf_srclang");
  v5[23] = v29;
  if ( !v29 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_srclang");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v30 = dlsym(v3, "dwarf_attrlist");
  v5[24] = v30;
  if ( !v30 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_attrlist");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v31 = dlsym(v3, "dwarf_whatform");
  v5[25] = v31;
  if ( !v31 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_whatform");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v32 = dlsym(v3, "dwarf_whatform_direct");
  v5[26] = v32;
  if ( !v32 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_whatform_direct");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v33 = dlsym(v3, "dwarf_whatattr");
  v5[27] = v33;
  if ( !v33 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_whatattr");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v34 = dlsym(v3, "dwarf_formref");
  v5[28] = v34;
  if ( !v34 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_formref");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v35 = dlsym(v3, "dwarf_global_formref");
  v5[29] = v35;
  if ( !v35 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_global_formref");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v36 = dlsym(v3, "dwarf_formsig8");
  v5[30] = v36;
  if ( !v36 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_formsig8");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v37 = dlsym(v3, "dwarf_formaddr");
  v5[31] = v37;
  if ( !v37 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_formaddr");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v38 = dlsym(v3, "dwarf_formflag");
  v5[32] = v38;
  if ( !v38 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_formflag");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v39 = dlsym(v3, "dwarf_formudata");
  v5[33] = v39;
  if ( !v39 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_formudata");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v40 = dlsym(v3, "dwarf_formsdata");
  v5[34] = v40;
  if ( !v40 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_formsdata");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v41 = dlsym(v3, "dwarf_formblock");
  v5[35] = v41;
  if ( !v41 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_formblock");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v42 = dlsym(v3, "dwarf_formstring");
  v5[36] = v42;
  if ( !v42 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_formstring");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v43 = dlsym(v3, "dwarf_formexprloc");
  v5[37] = v43;
  if ( !v43 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_formexprloc");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v44 = dlsym(v3, "dwarf_srclines_b");
  v5[38] = v44;
  if ( !v44 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_srclines_b");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v45 = dlsym(v3, "dwarf_srclines_dealloc_b");
  v5[39] = v45;
  if ( !v45 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_srclines_dealloc_b");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v46 = dlsym(v3, "dwarf_srclines_from_linecontext");
  v5[40] = v46;
  if ( !v46 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_srclines_from_linecontext");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v47 = dlsym(v3, "dwarf_srcfiles");
  v5[41] = v47;
  if ( !v47 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_srcfiles");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v48 = dlsym(v3, "dwarf_linebeginstatement");
  v5[42] = v48;
  if ( !v48 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_linebeginstatement");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v49 = dlsym(v3, "dwarf_lineendsequence");
  v5[43] = v49;
  if ( !v49 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_lineendsequence");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v50 = dlsym(v3, "dwarf_lineno");
  v5[44] = v50;
  if ( !v50 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_lineno");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v51 = dlsym(v3, "dwarf_line_srcfileno");
  v5[45] = v51;
  if ( !v51 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_line_srcfileno");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v52 = dlsym(v3, "dwarf_line_is_addr_set");
  v5[46] = v52;
  if ( !v52 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_line_is_addr_set");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v53 = dlsym(v3, "dwarf_lineaddr");
  v5[47] = v53;
  if ( !v53 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_lineaddr");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v54 = dlsym(v3, "dwarf_lineoff_b");
  v5[48] = v54;
  if ( !v54 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_lineoff_b");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v55 = dlsym(v3, "dwarf_get_locdesc_entry_d");
  v5[49] = v55;
  if ( !v55 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_get_locdesc_entry_d");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v56 = dlsym(v3, "dwarf_get_fde_list_eh");
  v5[50] = v56;
  if ( !v56 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_get_fde_list_eh");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v57 = dlsym(v3, "dwarf_get_fde_list");
  v5[51] = v57;
  if ( !v57 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_get_fde_list");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v58 = dlsym(v3, "dwarf_dealloc_fde_cie_list");
  v5[52] = v58;
  if ( !v58 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_dealloc_fde_cie_list");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v59 = dlsym(v3, "dwarf_get_fde_info_for_cfa_reg3_b");
  v5[53] = v59;
  if ( !v59 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_get_fde_info_for_cfa_reg3_b");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v60 = dlsym(v3, "dwarf_get_fde_at_pc");
  v5[54] = v60;
  if ( !v60 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_get_fde_at_pc");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v61 = dlsym(v3, "dwarf_get_aranges");
  v5[55] = v61;
  if ( !v61 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_get_aranges");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v62 = dlsym(v3, "dwarf_get_cu_die_offset");
  v5[56] = v62;
  if ( !v62 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_get_cu_die_offset");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v63 = dlsym(v3, "dwarf_get_form_class");
  v5[57] = v63;
  if ( !v63 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_get_form_class");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v64 = dlsym(v3, "dwarf_errmsg");
  v5[58] = v64;
  if ( !v64 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_errmsg");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v65 = (void (__fastcall *)(_QWORD))dlsym(v3, "dwarf_set_reloc_application");
  v5[59] = v65;
  v66 = v65;
  if ( !v65 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_set_reloc_application");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v67 = dlsym(v3, "dwarf_dealloc");
  v5[60] = v67;
  if ( !v67 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_dealloc");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v68 = dlsym(v3, "dwarf_dealloc_loc_head_c");
  v5[61] = v68;
  if ( !v68 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_dealloc_loc_head_c");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v69 = dlsym(v3, "dwarf_dealloc_uncompressed_block");
  v5[62] = v69;
  if ( !v69 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_dealloc_uncompressed_block");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v70 = dlsym(v3, "dwarf_uncompress_integer_block_a");
  v5[63] = v70;
  if ( !v70 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_uncompress_integer_block_a");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v71 = dlsym(v3, "dwarf_get_ranges_b");
  v5[64] = v71;
  if ( !v71 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_get_ranges_b");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v72 = dlsym(v3, "dwarf_dealloc_ranges");
  v5[65] = v72;
  if ( !v72 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_dealloc_ranges");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v73 = dlsym(v3, "dwarf_get_TAG_name");
  v5[66] = v73;
  if ( !v73 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_get_TAG_name");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v74 = dlsym(v3, "dwarf_get_FORM_name");
  v5[67] = v74;
  if ( !v74 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_get_FORM_name");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v75 = dlsym(v3, "dwarf_get_AT_name");
  v5[68] = v75;
  if ( !v75 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_get_AT_name");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v76 = dlsym(v3, "dwarf_get_OP_name");
  v5[69] = v76;
  if ( !v76 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_get_OP_name");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v77 = dlsym(v3, "dwarf_get_ATE_name");
  v5[70] = v77;
  if ( !v77 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_get_ATE_name");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v78 = dlsym(v3, "dwarf_get_ATCF_name");
  v5[71] = v78;
  if ( !v78 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_get_ATCF_name");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v79 = dlsym(v3, "dwarf_get_ACCESS_name");
  v5[72] = v79;
  if ( !v79 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_get_ACCESS_name");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v80 = dlsym(v3, "dwarf_get_VIS_name");
  v5[73] = v80;
  if ( !v80 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_get_VIS_name");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v81 = dlsym(v3, "dwarf_get_VIRTUALITY_name");
  v5[74] = v81;
  if ( !v81 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_get_VIRTUALITY_name");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v82 = dlsym(v3, "dwarf_get_LANG_name");
  v5[75] = v82;
  if ( !v82 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_get_LANG_name");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v83 = dlsym(v3, "dwarf_get_ID_name");
  v5[76] = v83;
  if ( !v83 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_get_ID_name");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v84 = dlsym(v3, "dwarf_get_CC_name");
  v5[77] = v84;
  if ( !v84 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_get_CC_name");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v85 = dlsym(v3, "dwarf_get_INL_name");
  v5[78] = v85;
  if ( !v85 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_get_INL_name");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v86 = dlsym(v3, "dwarf_get_ORD_name");
  v5[79] = v86;
  if ( !v86 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_get_ORD_name");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v87 = dlsym(v3, "dwarf_get_DSC_name");
  v5[80] = v87;
  if ( !v87 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_get_DSC_name");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v88 = dlsym(v3, "dwarf_convert_to_global_offset");
  v5[81] = v88;
  if ( !v88 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_convert_to_global_offset");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v89 = dlsym(v3, "dwarf_get_version_of_die");
  v5[82] = v89;
  if ( !v89 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_get_version_of_die");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v90 = dlsym(v3, "dwarf_get_value_ptr");
  v5[83] = v90;
  if ( !v90 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_get_value_ptr");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  v91 = dlsym(v3, "dwarf_library_allow_dup_attr");
  v5[84] = v91;
  if ( !v91 )
  {
    sub_1D740((__int64)"Could not find function %s in libdwarf.\n", "dwarf_library_allow_dup_attr");
    if ( !v5 )
      return nullptr;
    goto LABEL_90;
  }
  if ( (unsigned __int8)qgetenv("IDA_NORELOC", 0) )
    v66(0);
  return v5;
}
