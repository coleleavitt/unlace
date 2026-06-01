unsigned __int64 __fastcall sub_2110B50(__int64 a1, __int64 a2, char a3)
{
  int v4; // ecx
  __int64 v5; // rdi
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  int v19; // eax
  __int64 v20; // rdi
  unsigned int v21; // r13d
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // rdi
  unsigned __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int64 v42; // rdi
  __int64 v43; // rdi
  __int64 v44; // rdi
  __int64 v45; // rdi
  __int64 v46; // rdi
  __int64 v47; // rdi
  __int64 v48; // rdi
  unsigned __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rdi
  __int64 v52; // rdi
  __int64 v53; // rdi
  __int64 v54; // rdi
  __int64 v55; // rdi
  __int64 v56; // rdi
  __int64 v57; // rdi
  __int64 v58; // rdi
  __int64 v59; // rdi
  __int64 v60; // rdi
  __int64 v61; // rdi
  __int64 v62; // rdi
  __int64 v63; // rdi
  __int64 v64; // rdi
  __int64 v65; // rdi
  __int64 v66; // rdi
  unsigned __int64 result; // rax
  const char *v68[4]; // [rsp+0h] [rbp-98h] BYREF
  __int16 v69; // [rsp+20h] [rbp-78h]
  _BYTE v70[32]; // [rsp+30h] [rbp-68h] BYREF
  __int16 v71; // [rsp+50h] [rbp-48h]

  v4 = *(_DWORD *)(a2 + 32);
  v5 = *(_QWORD *)(a1 + 896);
  switch ( v4 )
  {
    case 3:
    case 4:
    case 23:
    case 24:
    case 38:
      *(_DWORD *)(a1 + 12) = (a3 != 0) + 27;
      goto LABEL_8;
    case 8:
    case 9:
      *(_DWORD *)(a1 + 12) = 12;
      goto LABEL_3;
    case 12:
      *(_DWORD *)(a1 + 12) = 16 * (*(_BYTE *)(a1 + 888) != 0);
      goto LABEL_3;
    case 16:
    case 17:
    case 18:
    case 19:
      if ( *(_BYTE *)(a1 + 888) )
        *(_DWORD *)(a1 + 12) = 27;
      else
        *(_DWORD *)(a1 + 12) = (*(_DWORD *)(*(_QWORD *)(v5 + 152) + 8LL) != 4) + 11;
      goto LABEL_3;
    case 40:
      *(_DWORD *)(a1 + 12) = 11;
      goto LABEL_3;
    default:
      *(_DWORD *)(a1 + 12) = 27;
LABEL_8:
      if ( v4 == 38 )
      {
        v6 = 1879048193;
        v7 = 2;
      }
      else
      {
LABEL_3:
        v6 = 1;
        if ( *(_DWORD *)(a2 + 44) != 13 || (v7 = 3, v4 == 38) )
          v7 = 2;
      }
      v71 = 257;
      v68[0] = ".bss";
      v69 = 259;
      *(_QWORD *)(a1 + 40) = sub_210B6D0(v5, v68, 8u, 3u, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v8 = *(_QWORD *)(a1 + 896);
      v69 = 259;
      v71 = 257;
      v68[0] = ".text";
      *(_QWORD *)(a1 + 24) = sub_210B6D0(v8, v68, 1u, 6u, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v9 = *(_QWORD *)(a1 + 896);
      v69 = 259;
      v71 = 257;
      v68[0] = ".data";
      *(_QWORD *)(a1 + 32) = sub_210B6D0(v9, v68, 1u, 3u, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v71 = 257;
      v10 = *(_QWORD *)(a1 + 896);
      v69 = 259;
      v68[0] = ".rodata";
      *(_QWORD *)(a1 + 48) = sub_210B6D0(v10, v68, 1u, 2u, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v68[0] = ".tdata";
      v11 = *(_QWORD *)(a1 + 896);
      v69 = 259;
      v71 = 257;
      *(_QWORD *)(a1 + 424) = sub_210B6D0(v11, v68, 1u, 0x403u, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v68[0] = ".tbss";
      v12 = *(_QWORD *)(a1 + 896);
      v69 = 259;
      v71 = 257;
      *(_QWORD *)(a1 + 432) = sub_210B6D0(v12, v68, 8u, 0x403u, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v68[0] = ".data.rel.ro";
      v13 = *(_QWORD *)(a1 + 896);
      v69 = 259;
      v71 = 257;
      *(_QWORD *)(a1 + 504) = sub_210B6D0(v13, v68, 1u, 3u, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v14 = *(_QWORD *)(a1 + 896);
      v69 = 259;
      v71 = 257;
      v68[0] = ".rodata.cst4";
      *(_QWORD *)(a1 + 512) = sub_210B6D0(v14, v68, 1u, 0x12u, 4u, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v15 = *(_QWORD *)(a1 + 896);
      v69 = 259;
      v71 = 257;
      v68[0] = ".rodata.cst8";
      *(_QWORD *)(a1 + 520) = sub_210B6D0(v15, v68, 1u, 0x12u, 8u, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v16 = *(_QWORD *)(a1 + 896);
      v68[0] = ".rodata.cst16";
      v71 = 257;
      v69 = 259;
      *(_QWORD *)(a1 + 528) = sub_210B6D0(v16, v68, 1u, 0x12u, 0x10u, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v17 = *(_QWORD *)(a1 + 896);
      v68[0] = ".rodata.cst32";
      v69 = 259;
      v71 = 257;
      *(_QWORD *)(a1 + 536) = sub_210B6D0(v17, v68, 1u, 0x12u, 0x20u, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v68[0] = ".gcc_except_table";
      v18 = *(_QWORD *)(a1 + 896);
      v69 = 259;
      v71 = 257;
      *(_QWORD *)(a1 + 56) = sub_210B6D0(v18, v68, 1u, 2u, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v19 = *(_DWORD *)(a2 + 32);
      v20 = *(_QWORD *)(a1 + 896);
      *(_OWORD *)(a1 + 392) = 0;
      v68[0] = ".debug_abbrev";
      v69 = 259;
      v71 = 257;
      v21 = (unsigned int)(v19 - 16) < 4 ? 1879048222 : 1;
      *(_QWORD *)(a1 + 80) = sub_210B6D0(v20, v68, v21, 0, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v68[0] = ".debug_info";
      v22 = *(_QWORD *)(a1 + 896);
      v71 = 257;
      v69 = 259;
      *(_QWORD *)(a1 + 88) = sub_210B6D0(v22, v68, v21, 0, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v69 = 259;
      v23 = *(_QWORD *)(a1 + 896);
      v71 = 257;
      v68[0] = ".debug_line";
      *(_QWORD *)(a1 + 96) = sub_210B6D0(v23, v68, v21, 0, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v69 = 259;
      v24 = *(_QWORD *)(a1 + 896);
      v71 = 257;
      v68[0] = ".debug_line_str";
      *(_QWORD *)(a1 + 104) = sub_210B6D0(v24, v68, v21, 0x30u, 1u, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v71 = 257;
      v25 = *(_QWORD *)(a1 + 896);
      v69 = 259;
      v68[0] = ".debug_frame";
      *(_QWORD *)(a1 + 112) = sub_210B6D0(v25, v68, v21, 0, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v68[0] = ".debug_pubnames";
      v26 = *(_QWORD *)(a1 + 896);
      v69 = 259;
      v71 = 257;
      *(_QWORD *)(a1 + 184) = sub_210B6D0(v26, v68, v21, 0, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v68[0] = ".debug_pubtypes";
      v27 = *(_QWORD *)(a1 + 896);
      v69 = 259;
      v71 = 257;
      *(_QWORD *)(a1 + 120) = sub_210B6D0(v27, v68, v21, 0, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v68[0] = ".debug_gnu_pubnames";
      v28 = *(_QWORD *)(a1 + 896);
      v69 = 259;
      v71 = 257;
      *(_QWORD *)(a1 + 368) = sub_210B6D0(v28, v68, v21, 0, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v29 = *(_QWORD *)(a1 + 896);
      v69 = 259;
      v71 = 257;
      v68[0] = ".debug_gnu_pubtypes";
      *(_QWORD *)(a1 + 376) = sub_210B6D0(v29, v68, v21, 0, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v30 = *(_QWORD *)(a1 + 896);
      v69 = 259;
      v71 = 257;
      v68[0] = ".debug_str";
      *(_QWORD *)(a1 + 136) = sub_210B6D0(v30, v68, v21, 0x30u, 1u, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v71 = 257;
      v31 = *(_QWORD *)(a1 + 896);
      v69 = 259;
      v68[0] = ".debug_loc";
      *(_QWORD *)(a1 + 144) = sub_210B6D0(v31, v68, v21, 0, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v69 = 259;
      v32 = *(_QWORD *)(a1 + 896);
      v68[0] = ".debug_aranges";
      v71 = 257;
      *(_QWORD *)(a1 + 152) = sub_210B6D0(v32, v68, v21, 0, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v68[0] = ".debug_ranges";
      v33 = *(_QWORD *)(a1 + 896);
      v69 = 259;
      v71 = 257;
      *(_QWORD *)(a1 + 160) = sub_210B6D0(v33, v68, v21, 0, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v68[0] = ".debug_macinfo";
      v34 = *(_QWORD *)(a1 + 896);
      v69 = 259;
      v71 = 257;
      *(_QWORD *)(a1 + 168) = sub_210B6D0(v34, v68, v21, 0, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v68[0] = ".debug_macro";
      v35 = *(_QWORD *)(a1 + 896);
      v71 = 257;
      v69 = 259;
      *(_QWORD *)(a1 + 176) = sub_210B6D0(v35, v68, v21, 0, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v36 = *(_QWORD *)(a1 + 896);
      v69 = 259;
      v71 = 257;
      v68[0] = ".debug_names";
      *(_QWORD *)(a1 + 192) = sub_210B6D0(v36, v68, 1u, 0, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v37 = *(_QWORD *)(a1 + 896);
      v69 = 259;
      v71 = 257;
      v68[0] = ".apple_names";
      v38 = sub_210B6D0(v37, v68, 1u, 0, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v71 = 257;
      *(_QWORD *)(a1 + 200) = v38;
      v39 = *(_QWORD *)(a1 + 896);
      v69 = 259;
      v68[0] = ".apple_objc";
      *(_QWORD *)(a1 + 208) = sub_210B6D0(v39, v68, 1u, 0, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v40 = *(_QWORD *)(a1 + 896);
      v68[0] = ".apple_namespaces";
      v69 = 259;
      v71 = 257;
      *(_QWORD *)(a1 + 216) = sub_210B6D0(v40, v68, 1u, 0, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v41 = *(_QWORD *)(a1 + 896);
      v68[0] = ".apple_types";
      v69 = 259;
      v71 = 257;
      *(_QWORD *)(a1 + 224) = sub_210B6D0(v41, v68, 1u, 0, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v68[0] = ".debug_str_offsets";
      v42 = *(_QWORD *)(a1 + 896);
      v69 = 259;
      v71 = 257;
      *(_QWORD *)(a1 + 304) = sub_210B6D0(v42, v68, v21, 0, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v69 = 259;
      v43 = *(_QWORD *)(a1 + 896);
      v71 = 257;
      v68[0] = ".debug_addr";
      *(_QWORD *)(a1 + 312) = sub_210B6D0(v43, v68, v21, 0, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v69 = 259;
      v44 = *(_QWORD *)(a1 + 896);
      v71 = 257;
      v68[0] = ".debug_rnglists";
      *(_QWORD *)(a1 + 320) = sub_210B6D0(v44, v68, v21, 0, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v71 = 257;
      v45 = *(_QWORD *)(a1 + 896);
      v69 = 259;
      v68[0] = ".debug_loclists";
      *(_QWORD *)(a1 + 328) = sub_210B6D0(v45, v68, v21, 0, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v68[0] = ".debug_info.dwo";
      v46 = *(_QWORD *)(a1 + 896);
      v69 = 259;
      v71 = 257;
      *(_QWORD *)(a1 + 232) = sub_210B6D0(v46, v68, v21, 0x80000000, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v47 = *(_QWORD *)(a1 + 896);
      v68[0] = ".debug_types.dwo";
      v69 = 259;
      v71 = 257;
      *(_QWORD *)(a1 + 240) = sub_210B6D0(v47, v68, v21, 0x80000000, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v48 = *(_QWORD *)(a1 + 896);
      v68[0] = ".debug_abbrev.dwo";
      v69 = 259;
      v71 = 257;
      v49 = sub_210B6D0(v48, v68, v21, 0x80000000, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v71 = 257;
      v50 = *(_QWORD *)(a1 + 896);
      *(_QWORD *)(a1 + 248) = v49;
      v68[0] = ".debug_str.dwo";
      v69 = 259;
      *(_QWORD *)(a1 + 256) = sub_210B6D0(v50, v68, v21, 0x80000030, 1u, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v69 = 259;
      v51 = *(_QWORD *)(a1 + 896);
      v71 = 257;
      v68[0] = ".debug_line.dwo";
      *(_QWORD *)(a1 + 264) = sub_210B6D0(v51, v68, v21, 0x80000000, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v69 = 259;
      v52 = *(_QWORD *)(a1 + 896);
      v71 = 257;
      v68[0] = ".debug_loc.dwo";
      *(_QWORD *)(a1 + 272) = sub_210B6D0(v52, v68, v21, 0x80000000, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v71 = 257;
      v53 = *(_QWORD *)(a1 + 896);
      v69 = 259;
      v68[0] = ".debug_str_offsets.dwo";
      *(_QWORD *)(a1 + 280) = sub_210B6D0(v53, v68, v21, 0x80000000, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v54 = *(_QWORD *)(a1 + 896);
      v68[0] = ".debug_rnglists.dwo";
      v69 = 259;
      v71 = 257;
      *(_QWORD *)(a1 + 336) = sub_210B6D0(v54, v68, v21, 0x80000000, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v55 = *(_QWORD *)(a1 + 896);
      v68[0] = ".debug_macinfo.dwo";
      v69 = 259;
      v71 = 257;
      *(_QWORD *)(a1 + 288) = sub_210B6D0(v55, v68, v21, 0x80000000, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v56 = *(_QWORD *)(a1 + 896);
      v68[0] = ".debug_macro.dwo";
      v69 = 259;
      v71 = 257;
      *(_QWORD *)(a1 + 296) = sub_210B6D0(v56, v68, v21, 0x80000000, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v69 = 259;
      v57 = *(_QWORD *)(a1 + 896);
      v71 = 257;
      v68[0] = ".debug_loclists.dwo";
      *(_QWORD *)(a1 + 344) = sub_210B6D0(v57, v68, v21, 0x80000000, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v58 = *(_QWORD *)(a1 + 896);
      v69 = 259;
      v71 = 257;
      v68[0] = ".debug_cu_index";
      *(_QWORD *)(a1 + 352) = sub_210B6D0(v58, v68, v21, 0, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v71 = 257;
      v59 = *(_QWORD *)(a1 + 896);
      v69 = 259;
      v68[0] = ".debug_tu_index";
      *(_QWORD *)(a1 + 360) = sub_210B6D0(v59, v68, v21, 0, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v69 = 259;
      v60 = *(_QWORD *)(a1 + 896);
      v68[0] = ".llvm_stackmaps";
      v71 = 257;
      *(_QWORD *)(a1 + 440) = sub_210B6D0(v60, v68, 1u, 2u, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v68[0] = ".llvm_faultmaps";
      v61 = *(_QWORD *)(a1 + 896);
      v69 = 259;
      v71 = 257;
      *(_QWORD *)(a1 + 448) = sub_210B6D0(v61, v68, 1u, 2u, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v68[0] = ".eh_frame";
      v62 = *(_QWORD *)(a1 + 896);
      v69 = 259;
      v71 = 257;
      *(_QWORD *)(a1 + 464) = sub_210B6D0(v62, v68, v6, v7, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v68[0] = ".stack_sizes";
      v63 = *(_QWORD *)(a1 + 896);
      v71 = 257;
      v69 = 259;
      *(_QWORD *)(a1 + 472) = sub_210B6D0(v63, v68, 1u, 0, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v69 = 259;
      v64 = *(_QWORD *)(a1 + 896);
      v71 = 257;
      v68[0] = ".pseudo_probe";
      *(_QWORD *)(a1 + 480) = sub_210B6D0(v64, v68, v21, 0, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v69 = 259;
      v65 = *(_QWORD *)(a1 + 896);
      v71 = 257;
      v68[0] = ".pseudo_probe_desc";
      *(_QWORD *)(a1 + 488) = sub_210B6D0(v65, v68, v21, 0, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      v69 = 259;
      v66 = *(_QWORD *)(a1 + 896);
      v68[0] = ".llvm_stats";
      v71 = 257;
      result = sub_210B6D0(v66, v68, 1u, 0, 0, (__int64)v70, 0, 0xFFFFFFFF, 0);
      *(_QWORD *)(a1 + 496) = result;
      return result;
  }
}
