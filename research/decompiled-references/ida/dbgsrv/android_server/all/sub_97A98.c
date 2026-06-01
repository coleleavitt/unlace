/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_97A98
// Address: 0x0000000000097A98

//----- (0000000000097A98) ----------------------------------------------------
unsigned __int64 __fastcall sub_97A98(unsigned __int64 *a1)
{
  unsigned __int8 *v2; // x9
  unsigned __int64 v3; // x1
  unsigned __int64 v4; // x8
  int v5; // w9
  int v6; // w20
  __int64 v7; // x2
  unsigned int v8; // w0
  unsigned __int8 *v9; // x9
  unsigned int v10; // w20
  unsigned __int64 v11; // x1
  unsigned __int64 v12; // x8
  int v13; // w9
  int v14; // w22
  __int64 v15; // x2
  unsigned __int64 v17; // x9
  unsigned __int64 v18; // x9
  char *v19; // [xsp+8h] [xbp-48h] BYREF
  char v20; // [xsp+10h] [xbp-40h] BYREF
  _BYTE v21[15]; // [xsp+11h] [xbp-3Fh] BYREF

  *(_QWORD *)&v21[7] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (unsigned __int8 *)*a1;
  v3 = *a1 + 1;
  if ( v3 < *a1 || (v4 = a1[1], v3 > v4) )
  {
    v20 = 0;
    goto LABEL_10;
  }
  *a1 = v3;
  v5 = *v2;
  v20 = v5;
  if ( (v5 & 0x80) == 0 )
  {
LABEL_10:
    v6 = 1;
    goto LABEL_11;
  }
  if ( (~(_BYTE)v5 & 0xC0) != 0 )
  {
    v6 = 2;
    v7 = 1;
  }
  else
  {
    if ( (~v5 & 0xE0) != 0 )
      v6 = 4;
    else
      v6 = 5;
    v7 = (unsigned int)(v6 - 1);
  }
  v17 = v3 + v7;
  if ( v3 + v7 >= v3 && v17 <= v4 )
  {
    *a1 = v17;
    __memcpy_chk(v21, v3, v7, 4);
  }
LABEL_11:
  v19 = &v20;
  v8 = unpack_dd((unsigned __int64 *)&v19, (unsigned __int64)&v21[v6 - 1]);
  v9 = (unsigned __int8 *)*a1;
  v10 = v8;
  v11 = *a1 + 1;
  if ( v11 < *a1 || (v12 = a1[1], v11 > v12) )
  {
    v20 = 0;
    goto LABEL_20;
  }
  *a1 = v11;
  v13 = *v9;
  v20 = v13;
  if ( (v13 & 0x80) == 0 )
  {
LABEL_20:
    v14 = 1;
    goto LABEL_21;
  }
  if ( (~(_BYTE)v13 & 0xC0) != 0 )
  {
    v14 = 2;
    v15 = 1;
  }
  else
  {
    if ( (~v13 & 0xE0) != 0 )
      v14 = 4;
    else
      v14 = 5;
    v15 = (unsigned int)(v14 - 1);
  }
  v18 = v11 + v15;
  if ( v11 + v15 >= v11 && v18 <= v12 )
  {
    *a1 = v18;
    __memcpy_chk(v21, v11, v15, 4);
  }
LABEL_21:
  v19 = &v20;
  return v10
       | ((unsigned __int64)(unsigned int)unpack_dd((unsigned __int64 *)&v19, (unsigned __int64)&v21[v14 - 1]) << 32);
}
// 97B04: conditional instruction was optimized away because w20.4 is in (4..5)
// 97B80: conditional instruction was optimized away because w22.4 is in (4..5)
// 37290: using guessed type __int64 __fastcall __memcpy_chk(_QWORD, _QWORD, _QWORD, _QWORD);
