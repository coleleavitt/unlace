_BYTE *__fastcall sub_137E120(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax
  size_t v5; // rax
  size_t v6; // rax
  size_t v7; // rax
  size_t v8; // rax
  size_t v9; // rax
  size_t v10; // rax
  size_t v11; // rax
  size_t v12; // rax
  size_t v13; // rax
  size_t v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18[4]; // [rsp+0h] [rbp-C8h] BYREF
  const char *v19; // [rsp+20h] [rbp-A8h] BYREF
  __int16 v20; // [rsp+40h] [rbp-88h]
  char *v21; // [rsp+50h] [rbp-78h] BYREF
  __int16 v22; // [rsp+70h] [rbp-58h]
  __int64 v23; // [rsp+80h] [rbp-48h]
  __int64 v24; // [rsp+88h] [rbp-40h]
  __int64 v25; // [rsp+90h] [rbp-38h]
  __int64 v26; // [rsp+98h] [rbp-30h]
  __int64 v27; // [rsp+A0h] [rbp-28h]

  v4 = *(_QWORD *)(a1 + 208);
  v18[0] = a1;
  v18[2] = a2;
  v18[3] = (__int64)a3;
  v18[1] = v4 + 304;
  sub_137DFB0(v18, (__int64)"cl_khr_byte_addressable_store", 29, 0x64u);
  sub_137DFB0(v18, (__int64)"cl_khr_global_int32_base_atomics", 32, 0x64u);
  sub_137DFB0(v18, (__int64)"cl_khr_global_int32_extended_atomics", 36, 0x64u);
  sub_137DFB0(v18, (__int64)"cl_khr_local_int32_base_atomics", 31, 0x64u);
  sub_137DFB0(v18, (__int64)"cl_khr_local_int32_extended_atomics", 35, 0x64u);
  sub_137DFB0(v18, (__int64)"cl_khr_fp64", 11, 0x64u);
  sub_137DFB0(v18, (__int64)"cl_khr_fp16", 11, 0x64u);
  sub_137DFB0(v18, (__int64)"cl_khr_int64_base_atomics", 25, 0x64u);
  sub_137DFB0(v18, (__int64)"cl_khr_int64_extended_atomics", 29, 0x64u);
  sub_137DFB0(v18, (__int64)"cl_khr_3d_image_writes", 22, 0x64u);
  sub_137DFB0(v18, (__int64)"cles_khr_int64", 14, 0x6Eu);
  sub_137DFB0(v18, (__int64)"cl_khr_depth_images", 19, 0x78u);
  sub_137DFB0(v18, (__int64)"cl_khr_gl_msaa_sharing", 22, 0x78u);
  sub_137DFB0(v18, (__int64)"cl_khr_mipmap_image", 19, 0xC8u);
  sub_137DFB0(v18, (__int64)"cl_khr_mipmap_image_writes", 26, 0xC8u);
  sub_137DFB0(v18, (__int64)"cl_khr_srgb_image_writes", 24, 0xC8u);
  sub_137DFB0(v18, (__int64)"cl_khr_subgroups", 16, 0xC8u);
  sub_137DFB0(v18, (__int64)"cl_clang_storage_class_specifiers", 33, 0x64u);
  sub_137DFB0(v18, (__int64)"__cl_clang_function_pointers", 28, 0x64u);
  sub_137DFB0(v18, (__int64)"__cl_clang_variadic_functions", 29, 0x64u);
  sub_137DFB0(v18, (__int64)"__cl_clang_non_portable_kernel_param_types", 42, 0x64u);
  sub_137DFB0(v18, (__int64)"__cl_clang_bitfields", 20, 0x64u);
  sub_137DFB0(v18, (__int64)"cl_amd_media_ops", 16, 0x64u);
  sub_137DFB0(v18, (__int64)"cl_amd_media_ops2", 17, 0x64u);
  sub_137DFB0(v18, (__int64)"cl_intel_subgroups", 18, 0x78u);
  sub_137DFB0(v18, (__int64)"cl_intel_subgroups_short", 24, 0x78u);
  sub_137DFB0(v18, (__int64)"cl_intel_device_side_avc_motion_estimation", 42, 0x78u);
  v5 = j__strlen("__opencl_c_pipes");
  sub_137DE40(v18, (__int64)"__opencl_c_pipes", v5);
  v6 = j__strlen("__opencl_c_generic_address_space");
  sub_137DE40(v18, (__int64)"__opencl_c_generic_address_space", v6);
  v7 = j__strlen("__opencl_c_atomic_order_acq_rel");
  sub_137DE40(v18, (__int64)"__opencl_c_atomic_order_acq_rel", v7);
  v8 = j__strlen("__opencl_c_atomic_order_seq_cst");
  sub_137DE40(v18, (__int64)"__opencl_c_atomic_order_seq_cst", v8);
  v9 = j__strlen("__opencl_c_subgroups");
  sub_137DE40(v18, (__int64)"__opencl_c_subgroups", v9);
  v10 = j__strlen("__opencl_c_3d_image_writes");
  sub_137DE40(v18, (__int64)"__opencl_c_3d_image_writes", v10);
  v11 = j__strlen("__opencl_c_device_enqueue");
  sub_137DE40(v18, (__int64)"__opencl_c_device_enqueue", v11);
  sub_137DE40(v18, (__int64)"__opencl_c_read_write_images", 28);
  v12 = j__strlen("__opencl_c_program_scope_global_variables");
  sub_137DE40(v18, (__int64)"__opencl_c_program_scope_global_variables", v12);
  v13 = j__strlen("__opencl_c_fp64");
  sub_137DE40(v18, (__int64)"__opencl_c_fp64", v13);
  v14 = j__strlen("__opencl_c_images");
  sub_137DE40(v18, (__int64)"__opencl_c_images", v14);
  v22 = 259;
  LOWORD(v27) = 257;
  v21 = "1";
  v19 = "__opencl_c_int64";
  v20 = 259;
  return sub_1039E30(a3, (__int64)&v19, (__int64)&v21, 259, v15, v16, v23, v24, v25, v26, 1u);
}
