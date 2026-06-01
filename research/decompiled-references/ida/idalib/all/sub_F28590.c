__int64 __fastcall sub_F28590(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 1096);
  switch ( *(_DWORD *)(a2 + 40) )
  {
    case 0:
      result = sub_995540(v2, " OMPNullMemAlloc");
      break;
    case 1:
      result = sub_995540(v2, " OMPDefaultMemAlloc");
      break;
    case 2:
      result = sub_995540(v2, " OMPLargeCapMemAlloc");
      break;
    case 3:
      result = sub_995540(v2, " OMPConstMemAlloc");
      break;
    case 4:
      result = sub_995540(v2, " OMPHighBWMemAlloc");
      break;
    case 5:
      result = sub_995540(v2, " OMPLowLatMemAlloc");
      break;
    case 6:
      result = sub_995540(v2, " OMPCGroupMemAlloc");
      break;
    case 7:
      result = sub_995540(v2, " OMPPTeamMemAlloc");
      break;
    case 8:
      result = sub_995540(v2, " OMPThreadMemAlloc");
      break;
    case 9:
      result = sub_995540(v2, " OMPUserDefinedMemAlloc");
      break;
    default:
      return result;
  }
  return result;
}
