/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A6F70
// Address: 0x00000000004A6F70

//----- (00000000004A6F70) ----------------------------------------------------
__int64 __fastcall sub_4A6F70(__int64 a1)
{
  _BYTE *v1; // x2

  v1 = *(_BYTE **)(a1 + 24);
  if ( (unsigned __int8)(*v1 - 73) > 1u )
    return 0;
  *(_QWORD *)(a1 + 24) = v1 + 1;
  return sub_4A6E30(a1);
}
