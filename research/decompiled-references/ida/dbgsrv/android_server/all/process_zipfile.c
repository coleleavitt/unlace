/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: process_zipfile
// Address: 0x00000000000B87D8

//----- (00000000000B87D8) ----------------------------------------------------
__int64 __fastcall process_zipfile(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64, _QWORD, __int64, __int64, _QWORD, _BYTE *),
        __int64 a3)
{
  int32x2_t *v5; // x0
  int32x2_t *v6; // x19
  int v7; // w0
  int v8; // w23
  unsigned __int64 v9; // x8
  unsigned __int64 v10; // x24
  unsigned int v11; // w20
  __int128 v13; // [xsp+8h] [xbp-58h] BYREF
  __int64 v14; // [xsp+18h] [xbp-48h]

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = sub_D23B8(a1);
  if ( v5 )
  {
    v6 = v5;
    v7 = sub_D24C8((__int64)v5, &v13);
    if ( !v7 && (_QWORD)v13 )
    {
      v8 = 1;
      while ( 1 )
      {
        v7 = sub_B8718((__int64)v6, a2, a3);
        if ( v7 )
          break;
        v9 = v13;
        v10 = v8;
        if ( (unsigned __int64)v13 > v8 )
        {
          v7 = sub_D319C(v6);
          if ( v7 )
            break;
          v9 = v13;
        }
        ++v8;
        if ( v9 <= v10 )
          goto LABEL_12;
      }
    }
    if ( v7 < 0 )
      v11 = -v7;
    else
LABEL_12:
      v11 = 0;
    sub_D23D0((__int64)v6);
  }
  else
  {
    return 1;
  }
  return v11;
}
