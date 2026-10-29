/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000B9D4
// Address: 0x000000010000B9D4

//----- (000000010000B9D4) ----------------------------------------------------
void __fastcall sub_10000B9D4(__int64 a1, unsigned __int64 *a2, __int64 a3, __int64 a4, char a5)
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
    if ( (__int64)v13 > 2 )
    {
      switch ( v13 )
      {
        case 3uLL:
          sub_10000C214(a1, (unsigned __int64 *)(a1 + 80), (__int64)(a2 - 10));
          return;
        case 4uLL:
          sub_10000CE7C(a1, (unsigned __int64 *)(a1 + 80), a1 + 160, (__int64)(a2 - 10));
          return;
        case 5uLL:
          sub_10000CF50(a1, (unsigned __int64 *)(a1 + 80), a1 + 160, a1 + 240, (__int64)(a2 - 10));
          return;
      }
    }
    else
    {
      if ( v13 < 2 )
        return;
      if ( v13 == 2 )
      {
        v22 = *(a2 - 10);
        if ( v22 <= *(_QWORD *)a1 && (v22 < *(_QWORD *)a1 || *(a2 - 9) < *(_QWORD *)(a1 + 8)) )
          sub_10000CCE8((__int128 *)a1, (__int128 *)a2 - 5);
        return;
      }
    }
    if ( v12 <= 1919 )
    {
      if ( (a5 & 1) != 0 )
        sub_10000BDB4((unsigned __int64 *)a1, a2);
      else
        sub_10000BFFC(a1, (__int64)a2);
      return;
    }
    if ( v10 == 1 )
      break;
    v14 = v13 >> 1;
    v15 = (unsigned __int64 *)(a1 + 80 * (v13 >> 1));
    if ( (unsigned __int64)v12 < 0x2801 )
    {
      sub_10000C214((__int64)v15, (unsigned __int64 *)a1, (__int64)(a2 - 10));
      if ( (a5 & 1) != 0 )
        goto LABEL_19;
    }
    else
    {
      sub_10000C214(a1, v15, (__int64)(a2 - 10));
      v16 = 80 * v14;
      v17 = (unsigned __int64 *)(80 * v14 + a1 - 80);
      sub_10000C214(a1 + 80, v17, (__int64)(a2 - 20));
      sub_10000C214(a1 + 160, (unsigned __int64 *)(a1 + 80 + v16), (__int64)(a2 - 30));
      sub_10000C214((__int64)v17, v15, a1 + 80 + v16);
      sub_10000CCE8((__int128 *)a1, (__int128 *)v15);
      if ( (a5 & 1) != 0 )
        goto LABEL_19;
    }
    v18 = *(_QWORD *)(a1 - 80);
    if ( v18 > *(_QWORD *)a1 || v18 >= *(_QWORD *)a1 && *(_QWORD *)(a1 - 72) >= *(_QWORD *)(a1 + 8) )
    {
      v9 = sub_10000C32C((__int128 *)a1, (unsigned __int64)a2);
      goto LABEL_24;
    }
LABEL_19:
    v19 = sub_10000C658((__int128 *)a1, (unsigned __int64)a2);
    if ( (v20 & 1) == 0 )
      goto LABEL_22;
    v21 = sub_10000C99C(a1, v19);
    v9 = v19 + 80;
    if ( sub_10000C99C(v19 + 80, (__int64)a2) )
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
      sub_10000B9D4(a1, v19, a3, -v11, a5 & 1);
      v9 = v19 + 80;
LABEL_24:
      a5 = 0;
      a4 = -v11;
      goto LABEL_2;
    }
  }
  if ( (unsigned __int64 *)a1 != a2 )
  {
    v23 = (v13 - 2) >> 1;
    v24 = v23 + 1;
    v25 = (unsigned __int64 *)(a1 + 80 * v23);
    do
    {
      sub_10000D064(a1, a3, 0xCCCCCCCCCCCCCCCDLL * (v12 >> 4), v25);
      v25 -= 10;
      --v24;
    }
    while ( v24 );
    v26 = 0xCCCCCCCCCCCCCCCDLL * ((unsigned __int64)v12 >> 4);
    do
    {
      sub_10000D338(a1, (__int64)a2, a3, v26);
      a2 -= 10;
    }
    while ( v26-- > 2 );
  }
}
// 10000BB64: variable 'v20' is possibly undefined
