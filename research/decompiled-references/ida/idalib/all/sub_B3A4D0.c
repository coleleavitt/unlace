char *__fastcall sub_B3A4D0(__int64 a1)
{
  char *result; // rax

  switch ( *(_BYTE *)(a1 + 12) )
  {
    case 0:
      result = "None";
      break;
    case 1:
      result = "VerbatimBlockLineComment";
      break;
    case 2:
      result = "TextComment";
      break;
    case 3:
      result = "InlineCommandComment";
      break;
    case 4:
      result = "HTMLStartTagComment";
      break;
    case 5:
      result = "HTMLEndTagComment";
      break;
    case 6:
      result = "FullComment";
      break;
    case 7:
      result = "ParagraphComment";
      break;
    case 8:
      result = "BlockCommandComment";
      break;
    case 9:
      result = "VerbatimLineComment";
      break;
    case 0xA:
      result = "VerbatimBlockComment";
      break;
    case 0xB:
      result = "TParamCommandComment";
      break;
    case 0xC:
      result = "ParamCommandComment";
      break;
  }
  return result;
}
