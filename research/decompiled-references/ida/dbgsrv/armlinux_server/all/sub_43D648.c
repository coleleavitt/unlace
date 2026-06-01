/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43D648
// Address: 0x000000000043D648

//----- (000000000043D648) ----------------------------------------------------
__int64 __fastcall sub_43D648(_QWORD *a1, unsigned __int64 a2, unsigned int *a3)
{
  unsigned int v3; // w3
  __int16 *v6; // x19
  int v7; // w27
  int v8; // w22
  unsigned int v9; // w21
  unsigned int v10; // w23
  unsigned int v11; // w28
  unsigned int v12; // w0
  unsigned __int8 *v14; // [xsp+60h] [xbp-10h] BYREF

  v3 = 0;
  v6 = (__int16 *)(*a1 + a1[1] - 2LL);
  if ( *v6 > 0 )
  {
    v14 = (unsigned __int8 *)(*a1 + a1[3]);
    v7 = sub_48E5A8(&v14, (unsigned __int64)v6);
    if ( v7 <= 0 || v6 <= (__int16 *)v14 )
    {
      return 0;
    }
    else
    {
      v8 = 0;
      v9 = 0;
      v10 = 0;
      while ( 1 )
      {
        v9 += sub_48E5A8(&v14, (unsigned __int64)v6);
        v10 += sub_48E5A8(&v14, (unsigned __int64)v6);
        v11 = sub_48E5A8(&v14, (unsigned __int64)v6);
        v12 = sub_48E5A8(&v14, (unsigned __int64)v6);
        if ( a2 >= v9 && a2 < v10 )
          break;
        if ( v7 == ++v8 || v6 <= (__int16 *)v14 )
          return 0;
      }
      *a3 = v9;
      a3[1] = v10;
      v3 = 1;
      a3[2] = v11;
      a3[3] = v12;
    }
  }
  return v3;
}
// 43D648: could not find valid save-restore pair for x21
// 43D648: could not find valid save-restore pair for x22
// 43D648: could not find valid save-restore pair for x23
// 43D648: could not find valid save-restore pair for x27
// 43D648: could not find valid save-restore pair for x28
