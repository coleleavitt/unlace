__int64 __fastcall sub_F32B00(_BYTE *a1, char a2)
{
  char v2; // r8
  char v3; // cl
  char v4; // dl
  __int64 result; // rax

  v2 = a2 & 0x10;
  if ( (a2 & 0x10) != 0 )
    v2 = 16;
  v3 = a2 & 8;
  if ( (a2 & 8) != 0 )
    v3 = 8;
  v4 = a2 & 4;
  if ( (a2 & 4) != 0 )
    v4 = 4;
  result = a2 & 2;
  if ( (a2 & 2) != 0 )
    result = 2;
  *a1 = result | v4 | v3 | v2 | a2 & 1;
  return result;
}

