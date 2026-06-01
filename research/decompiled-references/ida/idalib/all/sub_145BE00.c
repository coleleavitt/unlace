__int64 __fastcall sub_145BE00(__int64 a1)
{
  int v1; // eax
  char v2; // dl
  __int64 result; // rax

  v1 = 1;
  if ( (*(_BYTE *)(a1 + 3) & 0x3A) == 0 )
    LOBYTE(v1) = (*(_BYTE *)(a1 + 4) & 0x30) != 0;
  v2 = (_BYTE)v1 << 7;
  result = (v1 << 7) | *(_BYTE *)(a1 + 3) & 0x7Fu;
  *(_BYTE *)(a1 + 3) = v2 | *(_BYTE *)(a1 + 3) & 0x7F;
  return result;
}
