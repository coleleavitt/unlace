const char *__fastcall sub_F58DF0(__int64 a1, char *a2)
{
  const char *v2; // rbx

  switch ( (*(_WORD *)(a1 + 18) >> 3) & 0x1FF )
  {
    case 0:
      v2 = "__read_only image1d_t";
      j__strlen("__read_only image1d_t");
      return v2;
    case 1:
      v2 = "__read_only image1d_array_t";
      j__strlen("__read_only image1d_array_t");
      return v2;
    case 2:
      v2 = "__read_only image1d_buffer_t";
      j__strlen("__read_only image1d_buffer_t");
      return v2;
    case 3:
      v2 = "__read_only image2d_t";
      j__strlen("__read_only image2d_t");
      return v2;
    case 4:
      v2 = "__read_only image2d_array_t";
      j__strlen("__read_only image2d_array_t");
      return v2;
    case 5:
      v2 = "__read_only image2d_depth_t";
      j__strlen("__read_only image2d_depth_t");
      return v2;
    case 6:
      v2 = "__read_only image2d_array_depth_t";
      j__strlen("__read_only image2d_array_depth_t");
      return v2;
    case 7:
      v2 = "__read_only image2d_msaa_t";
      j__strlen("__read_only image2d_msaa_t");
      return v2;
    case 8:
      v2 = "__read_only image2d_array_msaa_t";
      j__strlen("__read_only image2d_array_msaa_t");
      return v2;
    case 9:
      v2 = "__read_only image2d_msaa_depth_t";
      j__strlen("__read_only image2d_msaa_depth_t");
      return v2;
    case 0xA:
      v2 = "__read_only image2d_array_msaa_depth_t";
      j__strlen("__read_only image2d_array_msaa_depth_t");
      return v2;
    case 0xB:
      v2 = "__read_only image3d_t";
      j__strlen("__read_only image3d_t");
      return v2;
    case 0xC:
      v2 = "__write_only image1d_t";
      j__strlen("__write_only image1d_t");
      return v2;
    case 0xD:
      v2 = "__write_only image1d_array_t";
      j__strlen("__write_only image1d_array_t");
      return v2;
    case 0xE:
      v2 = "__write_only image1d_buffer_t";
      j__strlen("__write_only image1d_buffer_t");
      return v2;
    case 0xF:
      v2 = "__write_only image2d_t";
      j__strlen("__write_only image2d_t");
      return v2;
    case 0x10:
      v2 = "__write_only image2d_array_t";
      j__strlen("__write_only image2d_array_t");
      return v2;
    case 0x11:
      v2 = "__write_only image2d_depth_t";
      j__strlen("__write_only image2d_depth_t");
      return v2;
    case 0x12:
      v2 = "__write_only image2d_array_depth_t";
      j__strlen("__write_only image2d_array_depth_t");
      return v2;
    case 0x13:
      v2 = "__write_only image2d_msaa_t";
      j__strlen("__write_only image2d_msaa_t");
      return v2;
    case 0x14:
      v2 = "__write_only image2d_array_msaa_t";
      j__strlen("__write_only image2d_array_msaa_t");
      return v2;
    case 0x15:
      v2 = "__write_only image2d_msaa_depth_t";
      j__strlen("__write_only image2d_msaa_depth_t");
      return v2;
    case 0x16:
      v2 = "__write_only image2d_array_msaa_depth_t";
      j__strlen("__write_only image2d_array_msaa_depth_t");
      return v2;
    case 0x17:
      v2 = "__write_only image3d_t";
      j__strlen("__write_only image3d_t");
      return v2;
    case 0x18:
      v2 = "__read_write image1d_t";
      j__strlen("__read_write image1d_t");
      return v2;
    case 0x19:
      v2 = "__read_write image1d_array_t";
      j__strlen("__read_write image1d_array_t");
      return v2;
    case 0x1A:
      v2 = "__read_write image1d_buffer_t";
      j__strlen("__read_write image1d_buffer_t");
      return v2;
    case 0x1B:
      v2 = "__read_write image2d_t";
      j__strlen("__read_write image2d_t");
      return v2;
    case 0x1C:
      v2 = "__read_write image2d_array_t";
      j__strlen("__read_write image2d_array_t");
      return v2;
    case 0x1D:
      v2 = "__read_write image2d_depth_t";
      j__strlen("__read_write image2d_depth_t");
      return v2;
    case 0x1E:
      v2 = "__read_write image2d_array_depth_t";
      j__strlen("__read_write image2d_array_depth_t");
      return v2;
    case 0x1F:
      v2 = "__read_write image2d_msaa_t";
      j__strlen("__read_write image2d_msaa_t");
      return v2;
    case 0x20:
      v2 = "__read_write image2d_array_msaa_t";
      j__strlen("__read_write image2d_array_msaa_t");
      return v2;
    case 0x21:
      v2 = "__read_write image2d_msaa_depth_t";
      j__strlen("__read_write image2d_msaa_depth_t");
      return v2;
    case 0x22:
      v2 = "__read_write image2d_array_msaa_depth_t";
      j__strlen("__read_write image2d_array_msaa_depth_t");
      return v2;
    case 0x23:
      v2 = "__read_write image3d_t";
      j__strlen("__read_write image3d_t");
      return v2;
    case 0x24:
      v2 = "intel_sub_group_avc_mce_payload_t";
      j__strlen("intel_sub_group_avc_mce_payload_t");
      return v2;
    case 0x25:
      v2 = "intel_sub_group_avc_ime_payload_t";
      j__strlen("intel_sub_group_avc_ime_payload_t");
      return v2;
    case 0x26:
      v2 = "intel_sub_group_avc_ref_payload_t";
      j__strlen("intel_sub_group_avc_ref_payload_t");
      return v2;
    case 0x27:
      v2 = "intel_sub_group_avc_sic_payload_t";
      j__strlen("intel_sub_group_avc_sic_payload_t");
      return v2;
    case 0x28:
      v2 = "intel_sub_group_avc_mce_result_t";
      j__strlen("intel_sub_group_avc_mce_result_t");
      return v2;
    case 0x29:
      v2 = "intel_sub_group_avc_ime_result_t";
      j__strlen("intel_sub_group_avc_ime_result_t");
      return v2;
    case 0x2A:
      v2 = "intel_sub_group_avc_ref_result_t";
      j__strlen("intel_sub_group_avc_ref_result_t");
      return v2;
    case 0x2B:
      v2 = "intel_sub_group_avc_sic_result_t";
      j__strlen("intel_sub_group_avc_sic_result_t");
      return v2;
    case 0x2C:
      v2 = "intel_sub_group_avc_ime_result_single_reference_streamout_t";
      j__strlen("intel_sub_group_avc_ime_result_single_reference_streamout_t");
      return v2;
    case 0x2D:
      v2 = "intel_sub_group_avc_ime_result_dual_reference_streamout_t";
      j__strlen("intel_sub_group_avc_ime_result_dual_reference_streamout_t");
      return v2;
    case 0x2E:
      v2 = "intel_sub_group_avc_ime_single_reference_streamin_t";
      j__strlen("intel_sub_group_avc_ime_single_reference_streamin_t");
      return v2;
    case 0x2F:
      v2 = "intel_sub_group_avc_ime_dual_reference_streamin_t";
      j__strlen("intel_sub_group_avc_ime_dual_reference_streamin_t");
      return v2;
    case 0x30:
      v2 = "__SVInt8_t";
      j__strlen("__SVInt8_t");
      return v2;
    case 0x31:
      v2 = "__SVInt16_t";
      j__strlen("__SVInt16_t");
      return v2;
    case 0x32:
      v2 = "__SVInt32_t";
      j__strlen("__SVInt32_t");
      return v2;
    case 0x33:
      v2 = "__SVInt64_t";
      j__strlen("__SVInt64_t");
      return v2;
    case 0x34:
      v2 = "__SVUint8_t";
      j__strlen("__SVUint8_t");
      return v2;
    case 0x35:
      v2 = "__SVUint16_t";
      j__strlen("__SVUint16_t");
      return v2;
    case 0x36:
      v2 = "__SVUint32_t";
      j__strlen("__SVUint32_t");
      return v2;
    case 0x37:
      v2 = "__SVUint64_t";
      j__strlen("__SVUint64_t");
      return v2;
    case 0x38:
      v2 = "__SVFloat16_t";
      j__strlen("__SVFloat16_t");
      return v2;
    case 0x39:
      v2 = "__SVFloat32_t";
      j__strlen("__SVFloat32_t");
      return v2;
    case 0x3A:
      v2 = "__SVFloat64_t";
      j__strlen("__SVFloat64_t");
      return v2;
    case 0x3B:
      v2 = "__SVBfloat16_t";
      j__strlen("__SVBfloat16_t");
      return v2;
    case 0x3C:
      v2 = "__SVMfloat8_t";
      j__strlen("__SVMfloat8_t");
      return v2;
    case 0x3D:
      v2 = "__clang_svint8x2_t";
      j__strlen("__clang_svint8x2_t");
      return v2;
    case 0x3E:
      v2 = "__clang_svint16x2_t";
      j__strlen("__clang_svint16x2_t");
      return v2;
    case 0x3F:
      v2 = "__clang_svint32x2_t";
      j__strlen("__clang_svint32x2_t");
      return v2;
    case 0x40:
      v2 = "__clang_svint64x2_t";
      j__strlen("__clang_svint64x2_t");
      return v2;
    case 0x41:
      v2 = "__clang_svuint8x2_t";
      j__strlen("__clang_svuint8x2_t");
      return v2;
    case 0x42:
      v2 = "__clang_svuint16x2_t";
      j__strlen("__clang_svuint16x2_t");
      return v2;
    case 0x43:
      v2 = "__clang_svuint32x2_t";
      j__strlen("__clang_svuint32x2_t");
      return v2;
    case 0x44:
      v2 = "__clang_svuint64x2_t";
      j__strlen("__clang_svuint64x2_t");
      return v2;
    case 0x45:
      v2 = "__clang_svfloat16x2_t";
      j__strlen("__clang_svfloat16x2_t");
      return v2;
    case 0x46:
      v2 = "__clang_svfloat32x2_t";
      j__strlen("__clang_svfloat32x2_t");
      return v2;
    case 0x47:
      v2 = "__clang_svfloat64x2_t";
      j__strlen("__clang_svfloat64x2_t");
      return v2;
    case 0x48:
      v2 = "__clang_svbfloat16x2_t";
      j__strlen("__clang_svbfloat16x2_t");
      return v2;
    case 0x49:
      v2 = "__clang_svmfloat8x2_t";
      j__strlen("__clang_svmfloat8x2_t");
      return v2;
    case 0x4A:
      v2 = "__clang_svint8x3_t";
      j__strlen("__clang_svint8x3_t");
      return v2;
    case 0x4B:
      v2 = "__clang_svint16x3_t";
      j__strlen("__clang_svint16x3_t");
      return v2;
    case 0x4C:
      v2 = "__clang_svint32x3_t";
      j__strlen("__clang_svint32x3_t");
      return v2;
    case 0x4D:
      v2 = "__clang_svint64x3_t";
      j__strlen("__clang_svint64x3_t");
      return v2;
    case 0x4E:
      v2 = "__clang_svuint8x3_t";
      j__strlen("__clang_svuint8x3_t");
      return v2;
    case 0x4F:
      v2 = "__clang_svuint16x3_t";
      j__strlen("__clang_svuint16x3_t");
      return v2;
    case 0x50:
      v2 = "__clang_svuint32x3_t";
      j__strlen("__clang_svuint32x3_t");
      return v2;
    case 0x51:
      v2 = "__clang_svuint64x3_t";
      j__strlen("__clang_svuint64x3_t");
      return v2;
    case 0x52:
      v2 = "__clang_svfloat16x3_t";
      j__strlen("__clang_svfloat16x3_t");
      return v2;
    case 0x53:
      v2 = "__clang_svfloat32x3_t";
      j__strlen("__clang_svfloat32x3_t");
      return v2;
    case 0x54:
      v2 = "__clang_svfloat64x3_t";
      j__strlen("__clang_svfloat64x3_t");
      return v2;
    case 0x55:
      v2 = "__clang_svbfloat16x3_t";
      j__strlen("__clang_svbfloat16x3_t");
      return v2;
    case 0x56:
      v2 = "__clang_svmfloat8x3_t";
      j__strlen("__clang_svmfloat8x3_t");
      return v2;
    case 0x57:
      v2 = "__clang_svint8x4_t";
      j__strlen("__clang_svint8x4_t");
      return v2;
    case 0x58:
      v2 = "__clang_svint16x4_t";
      j__strlen("__clang_svint16x4_t");
      return v2;
    case 0x59:
      v2 = "__clang_svint32x4_t";
      j__strlen("__clang_svint32x4_t");
      return v2;
    case 0x5A:
      v2 = "__clang_svint64x4_t";
      j__strlen("__clang_svint64x4_t");
      return v2;
    case 0x5B:
      v2 = "__clang_svuint8x4_t";
      j__strlen("__clang_svuint8x4_t");
      return v2;
    case 0x5C:
      v2 = "__clang_svuint16x4_t";
      j__strlen("__clang_svuint16x4_t");
      return v2;
    case 0x5D:
      v2 = "__clang_svuint32x4_t";
      j__strlen("__clang_svuint32x4_t");
      return v2;
    case 0x5E:
      v2 = "__clang_svuint64x4_t";
      j__strlen("__clang_svuint64x4_t");
      return v2;
    case 0x5F:
      v2 = "__clang_svfloat16x4_t";
      j__strlen("__clang_svfloat16x4_t");
      return v2;
    case 0x60:
      v2 = "__clang_svfloat32x4_t";
      j__strlen("__clang_svfloat32x4_t");
      return v2;
    case 0x61:
      v2 = "__clang_svfloat64x4_t";
      j__strlen("__clang_svfloat64x4_t");
      return v2;
    case 0x62:
      v2 = "__clang_svbfloat16x4_t";
      j__strlen("__clang_svbfloat16x4_t");
      return v2;
    case 0x63:
      v2 = "__clang_svmfloat8x4_t";
      j__strlen("__clang_svmfloat8x4_t");
      return v2;
    case 0x64:
      v2 = "__SVBool_t";
      j__strlen("__SVBool_t");
      return v2;
    case 0x65:
      v2 = "__clang_svboolx2_t";
      j__strlen("__clang_svboolx2_t");
      return v2;
    case 0x66:
      v2 = "__clang_svboolx4_t";
      j__strlen("__clang_svboolx4_t");
      return v2;
    case 0x67:
      v2 = "__SVCount_t";
      j__strlen("__SVCount_t");
      return v2;
    case 0x68:
      v2 = "__mfp8";
      j__strlen("__mfp8");
      return v2;
    case 0x69:
      v2 = "__dmr1024";
      j__strlen("__dmr1024");
      return v2;
    case 0x6A:
      v2 = "__vector_quad";
      j__strlen("__vector_quad");
      return v2;
    case 0x6B:
      v2 = "__vector_pair";
      j__strlen("__vector_pair");
      return v2;
    case 0x6C:
      v2 = "__rvv_int8mf8_t";
      j__strlen("__rvv_int8mf8_t");
      return v2;
    case 0x6D:
      v2 = "__rvv_int8mf4_t";
      j__strlen("__rvv_int8mf4_t");
      return v2;
    case 0x6E:
      v2 = "__rvv_int8mf2_t";
      j__strlen("__rvv_int8mf2_t");
      return v2;
    case 0x6F:
      v2 = "__rvv_int8m1_t";
      j__strlen("__rvv_int8m1_t");
      return v2;
    case 0x70:
      v2 = "__rvv_int8m2_t";
      j__strlen("__rvv_int8m2_t");
      return v2;
    case 0x71:
      v2 = "__rvv_int8m4_t";
      j__strlen("__rvv_int8m4_t");
      return v2;
    case 0x72:
      v2 = "__rvv_int8m8_t";
      j__strlen("__rvv_int8m8_t");
      return v2;
    case 0x73:
      v2 = "__rvv_uint8mf8_t";
      j__strlen("__rvv_uint8mf8_t");
      return v2;
    case 0x74:
      v2 = "__rvv_uint8mf4_t";
      j__strlen("__rvv_uint8mf4_t");
      return v2;
    case 0x75:
      v2 = "__rvv_uint8mf2_t";
      j__strlen("__rvv_uint8mf2_t");
      return v2;
    case 0x76:
      v2 = "__rvv_uint8m1_t";
      j__strlen("__rvv_uint8m1_t");
      return v2;
    case 0x77:
      v2 = "__rvv_uint8m2_t";
      j__strlen("__rvv_uint8m2_t");
      return v2;
    case 0x78:
      v2 = "__rvv_uint8m4_t";
      j__strlen("__rvv_uint8m4_t");
      return v2;
    case 0x79:
      v2 = "__rvv_uint8m8_t";
      j__strlen("__rvv_uint8m8_t");
      return v2;
    case 0x7A:
      v2 = "__rvv_int16mf4_t";
      j__strlen("__rvv_int16mf4_t");
      return v2;
    case 0x7B:
      v2 = "__rvv_int16mf2_t";
      j__strlen("__rvv_int16mf2_t");
      return v2;
    case 0x7C:
      v2 = "__rvv_int16m1_t";
      j__strlen("__rvv_int16m1_t");
      return v2;
    case 0x7D:
      v2 = "__rvv_int16m2_t";
      j__strlen("__rvv_int16m2_t");
      return v2;
    case 0x7E:
      v2 = "__rvv_int16m4_t";
      j__strlen("__rvv_int16m4_t");
      return v2;
    case 0x7F:
      v2 = "__rvv_int16m8_t";
      j__strlen("__rvv_int16m8_t");
      return v2;
    case 0x80:
      v2 = "__rvv_uint16mf4_t";
      j__strlen("__rvv_uint16mf4_t");
      return v2;
    case 0x81:
      v2 = "__rvv_uint16mf2_t";
      j__strlen("__rvv_uint16mf2_t");
      return v2;
    case 0x82:
      v2 = "__rvv_uint16m1_t";
      j__strlen("__rvv_uint16m1_t");
      return v2;
    case 0x83:
      v2 = "__rvv_uint16m2_t";
      j__strlen("__rvv_uint16m2_t");
      return v2;
    case 0x84:
      v2 = "__rvv_uint16m4_t";
      j__strlen("__rvv_uint16m4_t");
      return v2;
    case 0x85:
      v2 = "__rvv_uint16m8_t";
      j__strlen("__rvv_uint16m8_t");
      return v2;
    case 0x86:
      v2 = "__rvv_int32mf2_t";
      j__strlen("__rvv_int32mf2_t");
      return v2;
    case 0x87:
      v2 = "__rvv_int32m1_t";
      j__strlen("__rvv_int32m1_t");
      return v2;
    case 0x88:
      v2 = "__rvv_int32m2_t";
      j__strlen("__rvv_int32m2_t");
      return v2;
    case 0x89:
      v2 = "__rvv_int32m4_t";
      j__strlen("__rvv_int32m4_t");
      return v2;
    case 0x8A:
      v2 = "__rvv_int32m8_t";
      j__strlen("__rvv_int32m8_t");
      return v2;
    case 0x8B:
      v2 = "__rvv_uint32mf2_t";
      j__strlen("__rvv_uint32mf2_t");
      return v2;
    case 0x8C:
      v2 = "__rvv_uint32m1_t";
      j__strlen("__rvv_uint32m1_t");
      return v2;
    case 0x8D:
      v2 = "__rvv_uint32m2_t";
      j__strlen("__rvv_uint32m2_t");
      return v2;
    case 0x8E:
      v2 = "__rvv_uint32m4_t";
      j__strlen("__rvv_uint32m4_t");
      return v2;
    case 0x8F:
      v2 = "__rvv_uint32m8_t";
      j__strlen("__rvv_uint32m8_t");
      return v2;
    case 0x90:
      v2 = "__rvv_int64m1_t";
      j__strlen("__rvv_int64m1_t");
      return v2;
    case 0x91:
      v2 = "__rvv_int64m2_t";
      j__strlen("__rvv_int64m2_t");
      return v2;
    case 0x92:
      v2 = "__rvv_int64m4_t";
      j__strlen("__rvv_int64m4_t");
      return v2;
    case 0x93:
      v2 = "__rvv_int64m8_t";
      j__strlen("__rvv_int64m8_t");
      return v2;
    case 0x94:
      v2 = "__rvv_uint64m1_t";
      j__strlen("__rvv_uint64m1_t");
      return v2;
    case 0x95:
      v2 = "__rvv_uint64m2_t";
      j__strlen("__rvv_uint64m2_t");
      return v2;
    case 0x96:
      v2 = "__rvv_uint64m4_t";
      j__strlen("__rvv_uint64m4_t");
      return v2;
    case 0x97:
      v2 = "__rvv_uint64m8_t";
      j__strlen("__rvv_uint64m8_t");
      return v2;
    case 0x98:
      v2 = "__rvv_float16mf4_t";
      j__strlen("__rvv_float16mf4_t");
      return v2;
    case 0x99:
      v2 = "__rvv_float16mf2_t";
      j__strlen("__rvv_float16mf2_t");
      return v2;
    case 0x9A:
      v2 = "__rvv_float16m1_t";
      j__strlen("__rvv_float16m1_t");
      return v2;
    case 0x9B:
      v2 = "__rvv_float16m2_t";
      j__strlen("__rvv_float16m2_t");
      return v2;
    case 0x9C:
      v2 = "__rvv_float16m4_t";
      j__strlen("__rvv_float16m4_t");
      return v2;
    case 0x9D:
      v2 = "__rvv_float16m8_t";
      j__strlen("__rvv_float16m8_t");
      return v2;
    case 0x9E:
      v2 = "__rvv_bfloat16mf4_t";
      j__strlen("__rvv_bfloat16mf4_t");
      return v2;
    case 0x9F:
      v2 = "__rvv_bfloat16mf2_t";
      j__strlen("__rvv_bfloat16mf2_t");
      return v2;
    case 0xA0:
      v2 = "__rvv_bfloat16m1_t";
      j__strlen("__rvv_bfloat16m1_t");
      return v2;
    case 0xA1:
      v2 = "__rvv_bfloat16m2_t";
      j__strlen("__rvv_bfloat16m2_t");
      return v2;
    case 0xA2:
      v2 = "__rvv_bfloat16m4_t";
      j__strlen("__rvv_bfloat16m4_t");
      return v2;
    case 0xA3:
      v2 = "__rvv_bfloat16m8_t";
      j__strlen("__rvv_bfloat16m8_t");
      return v2;
    case 0xA4:
      v2 = "__rvv_float32mf2_t";
      j__strlen("__rvv_float32mf2_t");
      return v2;
    case 0xA5:
      v2 = "__rvv_float32m1_t";
      j__strlen("__rvv_float32m1_t");
      return v2;
    case 0xA6:
      v2 = "__rvv_float32m2_t";
      j__strlen("__rvv_float32m2_t");
      return v2;
    case 0xA7:
      v2 = "__rvv_float32m4_t";
      j__strlen("__rvv_float32m4_t");
      return v2;
    case 0xA8:
      v2 = "__rvv_float32m8_t";
      j__strlen("__rvv_float32m8_t");
      return v2;
    case 0xA9:
      v2 = "__rvv_float64m1_t";
      j__strlen("__rvv_float64m1_t");
      return v2;
    case 0xAA:
      v2 = "__rvv_float64m2_t";
      j__strlen("__rvv_float64m2_t");
      return v2;
    case 0xAB:
      v2 = "__rvv_float64m4_t";
      j__strlen("__rvv_float64m4_t");
      return v2;
    case 0xAC:
      v2 = "__rvv_float64m8_t";
      j__strlen("__rvv_float64m8_t");
      return v2;
    case 0xAD:
      v2 = "__rvv_bool1_t";
      j__strlen("__rvv_bool1_t");
      return v2;
    case 0xAE:
      v2 = "__rvv_bool2_t";
      j__strlen("__rvv_bool2_t");
      return v2;
    case 0xAF:
      v2 = "__rvv_bool4_t";
      j__strlen("__rvv_bool4_t");
      return v2;
    case 0xB0:
      v2 = "__rvv_bool8_t";
      j__strlen("__rvv_bool8_t");
      return v2;
    case 0xB1:
      v2 = "__rvv_bool16_t";
      j__strlen("__rvv_bool16_t");
      return v2;
    case 0xB2:
      v2 = "__rvv_bool32_t";
      j__strlen("__rvv_bool32_t");
      return v2;
    case 0xB3:
      v2 = "__rvv_bool64_t";
      j__strlen("__rvv_bool64_t");
      return v2;
    case 0xB4:
      v2 = "__rvv_int8mf8x2_t";
      j__strlen("__rvv_int8mf8x2_t");
      return v2;
    case 0xB5:
      v2 = "__rvv_int8mf8x3_t";
      j__strlen("__rvv_int8mf8x3_t");
      return v2;
    case 0xB6:
      v2 = "__rvv_int8mf8x4_t";
      j__strlen("__rvv_int8mf8x4_t");
      return v2;
    case 0xB7:
      v2 = "__rvv_int8mf8x5_t";
      j__strlen("__rvv_int8mf8x5_t");
      return v2;
    case 0xB8:
      v2 = "__rvv_int8mf8x6_t";
      j__strlen("__rvv_int8mf8x6_t");
      return v2;
    case 0xB9:
      v2 = "__rvv_int8mf8x7_t";
      j__strlen("__rvv_int8mf8x7_t");
      return v2;
    case 0xBA:
      v2 = "__rvv_int8mf8x8_t";
      j__strlen("__rvv_int8mf8x8_t");
      return v2;
    case 0xBB:
      v2 = "__rvv_int8mf4x2_t";
      j__strlen("__rvv_int8mf4x2_t");
      return v2;
    case 0xBC:
      v2 = "__rvv_int8mf4x3_t";
      j__strlen("__rvv_int8mf4x3_t");
      return v2;
    case 0xBD:
      v2 = "__rvv_int8mf4x4_t";
      j__strlen("__rvv_int8mf4x4_t");
      return v2;
    case 0xBE:
      v2 = "__rvv_int8mf4x5_t";
      j__strlen("__rvv_int8mf4x5_t");
      return v2;
    case 0xBF:
      v2 = "__rvv_int8mf4x6_t";
      j__strlen("__rvv_int8mf4x6_t");
      return v2;
    case 0xC0:
      v2 = "__rvv_int8mf4x7_t";
      j__strlen("__rvv_int8mf4x7_t");
      return v2;
    case 0xC1:
      v2 = "__rvv_int8mf4x8_t";
      j__strlen("__rvv_int8mf4x8_t");
      return v2;
    case 0xC2:
      v2 = "__rvv_int8mf2x2_t";
      j__strlen("__rvv_int8mf2x2_t");
      return v2;
    case 0xC3:
      v2 = "__rvv_int8mf2x3_t";
      j__strlen("__rvv_int8mf2x3_t");
      return v2;
    case 0xC4:
      v2 = "__rvv_int8mf2x4_t";
      j__strlen("__rvv_int8mf2x4_t");
      return v2;
    case 0xC5:
      v2 = "__rvv_int8mf2x5_t";
      j__strlen("__rvv_int8mf2x5_t");
      return v2;
    case 0xC6:
      v2 = "__rvv_int8mf2x6_t";
      j__strlen("__rvv_int8mf2x6_t");
      return v2;
    case 0xC7:
      v2 = "__rvv_int8mf2x7_t";
      j__strlen("__rvv_int8mf2x7_t");
      return v2;
    case 0xC8:
      v2 = "__rvv_int8mf2x8_t";
      j__strlen("__rvv_int8mf2x8_t");
      return v2;
    case 0xC9:
      v2 = "__rvv_int8m1x2_t";
      j__strlen("__rvv_int8m1x2_t");
      return v2;
    case 0xCA:
      v2 = "__rvv_int8m1x3_t";
      j__strlen("__rvv_int8m1x3_t");
      return v2;
    case 0xCB:
      v2 = "__rvv_int8m1x4_t";
      j__strlen("__rvv_int8m1x4_t");
      return v2;
    case 0xCC:
      v2 = "__rvv_int8m1x5_t";
      j__strlen("__rvv_int8m1x5_t");
      return v2;
    case 0xCD:
      v2 = "__rvv_int8m1x6_t";
      j__strlen("__rvv_int8m1x6_t");
      return v2;
    case 0xCE:
      v2 = "__rvv_int8m1x7_t";
      j__strlen("__rvv_int8m1x7_t");
      return v2;
    case 0xCF:
      v2 = "__rvv_int8m1x8_t";
      j__strlen("__rvv_int8m1x8_t");
      return v2;
    case 0xD0:
      v2 = "__rvv_int8m2x2_t";
      j__strlen("__rvv_int8m2x2_t");
      return v2;
    case 0xD1:
      v2 = "__rvv_int8m2x3_t";
      j__strlen("__rvv_int8m2x3_t");
      return v2;
    case 0xD2:
      v2 = "__rvv_int8m2x4_t";
      j__strlen("__rvv_int8m2x4_t");
      return v2;
    case 0xD3:
      v2 = "__rvv_int8m4x2_t";
      j__strlen("__rvv_int8m4x2_t");
      return v2;
    case 0xD4:
      v2 = "__rvv_uint8mf8x2_t";
      j__strlen("__rvv_uint8mf8x2_t");
      return v2;
    case 0xD5:
      v2 = "__rvv_uint8mf8x3_t";
      j__strlen("__rvv_uint8mf8x3_t");
      return v2;
    case 0xD6:
      v2 = "__rvv_uint8mf8x4_t";
      j__strlen("__rvv_uint8mf8x4_t");
      return v2;
    case 0xD7:
      v2 = "__rvv_uint8mf8x5_t";
      j__strlen("__rvv_uint8mf8x5_t");
      return v2;
    case 0xD8:
      v2 = "__rvv_uint8mf8x6_t";
      j__strlen("__rvv_uint8mf8x6_t");
      return v2;
    case 0xD9:
      v2 = "__rvv_uint8mf8x7_t";
      j__strlen("__rvv_uint8mf8x7_t");
      return v2;
    case 0xDA:
      v2 = "__rvv_uint8mf8x8_t";
      j__strlen("__rvv_uint8mf8x8_t");
      return v2;
    case 0xDB:
      v2 = "__rvv_uint8mf4x2_t";
      j__strlen("__rvv_uint8mf4x2_t");
      return v2;
    case 0xDC:
      v2 = "__rvv_uint8mf4x3_t";
      j__strlen("__rvv_uint8mf4x3_t");
      return v2;
    case 0xDD:
      v2 = "__rvv_uint8mf4x4_t";
      j__strlen("__rvv_uint8mf4x4_t");
      return v2;
    case 0xDE:
      v2 = "__rvv_uint8mf4x5_t";
      j__strlen("__rvv_uint8mf4x5_t");
      return v2;
    case 0xDF:
      v2 = "__rvv_uint8mf4x6_t";
      j__strlen("__rvv_uint8mf4x6_t");
      return v2;
    case 0xE0:
      v2 = "__rvv_uint8mf4x7_t";
      j__strlen("__rvv_uint8mf4x7_t");
      return v2;
    case 0xE1:
      v2 = "__rvv_uint8mf4x8_t";
      j__strlen("__rvv_uint8mf4x8_t");
      return v2;
    case 0xE2:
      v2 = "__rvv_uint8mf2x2_t";
      j__strlen("__rvv_uint8mf2x2_t");
      return v2;
    case 0xE3:
      v2 = "__rvv_uint8mf2x3_t";
      j__strlen("__rvv_uint8mf2x3_t");
      return v2;
    case 0xE4:
      v2 = "__rvv_uint8mf2x4_t";
      j__strlen("__rvv_uint8mf2x4_t");
      return v2;
    case 0xE5:
      v2 = "__rvv_uint8mf2x5_t";
      j__strlen("__rvv_uint8mf2x5_t");
      return v2;
    case 0xE6:
      v2 = "__rvv_uint8mf2x6_t";
      j__strlen("__rvv_uint8mf2x6_t");
      return v2;
    case 0xE7:
      v2 = "__rvv_uint8mf2x7_t";
      j__strlen("__rvv_uint8mf2x7_t");
      return v2;
    case 0xE8:
      v2 = "__rvv_uint8mf2x8_t";
      j__strlen("__rvv_uint8mf2x8_t");
      return v2;
    case 0xE9:
      v2 = "__rvv_uint8m1x2_t";
      j__strlen("__rvv_uint8m1x2_t");
      return v2;
    case 0xEA:
      v2 = "__rvv_uint8m1x3_t";
      j__strlen("__rvv_uint8m1x3_t");
      return v2;
    case 0xEB:
      v2 = "__rvv_uint8m1x4_t";
      j__strlen("__rvv_uint8m1x4_t");
      return v2;
    case 0xEC:
      v2 = "__rvv_uint8m1x5_t";
      j__strlen("__rvv_uint8m1x5_t");
      return v2;
    case 0xED:
      v2 = "__rvv_uint8m1x6_t";
      j__strlen("__rvv_uint8m1x6_t");
      return v2;
    case 0xEE:
      v2 = "__rvv_uint8m1x7_t";
      j__strlen("__rvv_uint8m1x7_t");
      return v2;
    case 0xEF:
      v2 = "__rvv_uint8m1x8_t";
      j__strlen("__rvv_uint8m1x8_t");
      return v2;
    case 0xF0:
      v2 = "__rvv_uint8m2x2_t";
      j__strlen("__rvv_uint8m2x2_t");
      return v2;
    case 0xF1:
      v2 = "__rvv_uint8m2x3_t";
      j__strlen("__rvv_uint8m2x3_t");
      return v2;
    case 0xF2:
      v2 = "__rvv_uint8m2x4_t";
      j__strlen("__rvv_uint8m2x4_t");
      return v2;
    case 0xF3:
      v2 = "__rvv_uint8m4x2_t";
      j__strlen("__rvv_uint8m4x2_t");
      return v2;
    case 0xF4:
      v2 = "__rvv_int16mf4x2_t";
      j__strlen("__rvv_int16mf4x2_t");
      return v2;
    case 0xF5:
      v2 = "__rvv_int16mf4x3_t";
      j__strlen("__rvv_int16mf4x3_t");
      return v2;
    case 0xF6:
      v2 = "__rvv_int16mf4x4_t";
      j__strlen("__rvv_int16mf4x4_t");
      return v2;
    case 0xF7:
      v2 = "__rvv_int16mf4x5_t";
      j__strlen("__rvv_int16mf4x5_t");
      return v2;
    case 0xF8:
      v2 = "__rvv_int16mf4x6_t";
      j__strlen("__rvv_int16mf4x6_t");
      return v2;
    case 0xF9:
      v2 = "__rvv_int16mf4x7_t";
      j__strlen("__rvv_int16mf4x7_t");
      return v2;
    case 0xFA:
      v2 = "__rvv_int16mf4x8_t";
      j__strlen("__rvv_int16mf4x8_t");
      return v2;
    case 0xFB:
      v2 = "__rvv_int16mf2x2_t";
      j__strlen("__rvv_int16mf2x2_t");
      return v2;
    case 0xFC:
      v2 = "__rvv_int16mf2x3_t";
      j__strlen("__rvv_int16mf2x3_t");
      return v2;
    case 0xFD:
      v2 = "__rvv_int16mf2x4_t";
      j__strlen("__rvv_int16mf2x4_t");
      return v2;
    case 0xFE:
      v2 = "__rvv_int16mf2x5_t";
      j__strlen("__rvv_int16mf2x5_t");
      return v2;
    case 0xFF:
      v2 = "__rvv_int16mf2x6_t";
      j__strlen("__rvv_int16mf2x6_t");
      return v2;
    case 0x100:
      v2 = "__rvv_int16mf2x7_t";
      j__strlen("__rvv_int16mf2x7_t");
      return v2;
    case 0x101:
      v2 = "__rvv_int16mf2x8_t";
      j__strlen("__rvv_int16mf2x8_t");
      return v2;
    case 0x102:
      v2 = "__rvv_int16m1x2_t";
      j__strlen("__rvv_int16m1x2_t");
      return v2;
    case 0x103:
      v2 = "__rvv_int16m1x3_t";
      j__strlen("__rvv_int16m1x3_t");
      return v2;
    case 0x104:
      v2 = "__rvv_int16m1x4_t";
      j__strlen("__rvv_int16m1x4_t");
      return v2;
    case 0x105:
      v2 = "__rvv_int16m1x5_t";
      j__strlen("__rvv_int16m1x5_t");
      return v2;
    case 0x106:
      v2 = "__rvv_int16m1x6_t";
      j__strlen("__rvv_int16m1x6_t");
      return v2;
    case 0x107:
      v2 = "__rvv_int16m1x7_t";
      j__strlen("__rvv_int16m1x7_t");
      return v2;
    case 0x108:
      v2 = "__rvv_int16m1x8_t";
      j__strlen("__rvv_int16m1x8_t");
      return v2;
    case 0x109:
      v2 = "__rvv_int16m2x2_t";
      j__strlen("__rvv_int16m2x2_t");
      return v2;
    case 0x10A:
      v2 = "__rvv_int16m2x3_t";
      j__strlen("__rvv_int16m2x3_t");
      return v2;
    case 0x10B:
      v2 = "__rvv_int16m2x4_t";
      j__strlen("__rvv_int16m2x4_t");
      return v2;
    case 0x10C:
      v2 = "__rvv_int16m4x2_t";
      j__strlen("__rvv_int16m4x2_t");
      return v2;
    case 0x10D:
      v2 = "__rvv_uint16mf4x2_t";
      j__strlen("__rvv_uint16mf4x2_t");
      return v2;
    case 0x10E:
      v2 = "__rvv_uint16mf4x3_t";
      j__strlen("__rvv_uint16mf4x3_t");
      return v2;
    case 0x10F:
      v2 = "__rvv_uint16mf4x4_t";
      j__strlen("__rvv_uint16mf4x4_t");
      return v2;
    case 0x110:
      v2 = "__rvv_uint16mf4x5_t";
      j__strlen("__rvv_uint16mf4x5_t");
      return v2;
    case 0x111:
      v2 = "__rvv_uint16mf4x6_t";
      j__strlen("__rvv_uint16mf4x6_t");
      return v2;
    case 0x112:
      v2 = "__rvv_uint16mf4x7_t";
      j__strlen("__rvv_uint16mf4x7_t");
      return v2;
    case 0x113:
      v2 = "__rvv_uint16mf4x8_t";
      j__strlen("__rvv_uint16mf4x8_t");
      return v2;
    case 0x114:
      v2 = "__rvv_uint16mf2x2_t";
      j__strlen("__rvv_uint16mf2x2_t");
      return v2;
    case 0x115:
      v2 = "__rvv_uint16mf2x3_t";
      j__strlen("__rvv_uint16mf2x3_t");
      return v2;
    case 0x116:
      v2 = "__rvv_uint16mf2x4_t";
      j__strlen("__rvv_uint16mf2x4_t");
      return v2;
    case 0x117:
      v2 = "__rvv_uint16mf2x5_t";
      j__strlen("__rvv_uint16mf2x5_t");
      return v2;
    case 0x118:
      v2 = "__rvv_uint16mf2x6_t";
      j__strlen("__rvv_uint16mf2x6_t");
      return v2;
    case 0x119:
      v2 = "__rvv_uint16mf2x7_t";
      j__strlen("__rvv_uint16mf2x7_t");
      return v2;
    case 0x11A:
      v2 = "__rvv_uint16mf2x8_t";
      j__strlen("__rvv_uint16mf2x8_t");
      return v2;
    case 0x11B:
      v2 = "__rvv_uint16m1x2_t";
      j__strlen("__rvv_uint16m1x2_t");
      return v2;
    case 0x11C:
      v2 = "__rvv_uint16m1x3_t";
      j__strlen("__rvv_uint16m1x3_t");
      return v2;
    case 0x11D:
      v2 = "__rvv_uint16m1x4_t";
      j__strlen("__rvv_uint16m1x4_t");
      return v2;
    case 0x11E:
      v2 = "__rvv_uint16m1x5_t";
      j__strlen("__rvv_uint16m1x5_t");
      return v2;
    case 0x11F:
      v2 = "__rvv_uint16m1x6_t";
      j__strlen("__rvv_uint16m1x6_t");
      return v2;
    case 0x120:
      v2 = "__rvv_uint16m1x7_t";
      j__strlen("__rvv_uint16m1x7_t");
      return v2;
    case 0x121:
      v2 = "__rvv_uint16m1x8_t";
      j__strlen("__rvv_uint16m1x8_t");
      return v2;
    case 0x122:
      v2 = "__rvv_uint16m2x2_t";
      j__strlen("__rvv_uint16m2x2_t");
      return v2;
    case 0x123:
      v2 = "__rvv_uint16m2x3_t";
      j__strlen("__rvv_uint16m2x3_t");
      return v2;
    case 0x124:
      v2 = "__rvv_uint16m2x4_t";
      j__strlen("__rvv_uint16m2x4_t");
      return v2;
    case 0x125:
      v2 = "__rvv_uint16m4x2_t";
      j__strlen("__rvv_uint16m4x2_t");
      return v2;
    case 0x126:
      v2 = "__rvv_int32mf2x2_t";
      j__strlen("__rvv_int32mf2x2_t");
      return v2;
    case 0x127:
      v2 = "__rvv_int32mf2x3_t";
      j__strlen("__rvv_int32mf2x3_t");
      return v2;
    case 0x128:
      v2 = "__rvv_int32mf2x4_t";
      j__strlen("__rvv_int32mf2x4_t");
      return v2;
    case 0x129:
      v2 = "__rvv_int32mf2x5_t";
      j__strlen("__rvv_int32mf2x5_t");
      return v2;
    case 0x12A:
      v2 = "__rvv_int32mf2x6_t";
      j__strlen("__rvv_int32mf2x6_t");
      return v2;
    case 0x12B:
      v2 = "__rvv_int32mf2x7_t";
      j__strlen("__rvv_int32mf2x7_t");
      return v2;
    case 0x12C:
      v2 = "__rvv_int32mf2x8_t";
      j__strlen("__rvv_int32mf2x8_t");
      return v2;
    case 0x12D:
      v2 = "__rvv_int32m1x2_t";
      j__strlen("__rvv_int32m1x2_t");
      return v2;
    case 0x12E:
      v2 = "__rvv_int32m1x3_t";
      j__strlen("__rvv_int32m1x3_t");
      return v2;
    case 0x12F:
      v2 = "__rvv_int32m1x4_t";
      j__strlen("__rvv_int32m1x4_t");
      return v2;
    case 0x130:
      v2 = "__rvv_int32m1x5_t";
      j__strlen("__rvv_int32m1x5_t");
      return v2;
    case 0x131:
      v2 = "__rvv_int32m1x6_t";
      j__strlen("__rvv_int32m1x6_t");
      return v2;
    case 0x132:
      v2 = "__rvv_int32m1x7_t";
      j__strlen("__rvv_int32m1x7_t");
      return v2;
    case 0x133:
      v2 = "__rvv_int32m1x8_t";
      j__strlen("__rvv_int32m1x8_t");
      return v2;
    case 0x134:
      v2 = "__rvv_int32m2x2_t";
      j__strlen("__rvv_int32m2x2_t");
      return v2;
    case 0x135:
      v2 = "__rvv_int32m2x3_t";
      j__strlen("__rvv_int32m2x3_t");
      return v2;
    case 0x136:
      v2 = "__rvv_int32m2x4_t";
      j__strlen("__rvv_int32m2x4_t");
      return v2;
    case 0x137:
      v2 = "__rvv_int32m4x2_t";
      j__strlen("__rvv_int32m4x2_t");
      return v2;
    case 0x138:
      v2 = "__rvv_uint32mf2x2_t";
      j__strlen("__rvv_uint32mf2x2_t");
      return v2;
    case 0x139:
      v2 = "__rvv_uint32mf2x3_t";
      j__strlen("__rvv_uint32mf2x3_t");
      return v2;
    case 0x13A:
      v2 = "__rvv_uint32mf2x4_t";
      j__strlen("__rvv_uint32mf2x4_t");
      return v2;
    case 0x13B:
      v2 = "__rvv_uint32mf2x5_t";
      j__strlen("__rvv_uint32mf2x5_t");
      return v2;
    case 0x13C:
      v2 = "__rvv_uint32mf2x6_t";
      j__strlen("__rvv_uint32mf2x6_t");
      return v2;
    case 0x13D:
      v2 = "__rvv_uint32mf2x7_t";
      j__strlen("__rvv_uint32mf2x7_t");
      return v2;
    case 0x13E:
      v2 = "__rvv_uint32mf2x8_t";
      j__strlen("__rvv_uint32mf2x8_t");
      return v2;
    case 0x13F:
      v2 = "__rvv_uint32m1x2_t";
      j__strlen("__rvv_uint32m1x2_t");
      return v2;
    case 0x140:
      v2 = "__rvv_uint32m1x3_t";
      j__strlen("__rvv_uint32m1x3_t");
      return v2;
    case 0x141:
      v2 = "__rvv_uint32m1x4_t";
      j__strlen("__rvv_uint32m1x4_t");
      return v2;
    case 0x142:
      v2 = "__rvv_uint32m1x5_t";
      j__strlen("__rvv_uint32m1x5_t");
      return v2;
    case 0x143:
      v2 = "__rvv_uint32m1x6_t";
      j__strlen("__rvv_uint32m1x6_t");
      return v2;
    case 0x144:
      v2 = "__rvv_uint32m1x7_t";
      j__strlen("__rvv_uint32m1x7_t");
      return v2;
    case 0x145:
      v2 = "__rvv_uint32m1x8_t";
      j__strlen("__rvv_uint32m1x8_t");
      return v2;
    case 0x146:
      v2 = "__rvv_uint32m2x2_t";
      j__strlen("__rvv_uint32m2x2_t");
      return v2;
    case 0x147:
      v2 = "__rvv_uint32m2x3_t";
      j__strlen("__rvv_uint32m2x3_t");
      return v2;
    case 0x148:
      v2 = "__rvv_uint32m2x4_t";
      j__strlen("__rvv_uint32m2x4_t");
      return v2;
    case 0x149:
      v2 = "__rvv_uint32m4x2_t";
      j__strlen("__rvv_uint32m4x2_t");
      return v2;
    case 0x14A:
      v2 = "__rvv_int64m1x2_t";
      j__strlen("__rvv_int64m1x2_t");
      return v2;
    case 0x14B:
      v2 = "__rvv_int64m1x3_t";
      j__strlen("__rvv_int64m1x3_t");
      return v2;
    case 0x14C:
      v2 = "__rvv_int64m1x4_t";
      j__strlen("__rvv_int64m1x4_t");
      return v2;
    case 0x14D:
      v2 = "__rvv_int64m1x5_t";
      j__strlen("__rvv_int64m1x5_t");
      return v2;
    case 0x14E:
      v2 = "__rvv_int64m1x6_t";
      j__strlen("__rvv_int64m1x6_t");
      return v2;
    case 0x14F:
      v2 = "__rvv_int64m1x7_t";
      j__strlen("__rvv_int64m1x7_t");
      return v2;
    case 0x150:
      v2 = "__rvv_int64m1x8_t";
      j__strlen("__rvv_int64m1x8_t");
      return v2;
    case 0x151:
      v2 = "__rvv_int64m2x2_t";
      j__strlen("__rvv_int64m2x2_t");
      return v2;
    case 0x152:
      v2 = "__rvv_int64m2x3_t";
      j__strlen("__rvv_int64m2x3_t");
      return v2;
    case 0x153:
      v2 = "__rvv_int64m2x4_t";
      j__strlen("__rvv_int64m2x4_t");
      return v2;
    case 0x154:
      v2 = "__rvv_int64m4x2_t";
      j__strlen("__rvv_int64m4x2_t");
      return v2;
    case 0x155:
      v2 = "__rvv_uint64m1x2_t";
      j__strlen("__rvv_uint64m1x2_t");
      return v2;
    case 0x156:
      v2 = "__rvv_uint64m1x3_t";
      j__strlen("__rvv_uint64m1x3_t");
      return v2;
    case 0x157:
      v2 = "__rvv_uint64m1x4_t";
      j__strlen("__rvv_uint64m1x4_t");
      return v2;
    case 0x158:
      v2 = "__rvv_uint64m1x5_t";
      j__strlen("__rvv_uint64m1x5_t");
      return v2;
    case 0x159:
      v2 = "__rvv_uint64m1x6_t";
      j__strlen("__rvv_uint64m1x6_t");
      return v2;
    case 0x15A:
      v2 = "__rvv_uint64m1x7_t";
      j__strlen("__rvv_uint64m1x7_t");
      return v2;
    case 0x15B:
      v2 = "__rvv_uint64m1x8_t";
      j__strlen("__rvv_uint64m1x8_t");
      return v2;
    case 0x15C:
      v2 = "__rvv_uint64m2x2_t";
      j__strlen("__rvv_uint64m2x2_t");
      return v2;
    case 0x15D:
      v2 = "__rvv_uint64m2x3_t";
      j__strlen("__rvv_uint64m2x3_t");
      return v2;
    case 0x15E:
      v2 = "__rvv_uint64m2x4_t";
      j__strlen("__rvv_uint64m2x4_t");
      return v2;
    case 0x15F:
      v2 = "__rvv_uint64m4x2_t";
      j__strlen("__rvv_uint64m4x2_t");
      return v2;
    case 0x160:
      v2 = "__rvv_float16mf4x2_t";
      j__strlen("__rvv_float16mf4x2_t");
      return v2;
    case 0x161:
      v2 = "__rvv_float16mf4x3_t";
      j__strlen("__rvv_float16mf4x3_t");
      return v2;
    case 0x162:
      v2 = "__rvv_float16mf4x4_t";
      j__strlen("__rvv_float16mf4x4_t");
      return v2;
    case 0x163:
      v2 = "__rvv_float16mf4x5_t";
      j__strlen("__rvv_float16mf4x5_t");
      return v2;
    case 0x164:
      v2 = "__rvv_float16mf4x6_t";
      j__strlen("__rvv_float16mf4x6_t");
      return v2;
    case 0x165:
      v2 = "__rvv_float16mf4x7_t";
      j__strlen("__rvv_float16mf4x7_t");
      return v2;
    case 0x166:
      v2 = "__rvv_float16mf4x8_t";
      j__strlen("__rvv_float16mf4x8_t");
      return v2;
    case 0x167:
      v2 = "__rvv_float16mf2x2_t";
      j__strlen("__rvv_float16mf2x2_t");
      return v2;
    case 0x168:
      v2 = "__rvv_float16mf2x3_t";
      j__strlen("__rvv_float16mf2x3_t");
      return v2;
    case 0x169:
      v2 = "__rvv_float16mf2x4_t";
      j__strlen("__rvv_float16mf2x4_t");
      return v2;
    case 0x16A:
      v2 = "__rvv_float16mf2x5_t";
      j__strlen("__rvv_float16mf2x5_t");
      return v2;
    case 0x16B:
      v2 = "__rvv_float16mf2x6_t";
      j__strlen("__rvv_float16mf2x6_t");
      return v2;
    case 0x16C:
      v2 = "__rvv_float16mf2x7_t";
      j__strlen("__rvv_float16mf2x7_t");
      return v2;
    case 0x16D:
      v2 = "__rvv_float16mf2x8_t";
      j__strlen("__rvv_float16mf2x8_t");
      return v2;
    case 0x16E:
      v2 = "__rvv_float16m1x2_t";
      j__strlen("__rvv_float16m1x2_t");
      return v2;
    case 0x16F:
      v2 = "__rvv_float16m1x3_t";
      j__strlen("__rvv_float16m1x3_t");
      return v2;
    case 0x170:
      v2 = "__rvv_float16m1x4_t";
      j__strlen("__rvv_float16m1x4_t");
      return v2;
    case 0x171:
      v2 = "__rvv_float16m1x5_t";
      j__strlen("__rvv_float16m1x5_t");
      return v2;
    case 0x172:
      v2 = "__rvv_float16m1x6_t";
      j__strlen("__rvv_float16m1x6_t");
      return v2;
    case 0x173:
      v2 = "__rvv_float16m1x7_t";
      j__strlen("__rvv_float16m1x7_t");
      return v2;
    case 0x174:
      v2 = "__rvv_float16m1x8_t";
      j__strlen("__rvv_float16m1x8_t");
      return v2;
    case 0x175:
      v2 = "__rvv_float16m2x2_t";
      j__strlen("__rvv_float16m2x2_t");
      return v2;
    case 0x176:
      v2 = "__rvv_float16m2x3_t";
      j__strlen("__rvv_float16m2x3_t");
      return v2;
    case 0x177:
      v2 = "__rvv_float16m2x4_t";
      j__strlen("__rvv_float16m2x4_t");
      return v2;
    case 0x178:
      v2 = "__rvv_float16m4x2_t";
      j__strlen("__rvv_float16m4x2_t");
      return v2;
    case 0x179:
      v2 = "__rvv_float32mf2x2_t";
      j__strlen("__rvv_float32mf2x2_t");
      return v2;
    case 0x17A:
      v2 = "__rvv_float32mf2x3_t";
      j__strlen("__rvv_float32mf2x3_t");
      return v2;
    case 0x17B:
      v2 = "__rvv_float32mf2x4_t";
      j__strlen("__rvv_float32mf2x4_t");
      return v2;
    case 0x17C:
      v2 = "__rvv_float32mf2x5_t";
      j__strlen("__rvv_float32mf2x5_t");
      return v2;
    case 0x17D:
      v2 = "__rvv_float32mf2x6_t";
      j__strlen("__rvv_float32mf2x6_t");
      return v2;
    case 0x17E:
      v2 = "__rvv_float32mf2x7_t";
      j__strlen("__rvv_float32mf2x7_t");
      return v2;
    case 0x17F:
      v2 = "__rvv_float32mf2x8_t";
      j__strlen("__rvv_float32mf2x8_t");
      return v2;
    case 0x180:
      v2 = "__rvv_float32m1x2_t";
      j__strlen("__rvv_float32m1x2_t");
      return v2;
    case 0x181:
      v2 = "__rvv_float32m1x3_t";
      j__strlen("__rvv_float32m1x3_t");
      return v2;
    case 0x182:
      v2 = "__rvv_float32m1x4_t";
      j__strlen("__rvv_float32m1x4_t");
      return v2;
    case 0x183:
      v2 = "__rvv_float32m1x5_t";
      j__strlen("__rvv_float32m1x5_t");
      return v2;
    case 0x184:
      v2 = "__rvv_float32m1x6_t";
      j__strlen("__rvv_float32m1x6_t");
      return v2;
    case 0x185:
      v2 = "__rvv_float32m1x7_t";
      j__strlen("__rvv_float32m1x7_t");
      return v2;
    case 0x186:
      v2 = "__rvv_float32m1x8_t";
      j__strlen("__rvv_float32m1x8_t");
      return v2;
    case 0x187:
      v2 = "__rvv_float32m2x2_t";
      j__strlen("__rvv_float32m2x2_t");
      return v2;
    case 0x188:
      v2 = "__rvv_float32m2x3_t";
      j__strlen("__rvv_float32m2x3_t");
      return v2;
    case 0x189:
      v2 = "__rvv_float32m2x4_t";
      j__strlen("__rvv_float32m2x4_t");
      return v2;
    case 0x18A:
      v2 = "__rvv_float32m4x2_t";
      j__strlen("__rvv_float32m4x2_t");
      return v2;
    case 0x18B:
      v2 = "__rvv_float64m1x2_t";
      j__strlen("__rvv_float64m1x2_t");
      return v2;
    case 0x18C:
      v2 = "__rvv_float64m1x3_t";
      j__strlen("__rvv_float64m1x3_t");
      return v2;
    case 0x18D:
      v2 = "__rvv_float64m1x4_t";
      j__strlen("__rvv_float64m1x4_t");
      return v2;
    case 0x18E:
      v2 = "__rvv_float64m1x5_t";
      j__strlen("__rvv_float64m1x5_t");
      return v2;
    case 0x18F:
      v2 = "__rvv_float64m1x6_t";
      j__strlen("__rvv_float64m1x6_t");
      return v2;
    case 0x190:
      v2 = "__rvv_float64m1x7_t";
      j__strlen("__rvv_float64m1x7_t");
      return v2;
    case 0x191:
      v2 = "__rvv_float64m1x8_t";
      j__strlen("__rvv_float64m1x8_t");
      return v2;
    case 0x192:
      v2 = "__rvv_float64m2x2_t";
      j__strlen("__rvv_float64m2x2_t");
      return v2;
    case 0x193:
      v2 = "__rvv_float64m2x3_t";
      j__strlen("__rvv_float64m2x3_t");
      return v2;
    case 0x194:
      v2 = "__rvv_float64m2x4_t";
      j__strlen("__rvv_float64m2x4_t");
      return v2;
    case 0x195:
      v2 = "__rvv_float64m4x2_t";
      j__strlen("__rvv_float64m4x2_t");
      return v2;
    case 0x196:
      v2 = "__rvv_bfloat16mf4x2_t";
      j__strlen("__rvv_bfloat16mf4x2_t");
      return v2;
    case 0x197:
      v2 = "__rvv_bfloat16mf4x3_t";
      j__strlen("__rvv_bfloat16mf4x3_t");
      return v2;
    case 0x198:
      v2 = "__rvv_bfloat16mf4x4_t";
      j__strlen("__rvv_bfloat16mf4x4_t");
      return v2;
    case 0x199:
      v2 = "__rvv_bfloat16mf4x5_t";
      j__strlen("__rvv_bfloat16mf4x5_t");
      return v2;
    case 0x19A:
      v2 = "__rvv_bfloat16mf4x6_t";
      j__strlen("__rvv_bfloat16mf4x6_t");
      return v2;
    case 0x19B:
      v2 = "__rvv_bfloat16mf4x7_t";
      j__strlen("__rvv_bfloat16mf4x7_t");
      return v2;
    case 0x19C:
      v2 = "__rvv_bfloat16mf4x8_t";
      j__strlen("__rvv_bfloat16mf4x8_t");
      return v2;
    case 0x19D:
      v2 = "__rvv_bfloat16mf2x2_t";
      j__strlen("__rvv_bfloat16mf2x2_t");
      return v2;
    case 0x19E:
      v2 = "__rvv_bfloat16mf2x3_t";
      j__strlen("__rvv_bfloat16mf2x3_t");
      return v2;
    case 0x19F:
      v2 = "__rvv_bfloat16mf2x4_t";
      j__strlen("__rvv_bfloat16mf2x4_t");
      return v2;
    case 0x1A0:
      v2 = "__rvv_bfloat16mf2x5_t";
      j__strlen("__rvv_bfloat16mf2x5_t");
      return v2;
    case 0x1A1:
      v2 = "__rvv_bfloat16mf2x6_t";
      j__strlen("__rvv_bfloat16mf2x6_t");
      return v2;
    case 0x1A2:
      v2 = "__rvv_bfloat16mf2x7_t";
      j__strlen("__rvv_bfloat16mf2x7_t");
      return v2;
    case 0x1A3:
      v2 = "__rvv_bfloat16mf2x8_t";
      j__strlen("__rvv_bfloat16mf2x8_t");
      return v2;
    case 0x1A4:
      v2 = "__rvv_bfloat16m1x2_t";
      j__strlen("__rvv_bfloat16m1x2_t");
      return v2;
    case 0x1A5:
      v2 = "__rvv_bfloat16m1x3_t";
      j__strlen("__rvv_bfloat16m1x3_t");
      return v2;
    case 0x1A6:
      v2 = "__rvv_bfloat16m1x4_t";
      j__strlen("__rvv_bfloat16m1x4_t");
      return v2;
    case 0x1A7:
      v2 = "__rvv_bfloat16m1x5_t";
      j__strlen("__rvv_bfloat16m1x5_t");
      return v2;
    case 0x1A8:
      v2 = "__rvv_bfloat16m1x6_t";
      j__strlen("__rvv_bfloat16m1x6_t");
      return v2;
    case 0x1A9:
      v2 = "__rvv_bfloat16m1x7_t";
      j__strlen("__rvv_bfloat16m1x7_t");
      return v2;
    case 0x1AA:
      v2 = "__rvv_bfloat16m1x8_t";
      j__strlen("__rvv_bfloat16m1x8_t");
      return v2;
    case 0x1AB:
      v2 = "__rvv_bfloat16m2x2_t";
      j__strlen("__rvv_bfloat16m2x2_t");
      return v2;
    case 0x1AC:
      v2 = "__rvv_bfloat16m2x3_t";
      j__strlen("__rvv_bfloat16m2x3_t");
      return v2;
    case 0x1AD:
      v2 = "__rvv_bfloat16m2x4_t";
      j__strlen("__rvv_bfloat16m2x4_t");
      return v2;
    case 0x1AE:
      v2 = "__rvv_bfloat16m4x2_t";
      j__strlen("__rvv_bfloat16m4x2_t");
      return v2;
    case 0x1AF:
      v2 = "__externref_t";
      j__strlen("__externref_t");
      return v2;
    case 0x1B0:
      v2 = "__amdgpu_buffer_rsrc_t";
      j__strlen("__amdgpu_buffer_rsrc_t");
      return v2;
    case 0x1B1:
      v2 = "__amdgpu_named_workgroup_barrier_t";
      j__strlen("__amdgpu_named_workgroup_barrier_t");
      return v2;
    case 0x1B2:
      v2 = "__hlsl_resource_t";
      j__strlen("__hlsl_resource_t");
      return v2;
    case 0x1B3:
      v2 = "void";
      j__strlen("void");
      return v2;
    case 0x1B4:
      v2 = "_Bool";
      if ( a2[2] < 0 )
        v2 = "bool";
      goto LABEL_487;
    case 0x1B5:
    case 0x1C0:
      v2 = "char";
      j__strlen("char");
      return v2;
    case 0x1B6:
      v2 = "unsigned char";
      j__strlen("unsigned char");
      return v2;
    case 0x1B7:
    case 0x1C2:
      v2 = "wchar_t";
      if ( (a2[4] & 4) != 0 )
        v2 = "__wchar_t";
      goto LABEL_487;
    case 0x1B8:
      v2 = "char8_t";
      j__strlen("char8_t");
      return v2;
    case 0x1B9:
      v2 = "char16_t";
      j__strlen("char16_t");
      return v2;
    case 0x1BA:
      v2 = "char32_t";
      j__strlen("char32_t");
      return v2;
    case 0x1BB:
      v2 = "unsigned short";
      j__strlen("unsigned short");
      return v2;
    case 0x1BC:
      v2 = "unsigned int";
      j__strlen("unsigned int");
      return v2;
    case 0x1BD:
      v2 = "unsigned long";
      j__strlen("unsigned long");
      return v2;
    case 0x1BE:
      v2 = "unsigned long long";
      j__strlen("unsigned long long");
      return v2;
    case 0x1BF:
      v2 = "unsigned __int128";
      j__strlen("unsigned __int128");
      return v2;
    case 0x1C1:
      v2 = "signed char";
      j__strlen("signed char");
      return v2;
    case 0x1C3:
      v2 = "short";
      j__strlen("short");
      return v2;
    case 0x1C4:
      v2 = "int";
      j__strlen("int");
      return v2;
    case 0x1C5:
      v2 = "long";
      j__strlen("long");
      return v2;
    case 0x1C6:
      v2 = "long long";
      j__strlen("long long");
      return v2;
    case 0x1C7:
      v2 = "__int128";
      j__strlen("__int128");
      return v2;
    case 0x1C8:
      v2 = "short _Accum";
      j__strlen("short _Accum");
      return v2;
    case 0x1C9:
      v2 = "_Accum";
      j__strlen("_Accum");
      return v2;
    case 0x1CA:
      v2 = "long _Accum";
      j__strlen("long _Accum");
      return v2;
    case 0x1CB:
      v2 = "unsigned short _Accum";
      j__strlen("unsigned short _Accum");
      return v2;
    case 0x1CC:
      v2 = "unsigned _Accum";
      j__strlen("unsigned _Accum");
      return v2;
    case 0x1CD:
      v2 = "unsigned long _Accum";
      j__strlen("unsigned long _Accum");
      return v2;
    case 0x1CE:
      v2 = "short _Fract";
      j__strlen("short _Fract");
      return v2;
    case 0x1CF:
      v2 = "_Fract";
      j__strlen("_Fract");
      return v2;
    case 0x1D0:
      v2 = "long _Fract";
      j__strlen("long _Fract");
      return v2;
    case 0x1D1:
      v2 = "unsigned short _Fract";
      j__strlen("unsigned short _Fract");
      return v2;
    case 0x1D2:
      v2 = "unsigned _Fract";
      j__strlen("unsigned _Fract");
      return v2;
    case 0x1D3:
      v2 = "unsigned long _Fract";
      j__strlen("unsigned long _Fract");
      return v2;
    case 0x1D4:
      v2 = "_Sat short _Accum";
      j__strlen("_Sat short _Accum");
      return v2;
    case 0x1D5:
      v2 = "_Sat _Accum";
      j__strlen("_Sat _Accum");
      return v2;
    case 0x1D6:
      v2 = "_Sat long _Accum";
      j__strlen("_Sat long _Accum");
      return v2;
    case 0x1D7:
      v2 = "_Sat unsigned short _Accum";
      j__strlen("_Sat unsigned short _Accum");
      return v2;
    case 0x1D8:
      v2 = "_Sat unsigned _Accum";
      j__strlen("_Sat unsigned _Accum");
      return v2;
    case 0x1D9:
      v2 = "_Sat unsigned long _Accum";
      j__strlen("_Sat unsigned long _Accum");
      return v2;
    case 0x1DA:
      v2 = "_Sat short _Fract";
      j__strlen("_Sat short _Fract");
      return v2;
    case 0x1DB:
      v2 = "_Sat _Fract";
      j__strlen("_Sat _Fract");
      return v2;
    case 0x1DC:
      v2 = "_Sat long _Fract";
      j__strlen("_Sat long _Fract");
      return v2;
    case 0x1DD:
      v2 = "_Sat unsigned short _Fract";
      j__strlen("_Sat unsigned short _Fract");
      return v2;
    case 0x1DE:
      v2 = "_Sat unsigned _Fract";
      j__strlen("_Sat unsigned _Fract");
      return v2;
    case 0x1DF:
      v2 = "_Sat unsigned long _Fract";
      j__strlen("_Sat unsigned long _Fract");
      return v2;
    case 0x1E0:
      v2 = "__fp16";
      if ( (a2[4] & 2) != 0 )
        v2 = "half";
      goto LABEL_487;
    case 0x1E1:
      v2 = "float";
      j__strlen("float");
      return v2;
    case 0x1E2:
      v2 = "double";
      j__strlen("double");
      return v2;
    case 0x1E3:
      v2 = "long double";
      j__strlen("long double");
      return v2;
    case 0x1E4:
      v2 = "_Float16";
      j__strlen("_Float16");
      return v2;
    case 0x1E5:
      v2 = "__bf16";
      j__strlen("__bf16");
      return v2;
    case 0x1E6:
      v2 = "__float128";
      j__strlen("__float128");
      return v2;
    case 0x1E7:
      v2 = "__ibm128";
      j__strlen("__ibm128");
      return v2;
    case 0x1E8:
      v2 = "nullptr_t";
      if ( (a2[3] & 2) != 0 )
        v2 = "std::nullptr_t";
LABEL_487:
      j__strlen(v2);
      break;
    case 0x1E9:
      v2 = "id";
      j__strlen("id");
      break;
    case 0x1EA:
      v2 = "Class";
      j__strlen("Class");
      break;
    case 0x1EB:
      v2 = "SEL";
      j__strlen("SEL");
      break;
    case 0x1EC:
      v2 = "sampler_t";
      j__strlen("sampler_t");
      break;
    case 0x1ED:
      v2 = "event_t";
      j__strlen("event_t");
      break;
    case 0x1EE:
      v2 = "clk_event_t";
      j__strlen("clk_event_t");
      break;
    case 0x1EF:
      v2 = "queue_t";
      j__strlen("queue_t");
      break;
    case 0x1F0:
      v2 = "reserve_id_t";
      j__strlen("reserve_id_t");
      break;
    case 0x1F1:
      v2 = "<dependent type>";
      j__strlen("<dependent type>");
      break;
    case 0x1F2:
      v2 = "<overloaded function type>";
      j__strlen("<overloaded function type>");
      break;
    case 0x1F3:
      v2 = "<bound member function type>";
      j__strlen("<bound member function type>");
      break;
    case 0x1F4:
      v2 = "<unresolved template type>";
      j__strlen("<unresolved template type>");
      break;
    case 0x1F5:
      v2 = "<pseudo-object type>";
      j__strlen("<pseudo-object type>");
      break;
    case 0x1F6:
      v2 = "<unknown type>";
      j__strlen("<unknown type>");
      break;
    case 0x1F7:
      v2 = "<builtin fn type>";
      j__strlen("<builtin fn type>");
      break;
    case 0x1F8:
      v2 = "<ARC unbridged cast type>";
      j__strlen("<ARC unbridged cast type>");
      break;
    case 0x1F9:
      v2 = "<incomplete matrix index type>";
      j__strlen("<incomplete matrix index type>");
      break;
    case 0x1FA:
      v2 = "<array section type>";
      j__strlen("<array section type>");
      break;
    case 0x1FB:
      v2 = "<OpenMP array shaping type>";
      j__strlen("<OpenMP array shaping type>");
      break;
    case 0x1FC:
      v2 = "<OpenMP iterator type>";
      j__strlen("<OpenMP iterator type>");
      break;
  }
  return v2;
}
