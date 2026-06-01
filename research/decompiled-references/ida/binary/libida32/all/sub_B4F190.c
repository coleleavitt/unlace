__int64 __fastcall sub_B4F190(__int64 a1)
{
  unsigned __int8 v1; // dl
  __int64 result; // rax

  v1 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (unsigned int)v1 - 53 <= 1 )
  {
    a1 = *(_QWORD *)(a1 + 64);
    v1 = *(_BYTE *)(a1 + 28) & 0x7F;
  }
  if ( v1 == 76 )
    return *(_QWORD *)(a1 + 48);
  result = a1;
  if ( v1 == 77 )
  {
    do
      result = *(_QWORD *)(result + 88);
    while ( (*(_BYTE *)(result + 28) & 0x7F) == 0x4D );
  }
  return result;
}

