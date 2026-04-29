__int64 __fastcall objc::ObjectHashTable::forEachObject(__int64 result, __int64 a2)
{
  unsigned int v2; // w8
  __int64 v4; // x20
  unsigned int v5; // w9
  __int64 v6; // x23
  __int64 v7; // x10
  __int64 v8; // x21
  __int64 v9; // x9
  unsigned __int64 v10; // x8
  __int64 v11; // x8
  __int64 v12; // x12
  int64x2_t *v13; // x11
  unsigned __int64 *v14; // x10
  __int16 *v15; // x11
  __int64 v16; // x12
  unsigned __int64 v17; // t1
  int64x2_t v18; // [xsp+0h] [xbp-80h] BYREF
  __int64 *v19; // [xsp+10h] [xbp-70h] BYREF
  int64x2_t v20; // [xsp+18h] [xbp-68h]
  __int64 v21; // [xsp+28h] [xbp-58h] BYREF
  __int16 v22; // [xsp+30h] [xbp-50h]

  v2 = *(_DWORD *)(result + 4);
  if ( v2 )
  {
    v4 = result;
    v5 = 0;
    v6 = result + 1060;
    v18 = vdupq_n_s64(1u);
    do
    {
      v7 = v4 + (unsigned int)(*(_DWORD *)(v4 + 16) + 1) + v2 + 1056;
      v8 = v5;
      v9 = *(int *)(v7 + 4LL * v5);
      if ( (_DWORD)v9 )
      {
        v10 = *(_QWORD *)(v7 + 4LL * v2 + 8 * v8);
        if ( (v10 & 1) != 0 )
        {
          __chkstk_darwin();
          if ( v11 )
          {
            v13 = &v18 - v11;
            do
            {
              v13->i64[0] = 0;
              v13->i16[4] = 0;
              ++v13;
            }
            while ( v13 != &v18 );
          }
          if ( v11 )
          {
            v14 = (unsigned __int64 *)(v6
                                     + 8 * ((*(_QWORD *)(v12 + 8 * v8) >> 1) & 0x7FFFFFFFFFFFLL)
                                     + (unsigned int)(*(_DWORD *)(v4 + 16) + 1)
                                     + 13LL * *(unsigned int *)(v4 + 4));
            v15 = &v18.i16[-8 * v11 + 4];
            v16 = v11;
            do
            {
              v17 = *v14++;
              *((_QWORD *)v15 - 1) = (v17 >> 1) & 0x7FFFFFFFFFFFLL;
              *v15 = HIWORD(v17);
              v15 += 8;
              --v16;
            }
            while ( v16 );
          }
          v19 = &v18.i64[-2 * v11];
          v20.i64[0] = v11;
          v20.i64[1] = v11;
          result = (*(__int64 (__fastcall **)(__int64, __int64))(a2 + 16))(a2, v8);
        }
        else
        {
          v21 = (v10 >> 1) & 0x7FFFFFFFFFFFLL;
          v22 = HIWORD(v10);
          v19 = &v21;
          v20 = v18;
          result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 **))(a2 + 16))(a2, v8, v4 + v9, &v19);
        }
      }
      v5 = v8 + 1;
      v2 = *(_DWORD *)(v4 + 4);
    }
    while ( (_DWORD)v8 + 1 != v2 );
  }
  return result;
}
