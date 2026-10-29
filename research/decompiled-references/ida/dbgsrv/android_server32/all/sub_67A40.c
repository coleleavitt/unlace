/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67A40
// Address: 0x00067A40

//----- (00067A40) --------------------------------------------------------
bool __fastcall sub_67A40(int a1)
{
  int v2; // r1
  _BOOL4 result; // r0

  v2 = sub_6762C();
  result = 0;
  if ( v2 )
    return (*(int (__fastcall **)(int, int, _DWORD))(*(_DWORD *)v2 + 244))(v2, a1, 0) >= 0;
  return result;
}
