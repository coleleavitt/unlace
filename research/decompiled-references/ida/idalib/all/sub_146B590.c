__int64 __fastcall sub_146B590(__int64 a1)
{
  __int64 result; // rax
  _QWORD v2[3]; // [rsp-8h] [rbp-18h] BYREF

  if ( *(_BYTE *)(a1 + 8) )
  {
    result = sub_15F7280(v2, *(_QWORD *)a1, 0, 0, 0);
    if ( v2[1] )
      return sub_15F2350(v2);
  }
  return result;
}
