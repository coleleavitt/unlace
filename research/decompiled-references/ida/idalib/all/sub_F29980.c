__int64 __fastcall sub_F29980(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 1096);
  switch ( *(_DWORD *)(a2 + 40) )
  {
    case 0:
      result = sub_995540(v2, " Skip");
      break;
    case 1:
      result = sub_995540(v2, " UsedGPRArg");
      break;
    case 2:
      result = sub_995540(v2, " UsedGPR");
      break;
    case 3:
      result = sub_995540(v2, " UsedArg");
      break;
    case 4:
      result = sub_995540(v2, " Used");
      break;
    case 5:
      result = sub_995540(v2, " AllGPRArg");
      break;
    case 6:
      result = sub_995540(v2, " AllGPR");
      break;
    case 7:
      result = sub_995540(v2, " AllArg");
      break;
    case 8:
      result = sub_995540(v2, " All");
      break;
    default:
      return result;
  }
  return result;
}
