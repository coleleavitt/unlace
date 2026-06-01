/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001C510
// Address: 0x000000010001C510

//----- (000000010001C510) ----------------------------------------------------
__int64 __fastcall sub_10001C510(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  result = 0;
  if ( *(_DWORD *)a2 == 38 )
  {
    *(_OWORD *)*(_QWORD *)(a1 + 8) = *a2;
    return 1;
  }
  return result;
}
