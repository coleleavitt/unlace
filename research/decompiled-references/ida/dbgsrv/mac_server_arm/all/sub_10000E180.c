/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000E180
// Address: 0x000000010000E180

//----- (000000010000E180) ----------------------------------------------------
__int64 __fastcall sub_10000E180(__int64 a1, __int64 a2)
{
  _BOOL4 v4; // w8
  __int64 result; // x0
  bool v6; // zf
  unsigned __int64 v8; // x21
  off_t v9; // x22
  __int64 v10; // x0
  unsigned __int64 v11; // x23
  unsigned __int64 v12; // x8
  __int64 v13; // x8
  bool v14; // cf
  size_t v15; // x8
  size_t v16; // x2
  size_t v17; // x0
  __int64 v18; // x8
  __int64 v19; // x8
  _BYTE v20[4]; // [xsp+28h] [xbp-48h] BYREF
  unsigned int v21; // [xsp+2Ch] [xbp-44h]
  unsigned int v22; // [xsp+30h] [xbp-40h]

  v4 = sub_10001881C((__int64)v20, a2);
  result = -1;
  if ( v4 )
  {
    v6 = !v20[2] && v20[1] == 0;
    if ( v6 && v20[0] == 22 )
    {
      v8 = v21;
      v9 = qlseek(a2, 0, 1);
      v10 = qlsize(a2);
      v11 = 0;
      if ( (v9 & 0x8000000000000000LL) == 0 )
      {
        v12 = v10 - v9;
        if ( ((v10 - v9) & 0x8000000000000000LL) == 0 )
        {
          if ( v12 >= v8 )
          {
LABEL_15:
            sub_10001115C((_QWORD **)a1, v8);
            v13 = *(_QWORD *)(a1 + 8);
            v14 = v13 != 0;
            v15 = v13 - 1;
            if ( v14 )
              v16 = v15;
            else
              v16 = 0;
            v17 = qlread(a2, *(void **)a1, v16);
            v18 = *(_QWORD *)(a1 + 8);
            v14 = v18 != 0;
            v19 = v18 - 1;
            if ( !v14 )
              v19 = 0;
            if ( v17 == v19 )
              return v22;
            else
              return -1;
          }
          v11 = (unsigned int)v12;
        }
      }
      v8 = v11;
      if ( (unsigned int)sub_10001A44C() != 1 )
        sub_10001A4B8(0);
      goto LABEL_15;
    }
  }
  return result;
}
