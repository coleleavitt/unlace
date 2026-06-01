/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83280
// Address: 0x0000000000083280

//----- (0000000000083280) ----------------------------------------------------
__int64 __fastcall sub_83280(__int64 result, unsigned __int8 *a2)
{
  __int64 v2; // x8
  int v3; // w10
  unsigned __int64 v4; // x9
  int v5; // w12
  unsigned __int64 v6; // x10

  v2 = *(_QWORD *)(result + 8);
  v3 = -8 * *((_DWORD *)a2 + 1);
  v4 = 0xFFFFFFFFFFFFFFFFLL >> (-8 * a2[4]);
  *(_QWORD *)(result + 8) = v4 & v2;
  v5 = *a2;
  *(_BYTE *)result = v5;
  if ( !v5 )
  {
    v6 = 0x8000000000000000LL >> v3;
    if ( (v4 & v2 & v6) != 0 )
      *(_QWORD *)(result + 8) = v2 | ~v4 | v6;
  }
  return result;
}
