__int64 __fastcall sub_F2FE70(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a2 + 48);
  if ( (result & 0x2000) == 0 )
  {
    if ( (result & 0x4000) == 0 )
      return result;
    return sub_995540(*(_QWORD *)(a1 + 1096), " captures_this");
  }
  sub_995540(*(_QWORD *)(a1 + 1096), " variadic");
  result = *(_QWORD *)(a2 + 48);
  if ( (result & 0x4000) != 0 )
    return sub_995540(*(_QWORD *)(a1 + 1096), " captures_this");
  return result;
}
