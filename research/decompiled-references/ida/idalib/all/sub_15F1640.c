unsigned __int64 __fastcall sub_15F1640(__int64 a1, char a2)
{
  unsigned __int64 v2; // rax
  char v3; // dl
  unsigned __int64 result; // rax

  v2 = sub_15F1540(a1, a2);
  v3 = *(_BYTE *)(v2 + 8);
  result = v2 - 72;
  if ( (v3 & 0x7Fu) - 34 >= 6 )
    return 0;
  return result;
}
