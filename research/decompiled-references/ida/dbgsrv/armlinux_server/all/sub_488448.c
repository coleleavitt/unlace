/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_488448
// Address: 0x0000000000488448

//----- (0000000000488448) ----------------------------------------------------
__int64 __fastcall sub_488448(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // w21
  unsigned int v6; // w1
  int v7; // w24
  int v9; // w0
  bool v10; // w0
  unsigned __int16 v11; // w2
  unsigned __int16 v12; // [xsp+48h] [xbp-38h] BYREF
  unsigned __int16 v13; // [xsp+4Ah] [xbp-36h]
  _WORD v14[12]; // [xsp+60h] [xbp-20h] BYREF

  sub_487938(a1, &v12);
  sub_487938(a2, v14);
  v5 = v14[1];
  *a3 = 0;
  a3[1] = 0;
  v6 = 4;
  if ( v5 )
  {
    v6 = 1;
    v7 = v13;
    if ( v13 )
    {
      v9 = sub_4872C0((__int64)v14, &v12);
      v10 = sub_487978((__int64)&v12, v9 != 0, 0, v7 + 0x3FFF - v5, 112);
      v6 = 2;
      if ( v10 )
      {
        if ( v12 == v14[0] )
          v11 = 0;
        else
          v11 = -1;
        v12 = v11;
        sub_4878F8(&v12, (__int64)a3);
        return 1;
      }
    }
  }
  return v6;
}
// 488448: could not find valid save-restore pair for x24
