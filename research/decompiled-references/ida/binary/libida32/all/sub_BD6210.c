char *__fastcall sub_BD6210(int a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0:
      result = "Dependent";
      break;
    case 1:
      result = "BitCast";
      break;
    case 2:
      result = "LValueBitCast";
      break;
    case 3:
      result = "LValueToRValueBitCast";
      break;
    case 4:
      result = "LValueToRValue";
      break;
    case 5:
      result = "NoOp";
      break;
    case 6:
      result = "BaseToDerived";
      break;
    case 7:
      result = "DerivedToBase";
      break;
    case 8:
      result = "UncheckedDerivedToBase";
      break;
    case 9:
      result = "Dynamic";
      break;
    case 10:
      result = "ToUnion";
      break;
    case 11:
      result = "ArrayToPointerDecay";
      break;
    case 12:
      result = "FunctionToPointerDecay";
      break;
    case 13:
      result = "NullToPointer";
      break;
    case 14:
      result = "NullToMemberPointer";
      break;
    case 15:
      result = "BaseToDerivedMemberPointer";
      break;
    case 16:
      result = "DerivedToBaseMemberPointer";
      break;
    case 17:
      result = "MemberPointerToBoolean";
      break;
    case 18:
      result = "ReinterpretMemberPointer";
      break;
    case 19:
      result = "UserDefinedConversion";
      break;
    case 20:
      result = "ConstructorConversion";
      break;
    case 21:
      result = "IntegralToPointer";
      break;
    case 22:
      result = "PointerToIntegral";
      break;
    case 23:
      result = "PointerToBoolean";
      break;
    case 24:
      result = "ToVoid";
      break;
    case 25:
      result = "MatrixCast";
      break;
    case 26:
      result = "VectorSplat";
      break;
    case 27:
      result = "IntegralCast";
      break;
    case 28:
      result = "IntegralToBoolean";
      break;
    case 29:
      result = "IntegralToFloating";
      break;
    case 30:
      result = "FloatingToFixedPoint";
      break;
    case 31:
      result = "FixedPointToFloating";
      break;
    case 32:
      result = "FixedPointCast";
      break;
    case 33:
      result = "FixedPointToIntegral";
      break;
    case 34:
      result = "IntegralToFixedPoint";
      break;
    case 35:
      result = "FixedPointToBoolean";
      break;
    case 36:
      result = "FloatingToIntegral";
      break;
    case 37:
      result = "FloatingToBoolean";
      break;
    case 38:
      result = "BooleanToSignedIntegral";
      break;
    case 39:
      result = "FloatingCast";
      break;
    case 40:
      result = "CPointerToObjCPointerCast";
      break;
    case 41:
      result = "BlockPointerToObjCPointerCast";
      break;
    case 42:
      result = "AnyPointerToBlockPointerCast";
      break;
    case 43:
      result = "ObjCObjectLValueCast";
      break;
    case 44:
      result = "FloatingRealToComplex";
      break;
    case 45:
      result = "FloatingComplexToReal";
      break;
    case 46:
      result = "FloatingComplexToBoolean";
      break;
    case 47:
      result = "FloatingComplexCast";
      break;
    case 48:
      result = "FloatingComplexToIntegralComplex";
      break;
    case 49:
      result = "IntegralRealToComplex";
      break;
    case 50:
      result = "IntegralComplexToReal";
      break;
    case 51:
      result = "IntegralComplexToBoolean";
      break;
    case 52:
      result = "IntegralComplexCast";
      break;
    case 53:
      result = "IntegralComplexToFloatingComplex";
      break;
    case 54:
      result = "ARCProduceObject";
      break;
    case 55:
      result = "ARCConsumeObject";
      break;
    case 56:
      result = "ARCReclaimReturnedObject";
      break;
    case 57:
      result = "ARCExtendBlockObject";
      break;
    case 58:
      result = "AtomicToNonAtomic";
      break;
    case 59:
      result = "NonAtomicToAtomic";
      break;
    case 60:
      result = "CopyAndAutoreleaseBlockObject";
      break;
    case 61:
      result = "BuiltinFnToFnPtr";
      break;
    case 62:
      result = "ZeroToOCLOpaqueType";
      break;
    case 63:
      result = "AddressSpaceConversion";
      break;
    case 64:
      result = "IntToOCLSampler";
      break;
    case 65:
      result = "HLSLVectorTruncation";
      break;
    case 66:
      result = "HLSLArrayRValue";
      break;
    case 67:
      result = "HLSLElementwiseCast";
      break;
    case 68:
      result = "HLSLAggregateSplatCast";
      break;
  }
  return result;
}

