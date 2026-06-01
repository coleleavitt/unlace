char __fastcall sub_20CFE50(__int64 a1)
{
  __int64 v2; // rdi
  char v3; // al
  char result; // al

  if ( *(_BYTE *)(a1 + 32) )
    return 0;
  *(_BYTE *)(a1 + 32) = 1;
  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_BYTE *)(v2 + 9) & 0xC0;
  if ( v3 == (char)0x80 )
  {
    result = (**(__int64 (__fastcall ***)(__int64))v2)(v2);
    *(_BYTE *)(a1 + 32) = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 32) = 0;
    return v3 == 0;
  }
  return result;
}
