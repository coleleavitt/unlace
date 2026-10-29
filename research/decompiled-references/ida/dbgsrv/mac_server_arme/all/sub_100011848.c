/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100011848
// Address: 0x0000000100011848

//----- (0000000100011848) ----------------------------------------------------
__int64 __fastcall sub_100011848(__int64 result)
{
  __int64 v1; // x19
  void *v2; // x0
  __int64 v3; // x21
  void *v4; // x0
  __int64 v5; // x20
  void *v6; // x0
  __int64 v7; // x8
  __int64 v8; // x9
  char v9; // w10
  __int64 v10; // x21
  __int64 v11; // x22
  const char *v12; // x23
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  __int64 v15; // x11
  __int64 *v16; // x9
  __int64 v17; // x12
  _QWORD v18[6]; // [xsp+0h] [xbp-70h] BYREF
  char v19; // [xsp+30h] [xbp-40h]
  int v20; // [xsp+34h] [xbp-3Ch]

  if ( (*(_BYTE *)(result + 440) & 1) == 0 )
  {
    v1 = result;
    v3 = result + 248;
    v2 = *(void **)(result + 248);
    if ( v2 )
    {
      *(_QWORD *)(v1 + 256) = 0;
      qfree(v2);
      *(_QWORD *)(v1 + 248) = 0;
      *(_QWORD *)(v1 + 264) = 0;
    }
    v5 = v1 + 224;
    v4 = *(void **)(v1 + 224);
    if ( v4 )
    {
      *(_QWORD *)(v1 + 232) = 0;
      qfree(v4);
      *(_QWORD *)(v1 + 224) = 0;
      *(_QWORD *)(v1 + 240) = 0;
    }
    v6 = *(void **)(v1 + 272);
    if ( v6 )
    {
      *(_QWORD *)(v1 + 280) = 0;
      qfree(v6);
      *(_QWORD *)(v1 + 272) = 0;
      *(_QWORD *)(v1 + 288) = 0;
    }
    v7 = *(_QWORD *)(v1 + 8);
    v8 = *(_QWORD *)(v1 + 472);
    v9 = *(_BYTE *)(v1 + 161);
    v18[0] = off_10009D048;
    v18[1] = v7;
    v18[2] = v3;
    v18[3] = v1 + 224;
    v18[4] = v1 + 272;
    v18[5] = v8;
    v19 = v9;
    v20 = 0;
    result = sub_1000100B4(v1, (__int64)v18);
    *(_BYTE *)(v1 + 440) = 1;
    if ( (*(_BYTE *)(v1 + 480) & 2) != 0 )
    {
      if ( *(_QWORD *)(v1 + 232) )
      {
        v10 = *(_QWORD *)v5;
        result = strcmp((const char *)(*(_QWORD *)v5 + 8LL), "__TEXT");
        if ( !(_DWORD)result )
        {
          if ( *(_QWORD *)(v10 + 40) )
          {
            v11 = 80LL * *(_QWORD *)(v1 + 256);
            if ( v11 )
            {
              v12 = (const char *)(*(_QWORD *)(v1 + 248) + 48LL);
              do
              {
                result = strcmp(v12 - 32, "__TEXT");
                if ( !(_DWORD)result )
                  *(_DWORD *)v12 -= *(_DWORD *)(v10 + 40);
                v12 += 80;
                v11 -= 80;
              }
              while ( v11 );
            }
            *(_QWORD *)(v10 + 40) = 0;
          }
        }
      }
    }
    v13 = 72LL * *(_QWORD *)(v1 + 232);
    if ( v13 )
    {
      v15 = *(_QWORD *)(v1 + 448);
      v14 = *(_QWORD *)(v1 + 456);
      v16 = (__int64 *)(*(_QWORD *)(v1 + 224) + 24LL);
      do
      {
        if ( v15 == -1 )
        {
          if ( v16[2] || !v16[3] )
          {
            v15 = -1;
          }
          else
          {
            v15 = *v16;
            *(_QWORD *)(v1 + 448) = *v16;
          }
        }
        v17 = *v16;
        if ( *v16 < v14 )
        {
          *(_QWORD *)(v1 + 456) = v17;
          v14 = v17;
        }
        v16 += 9;
        v13 -= 72;
      }
      while ( v13 );
    }
  }
  return result;
}
// 10009D048: using guessed type __int64 (__fastcall *off_10009D048[37])();
