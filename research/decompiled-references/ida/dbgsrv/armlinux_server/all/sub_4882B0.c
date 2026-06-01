/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4882B0
// Address: 0x00000000004882B0

//----- (00000000004882B0) ----------------------------------------------------
__int64 __fastcall sub_4882B0(__int64 a1, int a2, _QWORD *a3)
{
  unsigned __int16 v6[12]; // [xsp+30h] [xbp-20h] BYREF

  sub_487938(a1, v6);
  if ( sub_487978((__int64)v6, 0, 0, v6[1] + a2, 112) )
  {
    sub_4878F8(v6, (__int64)a3);
    return 1;
  }
  else
  {
    *a3 = 0;
    a3[1] = 0;
    return 2;
  }
}
