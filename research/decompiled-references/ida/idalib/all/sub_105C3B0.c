_BOOL8 __fastcall sub_105C3B0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  size_t v6; // rax
  size_t v7; // rax
  size_t v8; // rax
  size_t v9; // rax
  size_t v10; // rax
  size_t v11; // rax
  size_t v12; // rax
  __int64 v13; // r15
  signed __int64 v14; // r14
  size_t v15; // rax
  size_t v16; // rax
  size_t v17; // rax
  size_t v18; // rax
  size_t v19; // rax
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
  unsigned int v36; // eax
  _BOOL4 v37; // edx
  __int64 v39; // r15
  __int64 (__fastcall *v40)(__int64, __int64, __int64, __int64); // rax
  unsigned int v41; // eax
  int v42; // eax
  __int64 *v43; // rsi
  char v44; // al
  __int64 v45; // rdx
  __int64 *v46; // [rsp+8h] [rbp-E0h]
  _QWORD v47[2]; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v48; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+28h] [rbp-C0h]
  _QWORD *v50; // [rsp+30h] [rbp-B8h]
  __int64 v51; // [rsp+38h] [rbp-B0h]
  void *v52[2]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v53; // [rsp+50h] [rbp-98h] BYREF
  __int64 *v54[17]; // [rsp+60h] [rbp-88h] BYREF

  v5 = a1[26];
  v50 = a1;
  v48 = a2;
  v51 = a3;
  v49 = v5 + 304;
  v6 = j__strlen("cl_khr_byte_addressable_store");
  sub_105BFB0(&v48, "cl_khr_byte_addressable_store", v6);
  v7 = j__strlen("cl_khr_global_int32_base_atomics");
  sub_105BFB0(&v48, "cl_khr_global_int32_base_atomics", v7);
  v8 = j__strlen("cl_khr_global_int32_extended_atomics");
  sub_105BFB0(&v48, "cl_khr_global_int32_extended_atomics", v8);
  v9 = j__strlen("cl_khr_local_int32_base_atomics");
  sub_105BFB0(&v48, "cl_khr_local_int32_base_atomics", v9);
  v10 = j__strlen("cl_khr_local_int32_extended_atomics");
  sub_105BFB0(&v48, "cl_khr_local_int32_extended_atomics", v10);
  v11 = j__strlen("cl_khr_fp64");
  sub_105BF50(&v48, (__int64)"cl_khr_fp64", v11, 1, 0x64u);
  j__strlen("cl_khr_fp16");
  sub_105BEA0(&v48);
  j__strlen("cl_khr_int64_base_atomics");
  sub_105BEA0(&v48);
  j__strlen("cl_khr_int64_extended_atomics");
  sub_105BEA0(&v48);
  v12 = j__strlen("cl_khr_3d_image_writes");
  v13 = v48;
  v14 = v12;
  if ( (unsigned int)sub_FEAA90(v48) <= 0x63 || (unsigned int)sub_FEAA90(v13) != 200 )
    goto LABEL_2;
  v39 = v49;
  v40 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*v50 + 528LL);
  if ( v40 != sub_FF8820 )
  {
    v44 = v40((__int64)v50, v49, (__int64)"cl_khr_3d_image_writes", v14);
LABEL_12:
    if ( v44 )
      goto LABEL_2;
    goto LABEL_13;
  }
  v41 = sub_2244B30("cl_khr_3d_image_writes", v14);
  v42 = sub_2244E60(v39, "cl_khr_3d_image_writes", v14, v41);
  if ( v42 == -1 )
    v43 = (__int64 *)(*(_QWORD *)v39 + 8LL * *(unsigned int *)(v39 + 8));
  else
    v43 = (__int64 *)(*(_QWORD *)v39 + 8LL * v42);
  sub_EC0F90(v54, v43, 1);
  v46 = v54[0];
  sub_EC0F90(v54, (__int64 *)(*(_QWORD *)v39 + 8LL * *(unsigned int *)(v39 + 8)), 1);
  if ( v46 != v54[0] )
  {
    v44 = *(_BYTE *)(*v46 + 8);
    goto LABEL_12;
  }
LABEL_13:
  sub_FC70B0((__int64)v54, v51, 0, 148);
  sub_AEC220((unsigned __int8 **)v54, "cl_khr_3d_image_writes", v14);
  sub_AE9DF0((unsigned __int8 **)v54, *(_BYTE *)(v48 + 52) & 1, 3u);
  v47[0] = sub_FEA9E0(v48);
  v47[1] = v45;
  sub_2257830(v52, v47);
  sub_AEC220((unsigned __int8 **)v54, (_BYTE *)v52[0], (signed __int64)v52[1]);
  if ( v52[0] != &v53 )
    operator delete(v52[0]);
  sub_AEA040((__int64)v54);
