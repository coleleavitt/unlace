void __fastcall sub_E46020(__int64 a1, unsigned __int64 a2)
{
  const char *v2; // r15
  size_t v3; // rax
  size_t v4; // rax
  size_t v5; // rax
  char v6; // bl
  size_t v7; // rax
  char v8; // bl
  size_t v9; // rax
  unsigned __int16 v10; // ax
  __int64 v11; // [rsp+8h] [rbp-A0h] BYREF
  _QWORD v12[2]; // [rsp+10h] [rbp-98h] BYREF
  __m128i v13; // [rsp+20h] [rbp-88h] BYREF
  __int64 v14; // [rsp+30h] [rbp-78h] BYREF
  _OWORD v15[6]; // [rsp+40h] [rbp-68h] BYREF

  switch ( *(_WORD *)(a2 + 36) )
  {
    case 0:
      v2 = "AddressSpaceAttr";
      break;
    case 1:
      v2 = "AllocatingAttr";
      break;
    case 2:
      v2 = "AnnotateTypeAttr";
      break;
    case 3:
      v2 = "ArmAgnosticAttr";
      break;
    case 4:
      v2 = "ArmInAttr";
      break;
    case 5:
      v2 = "ArmInOutAttr";
      break;
    case 6:
      v2 = "ArmMveStrictPolymorphismAttr";
      break;
    case 7:
      v2 = "ArmOutAttr";
      break;
    case 8:
      v2 = "ArmPreservesAttr";
      break;
    case 9:
      v2 = "ArmStreamingAttr";
      break;
    case 0xA:
      v2 = "ArmStreamingCompatibleAttr";
      break;
    case 0xB:
      v2 = "BTFTypeTagAttr";
      break;
    case 0xC:
      v2 = "BlockingAttr";
      break;
    case 0xD:
      v2 = "CFIUncheckedCalleeAttr";
      break;
    case 0xE:
      v2 = "CmseNSCallAttr";
      break;
    case 0xF:
      v2 = "ExtVectorTypeAttr";
      break;
    case 0x10:
      v2 = "HLSLContainedTypeAttr";
      break;
    case 0x11:
      v2 = "HLSLGroupSharedAddressSpaceAttr";
      break;
    case 0x12:
      v2 = "HLSLROVAttr";
      break;
    case 0x13:
      v2 = "HLSLRawBufferAttr";
      break;
    case 0x14:
      v2 = "HLSLResourceClassAttr";
      break;
    case 0x15:
      v2 = "NoDerefAttr";
      break;
    case 0x16:
      v2 = "NonAllocatingAttr";
      break;
    case 0x17:
      v2 = "NonBlockingAttr";
      break;
    case 0x18:
      v2 = "ObjCGCAttr";
      break;
    case 0x19:
      v2 = "ObjCInertUnsafeUnretainedAttr";
      break;
    case 0x1A:
      v2 = "ObjCKindOfAttr";
      break;
    case 0x1B:
      v2 = "OpenCLConstantAddressSpaceAttr";
      break;
    case 0x1C:
      v2 = "OpenCLGenericAddressSpaceAttr";
      break;
    case 0x1D:
      v2 = "OpenCLGlobalAddressSpaceAttr";
      break;
    case 0x1E:
      v2 = "OpenCLGlobalDeviceAddressSpaceAttr";
      break;
    case 0x1F:
      v2 = "OpenCLGlobalHostAddressSpaceAttr";
      break;
    case 0x20:
      v2 = "OpenCLLocalAddressSpaceAttr";
      break;
    case 0x21:
      v2 = "OpenCLPrivateAddressSpaceAttr";
      break;
    case 0x22:
      v2 = "PointerAuthAttr";
      break;
    case 0x23:
      v2 = "Ptr32Attr";
      break;
    case 0x24:
      v2 = "Ptr64Attr";
      break;
    case 0x25:
      v2 = "SPtrAttr";
      break;
    case 0x26:
      v2 = "TypeNonNullAttr";
      break;
    case 0x27:
      v2 = "TypeNullUnspecifiedAttr";
      break;
    case 0x28:
      v2 = "TypeNullableResultAttr";
      break;
    case 0x29:
      v2 = "UPtrAttr";
      break;
    case 0x2A:
      v2 = "WebAssemblyFuncrefAttr";
      break;
    case 0x2B:
      v2 = "AtomicAttr";
      break;
    case 0x2C:
      v2 = "CXXAssumeAttr";
      break;
    case 0x2D:
      v2 = "CodeAlignAttr";
      break;
    case 0x2E:
      v2 = "FallThroughAttr";
      break;
    case 0x2F:
      v2 = "HLSLControlFlowHintAttr";
      break;
    case 0x30:
      v2 = "HLSLLoopHintAttr";
      break;
    case 0x31:
      v2 = "LikelyAttr";
      break;
    case 0x32:
      v2 = "MustTailAttr";
      break;
    case 0x33:
      v2 = "OpenCLUnrollHintAttr";
      break;
    case 0x34:
      v2 = "UnlikelyAttr";
      break;
    case 0x35:
      v2 = "AlwaysInlineAttr";
      break;
    case 0x36:
      v2 = "NoInlineAttr";
      break;
    case 0x37:
      v2 = "NoMergeAttr";
      break;
    case 0x38:
      v2 = "SuppressAttr";
      break;
    case 0x39:
      v2 = "AArch64SVEPcsAttr";
      break;
    case 0x3A:
      v2 = "AArch64VectorPcsAttr";
      break;
    case 0x3B:
      v2 = "AcquireHandleAttr";
      break;
    case 0x3C:
      v2 = "AnyX86NoCfCheckAttr";
      break;
    case 0x3D:
      v2 = "CDeclAttr";
      break;
    case 0x3E:
      v2 = "CountedByAttr";
      break;
    case 0x3F:
      v2 = "CountedByOrNullAttr";
      break;
    case 0x40:
      v2 = "DeviceKernelAttr";
      break;
    case 0x41:
      v2 = "FastCallAttr";
      break;
    case 0x42:
      v2 = "IntelOclBiccAttr";
      break;
    case 0x43:
      v2 = "LifetimeBoundAttr";
      break;
    case 0x44:
      v2 = "LifetimeCaptureByAttr";
      break;
    case 0x45:
      v2 = "M68kRTDAttr";
      break;
    case 0x46:
      v2 = "MSABIAttr";
      break;
    case 0x47:
      v2 = "NSReturnsRetainedAttr";
      break;
    case 0x48:
      v2 = "ObjCOwnershipAttr";
      break;
    case 0x49:
      v2 = "PascalAttr";
      break;
    case 0x4A:
      v2 = "PcsAttr";
      break;
    case 0x4B:
      v2 = "PreserveAllAttr";
      break;
    case 0x4C:
      v2 = "PreserveMostAttr";
      break;
    case 0x4D:
      v2 = "PreserveNoneAttr";
      break;
    case 0x4E:
      v2 = "RISCVVLSCCAttr";
      break;
    case 0x4F:
      v2 = "RISCVVectorCCAttr";
      break;
    case 0x50:
      v2 = "RegCallAttr";
      break;
    case 0x51:
      v2 = "SizedByAttr";
      break;
    case 0x52:
      v2 = "SizedByOrNullAttr";
      break;
    case 0x53:
      v2 = "StdCallAttr";
      break;
    case 0x54:
      v2 = "SwiftAsyncCallAttr";
      break;
    case 0x55:
      v2 = "SwiftAttrAttr";
      break;
    case 0x56:
      v2 = "SwiftCallAttr";
      break;
    case 0x57:
      v2 = "SysVABIAttr";
      break;
    case 0x58:
      v2 = "ThisCallAttr";
      break;
    case 0x59:
      v2 = "TypeNullableAttr";
      break;
    case 0x5A:
      v2 = "VectorCallAttr";
      break;
    case 0x5B:
      v2 = "AnnotateAttr";
      break;
    case 0x5C:
      v2 = "HLSLParamModifierAttr";
      break;
    case 0x5D:
      v2 = "SwiftAsyncContextAttr";
      break;
    case 0x5E:
      v2 = "SwiftContextAttr";
      break;
    case 0x5F:
      v2 = "SwiftErrorResultAttr";
      break;
    case 0x60:
      v2 = "SwiftIndirectResultAttr";
      break;
    case 0x61:
      v2 = "CFConsumedAttr";
      break;
    case 0x62:
      v2 = "CarriesDependencyAttr";
      break;
    case 0x63:
      v2 = "NSConsumedAttr";
      break;
    case 0x64:
      v2 = "NonNullAttr";
      break;
    case 0x65:
      v2 = "OSConsumedAttr";
      break;
    case 0x66:
      v2 = "PassObjectSizeAttr";
      break;
    case 0x67:
      v2 = "ReleaseHandleAttr";
      break;
    case 0x68:
      v2 = "UseHandleAttr";
      break;
    case 0x69:
      v2 = "HLSLPackOffsetAttr";
      break;
    case 0x6A:
      v2 = "HLSLSV_DispatchThreadIDAttr";
      break;
    case 0x6B:
      v2 = "HLSLSV_GroupIDAttr";
      break;
    case 0x6C:
      v2 = "HLSLSV_GroupIndexAttr";
      break;
    case 0x6D:
      v2 = "HLSLSV_GroupThreadIDAttr";
      break;
    case 0x6E:
      v2 = "HLSLSV_PositionAttr";
      break;
    case 0x6F:
      v2 = "AMDGPUFlatWorkGroupSizeAttr";
      break;
    case 0x70:
      v2 = "AMDGPUMaxNumWorkGroupsAttr";
      break;
    case 0x71:
      v2 = "AMDGPUNumSGPRAttr";
      break;
    case 0x72:
      v2 = "AMDGPUNumVGPRAttr";
      break;
    case 0x73:
      v2 = "AMDGPUWavesPerEUAttr";
      break;
    case 0x74:
      v2 = "ARMInterruptAttr";
      break;
    case 0x75:
      v2 = "ARMInterruptSaveFPAttr";
      break;
    case 0x76:
      v2 = "ARMSaveFPAttr";
      break;
    case 0x77:
      v2 = "AVRInterruptAttr";
      break;
    case 0x78:
      v2 = "AVRSignalAttr";
      break;
    case 0x79:
      v2 = "AcquireCapabilityAttr";
      break;
    case 0x7A:
      v2 = "AcquiredAfterAttr";
      break;
    case 0x7B:
      v2 = "AcquiredBeforeAttr";
      break;
    case 0x7C:
      v2 = "AlignMac68kAttr";
      break;
    case 0x7D:
      v2 = "AlignNaturalAttr";
      break;
    case 0x7E:
      v2 = "AlignedAttr";
      break;
    case 0x7F:
      v2 = "AllocAlignAttr";
      break;
    case 0x80:
      v2 = "AllocSizeAttr";
      break;
    case 0x81:
      v2 = "AlwaysDestroyAttr";
      break;
    case 0x82:
      v2 = "AnalyzerNoReturnAttr";
      break;
    case 0x83:
      v2 = "AnyX86InterruptAttr";
      break;
    case 0x84:
      v2 = "AnyX86NoCallerSavedRegistersAttr";
      break;
    case 0x85:
      v2 = "ArcWeakrefUnavailableAttr";
      break;
    case 0x86:
      v2 = "ArgumentWithTypeTagAttr";
      break;
    case 0x87:
      v2 = "ArmBuiltinAliasAttr";
      break;
    case 0x88:
      v2 = "ArmLocallyStreamingAttr";
      break;
    case 0x89:
      v2 = "ArmNewAttr";
      break;
    case 0x8A:
      v2 = "ArtificialAttr";
      break;
    case 0x8B:
      v2 = "AsmLabelAttr";
      break;
    case 0x8C:
      v2 = "AssertCapabilityAttr";
      break;
    case 0x8D:
      v2 = "AssumeAlignedAttr";
      break;
    case 0x8E:
      v2 = "AvailabilityAttr";
      break;
    case 0x8F:
      v2 = "AvailableOnlyInDefaultEvalMethodAttr";
      break;
    case 0x90:
      v2 = "BPFFastCallAttr";
      break;
    case 0x91:
      v2 = "BPFPreserveAccessIndexAttr";
      break;
    case 0x92:
      v2 = "BPFPreserveStaticOffsetAttr";
      break;
    case 0x93:
      v2 = "BTFDeclTagAttr";
      break;
    case 0x94:
      v2 = "BlocksAttr";
      break;
    case 0x95:
      v2 = "BuiltinAttr";
      break;
    case 0x96:
      v2 = "C11NoReturnAttr";
      break;
    case 0x97:
      v2 = "CFAuditedTransferAttr";
      break;
    case 0x98:
      v2 = "CFGuardAttr";
      break;
    case 0x99:
      v2 = "CFICanonicalJumpTableAttr";
      break;
    case 0x9A:
      v2 = "CFReturnsNotRetainedAttr";
      break;
    case 0x9B:
      v2 = "CFReturnsRetainedAttr";
      break;
    case 0x9C:
      v2 = "CFUnknownTransferAttr";
      break;
    case 0x9D:
      v2 = "CPUDispatchAttr";
      break;
    case 0x9E:
      v2 = "CPUSpecificAttr";
      break;
    case 0x9F:
      v2 = "CUDAConstantAttr";
      break;
    case 0xA0:
      v2 = "CUDADeviceAttr";
      break;
    case 0xA1:
      v2 = "CUDADeviceBuiltinSurfaceTypeAttr";
      break;
    case 0xA2:
      v2 = "CUDADeviceBuiltinTextureTypeAttr";
      break;
    case 0xA3:
      v2 = "CUDAGlobalAttr";
      break;
    case 0xA4:
      v2 = "CUDAGridConstantAttr";
      break;
    case 0xA5:
      v2 = "CUDAHostAttr";
      break;
    case 0xA6:
      v2 = "CUDAInvalidTargetAttr";
      break;
    case 0xA7:
      v2 = "CUDALaunchBoundsAttr";
      break;
    case 0xA8:
      v2 = "CUDASharedAttr";
      break;
    case 0xA9:
      v2 = "CXX11NoReturnAttr";
      break;
    case 0xAA:
      v2 = "CallableWhenAttr";
      break;
    case 0xAB:
      v2 = "CallbackAttr";
      break;
    case 0xAC:
      v2 = "CapabilityAttr";
      break;
    case 0xAD:
      v2 = "CapturedRecordAttr";
      break;
    case 0xAE:
      v2 = "CleanupAttr";
      break;
    case 0xAF:
      v2 = "ClspvLibclcBuiltinAttr";
      break;
    case 0xB0:
      v2 = "CmseNSEntryAttr";
      break;
    case 0xB1:
      v2 = "CodeModelAttr";
      break;
    case 0xB2:
      v2 = "CodeSegAttr";
      break;
    case 0xB3:
      v2 = "ColdAttr";
      break;
    case 0xB4:
      v2 = "CommonAttr";
      break;
    case 0xB5:
      v2 = "ConstAttr";
      break;
    case 0xB6:
      v2 = "ConstInitAttr";
      break;
    case 0xB7:
      v2 = "ConstructorAttr";
      break;
    case 0xB8:
      v2 = "ConsumableAttr";
      break;
    case 0xB9:
      v2 = "ConsumableAutoCastAttr";
      break;
    case 0xBA:
      v2 = "ConsumableSetOnReadAttr";
      break;
    case 0xBB:
      v2 = "ConvergentAttr";
      break;
    case 0xBC:
      v2 = "CoroAwaitElidableAttr";
      break;
    case 0xBD:
      v2 = "CoroAwaitElidableArgumentAttr";
      break;
    case 0xBE:
      v2 = "CoroDisableLifetimeBoundAttr";
      break;
    case 0xBF:
      v2 = "CoroLifetimeBoundAttr";
      break;
    case 0xC0:
      v2 = "CoroOnlyDestroyWhenCompleteAttr";
      break;
    case 0xC1:
      v2 = "CoroReturnTypeAttr";
      break;
    case 0xC2:
      v2 = "CoroWrapperAttr";
      break;
    case 0xC3:
      v2 = "DLLExportAttr";
      break;
    case 0xC4:
      v2 = "DLLExportStaticLocalAttr";
      break;
    case 0xC5:
      v2 = "DLLImportAttr";
      break;
    case 0xC6:
      v2 = "DLLImportStaticLocalAttr";
      break;
    case 0xC7:
      v2 = "DeprecatedAttr";
      break;
    case 0xC8:
      v2 = "DestructorAttr";
      break;
    case 0xC9:
      v2 = "DiagnoseAsBuiltinAttr";
      break;
    case 0xCA:
      v2 = "DiagnoseIfAttr";
      break;
    case 0xCB:
      v2 = "DisableSanitizerInstrumentationAttr";
      break;
    case 0xCC:
      v2 = "DisableTailCallsAttr";
      break;
    case 0xCD:
      v2 = "EmptyBasesAttr";
      break;
    case 0xCE:
      v2 = "EnableIfAttr";
      break;
    case 0xCF:
      v2 = "EnforceTCBAttr";
      break;
    case 0xD0:
      v2 = "EnforceTCBLeafAttr";
      break;
    case 0xD1:
      v2 = "EnumExtensibilityAttr";
      break;
    case 0xD2:
      v2 = "ErrorAttr";
      break;
    case 0xD3:
      v2 = "ExcludeFromExplicitInstantiationAttr";
      break;
    case 0xD4:
      v2 = "ExplicitInitAttr";
      break;
    case 0xD5:
      v2 = "ExternalSourceSymbolAttr";
      break;
    case 0xD6:
      v2 = "FinalAttr";
      break;
    case 0xD7:
      v2 = "FlagEnumAttr";
      break;
    case 0xD8:
      v2 = "FlattenAttr";
      break;
    case 0xD9:
      v2 = "FormatAttr";
      break;
    case 0xDA:
      v2 = "FormatArgAttr";
      break;
    case 0xDB:
      v2 = "FormatMatchesAttr";
      break;
    case 0xDC:
      v2 = "FunctionReturnThunksAttr";
      break;
    case 0xDD:
      v2 = "GNUInlineAttr";
      break;
    case 0xDE:
      v2 = "GuardedByAttr";
      break;
    case 0xDF:
      v2 = "GuardedVarAttr";
      break;
    case 0xE0:
      v2 = "HIPManagedAttr";
      break;
    case 0xE1:
      v2 = "HLSLNumThreadsAttr";
      break;
    case 0xE2:
      v2 = "HLSLResourceBindingAttr";
      break;
    case 0xE3:
      v2 = "HLSLShaderAttr";
      break;
    case 0xE4:
      v2 = "HLSLVkConstantIdAttr";
      break;
    case 0xE5:
      v2 = "HLSLVkExtBuiltinInputAttr";
      break;
    case 0xE6:
      v2 = "HLSLWaveSizeAttr";
      break;
    case 0xE7:
      v2 = "HotAttr";
      break;
    case 0xE8:
      v2 = "HybridPatchableAttr";
      break;
    case 0xE9:
      v2 = "IBActionAttr";
      break;
    case 0xEA:
      v2 = "IBOutletAttr";
      break;
    case 0xEB:
      v2 = "IBOutletCollectionAttr";
      break;
    case 0xEC:
      v2 = "InferredNoReturnAttr";
      break;
    case 0xED:
      v2 = "InitPriorityAttr";
      break;
    case 0xEE:
      v2 = "InternalLinkageAttr";
      break;
    case 0xEF:
      v2 = "LTOVisibilityPublicAttr";
      break;
    case 0xF0:
      v2 = "LayoutVersionAttr";
      break;
    case 0xF1:
      v2 = "LeafAttr";
      break;
    case 0xF2:
      v2 = "LockReturnedAttr";
      break;
    case 0xF3:
      v2 = "LocksExcludedAttr";
      break;
    case 0xF4:
      v2 = "M68kInterruptAttr";
      break;
    case 0xF5:
      v2 = "MIGServerRoutineAttr";
      break;
    case 0xF6:
      v2 = "MSAllocatorAttr";
      break;
    case 0xF7:
      v2 = "MSConstexprAttr";
      break;
    case 0xF8:
      v2 = "MSInheritanceAttr";
      break;
    case 0xF9:
      v2 = "MSNoVTableAttr";
      break;
    case 0xFA:
      v2 = "MSP430InterruptAttr";
      break;
    case 0xFB:
      v2 = "MSStructAttr";
      break;
    case 0xFC:
      v2 = "MSVtorDispAttr";
      break;
    case 0xFD:
      v2 = "MaxFieldAlignmentAttr";
      break;
    case 0xFE:
      v2 = "MayAliasAttr";
      break;
    case 0xFF:
      v2 = "MaybeUndefAttr";
      break;
    case 0x100:
      v2 = "MicroMipsAttr";
      break;
    case 0x101:
      v2 = "MinSizeAttr";
      break;
    case 0x102:
      v2 = "MinVectorWidthAttr";
      break;
    case 0x103:
      v2 = "Mips16Attr";
      break;
    case 0x104:
      v2 = "MipsInterruptAttr";
      break;
    case 0x105:
      v2 = "MipsLongCallAttr";
      break;
    case 0x106:
      v2 = "MipsShortCallAttr";
      break;
    case 0x107:
      v2 = "NSConsumesSelfAttr";
      break;
    case 0x108:
      v2 = "NSErrorDomainAttr";
      break;
    case 0x109:
      v2 = "NSReturnsAutoreleasedAttr";
      break;
    case 0x10A:
      v2 = "NSReturnsNotRetainedAttr";
      break;
    case 0x10B:
      v2 = "NakedAttr";
      break;
    case 0x10C:
      v2 = "NoAliasAttr";
      break;
    case 0x10D:
      v2 = "NoCommonAttr";
      break;
    case 0x10E:
      v2 = "NoConvergentAttr";
      break;
    case 0x10F:
      v2 = "NoDebugAttr";
      break;
    case 0x110:
      v2 = "NoDestroyAttr";
      break;
    case 0x111:
      v2 = "NoDuplicateAttr";
      break;
    case 0x112:
      v2 = "NoInstrumentFunctionAttr";
      break;
    case 0x113:
      v2 = "NoMicroMipsAttr";
      break;
    case 0x114:
      v2 = "NoMips16Attr";
      break;
    case 0x115:
      v2 = "NoProfileFunctionAttr";
      break;
    case 0x116:
      v2 = "NoRandomizeLayoutAttr";
      break;
    case 0x117:
      v2 = "NoReturnAttr";
      break;
    case 0x118:
      v2 = "NoSanitizeAttr";
      break;
    case 0x119:
      v2 = "NoSpecializationsAttr";
      break;
    case 0x11A:
      v2 = "NoSpeculativeLoadHardeningAttr";
      break;
    case 0x11B:
      v2 = "NoSplitStackAttr";
      break;
    case 0x11C:
      v2 = "NoStackProtectorAttr";
      break;
    case 0x11D:
      v2 = "NoThreadSafetyAnalysisAttr";
      break;
    case 0x11E:
      v2 = "NoThrowAttr";
      break;
    case 0x11F:
      v2 = "NoTrivialAutoVarInitAttr";
      break;
    case 0x120:
      v2 = "NoUniqueAddressAttr";
      break;
    case 0x121:
      v2 = "NoUwtableAttr";
      break;
    case 0x122:
      v2 = "NonStringAttr";
      break;
    case 0x123:
      v2 = "NotTailCalledAttr";
      break;
    case 0x124:
      v2 = "OMPAllocateDeclAttr";
      break;
    case 0x125:
      v2 = "OMPAssumeAttr";
      break;
    case 0x126:
      v2 = "OMPCaptureNoInitAttr";
      break;
    case 0x127:
      v2 = "OMPDeclareTargetDeclAttr";
      break;
    case 0x128:
      v2 = "OMPDeclareVariantAttr";
      break;
    case 0x129:
      v2 = "OMPThreadPrivateDeclAttr";
      break;
    case 0x12A:
      v2 = "OSConsumesThisAttr";
      break;
    case 0x12B:
      v2 = "OSReturnsNotRetainedAttr";
      break;
    case 0x12C:
      v2 = "OSReturnsRetainedAttr";
      break;
    case 0x12D:
      v2 = "OSReturnsRetainedOnNonZeroAttr";
      break;
    case 0x12E:
      v2 = "OSReturnsRetainedOnZeroAttr";
      break;
    case 0x12F:
      v2 = "ObjCBridgeAttr";
      break;
    case 0x130:
      v2 = "ObjCBridgeMutableAttr";
      break;
    case 0x131:
      v2 = "ObjCBridgeRelatedAttr";
      break;
    case 0x132:
      v2 = "ObjCExceptionAttr";
      break;
    case 0x133:
      v2 = "ObjCExplicitProtocolImplAttr";
      break;
    case 0x134:
      v2 = "ObjCExternallyRetainedAttr";
      break;
    case 0x135:
      v2 = "ObjCIndependentClassAttr";
      break;
    case 0x136:
      v2 = "ObjCMethodFamilyAttr";
      break;
    case 0x137:
      v2 = "ObjCNSObjectAttr";
      break;
    case 0x138:
      v2 = "ObjCPreciseLifetimeAttr";
      break;
    case 0x139:
      v2 = "ObjCRequiresPropertyDefsAttr";
      break;
    case 0x13A:
      v2 = "ObjCRequiresSuperAttr";
      break;
    case 0x13B:
      v2 = "ObjCReturnsInnerPointerAttr";
      break;
    case 0x13C:
      v2 = "ObjCRootClassAttr";
      break;
    case 0x13D:
      v2 = "ObjCSubclassingRestrictedAttr";
      break;
    case 0x13E:
      v2 = "OpenACCRoutineAnnotAttr";
      break;
    case 0x13F:
      v2 = "OpenACCRoutineDeclAttr";
      break;
    case 0x140:
      v2 = "OpenCLIntelReqdSubGroupSizeAttr";
      break;
    case 0x141:
      v2 = "OptimizeNoneAttr";
      break;
    case 0x142:
      v2 = "OverrideAttr";
      break;
    case 0x143:
      v2 = "OwnerAttr";
      break;
    case 0x144:
      v2 = "OwnershipAttr";
      break;
    case 0x145:
      v2 = "PackedAttr";
      break;
    case 0x146:
      v2 = "ParamTypestateAttr";
      break;
    case 0x147:
      v2 = "PatchableFunctionEntryAttr";
      break;
    case 0x148:
      v2 = "PointerAttr";
      break;
    case 0x149:
      v2 = "PragmaClangBSSSectionAttr";
      break;
    case 0x14A:
      v2 = "PragmaClangDataSectionAttr";
      break;
    case 0x14B:
      v2 = "PragmaClangRelroSectionAttr";
      break;
    case 0x14C:
      v2 = "PragmaClangRodataSectionAttr";
      break;
    case 0x14D:
      v2 = "PragmaClangTextSectionAttr";
      break;
    case 0x14E:
      v2 = "PreferredNameAttr";
      break;
    case 0x14F:
      v2 = "PreferredTypeAttr";
      break;
    case 0x150:
      v2 = "PtGuardedByAttr";
      break;
    case 0x151:
      v2 = "PtGuardedVarAttr";
      break;
    case 0x152:
      v2 = "PureAttr";
      break;
    case 0x153:
      v2 = "RISCVInterruptAttr";
      break;
    case 0x154:
      v2 = "RandomizeLayoutAttr";
      break;
    case 0x155:
      v2 = "ReadOnlyPlacementAttr";
      break;
    case 0x156:
      v2 = "ReentrantCapabilityAttr";
      break;
    case 0x157:
      v2 = "ReinitializesAttr";
      break;
    case 0x158:
      v2 = "ReleaseCapabilityAttr";
      break;
    case 0x159:
      v2 = "ReplaceableAttr";
      break;
    case 0x15A:
      v2 = "ReqdWorkGroupSizeAttr";
      break;
    case 0x15B:
      v2 = "RequiresCapabilityAttr";
      break;
    case 0x15C:
      v2 = "RestrictAttr";
      break;
    case 0x15D:
      v2 = "RetainAttr";
      break;
    case 0x15E:
      v2 = "ReturnTypestateAttr";
      break;
    case 0x15F:
      v2 = "ReturnsNonNullAttr";
      break;
    case 0x160:
      v2 = "ReturnsTwiceAttr";
      break;
    case 0x161:
      v2 = "SYCLKernelEntryPointAttr";
      break;
    case 0x162:
      v2 = "SYCLSpecialClassAttr";
      break;
    case 0x163:
      v2 = "ScopedLockableAttr";
      break;
    case 0x164:
      v2 = "SectionAttr";
      break;
    case 0x165:
      v2 = "SelectAnyAttr";
      break;
    case 0x166:
      v2 = "SentinelAttr";
      break;
    case 0x167:
      v2 = "SetTypestateAttr";
      break;
    case 0x168:
      v2 = "SpeculativeLoadHardeningAttr";
      break;
    case 0x169:
      v2 = "StandaloneDebugAttr";
      break;
    case 0x16A:
      v2 = "StrictFPAttr";
      break;
    case 0x16B:
      v2 = "StrictGuardStackCheckAttr";
      break;
    case 0x16C:
      v2 = "SwiftAsyncAttr";
      break;
    case 0x16D:
      v2 = "SwiftAsyncErrorAttr";
      break;
    case 0x16E:
      v2 = "SwiftAsyncNameAttr";
      break;
    case 0x16F:
      v2 = "SwiftBridgeAttr";
      break;
    case 0x170:
      v2 = "SwiftBridgedTypedefAttr";
      break;
    case 0x171:
      v2 = "SwiftErrorAttr";
      break;
    case 0x172:
      v2 = "SwiftImportAsNonGenericAttr";
      break;
    case 0x173:
      v2 = "SwiftImportPropertyAsAccessorsAttr";
      break;
    case 0x174:
      v2 = "SwiftNameAttr";
      break;
    case 0x175:
      v2 = "SwiftNewTypeAttr";
      break;
    case 0x176:
      v2 = "SwiftPrivateAttr";
      break;
    case 0x177:
      v2 = "TLSModelAttr";
      break;
    case 0x178:
      v2 = "TargetAttr";
      break;
    case 0x179:
      v2 = "TargetClonesAttr";
      break;
    case 0x17A:
      v2 = "TargetVersionAttr";
      break;
    case 0x17B:
      v2 = "TestTypestateAttr";
      break;
    case 0x17C:
      v2 = "TransparentUnionAttr";
      break;
    case 0x17D:
      v2 = "TrivialABIAttr";
      break;
    case 0x17E:
      v2 = "TriviallyRelocatableAttr";
      break;
    case 0x17F:
      v2 = "TryAcquireCapabilityAttr";
      break;
    case 0x180:
      v2 = "TypeTagForDatatypeAttr";
      break;
    case 0x181:
      v2 = "TypeVisibilityAttr";
      break;
    case 0x182:
      v2 = "UnavailableAttr";
      break;
    case 0x183:
      v2 = "UninitializedAttr";
      break;
    case 0x184:
      v2 = "UnsafeBufferUsageAttr";
      break;
    case 0x185:
      v2 = "UnusedAttr";
      break;
    case 0x186:
      v2 = "UsedAttr";
      break;
    case 0x187:
      v2 = "UsingIfExistsAttr";
      break;
    case 0x188:
      v2 = "UuidAttr";
      break;
    case 0x189:
      v2 = "VTablePointerAuthenticationAttr";
      break;
    case 0x18A:
      v2 = "VecReturnAttr";
      break;
    case 0x18B:
      v2 = "VecTypeHintAttr";
      break;
    case 0x18C:
      v2 = "VisibilityAttr";
      break;
    case 0x18D:
      v2 = "WarnUnusedAttr";
      break;
    case 0x18E:
      v2 = "WarnUnusedResultAttr";
      break;
    case 0x18F:
      v2 = "WeakAttr";
      break;
    case 0x190:
      v2 = "WeakImportAttr";
      break;
    case 0x191:
      v2 = "WeakRefAttr";
      break;
    case 0x192:
      v2 = "WebAssemblyExportNameAttr";
      break;
    case 0x193:
      v2 = "WebAssemblyImportModuleAttr";
      break;
    case 0x194:
      v2 = "WebAssemblyImportNameAttr";
      break;
    case 0x195:
      v2 = "WorkGroupSizeHintAttr";
      break;
    case 0x196:
      v2 = "X86ForceAlignArgPointerAttr";
      break;
    case 0x197:
      v2 = "XRayInstrumentAttr";
      break;
    case 0x198:
      v2 = "XRayLogArgsAttr";
      break;
    case 0x199:
      v2 = "ZeroCallUsedRegsAttr";
      break;
    case 0x19A:
      v2 = "AbiTagAttr";
      break;
    case 0x19B:
      v2 = "AliasAttr";
      break;
    case 0x19C:
      v2 = "AlignValueAttr";
      break;
    case 0x19D:
      v2 = "BuiltinAliasAttr";
      break;
    case 0x19E:
      v2 = "CalledOnceAttr";
      break;
    case 0x19F:
      v2 = "IFuncAttr";
      break;
    case 0x1A0:
      v2 = "InitSegAttr";
      break;
    case 0x1A1:
      v2 = "LoaderUninitializedAttr";
      break;
    case 0x1A2:
      v2 = "LoopHintAttr";
      break;
    case 0x1A3:
      v2 = "ModeAttr";
      break;
    case 0x1A4:
      v2 = "NoBuiltinAttr";
      break;
    case 0x1A5:
      v2 = "NoEscapeAttr";
      break;
    case 0x1A6:
      v2 = "OMPCaptureKindAttr";
      break;
    case 0x1A7:
      v2 = "OMPDeclareSimdDeclAttr";
      break;
    case 0x1A8:
      v2 = "OMPReferencedVarAttr";
      break;
    case 0x1A9:
      v2 = "ObjCBoxableAttr";
      break;
    case 0x1AA:
      v2 = "ObjCClassStubAttr";
      break;
    case 0x1AB:
      v2 = "ObjCDesignatedInitializerAttr";
      break;
    case 0x1AC:
      v2 = "ObjCDirectAttr";
      break;
    case 0x1AD:
      v2 = "ObjCDirectMembersAttr";
      break;
    case 0x1AE:
      v2 = "ObjCNonLazyClassAttr";
      break;
    case 0x1AF:
      v2 = "ObjCNonRuntimeProtocolAttr";
      break;
    case 0x1B0:
      v2 = "ObjCRuntimeNameAttr";
      break;
    case 0x1B1:
      v2 = "ObjCRuntimeVisibleAttr";
      break;
    case 0x1B2:
      v2 = "OpenCLAccessAttr";
      break;
    case 0x1B3:
      v2 = "OverloadableAttr";
      break;
    case 0x1B4:
      v2 = "RootSignatureAttr";
      break;
    case 0x1B5:
      v2 = "SwiftNullabilityAttr";
      break;
    case 0x1B6:
      v2 = "SwiftObjCMembersAttr";
      break;
    case 0x1B7:
      v2 = "SwiftTypeAttr";
      break;
    case 0x1B8:
      v2 = "SwiftVersionedAdditionAttr";
      break;
    case 0x1B9:
      v2 = "SwiftVersionedRemovalAttr";
      break;
    case 0x1BA:
      v2 = "ThreadAttr";
      break;
    default:
      v2 = nullptr;
      break;
  }
  sub_E3A830(&v13, a2);
  sub_E35650((__int64)v15, &v13);
  v3 = j__strlen("id");
  v12[0] = v15;
  v12[1] = a1 + 1048;
  sub_E34890(a1 + 1048, (__int64)"id", v3, (__int64)sub_E34840, v12);
  sub_2207560(v15);
  if ( (__int64 *)v13.m128i_i64[0] != &v14 )
    operator delete((void *)v13.m128i_i64[0]);
  sub_E35B80((__int64)v15, v2);
  v4 = j__strlen("kind");
  v13.m128i_i64[1] = a1 + 1048;
  v13.m128i_i64[0] = (__int64)v15;
  sub_E34890(a1 + 1048, (__int64)"kind", v4, (__int64)sub_E34840, &v13);
  sub_2207560(v15);
  v11 = a1;
  v15[0] = _mm_loadh_ps((const double *)&v11);
  v5 = j__strlen("range");
  sub_2206E30(a1 + 1048, "range", v5);
  sub_2205CB0(a1 + 1048);
  sub_E36530((__int64 *)v15);
  sub_2205E20(a1 + 1048);
  sub_2205EB0(a1 + 1048);
  v6 = *(_BYTE *)(a2 + 38);
  v7 = j__strlen("inherited");
  sub_E35E50(a1, (__int64)"inherited", v7, v6 & 1);
  v8 = *(_BYTE *)(a2 + 38);
  v9 = j__strlen("implicit");
  sub_E35E50(a1, (__int64)"implicit", v9, (v8 & 4) != 0);
  v10 = *(_WORD *)(a2 + 36);
  if ( v10 == 375 )
  {
    sub_E367F0(a1, a2);
  }
  else if ( v10 > 0x177u )
  {
    if ( v10 == 396 )
    {
      sub_E36770(a1, a2);
    }
    else if ( v10 > 0x18Cu )
    {
      if ( v10 == 411 )
      {
        sub_E36550(a1, a2);
      }
      else if ( v10 > 0x1BAu )
      {
        BUG();
      }
    }
    else if ( v10 == 386 )
    {
      sub_E366A0(a1, a2);
    }
  }
  else if ( v10 == 199 )
  {
    sub_E365B0(a1, a2);
  }
  else if ( v10 > 0xC7u )
  {
    if ( v10 == 356 )
      sub_E36710(a1, a2);
  }
  else if ( v10 == 174 )
  {
    sub_E45F70(a1, a2);
  }
}

