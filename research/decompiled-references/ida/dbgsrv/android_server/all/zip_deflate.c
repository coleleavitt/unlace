/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: zip_deflate
// Address: 0x00000000000B84DC

//----- (00000000000B84DC) ----------------------------------------------------
__int64 __fastcall zip_deflate(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, _BYTE *, __int64),
        __int64 (__fastcall *a3)(__int64, _BYTE *, __int64))
{
  int v6; // w22
  __int64 v7; // x28
  __int64 v8; // x0
  int v9; // w0
  __int64 v10; // x23
  __int128 v12; // [xsp+18h] [xbp-100D8h] BYREF
  __int64 v13; // [xsp+28h] [xbp-100C8h]
  _BYTE *v14; // [xsp+30h] [xbp-100C0h]
  __int128 v15; // [xsp+38h] [xbp-100B8h]
  __int128 v16; // [xsp+48h] [xbp-100A8h]
  __int128 v17; // [xsp+58h] [xbp-10098h]
  __int128 v18; // [xsp+68h] [xbp-10088h]
  __int128 v19; // [xsp+78h] [xbp-10078h]
  _BYTE v20[32768]; // [xsp+88h] [xbp-10068h] BYREF
  _BYTE v21[32776]; // [xsp+8088h] [xbp-8068h] BYREF

  _ReadStatusReg(TPIDR_EL0);
  v15 = 0u;
  v19 = 0u;
  v18 = 0u;
  v17 = 0u;
  v16 = 0u;
  v13 = 0;
  v14 = v20;
  v12 = 0u;
  LODWORD(v15) = 0x8000;
  v6 = sub_C8640(&v12, 0xFFFFFFFF, "1.3.1", 112);
  if ( !v6 )
  {
    v7 = 0x8000;
    while ( 1 )
    {
      LODWORD(v8) = DWORD2(v12);
      if ( v7 >= 1 && !DWORD2(v12) )
      {
        v8 = a2(a1, v21, 0x8000);
        if ( v8 < 0 )
        {
          v6 = -777;
          break;
        }
        v7 = v8;
        *(_QWORD *)&v12 = v21;
        DWORD2(v12) = v8;
      }
      if ( !(_DWORD)v15 )
      {
        if ( a3(a1, v20, 0x8000) != 0x8000 )
        {
          v6 = -778;
          break;
        }
        LODWORD(v8) = DWORD2(v12);
        v14 = v20;
        LODWORD(v15) = 0x8000;
      }
      v9 = sub_C9850((__int64)&v12, 4 * (unsigned int)((_DWORD)v8 == 0));
      if ( v9 )
      {
        v6 = v9;
        break;
      }
    }
  }
  sub_C88E4(&v12);
  if ( v14 != v20 )
  {
    v10 = v14 - v20;
    if ( a3(a1, v20, v10) != v10 )
      v6 = -778;
  }
  if ( v6 < 0 )
    return (unsigned int)-v6;
  else
    return 0;
}
// B863C: conditional instruction was optimized away because w22.4!=0
