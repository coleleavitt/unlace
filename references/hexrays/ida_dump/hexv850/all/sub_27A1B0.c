unsigned __int64 __fastcall sub_27A1B0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 result; // rax

  v1 = sub_24FC00(a1);
  if ( *(_DWORD *)(v1 + 8) != 61 )
    return 0xFFFFFFFFLL;
  result = sub_250670(*(__int64 **)(v1 + 24), (_QWORD *)(v1 + 48));
  if ( result > 1 )
    return 0xFFFFFFFFLL;
  return result;
}
