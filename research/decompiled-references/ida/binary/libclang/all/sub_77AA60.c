__int64 __fastcall sub_77AA60(__int64 a1)
{
  unsigned __int8 v1; // dl
  __int64 result; // rax

  v1 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (unsigned int)v1 - 51 <= 1 )
  {
    a1 = *(_QWORD *)(a1 + 64);
    v1 = *(_BYTE *)(a1 + 28) & 0x7F;
  }
  if ( v1 == 74 )
    return *(_QWORD *)(a1 + 48);
  result = a1;
  if ( v1 == 75 )
  {
    do
      a1 = *(_QWORD *)(a1 + 88);
    while ( (*(_BYTE *)(a1 + 28) & 0x7F) == 0x4B );
    return a1;
  }
  return result;
}

