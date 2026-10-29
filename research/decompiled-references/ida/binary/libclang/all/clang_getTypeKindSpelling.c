const char *__fastcall clang_getTypeKindSpelling(__int64 a1)
{
  const char *result; // rax

  switch ( a1 )
  {
    case 0LL:
      result = sub_6904A0("Invalid");
      break;
    case 1LL:
      result = sub_6904A0("Unexposed");
      break;
    case 2LL:
      result = sub_6904A0("Void");
      break;
    case 3LL:
      result = sub_6904A0("Bool");
      break;
    case 4LL:
      result = sub_6904A0("Char_U");
      break;
    case 5LL:
      result = sub_6904A0("UChar");
      break;
    case 6LL:
      result = sub_6904A0("Char16");
      break;
    case 7LL:
      result = sub_6904A0("Char32");
      break;
    case 8LL:
      result = sub_6904A0("UShort");
      break;
    case 9LL:
      result = sub_6904A0("UInt");
      break;
    case 10LL:
      result = sub_6904A0("ULong");
      break;
    case 11LL:
      result = sub_6904A0("ULongLong");
      break;
    case 12LL:
      result = sub_6904A0("UInt128");
      break;
    case 13LL:
      result = sub_6904A0("Char_S");
      break;
    case 14LL:
      result = sub_6904A0("SChar");
      break;
    case 15LL:
      result = sub_6904A0("WChar");
      break;
    case 16LL:
      result = sub_6904A0("Short");
      break;
    case 17LL:
      result = sub_6904A0("Int");
      break;
    case 18LL:
      result = sub_6904A0("Long");
      break;
    case 19LL:
      result = sub_6904A0("LongLong");
      break;
    case 20LL:
      result = sub_6904A0("Int128");
      break;
    case 21LL:
      result = sub_6904A0("Float");
      break;
    case 22LL:
      result = sub_6904A0("Double");
      break;
    case 23LL:
      result = sub_6904A0("LongDouble");
      break;
    case 24LL:
      result = sub_6904A0("NullPtr");
      break;
    case 25LL:
      result = sub_6904A0("Overload");
      break;
    case 26LL:
      result = sub_6904A0("Dependent");
      break;
    case 27LL:
      result = sub_6904A0("ObjCId");
      break;
    case 28LL:
      result = sub_6904A0("ObjCClass");
      break;
    case 29LL:
      result = sub_6904A0("ObjCSel");
      break;
    case 30LL:
      result = sub_6904A0("Float128");
      break;
    case 31LL:
      result = sub_6904A0("Half");
      break;
    case 32LL:
      result = sub_6904A0("Float16");
      break;
    case 33LL:
      result = sub_6904A0("ShortAccum");
      break;
    case 34LL:
      result = sub_6904A0("Accum");
      break;
    case 35LL:
      result = sub_6904A0("LongAccum");
      break;
    case 36LL:
      result = sub_6904A0("UShortAccum");
      break;
    case 37LL:
      result = sub_6904A0("UAccum");
      break;
    case 38LL:
      result = sub_6904A0("ULongAccum");
      break;
    case 39LL:
      result = sub_6904A0("BFloat16");
      break;
    case 40LL:
      result = sub_6904A0("Ibm128");
      break;
    case 100LL:
      result = sub_6904A0("Complex");
      break;
    case 101LL:
      result = sub_6904A0("Pointer");
      break;
    case 102LL:
      result = sub_6904A0("BlockPointer");
      break;
    case 103LL:
      result = sub_6904A0("LValueReference");
      break;
    case 104LL:
      result = sub_6904A0("RValueReference");
      break;
    case 105LL:
      result = sub_6904A0("Record");
      break;
    case 106LL:
      result = sub_6904A0("Enum");
      break;
    case 107LL:
      result = sub_6904A0("Typedef");
      break;
    case 108LL:
      result = sub_6904A0("ObjCInterface");
      break;
    case 109LL:
      result = sub_6904A0("ObjCObjectPointer");
      break;
    case 110LL:
      result = sub_6904A0("FunctionNoProto");
      break;
    case 111LL:
      result = sub_6904A0("FunctionProto");
      break;
    case 112LL:
      result = sub_6904A0("ConstantArray");
      break;
    case 113LL:
      result = sub_6904A0("Vector");
      break;
    case 114LL:
      result = sub_6904A0("IncompleteArray");
      break;
    case 115LL:
      result = sub_6904A0("VariableArray");
      break;
    case 116LL:
      result = sub_6904A0("DependentSizedArray");
      break;
    case 117LL:
      result = sub_6904A0("MemberPointer");
      break;
    case 118LL:
      result = sub_6904A0("Auto");
      break;
    case 119LL:
      result = sub_6904A0("Elaborated");
      break;
    case 120LL:
      result = sub_6904A0("Pipe");
      break;
    case 121LL:
      result = sub_6904A0("OCLImage1dRO");
      break;
    case 122LL:
      result = sub_6904A0("OCLImage1dArrayRO");
      break;
    case 123LL:
      result = sub_6904A0("OCLImage1dBufferRO");
      break;
    case 124LL:
      result = sub_6904A0("OCLImage2dRO");
      break;
    case 125LL:
      result = sub_6904A0("OCLImage2dArrayRO");
      break;
    case 126LL:
      result = sub_6904A0("OCLImage2dDepthRO");
      break;
    case 127LL:
      result = sub_6904A0("OCLImage2dArrayDepthRO");
      break;
    case 128LL:
      result = sub_6904A0("OCLImage2dMSAARO");
      break;
    case 129LL:
      result = sub_6904A0("OCLImage2dArrayMSAARO");
      break;
    case 130LL:
      result = sub_6904A0("OCLImage2dMSAADepthRO");
      break;
    case 131LL:
      result = sub_6904A0("OCLImage2dArrayMSAADepthRO");
      break;
    case 132LL:
      result = sub_6904A0("OCLImage3dRO");
      break;
    case 133LL:
      result = sub_6904A0("OCLImage1dWO");
      break;
    case 134LL:
      result = sub_6904A0("OCLImage1dArrayWO");
      break;
    case 135LL:
      result = sub_6904A0("OCLImage1dBufferWO");
      break;
    case 136LL:
      result = sub_6904A0("OCLImage2dWO");
      break;
    case 137LL:
      result = sub_6904A0("OCLImage2dArrayWO");
      break;
    case 138LL:
      result = sub_6904A0("OCLImage2dDepthWO");
      break;
    case 139LL:
      result = sub_6904A0("OCLImage2dArrayDepthWO");
      break;
    case 140LL:
      result = sub_6904A0("OCLImage2dMSAAWO");
      break;
    case 141LL:
      result = sub_6904A0("OCLImage2dArrayMSAAWO");
      break;
    case 142LL:
      result = sub_6904A0("OCLImage2dMSAADepthWO");
      break;
    case 143LL:
      result = sub_6904A0("OCLImage2dArrayMSAADepthWO");
      break;
    case 144LL:
      result = sub_6904A0("OCLImage3dWO");
      break;
    case 145LL:
      result = sub_6904A0("OCLImage1dRW");
      break;
    case 146LL:
      result = sub_6904A0("OCLImage1dArrayRW");
      break;
    case 147LL:
      result = sub_6904A0("OCLImage1dBufferRW");
      break;
    case 148LL:
      result = sub_6904A0("OCLImage2dRW");
      break;
    case 149LL:
      result = sub_6904A0("OCLImage2dArrayRW");
      break;
    case 150LL:
      result = sub_6904A0("OCLImage2dDepthRW");
      break;
    case 151LL:
      result = sub_6904A0("OCLImage2dArrayDepthRW");
      break;
    case 152LL:
      result = sub_6904A0("OCLImage2dMSAARW");
      break;
    case 153LL:
      result = sub_6904A0("OCLImage2dArrayMSAARW");
      break;
    case 154LL:
      result = sub_6904A0("OCLImage2dMSAADepthRW");
      break;
    case 155LL:
      result = sub_6904A0("OCLImage2dArrayMSAADepthRW");
      break;
    case 156LL:
      result = sub_6904A0("OCLImage3dRW");
      break;
    case 157LL:
      result = sub_6904A0("OCLSampler");
      break;
    case 158LL:
      result = sub_6904A0("OCLEvent");
      break;
    case 159LL:
      result = sub_6904A0("OCLQueue");
      break;
    case 160LL:
      result = sub_6904A0("OCLReserveID");
      break;
    case 161LL:
      result = sub_6904A0("ObjCObject");
      break;
    case 162LL:
      result = sub_6904A0("ObjCTypeParam");
      break;
    case 163LL:
      result = sub_6904A0("Attributed");
      break;
    case 164LL:
      result = sub_6904A0("OCLIntelSubgroupAVCMcePayload");
      break;
    case 165LL:
      result = sub_6904A0("OCLIntelSubgroupAVCImePayload");
      break;
    case 166LL:
      result = sub_6904A0("OCLIntelSubgroupAVCRefPayload");
      break;
    case 167LL:
      result = sub_6904A0("OCLIntelSubgroupAVCSicPayload");
      break;
    case 168LL:
      result = sub_6904A0("OCLIntelSubgroupAVCMceResult");
      break;
    case 169LL:
      result = sub_6904A0("OCLIntelSubgroupAVCImeResult");
      break;
    case 170LL:
      result = sub_6904A0("OCLIntelSubgroupAVCRefResult");
      break;
    case 171LL:
      result = sub_6904A0("OCLIntelSubgroupAVCSicResult");
      break;
    case 172LL:
      result = sub_6904A0("OCLIntelSubgroupAVCImeResultSingleReferenceStreamout");
      break;
    case 173LL:
      result = sub_6904A0("OCLIntelSubgroupAVCImeResultDualReferenceStreamout");
      break;
    case 174LL:
      result = sub_6904A0("OCLIntelSubgroupAVCImeSingleReferenceStreamin");
      break;
    case 175LL:
      result = sub_6904A0("OCLIntelSubgroupAVCImeDualReferenceStreamin");
      break;
    case 176LL:
      result = sub_6904A0("ExtVector");
      break;
    case 177LL:
      result = sub_6904A0("Atomic");
      break;
    case 178LL:
      result = sub_6904A0("BTFTagAttributed");
      break;
    case 179LL:
      result = sub_6904A0("HLSLResource");
      break;
    case 180LL:
      result = sub_6904A0("HLSLAttributedResource");
      break;
    case 181LL:
      result = sub_6904A0("TemplateSpecialization");
      break;
    case 182LL:
      result = sub_6904A0("TemplateTypeParm");
      break;
    case 183LL:
      result = sub_6904A0("SubstTemplateTypeParm");
      break;
    case 184LL:
      result = sub_6904A0("TypeOf");
      break;
    case 185LL:
      result = sub_6904A0("TypeOfExpr");
      break;
    default:
      result = sub_6904A0(nullptr);
      break;
  }
  return result;
}

