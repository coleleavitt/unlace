/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C5E0
// Address: 0x000000000003C5E0

//----- (000000000003C5E0) ----------------------------------------------------
char __fastcall sub_3C5E0(__int64 a1, __int64 a2, int a3)
{
  char result; // al

  if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 0 )
  {
    result = sub_3D4E0((_QWORD *)(a1 + 120), a2, a3);
    *(_BYTE *)(a1 + 1228) = 0;
  }
  return result;
}
