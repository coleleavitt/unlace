char *__fastcall sub_761820(__int64 a1)
{
  char *result; // rax

  switch ( *(_WORD *)(a1 + 32) )
  {
    case 0:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "address_space";
      break;
    case 1:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "allocating";
      break;
    case 2:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "annotate_type";
      break;
    case 3:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "__arm_agnostic";
      break;
    case 4:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "__arm_in";
      break;
    case 5:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "__arm_inout";
      break;
    case 6:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "__clang_arm_mve_strict_polymorphism";
      break;
    case 7:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "__arm_out";
      break;
    case 8:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "__arm_preserves";
      break;
    case 9:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "__arm_streaming";
      break;
    case 0xA:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "__arm_streaming_compatible";
      break;
    case 0xB:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "btf_type_tag";
      break;
    case 0xC:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "blocking";
      break;
    case 0xD:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "cmse_nonsecure_call";
      break;
    case 0xE:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "contained_type";
      break;
    case 0xF:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "groupshared";
      break;
    case 0x10:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "is_rov";
      break;
    case 0x11:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "raw_buffer";
      break;
    case 0x12:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "resource_class";
      break;
    case 0x13:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "noderef";
      break;
    case 0x14:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "nonallocating";
      break;
    case 0x15:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "nonblocking";
      break;
    case 0x16:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "objc_gc";
      break;
    case 0x17:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "__unsafe_unretained";
      break;
    case 0x18:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "__kindof";
      break;
    case 0x19:
      result = sub_74D580(a1);
      break;
    case 0x1A:
      result = sub_74D730(a1);
      break;
    case 0x1B:
      result = sub_74D8E0(a1);
      break;
    case 0x1C:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "opencl_global_device";
      break;
    case 0x1D:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "opencl_global_host";
      break;
    case 0x1E:
      result = sub_74DF90(a1);
      break;
    case 0x1F:
      result = sub_74E140(a1);
      break;
    case 0x20:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "__ptr32";
      break;
    case 0x21:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "__ptr64";
      break;
    case 0x22:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "__sptr";
      break;
    case 0x23:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "_Nonnull";
      break;
    case 0x24:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "_Null_unspecified";
      break;
    case 0x25:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "_Nullable_result";
      break;
    case 0x26:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "__uptr";
      break;
    case 0x27:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "__funcref";
      break;
    case 0x28:
    case 0x11D:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "assume";
      break;
    case 0x29:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "code_align";
      break;
    case 0x2A:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "fallthrough";
      break;
    case 0x2B:
      result = sub_73B980(a1);
      break;
    case 0x2C:
      result = sub_73BC50(a1);
      break;
    case 0x2D:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "likely";
      break;
    case 0x2E:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "musttail";
      break;
    case 0x2F:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "opencl_unroll_hint";
      break;
    case 0x30:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "unlikely";
      break;
    case 0x31:
      result = sub_728690(a1);
      break;
    case 0x32:
      result = sub_7453D0(a1);
      break;
    case 0x33:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "nomerge";
      break;
    case 0x34:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "suppress";
      break;
    case 0x35:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "aarch64_sve_pcs";
      break;
    case 0x36:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "aarch64_vector_pcs";
      break;
    case 0x37:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "amdgpu_kernel";
      break;
    case 0x38:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "acquire_handle";
      break;
    case 0x39:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "nocf_check";
      break;
    case 0x3A:
      result = sub_72F7F0(a1);
      break;
    case 0x3B:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "counted_by";
      break;
    case 0x3C:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "counted_by_or_null";
      break;
    case 0x3D:
      result = sub_73A090(a1);
      break;
    case 0x3E:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "intel_ocl_bicc";
      break;
    case 0x3F:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "lifetimebound";
      break;
    case 0x40:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "lifetime_capture_by";
      break;
    case 0x41:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "m68k_rtd";
      break;
    case 0x42:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "ms_abi";
      break;
    case 0x43:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "ns_returns_retained";
      break;
    case 0x44:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "objc_ownership";
      break;
    case 0x45:
      result = sub_74FCE0(a1);
      break;
    case 0x46:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "pcs";
      break;
    case 0x47:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "preserve_all";
      break;
    case 0x48:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "preserve_most";
      break;
    case 0x49:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "preserve_none";
      break;
    case 0x4A:
      result = sub_752910(a1);
      break;
    case 0x4B:
      result = sub_752D10(a1);
      break;
    case 0x4C:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "sized_by";
      break;
    case 0x4D:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "sized_by_or_null";
      break;
    case 0x4E:
      result = sub_756D20(a1);
      break;
    case 0x4F:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "swiftasynccall";
      break;
    case 0x50:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "swift_attr";
      break;
    case 0x51:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "swiftcall";
      break;
    case 0x52:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "sysv_abi";
      break;
    case 0x53:
      result = sub_75B660(a1);
      break;
    case 0x54:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "_Nullable";
      break;
    case 0x55:
      result = sub_75F180(a1);
      break;
    case 0x56:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "annotate";
      break;
    case 0x57:
      result = sub_73C320(a1);
      break;
    case 0x58:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "swift_async_context";
      break;
    case 0x59:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "swift_context";
      break;
    case 0x5A:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "swift_error_result";
      break;
    case 0x5B:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "swift_indirect_result";
      break;
    case 0x5C:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "cf_consumed";
      break;
    case 0x5D:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "carries_dependency";
      break;
    case 0x5E:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "ns_consumed";
      break;
    case 0x5F:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "nonnull";
      break;
    case 0x60:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "os_consumed";
      break;
    case 0x61:
      result = sub_74FF40(a1);
      break;
    case 0x62:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "release_handle";
      break;
    case 0x63:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "use_handle";
      break;
    case 0x64:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "packoffset";
      break;
    case 0x65:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "SV_DispatchThreadID";
      break;
    case 0x66:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "SV_GroupID";
      break;
    case 0x67:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "SV_GroupIndex";
      break;
    case 0x68:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "SV_GroupThreadID";
      break;
    case 0x69:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "amdgpu_flat_work_group_size";
      break;
    case 0x6A:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "amdgpu_max_num_work_groups";
      break;
    case 0x6B:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "amdgpu_num_sgpr";
      break;
    case 0x6C:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "amdgpu_num_vgpr";
      break;
    case 0x6D:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "amdgpu_waves_per_eu";
      break;
    case 0x6E:
    case 0x6F:
    case 0x7B:
    case 0xEC:
    case 0xF2:
    case 0xFC:
    case 0x14A:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "interrupt";
      break;
    case 0x70:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "signal";
      break;
    case 0x71:
      result = sub_725E20(a1);
      break;
    case 0x72:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "acquired_after";
      break;
    case 0x73:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "acquired_before";
      break;
    case 0x74:
    case 0x75:
    case 0x8F:
    case 0xA0:
    case 0xA7:
    case 0xBE:
    case 0xC0:
    case 0xDC:
    case 0xF4:
    case 0xF5:
    case 0x11C:
    case 0x11E:
    case 0x121:
    case 0x140:
    case 0x141:
    case 0x142:
    case 0x143:
    case 0x144:
    case 0x161:
    case 0x169:
    case 0x16A:
    case 0x19C:
    case 0x19E:
    case 0x1AB:
    case 0x1AC:
      result = "(No spelling)";
      break;
    case 0x76:
      result = sub_727B20(a1);
      break;
    case 0x77:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "alloc_align";
      break;
    case 0x78:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "alloc_size";
      break;
    case 0x79:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "always_destroy";
      break;
    case 0x7A:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "analyzer_noreturn";
      break;
    case 0x7C:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "no_caller_saved_registers";
      break;
    case 0x7D:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "objc_arc_weak_reference_unavailable";
      break;
    case 0x7E:
      result = sub_729F60(a1);
      break;
    case 0x7F:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "__clang_arm_builtin_alias";
      break;
    case 0x80:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "__arm_locally_streaming";
      break;
    case 0x81:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "__arm_new";
      break;
    case 0x82:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "artificial";
      break;
    case 0x83:
      result = sub_72C7E0(a1);
      break;
    case 0x84:
      result = sub_72CCE0(a1);
      break;
    case 0x85:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "assert_exclusive_lock";
      break;
    case 0x86:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "assert_shared_lock";
      break;
    case 0x87:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "assume_aligned";
      break;
    case 0x88:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "availability";
      break;
    case 0x89:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "available_only_in_default_eval_method";
      break;
    case 0x8A:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "bpf_fastcall";
      break;
    case 0x8B:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "preserve_access_index";
      break;
    case 0x8C:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "preserve_static_offset";
      break;
    case 0x8D:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "btf_decl_tag";
      break;
    case 0x8E:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "blocks";
      break;
    case 0x90:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "_Noreturn";
      break;
    case 0x91:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "cf_audited_transfer";
      break;
    case 0x92:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "guard";
      break;
    case 0x93:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "cfi_canonical_jump_table";
      break;
    case 0x94:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "cf_returns_not_retained";
      break;
    case 0x95:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "cf_returns_retained";
      break;
    case 0x96:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "cf_unknown_transfer";
      break;
    case 0x97:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "cpu_dispatch";
      break;
    case 0x98:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "cpu_specific";
      break;
    case 0x99:
      result = sub_730ED0(a1);
      break;
    case 0x9A:
      result = sub_731110(a1);
      break;
    case 0x9B:
      result = (char *)sub_731280(a1);
      break;
    case 0x9C:
      result = (char *)sub_7313F0(a1);
      break;
    case 0x9D:
      result = sub_731560(a1);
      break;
    case 0x9E:
      result = sub_7316D0(a1);
      break;
    case 0x9F:
      result = sub_731910(a1);
      break;
    case 0xA1:
      result = sub_731E80(a1);
      break;
    case 0xA2:
      result = sub_731FF0(a1);
      break;
    case 0xA3:
      result = sub_732140(a1);
      break;
    case 0xA4:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "callable_when";
      break;
    case 0xA5:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "callback";
      break;
    case 0xA6:
      result = sub_7334C0(a1);
      break;
    case 0xA8:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "cleanup";
      break;
    case 0xA9:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "clspv_libclc_builtin";
      break;
    case 0xAA:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "cmse_nonsecure_entry";
      break;
    case 0xAB:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "model";
      break;
    case 0xAC:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "code_seg";
      break;
    case 0xAD:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "cold";
      break;
    case 0xAE:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "common";
      break;
    case 0xAF:
      result = sub_734AD0(a1);
      break;
    case 0xB0:
      result = sub_734D60(a1);
      break;
    case 0xB1:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "constructor";
      break;
    case 0xB2:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "consumable";
      break;
    case 0xB3:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "consumable_auto_cast_state";
      break;
    case 0xB4:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "consumable_set_state_on_read";
      break;
    case 0xB5:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "convergent";
      break;
    case 0xB6:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "coro_await_elidable";
      break;
    case 0xB7:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "coro_await_elidable_argument";
      break;
    case 0xB8:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "coro_disable_lifetimebound";
      break;
    case 0xB9:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "coro_lifetimebound";
      break;
    case 0xBA:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "coro_only_destroy_when_complete";
      break;
    case 0xBB:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "coro_return_type";
      break;
    case 0xBC:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "coro_wrapper";
      break;
    case 0xBD:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "dllexport";
      break;
    case 0xBF:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "dllimport";
      break;
    case 0xC1:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "deprecated";
      break;
    case 0xC2:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "destructor";
      break;
    case 0xC3:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "diagnose_as_builtin";
      break;
    case 0xC4:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "diagnose_if";
      break;
    case 0xC5:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "disable_sanitizer_instrumentation";
      break;
    case 0xC6:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "disable_tail_calls";
      break;
    case 0xC7:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "empty_bases";
      break;
    case 0xC8:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "enable_if";
      break;
    case 0xC9:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "enforce_tcb";
      break;
    case 0xCA:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "enforce_tcb_leaf";
      break;
    case 0xCB:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "enum_extensibility";
      break;
    case 0xCC:
      result = sub_7391D0(a1);
      break;
    case 0xCD:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "exclude_from_explicit_instantiation";
      break;
    case 0xCE:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "exclusive_trylock_function";
      break;
    case 0xCF:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "require_explicit_initialization";
      break;
    case 0xD0:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "external_source_symbol";
      break;
    case 0xD1:
      result = sub_73A350(a1);
      break;
    case 0xD2:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "flag_enum";
      break;
    case 0xD3:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "flatten";
      break;
    case 0xD4:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "format";
      break;
    case 0xD5:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "format_arg";
      break;
    case 0xD6:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "function_return";
      break;
    case 0xD7:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "gnu_inline";
      break;
    case 0xD8:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "guarded_by";
      break;
    case 0xD9:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "guarded_var";
      break;
    case 0xDA:
      result = sub_73B530(a1);
      break;
    case 0xDB:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "numthreads";
      break;
    case 0xDD:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "register";
      break;
    case 0xDE:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "shader";
      break;
    case 0xDF:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "WaveSize";
      break;
    case 0xE0:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "hot";
      break;
    case 0xE1:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "hybrid_patchable";
      break;
    case 0xE2:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "ibaction";
      break;
    case 0xE3:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "iboutlet";
      break;
    case 0xE4:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "iboutletcollection";
      break;
    case 0xE5:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "init_priority";
      break;
    case 0xE6:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "internal_linkage";
      break;
    case 0xE7:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "lto_visibility_public";
      break;
    case 0xE8:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "layout_version";
      break;
    case 0xE9:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "leaf";
      break;
    case 0xEA:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "lock_returned";
      break;
    case 0xEB:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "locks_excluded";
      break;
    case 0xED:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "mig_server_routine";
      break;
    case 0xEE:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "allocator";
      break;
    case 0xEF:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "constexpr";
      break;
    case 0xF0:
      result = (char *)sub_741580(a1);
      break;
    case 0xF1:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "novtable";
      break;
    case 0xF3:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "ms_struct";
      break;
    case 0xF6:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "may_alias";
      break;
    case 0xF7:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "maybe_undef";
      break;
    case 0xF8:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "micromips";
      break;
    case 0xF9:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "minsize";
      break;
    case 0xFA:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "min_vector_width";
      break;
    case 0xFB:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "mips16";
      break;
    case 0xFD:
      result = sub_742B90(a1);
      break;
    case 0xFE:
      result = sub_742D20(a1);
      break;
    case 0xFF:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "ns_consumes_self";
      break;
    case 0x100:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "ns_error_domain";
      break;
    case 0x101:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "ns_returns_autoreleased";
      break;
    case 0x102:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "ns_returns_not_retained";
      break;
    case 0x103:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "nvptx_kernel";
      break;
    case 0x104:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "naked";
      break;
    case 0x105:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "noalias";
      break;
    case 0x106:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "nocommon";
      break;
    case 0x107:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "noconvergent";
      break;
    case 0x108:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "nodebug";
      break;
    case 0x109:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "no_destroy";
      break;
    case 0x10A:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "noduplicate";
      break;
    case 0x10B:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "no_instrument_function";
      break;
    case 0x10C:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "nomicromips";
      break;
    case 0x10D:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "nomips16";
      break;
    case 0x10E:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "no_profile_instrument_function";
      break;
    case 0x10F:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "no_randomize_layout";
      break;
    case 0x110:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "noreturn";
      break;
    case 0x111:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "no_sanitize";
      break;
    case 0x112:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "no_specializations";
      break;
    case 0x113:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "no_speculative_load_hardening";
      break;
    case 0x114:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "no_split_stack";
      break;
    case 0x115:
      result = sub_746B40(a1);
      break;
    case 0x116:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "no_thread_safety_analysis";
      break;
    case 0x117:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "nothrow";
      break;
    case 0x118:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "no_init_all";
      break;
    case 0x119:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "no_unique_address";
      break;
    case 0x11A:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "nouwtable";
      break;
    case 0x11B:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "not_tail_called";
      break;
    case 0x11F:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "declare target";
      break;
    case 0x120:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "declare variant";
      break;
    case 0x122:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "os_consumes_this";
      break;
    case 0x123:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "os_returns_not_retained";
      break;
    case 0x124:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "os_returns_retained";
      break;
    case 0x125:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "os_returns_retained_on_non_zero";
      break;
    case 0x126:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "os_returns_retained_on_zero";
      break;
    case 0x127:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "objc_bridge";
      break;
    case 0x128:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "objc_bridge_mutable";
      break;
    case 0x129:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "objc_bridge_related";
      break;
    case 0x12A:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "objc_exception";
      break;
    case 0x12B:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "objc_protocol_requires_explicit_implementation";
      break;
    case 0x12C:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "objc_externally_retained";
      break;
    case 0x12D:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "objc_independent_class";
      break;
    case 0x12E:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "objc_method_family";
      break;
    case 0x12F:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "NSObject";
      break;
    case 0x130:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "objc_precise_lifetime";
      break;
    case 0x131:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "objc_requires_property_definitions";
      break;
    case 0x132:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "objc_requires_super";
      break;
    case 0x133:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "objc_returns_inner_pointer";
      break;
    case 0x134:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "objc_root_class";
      break;
    case 0x135:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "objc_subclassing_restricted";
      break;
    case 0x136:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "intel_reqd_sub_group_size";
      break;
    case 0x137:
      result = sub_74DDF0(a1);
      break;
    case 0x138:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "optnone";
      break;
    case 0x139:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "override";
      break;
    case 0x13A:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "Owner";
      break;
    case 0x13B:
      result = sub_74F740(a1);
      break;
    case 0x13C:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "packed";
      break;
    case 0x13D:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "param_typestate";
      break;
    case 0x13E:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "patchable_function_entry";
      break;
    case 0x13F:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "Pointer";
      break;
    case 0x145:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "preferred_name";
      break;
    case 0x146:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "preferred_type";
      break;
    case 0x147:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "pt_guarded_by";
      break;
    case 0x148:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "pt_guarded_var";
      break;
    case 0x149:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "pure";
      break;
    case 0x14B:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "randomize_layout";
      break;
    case 0x14C:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "enforce_read_only_placement";
      break;
    case 0x14D:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "reinitializes";
      break;
    case 0x14E:
      result = (char *)sub_753510(a1);
      break;
    case 0x14F:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "reqd_work_group_size";
      break;
    case 0x150:
      result = (char *)sub_7542A0(a1);
      break;
    case 0x151:
      result = sub_754460(a1);
      break;
    case 0x152:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "retain";
      break;
    case 0x153:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "return_typestate";
      break;
    case 0x154:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "returns_nonnull";
      break;
    case 0x155:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "returns_twice";
      break;
    case 0x156:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "sycl_kernel";
      break;
    case 0x157:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "sycl_kernel_entry_point";
      break;
    case 0x158:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "sycl_special_class";
      break;
    case 0x159:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "scoped_lockable";
      break;
    case 0x15A:
      result = sub_755940(a1);
      break;
    case 0x15B:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "selectany";
      break;
    case 0x15C:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "sentinel";
      break;
    case 0x15D:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "set_typestate";
      break;
    case 0x15E:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "shared_trylock_function";
      break;
    case 0x15F:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "speculative_load_hardening";
      break;
    case 0x160:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "standalone_debug";
      break;
    case 0x162:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "strict_gs_check";
      break;
    case 0x163:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "swift_async";
      break;
    case 0x164:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "swift_async_error";
      break;
    case 0x165:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "swift_async_name";
      break;
    case 0x166:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "swift_bridge";
      break;
    case 0x167:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "swift_bridged_typedef";
      break;
    case 0x168:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "swift_error";
      break;
    case 0x16B:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "swift_name";
      break;
    case 0x16C:
      result = sub_759950(a1);
      break;
    case 0x16D:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "swift_private";
      break;
    case 0x16E:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "tls_model";
      break;
    case 0x16F:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "target";
      break;
    case 0x170:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "target_clones";
      break;
    case 0x171:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "target_version";
      break;
    case 0x172:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "test_typestate";
      break;
    case 0x173:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "transparent_union";
      break;
    case 0x174:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "trivial_abi";
      break;
    case 0x175:
      result = sub_75C0B0(a1);
      break;
    case 0x176:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "type_tag_for_datatype";
      break;
    case 0x177:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "type_visibility";
      break;
    case 0x178:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "unavailable";
      break;
    case 0x179:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "uninitialized";
      break;
    case 0x17A:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "unsafe_buffer_usage";
      break;
    case 0x17B:
      result = sub_75DA60(a1);
      break;
    case 0x17C:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "used";
      break;
    case 0x17D:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "using_if_exists";
      break;
    case 0x17E:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "uuid";
      break;
    case 0x17F:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "ptrauth_vtable_pointer";
      break;
    case 0x180:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "vecreturn";
      break;
    case 0x181:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "vec_type_hint";
      break;
    case 0x182:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "visibility";
      break;
    case 0x183:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "warn_unused";
      break;
    case 0x184:
      result = sub_75FA80(a1);
      break;
    case 0x185:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "weak";
      break;
    case 0x186:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "weak_import";
      break;
    case 0x187:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "weakref";
      break;
    case 0x188:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "export_name";
      break;
    case 0x189:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "import_module";
      break;
    case 0x18A:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "import_name";
      break;
    case 0x18B:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "work_group_size_hint";
      break;
    case 0x18C:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "force_align_arg_pointer";
      break;
    case 0x18D:
      result = sub_761130(a1);
      break;
    case 0x18E:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "xray_log_args";
      break;
    case 0x18F:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "zero_call_used_regs";
      break;
    case 0x190:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "abi_tag";
      break;
    case 0x191:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "alias";
      break;
    case 0x192:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "align_value";
      break;
    case 0x193:
      result = sub_72F490(a1);
      break;
    case 0x194:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "called_once";
      break;
    case 0x195:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "ifunc";
      break;
    case 0x196:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "init_seg";
      break;
    case 0x197:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "loader_uninitialized";
      break;
    case 0x198:
      result = sub_740B40(a1);
      break;
    case 0x199:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "mode";
      break;
    case 0x19A:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "no_builtin";
      break;
    case 0x19B:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "noescape";
      break;
    case 0x19D:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "declare simd";
      break;
    case 0x19F:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "objc_boxable";
      break;
    case 0x1A0:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "objc_class_stub";
      break;
    case 0x1A1:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "objc_designated_initializer";
      break;
    case 0x1A2:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "objc_direct";
      break;
    case 0x1A3:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "objc_direct_members";
      break;
    case 0x1A4:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "objc_nonlazy_class";
      break;
    case 0x1A5:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "objc_non_runtime_protocol";
      break;
    case 0x1A6:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "objc_runtime_name";
      break;
    case 0x1A7:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "objc_runtime_visible";
      break;
    case 0x1A8:
      result = sub_74D380(a1);
      break;
    case 0x1A9:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "overloadable";
      break;
    case 0x1AA:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "swift_objc_members";
      break;
    case 0x1AD:
      if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
        sub_C4A760(a1);
      result = "thread";
      break;
  }
  return result;
}

