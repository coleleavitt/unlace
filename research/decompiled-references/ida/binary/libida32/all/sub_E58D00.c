void __fastcall sub_E58D00(__int64 *a1, __int64 a2, char *a3)
{
  size_t v4; // rax
  size_t v5; // rax
  size_t v6; // rax
  size_t v7; // rax
  size_t v8; // rax
  size_t v9; // rax
  size_t v10; // rax
  size_t v11; // rax
  size_t v12; // rax
  size_t v13; // rax
  __int64 v14; // rdi
  _BYTE *v15; // rax
  __int64 v16; // rdi
  _BYTE *v17; // rax
  __int64 v18; // rdi
  _BYTE *v19; // rax
  size_t v20; // rax
  size_t v21; // rax
  size_t v22; // rax
  size_t v23; // rax
  size_t v24; // rax
  size_t v25; // rax
  size_t v26; // rax
  size_t v27; // rax
  size_t v28; // rax
  size_t v29; // rax
  size_t v30; // rax
  size_t v31; // rax
  size_t v32; // rax
  size_t v33; // rax
  size_t v34; // rax
  size_t v35; // rax
  size_t v36; // rax
  size_t v37; // rax
  size_t v38; // rax
  size_t v39; // rax
  size_t v40; // rax
  size_t v41; // rax
  size_t v42; // rax
  size_t v43; // rax
  size_t v44; // rax
  size_t v45; // rax
  size_t v46; // rax
  size_t v47; // rax
  size_t v48; // rax
  size_t v49; // rax
  size_t v50; // rax
  size_t v51; // rax
  size_t v52; // rax
  __int64 v53; // rdi
  _BYTE *v54; // rax
  __int64 v55; // rdi
  _BYTE *v56; // rax
  size_t v57; // rax
  size_t v58; // rax
  size_t v59; // rax
  size_t v60; // rax
  size_t v61; // rax
  size_t v62; // rax
  size_t v63; // rax
  size_t v64; // rax
  __int64 v65; // rdi
  _BYTE *v66; // rax
  size_t v67; // rax
  size_t v68; // rax
  size_t v69; // rax
  size_t v70; // rax
  __int64 v71; // rdi
  _BYTE *v72; // rax
  __int64 v73; // rdi
  _BYTE *v74; // rax
  __int64 v75; // rdi
  _BYTE *v76; // rax
  __int64 v77; // rdi
  _BYTE *v78; // rax
  __int64 v79; // rdi
  _BYTE *v80; // rax
  __int64 v81; // rax
  __int64 v82; // rdi
  __int64 v83; // rdi
  _BYTE *v84; // rax
  __int64 v85; // rdi
  _BYTE *v86; // rax
  size_t v87; // rax
  size_t v88; // rax
  size_t v89; // rax
  size_t v90; // rax
  size_t v91; // rax
  size_t v92; // rax
  size_t v93; // rax
  size_t v94; // rax
  size_t v95; // rax
  size_t v96; // rax
  size_t v97; // rax
  size_t v98; // rax
  size_t v99; // rax
  size_t v100; // rax
  size_t v101; // rax
  size_t v102; // rax
  size_t v103; // rax
  size_t v104; // rax
  size_t v105; // rax
  size_t v106; // rax
  size_t v107; // rax
  size_t v108; // rax
  size_t v109; // rax
  size_t v110; // rax
  size_t v111; // rax
  size_t v112; // rax
  size_t v113; // rax
  __int64 v114; // rax
  __int64 v115; // rdx
  __int64 v116; // r14
  __int64 v117; // r15
  __int16 v118; // ax
  unsigned int v119; // r15d
  char *v120; // r14
  char *v121; // rdx
  __int64 v122; // rax
  __int64 v123; // rcx
  __int64 v124; // rax
  void **v125; // r12
  __m128i *v126; // rdi
  __int64 v127; // rax
  char *v128; // r12
  char *v129; // rdx
  __int64 v130; // rax
  __int64 v131; // rcx
  __int64 v132; // rax
  void **v133; // r14
  __m128i *v134; // rdi
  __int64 v135; // rax
  size_t v136; // rax
  size_t v137; // rdx
  size_t v138; // rdx
  _QWORD *v139; // rdx
  int v140; // eax
  _QWORD *v141; // rdx
  int v142; // eax
  __int64 v143; // rax
  __int64 v144; // r15
  __int64 v145; // rdx
  __int64 v146; // r15
  void *v147; // rdi
  __int64 v148; // rax
  __int64 v149; // r14
  __int64 v150; // r15
  __int64 v151; // r14
  void *v152; // rdi
  size_t v153; // [rsp+0h] [rbp-F8h]
  _BYTE *v154; // [rsp+8h] [rbp-F0h]
  __int64 v155; // [rsp+10h] [rbp-E8h]
  __int64 v156; // [rsp+18h] [rbp-E0h]
  void *src; // [rsp+20h] [rbp-D8h] BYREF
  size_t n; // [rsp+28h] [rbp-D0h]
  __m128i v159[4]; // [rsp+30h] [rbp-C8h] BYREF
  char *v160; // [rsp+70h] [rbp-88h] BYREF
  void *v161; // [rsp+78h] [rbp-80h]
  size_t v162; // [rsp+80h] [rbp-78h]
  _OWORD v163[7]; // [rsp+88h] [rbp-70h] BYREF

  switch ( (*(_WORD *)(a2 + 18) >> 3) & 0x1FF )
  {
    case 0:
      sub_971800(a1[1], "PAUocl_image1d_ro@@");
      return;
    case 1:
      sub_971800(a1[1], "PAUocl_image1d_array_ro@@");
      return;
    case 2:
      sub_971800(a1[1], "PAUocl_image1d_buffer_ro@@");
      return;
    case 3:
      sub_971800(a1[1], "PAUocl_image2d_ro@@");
      return;
    case 4:
      sub_971800(a1[1], "PAUocl_image2d_array_ro@@");
      return;
    case 5:
      sub_971800(a1[1], "PAUocl_image2d_depth_ro@@");
      return;
    case 6:
      sub_971800(a1[1], "PAUocl_image2d_array_depth_ro@@");
      return;
    case 7:
      sub_971800(a1[1], "PAUocl_image2d_msaa_ro@@");
      return;
    case 8:
      sub_971800(a1[1], "PAUocl_image2d_array_msaa_ro@@");
      return;
    case 9:
      sub_971800(a1[1], "PAUocl_image2d_msaa_depth_ro@@");
      return;
    case 0xA:
      sub_971800(a1[1], "PAUocl_image2d_array_msaa_depth_ro@@");
      return;
    case 0xB:
      sub_971800(a1[1], "PAUocl_image3d_ro@@");
      return;
    case 0xC:
      sub_971800(a1[1], "PAUocl_image1d_wo@@");
      return;
    case 0xD:
      sub_971800(a1[1], "PAUocl_image1d_array_wo@@");
      return;
    case 0xE:
      sub_971800(a1[1], "PAUocl_image1d_buffer_wo@@");
      return;
    case 0xF:
      sub_971800(a1[1], "PAUocl_image2d_wo@@");
      return;
    case 0x10:
      sub_971800(a1[1], "PAUocl_image2d_array_wo@@");
      return;
    case 0x11:
      sub_971800(a1[1], "PAUocl_image2d_depth_wo@@");
      return;
    case 0x12:
      sub_971800(a1[1], "PAUocl_image2d_array_depth_wo@@");
      return;
    case 0x13:
      sub_971800(a1[1], "PAUocl_image2d_msaa_wo@@");
      return;
    case 0x14:
      sub_971800(a1[1], "PAUocl_image2d_array_msaa_wo@@");
      return;
    case 0x15:
      sub_971800(a1[1], "PAUocl_image2d_msaa_depth_wo@@");
      return;
    case 0x16:
      sub_971800(a1[1], "PAUocl_image2d_array_msaa_depth_wo@@");
      return;
    case 0x17:
      sub_971800(a1[1], "PAUocl_image3d_wo@@");
      return;
    case 0x18:
      sub_971800(a1[1], "PAUocl_image1d_rw@@");
      return;
    case 0x19:
      sub_971800(a1[1], "PAUocl_image1d_array_rw@@");
      return;
    case 0x1A:
      sub_971800(a1[1], "PAUocl_image1d_buffer_rw@@");
      return;
    case 0x1B:
      sub_971800(a1[1], "PAUocl_image2d_rw@@");
      return;
    case 0x1C:
      sub_971800(a1[1], "PAUocl_image2d_array_rw@@");
      return;
    case 0x1D:
      sub_971800(a1[1], "PAUocl_image2d_depth_rw@@");
      return;
    case 0x1E:
      sub_971800(a1[1], "PAUocl_image2d_array_depth_rw@@");
      return;
    case 0x1F:
      sub_971800(a1[1], "PAUocl_image2d_msaa_rw@@");
      return;
    case 0x20:
      sub_971800(a1[1], "PAUocl_image2d_array_msaa_rw@@");
      return;
    case 0x21:
      sub_971800(a1[1], "PAUocl_image2d_msaa_depth_rw@@");
      return;
    case 0x22:
      sub_971800(a1[1], "PAUocl_image2d_array_msaa_depth_rw@@");
      return;
    case 0x23:
      sub_971800(a1[1], "PAUocl_image3d_rw@@");
      return;
    case 0x24:
      v98 = j__strlen("ocl_intel_sub_group_avc_mce_payload_t");
      sub_E58C30((__int64)a1, "ocl_intel_sub_group_avc_mce_payload_t", v98, 0, 0);
      return;
    case 0x25:
      v97 = j__strlen("ocl_intel_sub_group_avc_ime_payload_t");
      sub_E58C30((__int64)a1, "ocl_intel_sub_group_avc_ime_payload_t", v97, 0, 0);
      return;
    case 0x26:
      v96 = j__strlen("ocl_intel_sub_group_avc_ref_payload_t");
      sub_E58C30((__int64)a1, "ocl_intel_sub_group_avc_ref_payload_t", v96, 0, 0);
      return;
    case 0x27:
      v95 = j__strlen("ocl_intel_sub_group_avc_sic_payload_t");
      sub_E58C30((__int64)a1, "ocl_intel_sub_group_avc_sic_payload_t", v95, 0, 0);
      return;
    case 0x28:
      v94 = j__strlen("ocl_intel_sub_group_avc_mce_result_t");
      sub_E58C30((__int64)a1, "ocl_intel_sub_group_avc_mce_result_t", v94, 0, 0);
      return;
    case 0x29:
      v93 = j__strlen("ocl_intel_sub_group_avc_ime_result_t");
      sub_E58C30((__int64)a1, "ocl_intel_sub_group_avc_ime_result_t", v93, 0, 0);
      return;
    case 0x2A:
      v92 = j__strlen("ocl_intel_sub_group_avc_ref_result_t");
      sub_E58C30((__int64)a1, "ocl_intel_sub_group_avc_ref_result_t", v92, 0, 0);
      return;
    case 0x2B:
      v91 = j__strlen("ocl_intel_sub_group_avc_sic_result_t");
      sub_E58C30((__int64)a1, "ocl_intel_sub_group_avc_sic_result_t", v91, 0, 0);
      return;
    case 0x2C:
      v90 = j__strlen("ocl_intel_sub_group_avc_ime_result_single_reference_streamout_t");
      sub_E58C30((__int64)a1, "ocl_intel_sub_group_avc_ime_result_single_reference_streamout_t", v90, 0, 0);
      return;
    case 0x2D:
      v89 = j__strlen("ocl_intel_sub_group_avc_ime_result_dual_reference_streamout_t");
      sub_E58C30((__int64)a1, "ocl_intel_sub_group_avc_ime_result_dual_reference_streamout_t", v89, 0, 0);
      return;
    case 0x2E:
      v88 = j__strlen("ocl_intel_sub_group_avc_ime_single_reference_streamin_t");
      sub_E58C30((__int64)a1, "ocl_intel_sub_group_avc_ime_single_reference_streamin_t", v88, 0, 0);
      return;
    case 0x2F:
      v87 = j__strlen("ocl_intel_sub_group_avc_ime_dual_reference_streamin_t");
      sub_E58C30((__int64)a1, "ocl_intel_sub_group_avc_ime_dual_reference_streamin_t", v87, 0, 0);
      return;
    case 0x30:
      v161 = &byte_7;
      v160 = "__clang";
      v106 = j__strlen("__SVInt8_t");
      sub_E58C30((__int64)a1, "__SVInt8_t", v106, (__int64)&v160, 1);
      return;
    case 0x31:
      v161 = &byte_7;
      v160 = "__clang";
      v105 = j__strlen("__SVInt16_t");
      sub_E58C30((__int64)a1, "__SVInt16_t", v105, (__int64)&v160, 1);
      return;
    case 0x32:
      v161 = &byte_7;
      v160 = "__clang";
      v104 = j__strlen("__SVInt32_t");
      sub_E58C30((__int64)a1, "__SVInt32_t", v104, (__int64)&v160, 1);
      return;
    case 0x33:
      v161 = &byte_7;
      v160 = "__clang";
      v103 = j__strlen("__SVInt64_t");
      sub_E58C30((__int64)a1, "__SVInt64_t", v103, (__int64)&v160, 1);
      return;
    case 0x34:
      v161 = &byte_7;
      v160 = "__clang";
      v102 = j__strlen("__SVUint8_t");
      sub_E58C30((__int64)a1, "__SVUint8_t", v102, (__int64)&v160, 1);
      return;
    case 0x35:
      v161 = &byte_7;
      v160 = "__clang";
      v101 = j__strlen("__SVUint16_t");
      sub_E58C30((__int64)a1, "__SVUint16_t", v101, (__int64)&v160, 1);
      return;
    case 0x36:
      v161 = &byte_7;
      v160 = "__clang";
      v100 = j__strlen("__SVUint32_t");
      sub_E58C30((__int64)a1, "__SVUint32_t", v100, (__int64)&v160, 1);
      return;
    case 0x37:
      v161 = &byte_7;
      v160 = "__clang";
      v99 = j__strlen("__SVUint64_t");
      sub_E58C30((__int64)a1, "__SVUint64_t", v99, (__int64)&v160, 1);
      return;
    case 0x38:
      v161 = &byte_7;
      v160 = "__clang";
      v110 = j__strlen("__SVFloat16_t");
      sub_E58C30((__int64)a1, "__SVFloat16_t", v110, (__int64)&v160, 1);
      return;
    case 0x39:
      v161 = &byte_7;
      v160 = "__clang";
      v109 = j__strlen("__SVFloat32_t");
      sub_E58C30((__int64)a1, "__SVFloat32_t", v109, (__int64)&v160, 1);
      return;
    case 0x3A:
      v161 = &byte_7;
      v160 = "__clang";
      v108 = j__strlen("__SVFloat64_t");
      sub_E58C30((__int64)a1, "__SVFloat64_t", v108, (__int64)&v160, 1);
      return;
    case 0x3B:
      v161 = &byte_7;
      v160 = "__clang";
      v107 = j__strlen("__SVBfloat16_t");
      sub_E58C30((__int64)a1, "__SVBfloat16_t", v107, (__int64)&v160, 1);
      return;
    case 0x3C:
      v161 = &byte_7;
      v160 = "__clang";
      v112 = j__strlen("__SVMfloat8_t");
      sub_E58C30((__int64)a1, "__SVMfloat8_t", v112, (__int64)&v160, 1);
      return;
    case 0x3D:
      v161 = &byte_7;
      v160 = "__clang";
      v111 = j__strlen("__clang_svint8x2_t");
      sub_E58C30((__int64)a1, "__clang_svint8x2_t", v111, (__int64)&v160, 1);
      return;
    case 0x3E:
      v161 = &byte_7;
      v160 = "__clang";
      v113 = j__strlen("__clang_svint16x2_t");
      sub_E58C30((__int64)a1, "__clang_svint16x2_t", v113, (__int64)&v160, 1);
      return;
    case 0x3F:
      v161 = &byte_7;
      v160 = "__clang";
      v20 = j__strlen("__clang_svint32x2_t");
      sub_E58C30((__int64)a1, "__clang_svint32x2_t", v20, (__int64)&v160, 1);
      return;
    case 0x40:
      v161 = &byte_7;
      v160 = "__clang";
      v52 = j__strlen("__clang_svint64x2_t");
      sub_E58C30((__int64)a1, "__clang_svint64x2_t", v52, (__int64)&v160, 1);
      return;
    case 0x41:
      v161 = &byte_7;
      v160 = "__clang";
      v51 = j__strlen("__clang_svuint8x2_t");
      sub_E58C30((__int64)a1, "__clang_svuint8x2_t", v51, (__int64)&v160, 1);
      return;
    case 0x42:
      v161 = &byte_7;
      v160 = "__clang";
      v50 = j__strlen("__clang_svuint16x2_t");
      sub_E58C30((__int64)a1, "__clang_svuint16x2_t", v50, (__int64)&v160, 1);
      return;
    case 0x43:
      v161 = &byte_7;
      v160 = "__clang";
      v49 = j__strlen("__clang_svuint32x2_t");
      sub_E58C30((__int64)a1, "__clang_svuint32x2_t", v49, (__int64)&v160, 1);
      return;
    case 0x44:
      v161 = &byte_7;
      v160 = "__clang";
      v48 = j__strlen("__clang_svuint64x2_t");
      sub_E58C30((__int64)a1, "__clang_svuint64x2_t", v48, (__int64)&v160, 1);
      return;
    case 0x45:
      v161 = &byte_7;
      v160 = "__clang";
      v47 = j__strlen("__clang_svfloat16x2_t");
      sub_E58C30((__int64)a1, "__clang_svfloat16x2_t", v47, (__int64)&v160, 1);
      return;
    case 0x46:
      v161 = &byte_7;
      v160 = "__clang";
      v46 = j__strlen("__clang_svfloat32x2_t");
      sub_E58C30((__int64)a1, "__clang_svfloat32x2_t", v46, (__int64)&v160, 1);
      return;
    case 0x47:
      v161 = &byte_7;
      v160 = "__clang";
      v45 = j__strlen("__clang_svfloat64x2_t");
      sub_E58C30((__int64)a1, "__clang_svfloat64x2_t", v45, (__int64)&v160, 1);
      return;
    case 0x48:
      v161 = &byte_7;
      v160 = "__clang";
      v44 = j__strlen("__clang_svbfloat16x2_t");
      sub_E58C30((__int64)a1, "__clang_svbfloat16x2_t", v44, (__int64)&v160, 1);
      return;
    case 0x49:
      v161 = &byte_7;
      v160 = "__clang";
      v43 = j__strlen("__clang_svmfloat8x2_t");
      sub_E58C30((__int64)a1, "__clang_svmfloat8x2_t", v43, (__int64)&v160, 1);
      return;
    case 0x4A:
      v161 = &byte_7;
      v160 = "__clang";
      v42 = j__strlen("__clang_svint8x3_t");
      sub_E58C30((__int64)a1, "__clang_svint8x3_t", v42, (__int64)&v160, 1);
      return;
    case 0x4B:
      v161 = &byte_7;
      v160 = "__clang";
      v41 = j__strlen("__clang_svint16x3_t");
      sub_E58C30((__int64)a1, "__clang_svint16x3_t", v41, (__int64)&v160, 1);
      return;
    case 0x4C:
      v161 = &byte_7;
      v160 = "__clang";
      v40 = j__strlen("__clang_svint32x3_t");
      sub_E58C30((__int64)a1, "__clang_svint32x3_t", v40, (__int64)&v160, 1);
      return;
    case 0x4D:
      v161 = &byte_7;
      v160 = "__clang";
      v39 = j__strlen("__clang_svint64x3_t");
      sub_E58C30((__int64)a1, "__clang_svint64x3_t", v39, (__int64)&v160, 1);
      return;
    case 0x4E:
      v161 = &byte_7;
      v160 = "__clang";
      v38 = j__strlen("__clang_svuint8x3_t");
      sub_E58C30((__int64)a1, "__clang_svuint8x3_t", v38, (__int64)&v160, 1);
      return;
    case 0x4F:
      v161 = &byte_7;
      v160 = "__clang";
      v37 = j__strlen("__clang_svuint16x3_t");
      sub_E58C30((__int64)a1, "__clang_svuint16x3_t", v37, (__int64)&v160, 1);
      return;
    case 0x50:
      v161 = &byte_7;
      v160 = "__clang";
      v36 = j__strlen("__clang_svuint32x3_t");
      sub_E58C30((__int64)a1, "__clang_svuint32x3_t", v36, (__int64)&v160, 1);
      return;
    case 0x51:
      v161 = &byte_7;
      v160 = "__clang";
      v35 = j__strlen("__clang_svuint64x3_t");
      sub_E58C30((__int64)a1, "__clang_svuint64x3_t", v35, (__int64)&v160, 1);
      return;
    case 0x52:
      v161 = &byte_7;
      v160 = "__clang";
      v34 = j__strlen("__clang_svfloat16x3_t");
      sub_E58C30((__int64)a1, "__clang_svfloat16x3_t", v34, (__int64)&v160, 1);
      return;
    case 0x53:
      v161 = &byte_7;
      v160 = "__clang";
      v33 = j__strlen("__clang_svfloat32x3_t");
      sub_E58C30((__int64)a1, "__clang_svfloat32x3_t", v33, (__int64)&v160, 1);
      return;
    case 0x54:
      v161 = &byte_7;
      v160 = "__clang";
      v32 = j__strlen("__clang_svfloat64x3_t");
      sub_E58C30((__int64)a1, "__clang_svfloat64x3_t", v32, (__int64)&v160, 1);
      return;
    case 0x55:
      v161 = &byte_7;
      v160 = "__clang";
      v31 = j__strlen("__clang_svbfloat16x3_t");
      sub_E58C30((__int64)a1, "__clang_svbfloat16x3_t", v31, (__int64)&v160, 1);
      return;
    case 0x56:
      v161 = &byte_7;
      v160 = "__clang";
      v30 = j__strlen("__clang_svmfloat8x3_t");
      sub_E58C30((__int64)a1, "__clang_svmfloat8x3_t", v30, (__int64)&v160, 1);
      return;
    case 0x57:
      v161 = &byte_7;
      v160 = "__clang";
      v29 = j__strlen("__clang_svint8x4_t");
      sub_E58C30((__int64)a1, "__clang_svint8x4_t", v29, (__int64)&v160, 1);
      return;
    case 0x58:
      v161 = &byte_7;
      v160 = "__clang";
      v28 = j__strlen("__clang_svint16x4_t");
      sub_E58C30((__int64)a1, "__clang_svint16x4_t", v28, (__int64)&v160, 1);
      return;
    case 0x59:
      v161 = &byte_7;
      v160 = "__clang";
      v27 = j__strlen("__clang_svint32x4_t");
      sub_E58C30((__int64)a1, "__clang_svint32x4_t", v27, (__int64)&v160, 1);
      return;
    case 0x5A:
      v161 = &byte_7;
      v160 = "__clang";
      v26 = j__strlen("__clang_svint64x4_t");
      sub_E58C30((__int64)a1, "__clang_svint64x4_t", v26, (__int64)&v160, 1);
      return;
    case 0x5B:
      v161 = &byte_7;
      v160 = "__clang";
      v25 = j__strlen("__clang_svuint8x4_t");
      sub_E58C30((__int64)a1, "__clang_svuint8x4_t", v25, (__int64)&v160, 1);
      return;
    case 0x5C:
      v161 = &byte_7;
      v160 = "__clang";
      v24 = j__strlen("__clang_svuint16x4_t");
      sub_E58C30((__int64)a1, "__clang_svuint16x4_t", v24, (__int64)&v160, 1);
      return;
    case 0x5D:
      v161 = &byte_7;
      v160 = "__clang";
      v23 = j__strlen("__clang_svuint32x4_t");
      sub_E58C30((__int64)a1, "__clang_svuint32x4_t", v23, (__int64)&v160, 1);
      return;
    case 0x5E:
      v161 = &byte_7;
      v160 = "__clang";
      v22 = j__strlen("__clang_svuint64x4_t");
      sub_E58C30((__int64)a1, "__clang_svuint64x4_t", v22, (__int64)&v160, 1);
      return;
    case 0x5F:
      v161 = &byte_7;
      v160 = "__clang";
      v21 = j__strlen("__clang_svfloat16x4_t");
      sub_E58C30((__int64)a1, "__clang_svfloat16x4_t", v21, (__int64)&v160, 1);
      return;
    case 0x60:
      v161 = &byte_7;
      v160 = "__clang";
      v64 = j__strlen("__clang_svfloat32x4_t");
      sub_E58C30((__int64)a1, "__clang_svfloat32x4_t", v64, (__int64)&v160, 1);
      return;
    case 0x61:
      v161 = &byte_7;
      v160 = "__clang";
      v63 = j__strlen("__clang_svfloat64x4_t");
      sub_E58C30((__int64)a1, "__clang_svfloat64x4_t", v63, (__int64)&v160, 1);
      return;
    case 0x62:
      v161 = &byte_7;
      v160 = "__clang";
      v62 = j__strlen("__clang_svbfloat16x4_t");
      sub_E58C30((__int64)a1, "__clang_svbfloat16x4_t", v62, (__int64)&v160, 1);
      return;
    case 0x63:
      v161 = &byte_7;
      v160 = "__clang";
      v61 = j__strlen("__clang_svmfloat8x4_t");
      sub_E58C30((__int64)a1, "__clang_svmfloat8x4_t", v61, (__int64)&v160, 1);
      return;
    case 0x64:
      v161 = &byte_7;
      v160 = "__clang";
      v60 = j__strlen("__SVBool_t");
      sub_E58C30((__int64)a1, "__SVBool_t", v60, (__int64)&v160, 1);
      return;
    case 0x65:
      v161 = &byte_7;
      v160 = "__clang";
      v59 = j__strlen("__clang_svboolx2_t");
      sub_E58C30((__int64)a1, "__clang_svboolx2_t", v59, (__int64)&v160, 1);
      return;
    case 0x66:
      v161 = &byte_7;
      v160 = "__clang";
      v58 = j__strlen("__clang_svboolx4_t");
      sub_E58C30((__int64)a1, "__clang_svboolx4_t", v58, (__int64)&v160, 1);
      return;
    case 0x67:
      v161 = &byte_7;
      v160 = "__clang";
      v57 = j__strlen("__SVCount_t");
      sub_E58C30((__int64)a1, "__SVCount_t", v57, (__int64)&v160, 1);
      return;
    case 0x68:
      v161 = &byte_7;
      v160 = "__clang";
      v70 = j__strlen("__mfp8");
      sub_E58C30((__int64)a1, "__mfp8", v70, (__int64)&v160, 1);
      return;
    case 0x1AF:
      v68 = j__strlen("externref_t");
      sub_E58C30((__int64)a1, "externref_t", v68, 0, 0);
      v161 = &byte_7;
      v160 = "__clang";
      v69 = j__strlen("externref_t");
      sub_E58C30((__int64)a1, "externref_t", v69, (__int64)&v160, 1);
      return;
    case 0x1B2:
      v67 = j__strlen("__hlsl_resource_t");
      sub_E58C30((__int64)a1, "__hlsl_resource_t", v67, 0, 0);
      return;
    case 0x1B3:
      v65 = a1[1];
      v66 = *(_BYTE **)(v65 + 32);
      if ( (unsigned __int64)v66 >= *(_QWORD *)(v65 + 24) )
      {
        sub_2257CD0(v65, 88);
      }
      else
      {
        *(_QWORD *)(v65 + 32) = v66 + 1;
        *v66 = 88;
      }
      return;
    case 0x1B4:
      sub_971800(a1[1], "_N");
      return;
    case 0x1B5:
    case 0x1C0:
      v55 = a1[1];
      v56 = *(_BYTE **)(v55 + 32);
      if ( (unsigned __int64)v56 >= *(_QWORD *)(v55 + 24) )
      {
        sub_2257CD0(v55, 68);
      }
      else
      {
        *(_QWORD *)(v55 + 32) = v56 + 1;
        *v56 = 68;
      }
      return;
    case 0x1B6:
      v53 = a1[1];
      v54 = *(_BYTE **)(v53 + 32);
      if ( (unsigned __int64)v54 >= *(_QWORD *)(v53 + 24) )
      {
        sub_2257CD0(v53, 69);
      }
      else
      {
        *(_QWORD *)(v53 + 32) = v54 + 1;
        *v54 = 69;
      }
      return;
    case 0x1B7:
    case 0x1C2:
      sub_971800(a1[1], "_W");
      return;
    case 0x1B8:
      sub_971800(a1[1], "_Q");
      return;
    case 0x1B9:
      sub_971800(a1[1], "_S");
      return;
    case 0x1BA:
      sub_971800(a1[1], "_U");
      return;
    case 0x1BB:
      v79 = a1[1];
      v80 = *(_BYTE **)(v79 + 32);
      if ( (unsigned __int64)v80 >= *(_QWORD *)(v79 + 24) )
      {
        sub_2257CD0(v79, 71);
      }
      else
      {
        *(_QWORD *)(v79 + 32) = v80 + 1;
        *v80 = 71;
      }
      return;
    case 0x1BC:
      v85 = a1[1];
      v86 = *(_BYTE **)(v85 + 32);
      if ( (unsigned __int64)v86 >= *(_QWORD *)(v85 + 24) )
      {
        sub_2257CD0(v85, 73);
      }
      else
      {
        *(_QWORD *)(v85 + 32) = v86 + 1;
        *v86 = 73;
      }
      return;
    case 0x1BD:
      v83 = a1[1];
      v84 = *(_BYTE **)(v83 + 32);
      if ( (unsigned __int64)v84 >= *(_QWORD *)(v83 + 24) )
      {
        sub_2257CD0(v83, 75);
      }
      else
      {
        *(_QWORD *)(v83 + 32) = v84 + 1;
        *v84 = 75;
      }
      return;
    case 0x1BE:
      sub_971800(a1[1], "_K");
      return;
    case 0x1BF:
      sub_971800(a1[1], "_M");
      return;
    case 0x1C1:
      v77 = a1[1];
      v78 = *(_BYTE **)(v77 + 32);
      if ( (unsigned __int64)v78 >= *(_QWORD *)(v77 + 24) )
      {
        sub_2257CD0(v77, 67);
      }
      else
      {
        *(_QWORD *)(v77 + 32) = v78 + 1;
        *v78 = 67;
      }
      return;
    case 0x1C3:
      v75 = a1[1];
      v76 = *(_BYTE **)(v75 + 32);
      if ( (unsigned __int64)v76 >= *(_QWORD *)(v75 + 24) )
      {
        sub_2257CD0(v75, 70);
      }
      else
      {
        *(_QWORD *)(v75 + 32) = v76 + 1;
        *v76 = 70;
      }
      return;
    case 0x1C4:
      v73 = a1[1];
      v74 = *(_BYTE **)(v73 + 32);
      if ( (unsigned __int64)v74 >= *(_QWORD *)(v73 + 24) )
      {
        sub_2257CD0(v73, 72);
      }
      else
      {
        *(_QWORD *)(v73 + 32) = v74 + 1;
        *v74 = 72;
      }
      return;
    case 0x1C5:
      v71 = a1[1];
      v72 = *(_BYTE **)(v71 + 32);
      if ( (unsigned __int64)v72 >= *(_QWORD *)(v71 + 24) )
      {
        sub_2257CD0(v71, 74);
      }
      else
      {
        *(_QWORD *)(v71 + 32) = v72 + 1;
        *v72 = 74;
      }
      return;
    case 0x1C6:
      sub_971800(a1[1], "_J");
      return;
    case 0x1C7:
      sub_971800(a1[1], "_L");
      return;
    case 0x1E0:
      v81 = *(_QWORD *)(*(_QWORD *)(*a1 + 8) + 2320LL);
      if ( (*(_BYTE *)(v81 + 89) & 1) != 0 )
      {
        v82 = a1[1];
        if ( (*(_BYTE *)(v81 + 60) & 4) != 0 )
          sub_971800(v82, "$f16@");
        else
          sub_971800(v82, "$halff@");
      }
      else
      {
        v161 = &byte_7;
        v160 = "__clang";
        v136 = j__strlen("_Half");
        sub_E58C30((__int64)a1, "_Half", v136, (__int64)&v160, 1);
      }
      return;
    case 0x1E1:
      v18 = a1[1];
      v19 = *(_BYTE **)(v18 + 32);
      if ( (unsigned __int64)v19 >= *(_QWORD *)(v18 + 24) )
      {
        sub_2257CD0(v18, 77);
      }
      else
      {
        *(_QWORD *)(v18 + 32) = v19 + 1;
        *v19 = 77;
      }
      return;
    case 0x1E2:
      v16 = a1[1];
      v17 = *(_BYTE **)(v16 + 32);
      if ( (unsigned __int64)v17 >= *(_QWORD *)(v16 + 24) )
      {
        sub_2257CD0(v16, 78);
      }
      else
      {
        *(_QWORD *)(v16 + 32) = v17 + 1;
        *v17 = 78;
      }
      return;
    case 0x1E3:
      v14 = a1[1];
      v15 = *(_BYTE **)(v14 + 32);
      if ( (unsigned __int64)v15 >= *(_QWORD *)(v14 + 24) )
      {
        sub_2257CD0(v14, 79);
      }
      else
      {
        *(_QWORD *)(v14 + 32) = v15 + 1;
        *v15 = 79;
      }
      return;
    case 0x1E4:
      v161 = &byte_7;
      v160 = "__clang";
      v13 = j__strlen("_Float16");
      sub_E58C30((__int64)a1, "_Float16", v13, (__int64)&v160, 1);
      return;
    case 0x1E5:
      v161 = &byte_7;
      v160 = "__clang";
      v12 = j__strlen("__bf16");
      sub_E58C30((__int64)a1, "__bf16", v12, (__int64)&v160, 1);
      return;
    case 0x1E8:
      sub_971800(a1[1], "$$T");
      return;
    case 0x1E9:
      v11 = j__strlen("objc_object");
      sub_E58C30((__int64)a1, "objc_object", v11, 0, 0);
      return;
    case 0x1EA:
      v10 = j__strlen("objc_class");
      sub_E58C30((__int64)a1, "objc_class", v10, 0, 0);
      return;
    case 0x1EB:
      v9 = j__strlen("objc_selector");
      sub_E58C30((__int64)a1, "objc_selector", v9, 0, 0);
      return;
    case 0x1EC:
      sub_971800(a1[1], "PA");
      v8 = j__strlen("ocl_sampler");
      sub_E58C30((__int64)a1, "ocl_sampler", v8, 0, 0);
      return;
    case 0x1ED:
      sub_971800(a1[1], "PA");
      v7 = j__strlen("ocl_event");
      sub_E58C30((__int64)a1, "ocl_event", v7, 0, 0);
      return;
    case 0x1EE:
      sub_971800(a1[1], "PA");
      v6 = j__strlen("ocl_clkevent");
      sub_E58C30((__int64)a1, "ocl_clkevent", v6, 0, 0);
      return;
    case 0x1EF:
      sub_971800(a1[1], "PA");
      v5 = j__strlen("ocl_queue");
      sub_E58C30((__int64)a1, "ocl_queue", v5, 0, 0);
      return;
    case 0x1F0:
      sub_971800(a1[1], "PA");
      v4 = j__strlen("ocl_reserveid");
      sub_E58C30((__int64)a1, "ocl_reserveid", v4, 0, 0);
      return;
    default:
      v114 = sub_F350B0(a2, *(_QWORD *)(*a1 + 8) + 17464LL);
      v155 = v115;
      v154 = (_BYTE *)v114;
      v153 = j__strlen("built-in type: ");
      v116 = *(_QWORD *)(*a1 + 16);
      v117 = *(_QWORD *)(v116 + 32);
      src = v159;
      sub_E54F70(&src, "cannot mangle this %0 %1 yet", (__int64)"");
      HIDWORD(v160) = 0;
      HIBYTE(v118) = BYTE1(v160) & 0xFE;
      LOBYTE(v118) = -20;
      LOWORD(v160) = v118;
      v161 = v163;
      if ( src == v159 )
      {
        v163[0] = _mm_load_si128(v159);
      }
      else
      {
        v161 = src;
        *(_QWORD *)&v163[0] = v159[0].m128i_i64[0];
      }
      v162 = n;
      v119 = sub_FB1C40(v117, &v160);
      if ( v161 != v163 )
        operator delete(v161);
      sub_FA3370(&v160, v116, (unsigned int)a3, v119);
      v120 = v160;
      if ( !v160 )
      {
        v139 = v161;
        v140 = *((_DWORD *)v161 + 3744);
        if ( v140 )
        {
          v143 = (unsigned int)(v140 - 1);
          *((_DWORD *)v161 + 3744) = v143;
          v120 = (char *)v139[v143 + 1856];
          v144 = *((unsigned int *)v120 + 134);
          *v120 = 0;
          v145 = *((_QWORD *)v120 + 66);
          *((_DWORD *)v120 + 106) = 0;
          v146 = v145 + (v144 << 6);
          while ( v145 != v146 )
          {
            while ( 1 )
            {
              v146 -= 64;
              v147 = *(void **)(v146 + 24);
              if ( v147 == (void *)(v146 + 40) )
                break;
              v156 = v145;
              operator delete(v147);
              v145 = v156;
              if ( v156 == v146 )
                goto LABEL_216;
            }
          }
LABEL_216:
          *((_DWORD *)v120 + 134) = 0;
        }
        else
        {
          v120 = (char *)operator new(0x3A0u);
          *v120 = 0;
          *((_QWORD *)v120 + 12) = v120 + 112;
          *((_QWORD *)v120 + 16) = v120 + 144;
          *((_QWORD *)v120 + 20) = v120 + 176;
          *((_QWORD *)v120 + 24) = v120 + 208;
          *((_QWORD *)v120 + 28) = v120 + 240;
          *((_QWORD *)v120 + 32) = v120 + 272;
          *((_QWORD *)v120 + 36) = v120 + 304;
          *((_QWORD *)v120 + 40) = v120 + 336;
          *((_QWORD *)v120 + 44) = v120 + 368;
          *((_QWORD *)v120 + 48) = v120 + 400;
          *((_QWORD *)v120 + 52) = v120 + 432;
          v120[112] = 0;
          *((_QWORD *)v120 + 13) = 0;
          *((_QWORD *)v120 + 17) = 0;
          v120[144] = 0;
          *((_QWORD *)v120 + 21) = 0;
          v120[176] = 0;
          *((_QWORD *)v120 + 25) = 0;
          v120[208] = 0;
          *((_QWORD *)v120 + 29) = 0;
          v120[240] = 0;
          *((_QWORD *)v120 + 33) = 0;
          v120[272] = 0;
          *((_QWORD *)v120 + 37) = 0;
          v120[304] = 0;
          *((_QWORD *)v120 + 41) = 0;
          v120[336] = 0;
          *((_QWORD *)v120 + 45) = 0;
          v120[368] = 0;
          *((_QWORD *)v120 + 49) = 0;
          v120[400] = 0;
          *((_QWORD *)v120 + 53) = 0x800000000LL;
          *((_QWORD *)v120 + 66) = v120 + 544;
          *((_QWORD *)v120 + 67) = 0x600000000LL;
        }
        v160 = v120;
      }
      v120[(unsigned __int8)*v120 + 1] = 0;
      src = v159;
      sub_E54F70(&src, "built-in type: ", (__int64)&aBuiltInType[v153]);
      v121 = v160;
      v122 = (unsigned __int8)*v160;
      *v160 = v122 + 1;
      v123 = (unsigned __int8)v122;
      v124 = 32 * (v122 + 3);
      v125 = (void **)&v121[v124];
      v126 = *(__m128i **)&v121[v124];
      if ( src == v159 )
      {
        v138 = n;
        if ( n )
        {
          if ( n == 1 )
            v126->m128i_i8[0] = v159[0].m128i_i8[0];
          else
            memcpy(v126, src, n);
          v138 = n;
          v126 = (__m128i *)*v125;
        }
        v125[1] = (void *)v138;
        v126->m128i_i8[v138] = 0;
        v126 = (__m128i *)src;
      }
      else
      {
        if ( v126 == (__m128i *)&v121[v124 + 16] )
        {
          *v125 = src;
          v125[1] = (void *)n;
          v125[2] = (void *)v159[0].m128i_i64[0];
        }
        else
        {
          v127 = *(_QWORD *)&v121[32 * v123 + 112];
          *v125 = src;
          v125[1] = (void *)n;
          v125[2] = (void *)v159[0].m128i_i64[0];
          if ( v126 )
          {
            src = v126;
            v159[0].m128i_i64[0] = v127;
            goto LABEL_167;
          }
        }
        v126 = v159;
        src = v159;
      }
LABEL_167:
      n = 0;
      v126->m128i_i8[0] = 0;
      if ( src != v159 )
        operator delete(src);
      v128 = v160;
      if ( !v160 )
      {
        v141 = v161;
        v142 = *((_DWORD *)v161 + 3744);
        if ( v142 )
        {
          v148 = (unsigned int)(v142 - 1);
          *((_DWORD *)v161 + 3744) = v148;
          v128 = (char *)v141[v148 + 1856];
          v149 = *((unsigned int *)v128 + 134);
          v150 = *((_QWORD *)v128 + 66);
          *v128 = 0;
          *((_DWORD *)v128 + 106) = 0;
          v151 = v150 + (v149 << 6);
          while ( v150 != v151 )
          {
            while ( 1 )
            {
              v151 -= 64;
              v152 = *(void **)(v151 + 24);
              if ( v152 == (void *)(v151 + 40) )
                break;
              operator delete(v152);
              if ( v150 == v151 )
                goto LABEL_221;
            }
          }
LABEL_221:
          *((_DWORD *)v128 + 134) = 0;
        }
        else
        {
          v128 = (char *)operator new(0x3A0u);
          *v128 = 0;
          *((_QWORD *)v128 + 12) = v128 + 112;
          *((_QWORD *)v128 + 16) = v128 + 144;
          *((_QWORD *)v128 + 20) = v128 + 176;
          *((_QWORD *)v128 + 24) = v128 + 208;
          *((_QWORD *)v128 + 28) = v128 + 240;
          *((_QWORD *)v128 + 32) = v128 + 272;
          *((_QWORD *)v128 + 36) = v128 + 304;
          *((_QWORD *)v128 + 40) = v128 + 336;
          *((_QWORD *)v128 + 44) = v128 + 368;
          *((_QWORD *)v128 + 48) = v128 + 400;
          *((_QWORD *)v128 + 52) = v128 + 432;
          *((_QWORD *)v128 + 13) = 0;
          v128[112] = 0;
          *((_QWORD *)v128 + 17) = 0;
          v128[144] = 0;
          *((_QWORD *)v128 + 21) = 0;
          v128[176] = 0;
          *((_QWORD *)v128 + 25) = 0;
          v128[208] = 0;
          *((_QWORD *)v128 + 29) = 0;
          v128[240] = 0;
          *((_QWORD *)v128 + 33) = 0;
          v128[272] = 0;
          *((_QWORD *)v128 + 37) = 0;
          v128[304] = 0;
          *((_QWORD *)v128 + 41) = 0;
          v128[336] = 0;
          *((_QWORD *)v128 + 45) = 0;
          v128[368] = 0;
          *((_QWORD *)v128 + 49) = 0;
          v128[400] = 0;
          *((_QWORD *)v128 + 53) = 0x800000000LL;
          *((_QWORD *)v128 + 66) = v128 + 544;
          *((_QWORD *)v128 + 67) = 0x600000000LL;
        }
        v160 = v128;
      }
      v128[(unsigned __int8)*v128 + 1] = 0;
      src = v159;
      sub_E54F70(&src, v154, (__int64)&v154[v155]);
      v129 = v160;
      v130 = (unsigned __int8)*v160;
      *v160 = v130 + 1;
      v131 = (unsigned __int8)v130;
      v132 = 32 * (v130 + 3);
      v133 = (void **)&v129[v132];
      v134 = *(__m128i **)&v129[v132];
      if ( src == v159 )
      {
        v137 = n;
        if ( n )
        {
          if ( n == 1 )
            v134->m128i_i8[0] = v159[0].m128i_i8[0];
          else
            memcpy(v134, src, n);
          v137 = n;
          v134 = (__m128i *)*v133;
        }
        v133[1] = (void *)v137;
        v134->m128i_i8[v137] = 0;
        v134 = (__m128i *)src;
      }
      else
      {
        if ( v134 == (__m128i *)&v129[v132 + 16] )
        {
          *v133 = src;
          v133[1] = (void *)n;
          v133[2] = (void *)v159[0].m128i_i64[0];
        }
        else
        {
          v135 = *(_QWORD *)&v129[32 * v131 + 112];
          *v133 = src;
          v133[1] = (void *)n;
          v133[2] = (void *)v159[0].m128i_i64[0];
          if ( v134 )
          {
            src = v134;
            v159[0].m128i_i64[0] = v135;
            goto LABEL_174;
          }
        }
        v134 = v159;
        src = v159;
      }
LABEL_174:
      n = 0;
      v134->m128i_i8[0] = 0;
      if ( src != v159 )
        operator delete(src);
      sub_FA33B0(&src, &v160);
      sub_AC6300((__int64)&v160);
      v160 = a3;
      LOBYTE(v161) = 1;
      sub_AC88D0((__int64 *)&src, (__int64 *)&v160);
      sub_AC6300((__int64)&src);
      return;
  }
}

