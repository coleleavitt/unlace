/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4086D0
// Address: 0x00000000004086D0

//----- (00000000004086D0) ----------------------------------------------------
__int64 __fastcall sub_4086D0(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 136) == *(_QWORD *)(a1 + 168) )
  {
    sub_408610(*(_DWORD *)(a1 + 2044), 0x13u);
    *(_BYTE *)(*(_QWORD *)(a1 + 1936) + 64LL) = 1;
  }
  *(_BYTE *)(a1 + 2116) = 0;
  *(_BYTE *)(a1 + 2117) = 1;
  return 1;
}
