char *__fastcall sub_F58A30(__int64 a1)
{
  char *result; // rax

  switch ( *(_BYTE *)(a1 + 16) )
  {
    case 0:
      result = "Adjusted";
      break;
    case 1:
      result = "Decayed";
      break;
    case 2:
      result = "ConstantArray";
      break;
    case 3:
      result = "ArrayParameter";
      break;
    case 4:
      result = "DependentSizedArray";
      break;
    case 5:
      result = "IncompleteArray";
      break;
    case 6:
      result = "VariableArray";
      break;
    case 7:
      result = (char *)"Atomic";
      break;
    case 8:
      result = "Attributed";
      break;
    case 9:
      result = "BTFTagAttributed";
      break;
    case 0xA:
      result = "BitInt";
      break;
    case 0xB:
      result = "BlockPointer";
      break;
    case 0xC:
      result = "CountAttributed";
      break;
    case 0xD:
      result = "Builtin";
      break;
    case 0xE:
      result = (char *)"Complex";
      break;
    case 0xF:
      result = "Decltype";
      break;
    case 0x10:
      result = "Auto";
      break;
    case 0x11:
      result = "DeducedTemplateSpecialization";
      break;
    case 0x12:
      result = "DependentAddressSpace";
      break;
    case 0x13:
      result = "DependentBitInt";
      break;
    case 0x14:
      result = "DependentName";
      break;
    case 0x15:
      result = "DependentSizedExtVector";
      break;
    case 0x16:
      result = "DependentTemplateSpecialization";
      break;
    case 0x17:
      result = "DependentVector";
      break;
    case 0x18:
      result = "Elaborated";
      break;
    case 0x19:
      result = "FunctionNoProto";
      break;
    case 0x1A:
      result = "FunctionProto";
      break;
    case 0x1B:
      result = "HLSLAttributedResource";
      break;
    case 0x1C:
      result = "HLSLInlineSpirv";
      break;
    case 0x1D:
      result = "InjectedClassName";
      break;
    case 0x1E:
      result = "MacroQualified";
      break;
    case 0x1F:
      result = "ConstantMatrix";
      break;
    case 0x20:
      result = "DependentSizedMatrix";
      break;
    case 0x21:
      result = "MemberPointer";
      break;
    case 0x22:
      result = "ObjCObjectPointer";
      break;
    case 0x23:
      result = "ObjCObject";
      break;
    case 0x24:
      result = "ObjCInterface";
      break;
    case 0x25:
      result = "ObjCTypeParam";
      break;
    case 0x26:
      result = "PackExpansion";
      break;
    case 0x27:
      result = "PackIndexing";
      break;
    case 0x28:
      result = "Paren";
      break;
    case 0x29:
      result = "Pipe";
      break;
    case 0x2A:
      result = "Pointer";
      break;
    case 0x2B:
      result = (char *)"LValueReference";
      break;
    case 0x2C:
      result = (char *)"RValueReference";
      break;
    case 0x2D:
      result = "SubstTemplateTypeParmPack";
      break;
    case 0x2E:
      result = "SubstTemplateTypeParm";
      break;
    case 0x2F:
      result = "Enum";
      break;
    case 0x30:
      result = "Record";
      break;
    case 0x31:
      result = "TemplateSpecialization";
      break;
    case 0x32:
      result = "TemplateTypeParm";
      break;
    case 0x33:
      result = "TypeOfExpr";
      break;
    case 0x34:
      result = "TypeOf";
      break;
    case 0x35:
      result = "Typedef";
      break;
    case 0x36:
      result = "UnaryTransform";
      break;
    case 0x37:
      result = "UnresolvedUsing";
      break;
    case 0x38:
      result = "Using";
      break;
    case 0x39:
      result = (char *)"Vector";
      break;
    case 0x3A:
      result = "ExtVector";
      break;
  }
  return result;
}
