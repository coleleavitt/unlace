/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: process_zip_linput
// Address: 0x00000000000B8E94

//----- (00000000000B8E94) ----------------------------------------------------
__int64 __fastcall process_zip_linput(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64, _QWORD, __int64, __int64, _QWORD, _BYTE *),
        __int64 a3)
{
  __int128 v3; // q0
  int32x2_t *v6; // x0
  int32x2_t *v7; // x19
  int v8; // w0
  int v9; // w23
  unsigned __int64 v10; // x8
  unsigned __int64 v11; // x24
  unsigned int v12; // w20
  __int128 v14; // [xsp+28h] [xbp-98h] BYREF
  __int64 (__fastcall *v15)(); // [xsp+38h] [xbp-88h] BYREF
  __int128 v16; // [xsp+40h] [xbp-80h]
  void *v17; // [xsp+50h] [xbp-70h]
  __int64 (__fastcall *v18)(__int64, __int64, __int64, unsigned int); // [xsp+58h] [xbp-68h]
  __int128 v19; // [xsp+60h] [xbp-60h]
  __int64 v20; // [xsp+70h] [xbp-50h]
  __int64 v21; // [xsp+78h] [xbp-48h]

  *(_QWORD *)&v3 = sub_B8B94;
  *((_QWORD *)&v3 + 1) = sub_B8BA4;
  v21 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v15 = nullsub_9;
  v16 = v3;
  *(_QWORD *)&v3 = sub_B8C08;
  *((_QWORD *)&v3 + 1) = sub_B8C10;
  v17 = &loc_B8BC4;
  v20 = a1;
  v18 = sub_B8BD4;
  v19 = v3;
  v6 = sub_D2360((__int64)"", (__int128 *)&v15);
  if ( v6 )
  {
    v7 = v6;
    v8 = sub_D24C8((__int64)v6, &v14);
    if ( !v8 && (_QWORD)v14 )
    {
      v9 = 1;
      while ( 1 )
      {
        v8 = sub_B8718((__int64)v7, a2, a3);
        if ( v8 )
          break;
        v10 = v14;
        v11 = v9;
        if ( (unsigned __int64)v14 > v9 )
        {
          v8 = sub_D319C(v7);
          if ( v8 )
            break;
          v10 = v14;
        }
        ++v9;
        if ( v10 <= v11 )
          goto LABEL_12;
      }
    }
    if ( v8 < 0 )
      v12 = -v8;
    else
LABEL_12:
      v12 = 0;
    sub_D23D0((__int64)v7);
  }
  else
  {
    return 1;
  }
  return v12;
}
// B8B90: using guessed type __int64 __fastcall nullsub_9();
