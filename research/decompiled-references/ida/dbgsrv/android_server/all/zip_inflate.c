/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: zip_inflate
// Address: 0x00000000000B830C

//----- (00000000000B830C) ----------------------------------------------------
__int64 __fastcall zip_inflate(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, _BYTE *, __int64),
        __int64 (__fastcall *a3)(__int64, _BYTE *, __int64))
{
  int v6; // w0
  char v7; // w29
  __int64 v8; // x22
  __int64 v9; // x0
  bool v10; // zf
  int v11; // w26
  __int64 v12; // x22
  __int128 v14; // [xsp+18h] [xbp-100D8h] BYREF
  __int64 v15; // [xsp+28h] [xbp-100C8h]
  _BYTE *v16; // [xsp+30h] [xbp-100C0h]
  __int128 v17; // [xsp+38h] [xbp-100B8h]
  __int128 v18; // [xsp+48h] [xbp-100A8h]
  __int128 v19; // [xsp+58h] [xbp-10098h]
  __int128 v20; // [xsp+68h] [xbp-10088h]
  __int128 v21; // [xsp+78h] [xbp-10078h]
  _BYTE v22[32768]; // [xsp+88h] [xbp-10068h] BYREF
  _BYTE v23[32776]; // [xsp+8088h] [xbp-8068h] BYREF

  _ReadStatusReg(TPIDR_EL0);
  v17 = 0u;
  v21 = 0u;
  v20 = 0u;
  v19 = 0u;
  v18 = 0u;
  v15 = 0;
  v16 = v22;
  v14 = 0u;
  LODWORD(v17) = 0x8000;
  v6 = sub_CCDB0(&v14, "1.3.1", 112);
  if ( v6 )
    goto LABEL_16;
  v7 = 1;
  v8 = 0x8000;
  while ( 1 )
  {
    if ( v8 >= 1 && !DWORD2(v14) )
    {
      v9 = a2(a1, v23, 0x8000);
      if ( v9 < 0 )
      {
        v6 = -777;
        goto LABEL_16;
      }
      v8 = v9;
      *(_QWORD *)&v14 = v23;
      DWORD2(v14) = v9;
      if ( byte_167DCC != 0 && (v7 & 1) != 0 )
        sub_CCEA0((__int64)&v14);
      v7 = 0;
    }
    if ( !(_DWORD)v17 )
      break;
LABEL_12:
    v6 = sub_CCEAC((__int64)&v14, 4 * (unsigned int)(DWORD2(v14) == 0));
    if ( v6 )
      goto LABEL_16;
  }
  if ( a3(a1, v22, 0x8000) == 0x8000 )
  {
    v16 = v22;
    LODWORD(v17) = 0x8000;
    goto LABEL_12;
  }
  v6 = -778;
LABEL_16:
  if ( byte_167DCC )
    v10 = v6 == -5;
  else
    v10 = 0;
  if ( v10 )
    v11 = 1;
  else
    v11 = v6;
  sub_CE950(&v14);
  if ( v16 != v22 )
  {
    v12 = v16 - v22;
    if ( a3(a1, v22, v16 - v22) != v12 )
      v11 = -778;
  }
  if ( v11 < 0 )
    return (unsigned int)-v11;
  else
    return 0;
}
// B84A0: conditional instruction was optimized away because w26.4!=0
// 166D80: using guessed type __int64[512];
// 167DCC: using guessed type char byte_167DCC;
