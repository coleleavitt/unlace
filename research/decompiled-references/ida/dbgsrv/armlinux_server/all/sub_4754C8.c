/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4754C8
// Address: 0x00000000004754C8

//----- (00000000004754C8) ----------------------------------------------------
__int64 __fastcall sub_4754C8(__int64 a1)
{
  __int64 v1; // x1
  __int64 result; // x0

  v1 = a1 + 872;
  *(_QWORD *)(a1 + 864) = -1;
  do
  {
    *(_DWORD *)v1 = 12;
    *(_QWORD *)(v1 + 8) = -1;
    *(_QWORD *)(v1 + 16) = 0;
    v1 += 24;
  }
  while ( v1 != a1 + 1256 );
  result = a1 + 1640;
  do
  {
    *(_DWORD *)v1 = 12;
    *(_QWORD *)(v1 + 8) = -1;
    *(_QWORD *)(v1 + 16) = 0;
    v1 += 24;
  }
  while ( v1 != result );
  return result;
}
