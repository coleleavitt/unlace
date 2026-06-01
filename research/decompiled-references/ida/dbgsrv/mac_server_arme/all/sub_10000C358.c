/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000C358
// Address: 0x000000010000C358

//----- (000000010000C358) ----------------------------------------------------
void __fastcall sub_10000C358(__int64 a1, unsigned __int64 *a2, __int64 a3, __int64 a4, char a5)
{
  unsigned __int64 v9; // x27
  __int64 v10; // x8
  __int64 v11; // x24
  __int64 v12; // x27
  unsigned __int64 v13; // x26
  unsigned __int64 v14; // x28
  unsigned __int64 *v15; // x26
  __int64 v16; // x25
  unsigned __int64 *v17; // x28
  unsigned __int64 v18; // x8
  unsigned __int64 v19; // x26
  char v20; // w1
  bool v21; // w28
  unsigned __int64 v22; // x8
  unsigned __int64 v23; // x8
  unsigned __int64 v24; // x23
  unsigned __int64 *v25; // x22
  unsigned __int64 v26; // x22
  __int64 _68; // [xsp+68h] [xbp+8h]

LABEL_1:
  v9 = a1;
LABEL_2:
  v10 = 1 - a4;
  while ( 1 )
  {
    a1 = v9;
    v11 = v10;
    v12 = (__int64)a2 - v9;
    v13 = 0xCCCCCCCCCCCCCCCDLL * (v12 >> 4);
    if ( (__int64)v13 <= 2 )
    {
      if ( v13 < 2 )
        return;
      if ( v13 == 2 )
      {
        v22 = *(a2 - 10);
        if ( v22 <= *(_QWORD *)a1 && (v22 < *(_QWORD *)a1 || *(a2 - 9) < *(_QWORD *)(a1 + 8)) )
        {
          if ( ((_68 ^ (2 * _68)) & 0x4000000000000000LL) != 0 )
            __break(0xC471u);
          sub_10000D6E8((__int128 *)a1, (__int128 *)a2 - 5);
        }
        return;
      }
      goto LABEL_10;
    }
    if ( v13 == 3 )
      break;
    if ( v13 == 4 )
    {
      if ( ((_68 ^ (2 * _68)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      sub_10000D880(a1, (unsigned __int64 *)(a1 + 80), a1 + 160, (__int64)(a2 - 10));
      return;
    }
    if ( v13 == 5 )
    {
      if ( ((_68 ^ (2 * _68)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      sub_10000D968(a1, (unsigned __int64 *)(a1 + 80), a1 + 160, a1 + 240, (__int64)(a2 - 10));
      return;
    }
LABEL_10:
    if ( v12 <= 1919 )
    {
      if ( (a5 & 1) != 0 )
      {
        if ( ((_68 ^ (2 * _68)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        sub_10000C79C((unsigned __int64 *)a1, a2);
      }
      else
      {
        if ( ((_68 ^ (2 * _68)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        sub_10000C9E8(a1, (__int64)a2);
      }
      return;
    }
    if ( v10 == 1 )
    {
      if ( (unsigned __int64 *)a1 != a2 )
      {
        v23 = (v13 - 2) >> 1;
        v24 = v23 + 1;
        v25 = (unsigned __int64 *)(a1 + 80 * v23);
        do
        {
          sub_10000DA90(a1, a3, 0xCCCCCCCCCCCCCCCDLL * (v12 >> 4), v25);
          v25 -= 10;
          --v24;
        }
        while ( v24 );
        v26 = 0xCCCCCCCCCCCCCCCDLL * ((unsigned __int64)v12 >> 4);
        do
        {
          sub_10000DD68(a1, (__int64)a2, a3, v26);
          a2 -= 10;
        }
        while ( v26-- > 2 );
      }
      return;
    }
    v14 = v13 >> 1;
    v15 = (unsigned __int64 *)(a1 + 80 * (v13 >> 1));
    if ( (unsigned __int64)v12 < 0x2801 )
    {
      sub_10000CC04((__int64)v15, (unsigned __int64 *)a1, (__int64)(a2 - 10));
      if ( (a5 & 1) != 0 )
        goto LABEL_19;
    }
    else
    {
      sub_10000CC04(a1, v15, (__int64)(a2 - 10));
      v16 = 80 * v14;
      v17 = (unsigned __int64 *)(80 * v14 + a1 - 80);
      sub_10000CC04(a1 + 80, v17, (__int64)(a2 - 20));
      sub_10000CC04(a1 + 160, (unsigned __int64 *)(a1 + 80 + v16), (__int64)(a2 - 30));
      sub_10000CC04((__int64)v17, v15, a1 + 80 + v16);
      sub_10000D6E8((__int128 *)a1, (__int128 *)v15);
      if ( (a5 & 1) != 0 )
        goto LABEL_19;
    }
    v18 = *(_QWORD *)(a1 - 80);
    if ( v18 > *(_QWORD *)a1 || v18 >= *(_QWORD *)a1 && *(_QWORD *)(a1 - 72) >= *(_QWORD *)(a1 + 8) )
    {
      v9 = sub_10000CD20((__int128 *)a1, (unsigned __int64)a2);
      goto LABEL_24;
    }
LABEL_19:
    v19 = sub_10000D050((__int128 *)a1, (unsigned __int64)a2);
    if ( (v20 & 1) == 0 )
      goto LABEL_22;
    v21 = sub_10000D398(a1, v19);
    v9 = v19 + 80;
    if ( sub_10000D398(v19 + 80, (__int64)a2) )
    {
      a4 = -v11;
      a2 = (unsigned __int64 *)v19;
      if ( v21 )
        return;
      goto LABEL_1;
    }
    v10 = v11 + 1;
    if ( !v21 )
    {
LABEL_22:
      sub_10000C358(a1, v19, a3, -v11, a5 & 1);
      v9 = v19 + 80;
LABEL_24:
      a5 = 0;
      a4 = -v11;
      goto LABEL_2;
    }
  }
  if ( ((_68 ^ (2 * _68)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  sub_10000CC04(a1, (unsigned __int64 *)(a1 + 80), (__int64)(a2 - 10));
}
// 10000C4EC: variable 'v20' is possibly undefined
// 10000C5C0: variable '_68' is possibly undefined