LABEL_2:
  v15 = j__strlen("cles_khr_int64");
  sub_105BEF0(&v48, (__int64)"cles_khr_int64", v15, 0x6Eu);
  v16 = j__strlen("cl_khr_depth_images");
  sub_105BEF0(&v48, (__int64)"cl_khr_depth_images", v16, 0x78u);
  v17 = j__strlen("cl_khr_gl_msaa_sharing");
  sub_105BEF0(&v48, (__int64)"cl_khr_gl_msaa_sharing", v17, 0x78u);
  v18 = j__strlen("cl_khr_mipmap_image");
  sub_105BEF0(&v48, (__int64)"cl_khr_mipmap_image", v18, 0xC8u);
  v19 = j__strlen("cl_khr_mipmap_image_writes");
  sub_105BEF0(&v48, (__int64)"cl_khr_mipmap_image_writes", v19, 0xC8u);
  v20 = j__strlen("cl_khr_srgb_image_writes");
  sub_105BEF0(&v48, (__int64)"cl_khr_srgb_image_writes", v20, 0xC8u);
  v21 = j__strlen("cl_khr_subgroups");
  sub_105BEF0(&v48, (__int64)"cl_khr_subgroups", v21, 0xC8u);
  j__strlen("cl_clang_storage_class_specifiers");
  sub_105BEA0(&v48);
  j__strlen("__cl_clang_function_pointers");
  sub_105BEA0(&v48);
  j__strlen("__cl_clang_variadic_functions");
  sub_105BEA0(&v48);
  j__strlen("__cl_clang_non_portable_kernel_param_types");
  sub_105BEA0(&v48);
  j__strlen("__cl_clang_bitfields");
  sub_105BEA0(&v48);
  j__strlen("cl_amd_media_ops");
  sub_105BEA0(&v48);
  j__strlen("cl_amd_media_ops2");
  sub_105BEA0(&v48);
  v22 = j__strlen("cl_intel_subgroups");
  sub_105BEF0(&v48, (__int64)"cl_intel_subgroups", v22, 0x78u);
  v23 = j__strlen("cl_intel_subgroups_short");
  sub_105BEF0(&v48, (__int64)"cl_intel_subgroups_short", v23, 0x78u);
  v24 = j__strlen("cl_intel_device_side_avc_motion_estimation");
  sub_105BEF0(&v48, (__int64)"cl_intel_device_side_avc_motion_estimation", v24, 0x78u);
  v25 = j__strlen("__opencl_c_pipes");
  sub_105BF50(&v48, (__int64)"__opencl_c_pipes", v25, 0, 0x12Cu);
  v26 = j__strlen("__opencl_c_generic_address_space");
  sub_105BF50(&v48, (__int64)"__opencl_c_generic_address_space", v26, 0, 0x12Cu);
  v27 = j__strlen("__opencl_c_atomic_order_acq_rel");
  sub_105BF50(&v48, (__int64)"__opencl_c_atomic_order_acq_rel", v27, 0, 0x12Cu);
  v28 = j__strlen("__opencl_c_atomic_order_seq_cst");
  sub_105BF50(&v48, (__int64)"__opencl_c_atomic_order_seq_cst", v28, 0, 0x12Cu);
  v29 = j__strlen("__opencl_c_subgroups");
  sub_105BF50(&v48, (__int64)"__opencl_c_subgroups", v29, 0, 0x12Cu);
  v30 = j__strlen("__opencl_c_3d_image_writes");
  sub_105BF50(&v48, (__int64)"__opencl_c_3d_image_writes", v30, 0, 0x12Cu);
  v31 = j__strlen("__opencl_c_device_enqueue");
  sub_105BF50(&v48, (__int64)"__opencl_c_device_enqueue", v31, 0, 0x12Cu);
  v32 = j__strlen("__opencl_c_read_write_images");
  sub_105BF50(&v48, (__int64)"__opencl_c_read_write_images", v32, 0, 0x12Cu);
  v33 = j__strlen("__opencl_c_program_scope_global_variables");
  sub_105BF50(&v48, (__int64)"__opencl_c_program_scope_global_variables", v33, 0, 0x12Cu);
  v34 = j__strlen("__opencl_c_fp64");
  sub_105BF50(&v48, (__int64)"__opencl_c_fp64", v34, 0, 0x12Cu);
  v35 = j__strlen("__opencl_c_images");
  sub_105BF50(&v48, (__int64)"__opencl_c_images", v35, 0, 0x12Cu);
  v36 = sub_FEAA90(a2);
  v37 = 1;
  if ( v36 > 0x12B )
  {
    v37 = sub_FF88C0((__int64)a1, a3);
    if ( v37 )
      return sub_FF96F0(a1, a3);
  }
  return v37;
}
