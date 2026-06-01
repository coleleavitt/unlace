/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_488350
// Address: 0x0000000000488350

//----- (0000000000488350) ----------------------------------------------------
__int64 __fastcall sub_488350(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // w20
  int v6; // w22
  unsigned int v7; // w1
  bool v8; // zf
  int v10; // w0
  bool v11; // w0
  unsigned __int16 v12; // w2
  _WORD v13[12]; // [xsp+48h] [xbp-38h] BYREF
  unsigned __int16 v14[12]; // [xsp+60h] [xbp-20h] BYREF

  sub_487938(a1, v13);
  sub_487938(a2, v14);
  v5 = v13[1];
  v6 = v14[1];
  v7 = 1;
  *a3 = 0;
  a3[1] = 0;
  if ( v5 )
    v8 = v6 == 0;
  else
    v8 = 1;
  if ( !v8 )
  {
    v10 = sub_4874F0((__int64)v13, v14);
    v11 = sub_487978((__int64)v14, v10 != 0, 0, v5 + v6 - 16382, 112);
    v7 = 2;
    if ( v11 )
    {
      if ( v13[0] == v14[0] )
        v12 = 0;
      else
        v12 = -1;
      v14[0] = v12;
      sub_4878F8(v14, (__int64)a3);
      return 1;
    }
  }
  return v7;
}
