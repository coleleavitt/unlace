/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_450368
// Address: 0x0000000000450368

//----- (0000000000450368) ----------------------------------------------------
__int64 __fastcall sub_450368(__int64 *a1, char *a2, __int64 *a3, int a4, __int64 a5, __int64 a6)
{
  _QWORD v12[19]; // [xsp+40h] [xbp-A0h] BYREF

  sub_448768((__int64)v12, a6, 0);
  LODWORD(a2) = sub_44F608(v12, a2, 0, a4, a3, a1, a5);
  sub_44A7D8((__int64)v12);
  return (unsigned int)a2;
}
