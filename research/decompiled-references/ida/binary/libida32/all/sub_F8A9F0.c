__m128i *__fastcall sub_F8A9F0(__m128i *a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  char **v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rax
  char **v9; // rax
  void *v10; // rax
  char **v11; // rax
  char **v12; // rax
  __m128i v13; // [rsp+10h] [rbp-78h] BYREF
  __int64 v14; // [rsp+20h] [rbp-68h]
  _QWORD v15[4]; // [rsp+30h] [rbp-58h] BYREF
  int v16; // [rsp+50h] [rbp-38h]
  __int64 v17; // [rsp+54h] [rbp-34h]
  int v18; // [rsp+5Ch] [rbp-2Ch]

  switch ( a4 )
  {
    case 0LL:
      goto LABEL_2;
    case 7089LL:
      if ( !memcmp(
              "NSObjectOwnerPointerRootSignatureWaveSize_Alignas_Nonnull_Noreturn_Null_unspecified_Nullable_Nullable_resu"
              "lt__arm_agnostic__arm_in__arm_inout__arm_locally_streaming__arm_new__arm_out__arm_preserves__arm_streaming"
              "__arm_streaming_compatible__asm____cdecl__clang_arm_builtin_alias__clang_arm_mve_strict_polymorphism__cons"
              "t__constant__constant____cudart_builtin____device____device_builtin____device_builtin_surface_type____devi"
              "ce_builtin_texture_type____fastcall__forceinline__funcref__generic__global__global____grid_constant____hos"
              "t____kernel__kindof__launch_bounds____local__managed____multiple_inheritance__noinline____pascal__private_"
              "_ptr32__ptr64__ptrauth__read_only__read_write__regcall__shared____single_inheritance__sptr__stdcall__thisc"
              "all__unsafe_unretained__unspecified_inheritance__uptr__vectorcall__virtual_inheritance__w64__write_only_cd"
              "ecl_fastcall_pascal_stdcall_thiscall_vectorcallaarch64_sve_pcsaarch64_vector_pcsabi_tagacquire_capabilitya"
              "cquire_handleacquire_shared_capabilityacquired_afteracquired_beforeaddress_spacealiasalignalign_valuealign"
              "asalignedalloc_alignalloc_sizeallocateallocatingallocatoralways_destroyalways_inlineamdgpu_flat_work_group"
              "_sizeamdgpu_kernelamdgpu_max_num_work_groupsamdgpu_num_sgpramdgpu_num_vgpramdgpu_waves_per_euanalyzer_nore"
              "turnannotateannotate_typeargument_with_type_tagarm_sve_vector_bitsartificialasmassert_capabilityassert_exc"
              "lusive_lockassert_shared_capabilityassert_shared_lockassumeassume_alignedatomicavailabilityavailable_only_"
              "in_default_eval_methodblockingblocksboundedbpf_fastcallbranchbtf_decl_tagbtf_type_tagbuiltin_aliascallable"
              "_whencallbackcalled_oncecapabilitycarries_dependencycdeclcf_audited_transfercf_consumedcf_returns_not_reta"
              "inedcf_returns_retainedcf_unknown_transfercfi_canonical_jump_tablecfi_unchecked_calleeclang_builtin_aliasc"
              "leanupclspv_libclc_builtincmse_nonsecure_callcmse_nonsecure_entrycode_aligncode_segcoldcommonconstconstant"
              "constant_idconstexprconstinitconstructorconsumableconsumable_auto_cast_stateconsumable_set_state_on_readco"
              "ntained_typeconvergentcoro_await_elidablecoro_await_elidable_argumentcoro_disable_lifetimeboundcoro_lifeti"
              "meboundcoro_only_destroy_when_completecoro_return_typecoro_wrappercounted_bycounted_by_or_nullcpu_dispatch"
              "cpu_specificcudart_builtindeclare simddeclare targetdeclare variantdeprecateddestructordevicedevice_builti"
              "ndevice_builtin_surface_typedevice_builtin_texture_typedevice_kerneldiagnose_as_builtindiagnose_ifdisable_"
              "sanitizer_instrumentationdisable_tail_callsdllexportdllimportempty_basesenable_ifenforce_read_only_placeme"
              "ntenforce_tcbenforce_tcb_leafenum_extensibilityerrorexclude_from_explicit_instantiationexclusive_lock_func"
              "tionexclusive_locks_requiredexclusive_trylock_functionexport_nameext_builtin_inputext_vector_typeexternal_"
              "source_symbolfallthroughfarfastcallfinalflag_enumflattenforce_align_arg_pointerformatformat_argformat_matc"
              "hesfunction_returngenericglobalgnu_inlinegrid_constantgroupsharedguardguarded_byguarded_varhosthothybrid_p"
              "atchableibactioniboutletiboutletcollectionifuncimport_moduleimport_nameininit_priorityinit_seginoutintel_o"
              "cl_biccintel_reqd_sub_group_sizeinternal_linkageinterruptinterrupt_save_fpis_rovkernellaunch_boundslayout_"
              "versionleaflifetime_capture_bylifetimeboundlikelyloader_uninitializedlocallock_returnedlockablelocks_exclu"
              "dedlong_calllooplto_visibility_publicm68k_rtdmallocmanagedmatrix_typemay_aliasmaybe_undefmaybe_unusedmicro"
              "mipsmig_server_routinemin_vector_widthminsizemips16modemodelms_abims_structmusttailnakednearneon_polyvecto"
              "r_typeneon_vector_typeno_address_safety_analysisno_builtinno_caller_saved_registersno_destroyno_init_allno"
              "_instrument_functionno_profile_instrument_functionno_randomize_layoutno_sanitizeno_sanitize_addressno_sani"
              "tize_memoryno_sanitize_threadno_specializationsno_speculative_load_hardeningno_split_stackno_stack_protect"
              "orno_thread_safety_analysisno_unique_addressnoaliasnocf_checknocommonnoconvergentnodebugnoderefnodiscardno"
              "duplicatenoescapenoinlinenomergenomicromipsnomips16nonallocatingnonblockingnonnullnonstringnoreturnnosvmno"
              "t_tail_callednothrownounrollnounroll_and_jamnouwtablenovtablens_consumedns_consumes_selfns_error_domainns_"
              "returns_autoreleasedns_returns_not_retainedns_returns_retainednumthreadsnv_weaknvptx_kernelobjc_arc_weak_r"
              "eference_unavailableobjc_boxableobjc_bridgeobjc_bridge_mutableobjc_bridge_relatedobjc_class_stubobjc_desig"
              "nated_initializerobjc_directobjc_direct_membersobjc_exceptionobjc_externally_retainedobjc_gcobjc_independe"
              "nt_classobjc_method_familyobjc_non_runtime_protocolobjc_nonlazy_classobjc_ownershipobjc_precise_lifetimeob"
              "jc_protocol_requires_explicit_implementationobjc_requires_property_definitionsobjc_requires_superobjc_retu"
              "rns_inner_pointerobjc_root_classobjc_runtime_nameobjc_runtime_visibleobjc_subclassing_restrictedopencl_con"
              "stantopencl_genericopencl_globalopencl_global_deviceopencl_global_hostopencl_localopencl_privateopencl_unr"
              "oll_hintoptnoneos_consumedos_consumes_thisos_returns_not_retainedos_returns_retainedos_returns_retained_on"
              "_non_zeroos_returns_retained_on_zerooutoverloadableoverrideownership_holdsownership_returnsownership_takes"
              "packedpackoffsetparam_typestatepascalpass_dynamic_object_sizepass_object_sizepatchable_function_entrypcspo"
              "inter_with_type_tagpreferred_namepreferred_typepreserve_access_indexpreserve_allpreserve_mostpreserve_none"
              "preserve_static_offsetprivatepropertypt_guarded_bypt_guarded_varptrauth_vtable_pointerpurerandomize_layout"
              "raw_bufferread_onlyread_writereentrant_capabilityregcallregisterregparmreinitializesrelease_capabilityrele"
              "ase_generic_capabilityrelease_handlerelease_shared_capabilityreplaceable_if_eligiblereqd_work_group_sizere"
              "quire_constant_initializationrequire_explicit_initializationrequires_capabilityrequires_shared_capabilityr"
              "esource_classrestrictretainreturn_typestatereturns_nonnullreturns_twiceriscv_rvv_vector_bitsriscv_vector_c"
              "criscv_vls_ccroutinesafebuffersscoped_lockablesealedsectionselectanysentinelset_typestateshadersharedshare"
              "d_capabilityshared_lock_functionshared_locks_requiredshared_trylock_functionshort_callsignalsized_bysized_"
              "by_or_nullspeculative_load_hardeningstandalone_debugstdcallstrict_gs_checksuppresssv_dispatchthreadidsv_gr"
              "oupidsv_groupindexsv_groupthreadidsv_positionswift_asyncswift_async_contextswift_async_errorswift_async_na"
              "meswift_attrswift_bridgeswift_bridged_typedefswift_contextswift_errorswift_error_resultswift_indirect_resu"
              "ltswift_nameswift_newtypeswift_objc_membersswift_privateswift_wrapperswiftasynccallswiftcallsycl_kernelsyc"
              "l_kernel_entry_pointsycl_special_classsysv_abitargettarget_clonestarget_versiontest_typestatethiscallthrea"
              "dtls_modeltransparent_uniontrivial_abitrivially_relocatable_if_eligibletry_acquire_capabilitytry_acquire_s"
              "hared_capabilitytype_tag_for_datatypetype_visibilityunavailableuninitializedunlikelyunlock_functionunrollu"
              "nroll_and_jamunsafe_buffer_usageunuseduse_handleusedusing_if_existsuuidvec_type_hintvecreturnvector_ccvect"
              "or_sizevectorcallvisibilityvls_ccwarn_unusedwarn_unused_resultwarningweakweak_importweakrefwork_group_size"
              "_hintwrite_onlyxray_always_instrumentxray_log_argsxray_never_instrumentzero_call_used_regsacc",
              a3,
              0x1BB1u) )
        goto LABEL_2;
      a4 = 7089;
      break;
    case 5LL:
      if ( *(_DWORD *)a3 == 1851878499 )
      {
        v11 = &off_2B22400;
        if ( a3[4] == 103 )
        {
LABEL_23:
          v10 = v11 + 1;
          goto LABEL_30;
        }
      }
      if ( *(_DWORD *)a3 == 1668508018 && a3[4] == 118 )
      {
        v9 = (char **)&off_2B22420;
        goto LABEL_19;
      }
      break;
    case 3LL:
      if ( *(_WORD *)a3 == 28263 )
      {
        v12 = &off_2B22400;
        if ( a3[2] == 117 )
        {
LABEL_29:
          v10 = v12 + 2;
LABEL_30:
          if ( v10 != &unk_2B22448 )
            goto LABEL_2;
          break;
        }
      }
      if ( *(_WORD *)a3 == 29543 )
      {
        v9 = &off_2B22400;
        if ( a3[2] == 108 )
        {
LABEL_19:
          v10 = v9 + 3;
          goto LABEL_30;
        }
      }
      if ( *(_WORD *)a3 == 28015 && a3[2] == 112 )
      {
        v12 = (char **)&off_2B22420;
        goto LABEL_29;
      }
      break;
    case 4LL:
      if ( *(_DWORD *)a3 == 1819503720 )
        goto LABEL_2;
      if ( *(_DWORD *)a3 != 1668707181 )
        break;
      v11 = (char **)&off_2B22420;
      goto LABEL_23;
    default:
      if ( a4 == 2 && *(_WORD *)a3 == 27510 )
        goto LABEL_2;
      break;
  }
  v15[3] = a4;
  v15[2] = a3;
  v6 = &off_2B22400;
  v15[0] = 0;
  v15[1] = 0;
  v18 = 0;
  v16 = (a4 + 2) / 3uLL;
  v17 = (unsigned int)(v16 + 1);
  do
  {
    v7 = (__int64)*v6++;
    sub_FF68E0(v15, v7);
  }
  while ( &unk_2B22448 != (_UNKNOWN *)v6 );
  sub_FF6A10(&v13, v15);
  if ( (_BYTE)v14 )
  {
    v8 = v14;
    *a1 = _mm_load_si128(&v13);
    a1[1].m128i_i64[0] = v8;
    return a1;
  }
LABEL_2:
  a1[1].m128i_i8[0] = 0;
  return a1;
}

