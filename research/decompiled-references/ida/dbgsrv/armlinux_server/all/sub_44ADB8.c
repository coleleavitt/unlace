/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44ADB8
// Address: 0x000000000044ADB8

//----- (000000000044ADB8) ----------------------------------------------------
__int64 __fastcall sub_44ADB8(_QWORD *a1, int a2)
{
  unsigned __int64 v3; // x20
  unsigned __int64 v4; // x22
  __int64 v5; // x24
  __int64 v6; // x23
  _QWORD *v8; // x23
  __int64 *v9; // x1
  unsigned __int64 v10; // x2
  __int64 v11; // x21
  __int64 *v12; // x2
  unsigned __int64 v13; // x21
  __int64 v14; // x20
  __int64 *v15; // x2
  __int64 v16[4]; // [xsp+58h] [xbp-48h] BYREF
  __int64 v17[5]; // [xsp+78h] [xbp-28h] BYREF

  v3 = a1[4];
  if ( a2 > v3 )
  {
    if ( under_debugger )
      __break(0x3E8u);
    sub_492270(285);
  }
  v4 = v3 - a2;
  if ( v4 != v3 )
  {
    memset(&v16[1], 0, 24);
    LOBYTE(v16[0]) = 2;
    if ( v3 - a2 >= v3 )
    {
      if ( v3 - a2 > v3 )
      {
        v8 = a1 + 3;
        v9 = (__int64 *)a1[3];
        v10 = a1[5];
        if ( v9 <= v16 && v16 < &v9[4 * v10] )
        {
          memset(&v17[1], 0, 24);
          LOBYTE(v17[0]) = 2;
          sub_4488B8(v17, v16);
          if ( v4 > a1[5] )
            a1[3] = sub_491288((__int64)(a1 + 3), (void *)a1[3], v4, 0x20u);
          v13 = a1[4];
          if ( v4 > v13 )
          {
            v14 = 32 * v13;
            do
            {
              v15 = (__int64 *)(*v8 + v14);
              *(_BYTE *)v15 = 2;
              v15[1] = 0;
              v15[2] = 0;
              v15[3] = 0;
              sub_4488B8(v15, v17);
              ++v13;
              v14 += 32;
            }
            while ( v4 != v13 );
          }
          v8[1] = v4;
          sub_448310(v17);
        }
        else
        {
          if ( v4 <= v10 || (a1[3] = sub_491288((__int64)(a1 + 3), v9, v4, 0x20u), v3 = a1[4], v4 > v3) )
          {
            v11 = 32 * v3;
            do
            {
              v12 = (__int64 *)(*v8 + v11);
              *(_BYTE *)v12 = 2;
              v12[1] = 0;
              v12[2] = 0;
              v12[3] = 0;
              sub_4488B8(v12, v16);
              ++v3;
              v11 += 32;
            }
            while ( v4 > v3 );
          }
          v8[1] = v4;
        }
      }
    }
    else
    {
      v5 = 32 * v4;
      v6 = v3 - a2;
      do
      {
        ++v6;
        sub_448310((__int64 *)(a1[3] + v5));
        v5 += 32;
      }
      while ( v3 != v6 );
      a1[4] = v4;
    }
    sub_448310(v16);
  }
  return v17[4] ^ _stack_chk_guard;
}
// 52451C: using guessed type char under_debugger;
