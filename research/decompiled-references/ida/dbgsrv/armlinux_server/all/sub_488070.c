/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_488070
// Address: 0x0000000000488070

//----- (0000000000488070) ----------------------------------------------------
__int64 __fastcall sub_488070(unsigned __int64 *a1, __int64 *a2, int a3, char a4)
{
  __int64 v6; // x0
  __int64 v7; // x1
  int v8; // w23
  int v9; // w1
  __int64 result; // x0
  int v11; // w19
  unsigned __int64 v12; // x2
  int v13; // w1
  __int64 v14; // [xsp+40h] [xbp-30h] BYREF
  __int64 v15; // [xsp+48h] [xbp-28h]
  _WORD v16[2]; // [xsp+50h] [xbp-20h] BYREF
  _BYTE v17[18]; // [xsp+54h] [xbp-1Ch]

  if ( a4 )
  {
    v6 = *a2;
    v7 = a2[1];
    v14 = v6;
    v15 = v7;
    v8 = SHIWORD(v7);
    sub_487E08((__int64)&qword_4DE138, (__int64)&v14, &v14, v7 < 0);
    if ( v8 < 0 && HIWORD(v15) )
      HIWORD(v15) ^= 0x8000u;
    sub_487938((__int64)&v14, v16);
  }
  else
  {
    sub_487938((__int64)a2, v16);
  }
  v9 = v16[1];
  *a1 = 0;
  result = 1;
  v11 = v9 - 16382;
  if ( v9 - 16382 > 0 )
  {
    if ( v11 <= a3 )
    {
      if ( v11 <= 16 )
      {
        sub_487770((__int64)v16, v11);
        v12 = *(unsigned __int16 *)v17;
      }
      else
      {
        sub_487770((__int64)v16, ((_BYTE)v9 + 2) & 0xF);
        v12 = *(unsigned __int16 *)v17;
        v13 = v11 - (v11 & 0xF);
        do
        {
          v13 -= 16;
          *(_QWORD *)v17 = *(_QWORD *)&v17[2];
          *(_QWORD *)&v17[8] = *(_QWORD *)&v17[10];
          v12 = *(unsigned __int16 *)v17 | (v12 << 16);
          *(_WORD *)&v17[16] = 0;
        }
        while ( v13 > 0 );
      }
      if ( !v16[0] )
        goto LABEL_12;
      if ( a3 != 64 )
      {
        v12 = -(__int64)v12;
LABEL_12:
        result = 1;
        *a1 = v12;
        return result;
      }
    }
    return 5;
  }
  return result;
}
// 488070: could not find valid save-restore pair for x24
// 4DE138: using guessed type __int64 qword_4DE138;
