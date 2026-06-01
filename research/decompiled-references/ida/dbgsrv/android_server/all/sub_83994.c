/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83994
// Address: 0x0000000000083994

//----- (0000000000083994) ----------------------------------------------------
__int64 __fastcall sub_83994(__int64 result, __int64 a2)
{
  __int64 v2; // x8
  __int64 v3; // x9
  __int64 v4; // x11
  unsigned __int64 v5; // x8

  v2 = *(_QWORD *)(result + 8);
  v3 = *(_QWORD *)(a2 + 8);
  v4 = v2 >> v3;
  v5 = (unsigned __int64)v2 >> v3;
  if ( !*(_BYTE *)result )
    v5 = v4;
  *(_QWORD *)(result + 8) = v5;
  return result;
}
