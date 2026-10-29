__int64 __fastcall sub_B75D90(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 72);
  if ( result && (*(_BYTE *)(result + 28) & 0x7F) == 0x4D )
  {
    do
      result = *(_QWORD *)(result + 88);
    while ( (*(_BYTE *)(result + 28) & 0x7F) == 0x4D );
  }
  return result;
}

