/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100012FA8
// Address: 0x0000000100012FA8

//----- (0000000100012FA8) ----------------------------------------------------
void __fastcall sub_100012FA8(__int64 a1, __int64 a2)
{
  _BOOL4 v4; // w0
  _BOOL4 v5; // w8
  __int64 v6; // x8
  unsigned __int8 *v7; // x20
  __int64 v8; // x21
  __int64 v9; // [xsp+30h] [xbp-70h] BYREF
  unsigned __int8 *v10; // [xsp+38h] [xbp-68h] BYREF
  void *v11; // [xsp+40h] [xbp-60h] BYREF
  __int64 v12; // [xsp+48h] [xbp-58h]
  __int64 v13; // [xsp+50h] [xbp-50h]
  _QWORD v14[2]; // [xsp+58h] [xbp-48h] BYREF
  _DWORD v15[3]; // [xsp+68h] [xbp-38h] BYREF
  unsigned int v16; // [xsp+74h] [xbp-2Ch]

  v14[0] = off_10009D570;
  v14[1] = v15;
  v15[0] = 0;
  v4 = sub_1000100B4(a1, (__int64)v14);
  if ( v16 )
    v5 = v4;
  else
    v5 = 0;
  if ( v5 )
  {
    v11 = nullptr;
    v12 = 0;
    v13 = 0;
    if ( (sub_100012E6C(a1, (__int64)&v11, v15[2], (char *)v16, (__int64)"load commands size", 0) & 1) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 448);
      v10 = (unsigned __int8 *)v11;
      v7 = (unsigned __int8 *)v11 + v12;
      if ( v11 < (char *)v11 + v12 )
      {
        if ( v6 == -1 )
          v8 = 0;
        else
          v8 = v6;
        while ( (unpack_xleb128(&v9, 64, 0, &v10, (unsigned __int64)v7) & 1) != 0 )
        {
          v8 += v9;
          (**(void (__fastcall ***)(__int64, __int64))a2)(a2, v8);
          if ( v10 >= v7 )
            goto LABEL_18;
        }
        if ( (debug & 0x10) != 0 )
          sub_100012E04();
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      }
LABEL_18:
      if ( v11 )
      {
        v12 = 0;
        qfree(v11);
      }
    }
    else
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      if ( v11 )
      {
        v12 = 0;
        qfree(v11);
      }
    }
  }
}
// 10009D570: using guessed type __int64 (__fastcall *off_10009D570[37])();
// 1000A5908: using guessed type int debug;
