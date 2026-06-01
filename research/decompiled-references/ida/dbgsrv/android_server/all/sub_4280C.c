/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4280C
// Address: 0x000000000004280C

//----- (000000000004280C) ----------------------------------------------------
__int64 __fastcall sub_4280C(__int64 *a1)
{
  _QWORD *v2; // x20
  _QWORD *v3; // x1
  _QWORD *v4; // x1
  FILE *v5; // x0
  _QWORD *v6; // x1
  void *v7; // x0
  __int64 v8; // x2
  __int64 v9; // x2
  __int64 v10; // x2
  void *v11; // x0
  __int64 v12; // x8
  unsigned __int64 v13; // x8
  int v14; // w20
  void *v15; // x0
  void *v16; // x0

  v2 = (__int64 *)((char *)a1 + 1844);
  if ( *((_DWORD *)a1 + 461) != -1 )
    (*(void (__fastcall **)(__int64 *, _QWORD))(*a1 + 160))(a1, 0);
  *v2 = -1;
  *((_BYTE *)a1 + 1852) = 0;
  *((_BYTE *)a1 + 733) = 0;
  *(_WORD *)((char *)a1 + 1933) = 0;
  sub_47620((__int64)(a1 + 217), (_QWORD *)a1[218]);
  v3 = (_QWORD *)a1[215];
  a1[217] = (__int64)(a1 + 218);
  a1[219] = 0;
  a1[218] = 0;
  sub_47678((__int64)(a1 + 214), v3);
  v4 = (_QWORD *)a1[212];
  a1[214] = (__int64)(a1 + 215);
  a1[216] = 0;
  a1[215] = 0;
  sub_475E4((__int64)(a1 + 211), v4);
  a1[211] = (__int64)(a1 + 212);
  a1[213] = 0;
  a1[212] = 0;
  sub_39A1C(a1 + 15);
  v5 = (FILE *)a1[240];
  if ( v5 )
  {
    qfclose(v5);
    a1[240] = 0;
  }
  v6 = (_QWORD *)a1[55];
  *((_BYTE *)a1 + 1584) = 0;
  sub_39640((__int64)(a1 + 54), v6);
  v7 = (void *)a1[191];
  a1[55] = 0;
  a1[56] = 0;
  a1[54] = (__int64)(a1 + 55);
  *((_WORD *)a1 + 927) = 0;
  if ( v7 )
  {
    sub_37C50(v7);
    a1[191] = 0;
    sub_476E8((__int64)&qword_1669D8, off_1669E0);
    qword_1669D8 = (__int64)&off_1669E0;
    qword_1669E8 = 0;
    off_1669E0 = nullptr;
  }
  v8 = a1[192];
  if ( v8 )
    (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64 *, _QWORD))(*a1 + 320))(
      a1,
      4,
      v8,
      a1 + 193,
      *((unsigned __int8 *)a1 + 1548));
  v9 = a1[194];
  a1[192] = 0;
  *((_BYTE *)a1 + 1548) = 0;
  if ( v9 )
    (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64 *, _QWORD))(*a1 + 320))(
      a1,
      4,
      v9,
      a1 + 195,
      *((unsigned __int8 *)a1 + 1564));
  v10 = a1[196];
  a1[194] = 0;
  *((_BYTE *)a1 + 1564) = 0;
  if ( v10 )
    (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64 *, _QWORD))(*a1 + 320))(
      a1,
      4,
      v10,
      a1 + 197,
      *((unsigned __int8 *)a1 + 1580));
  v11 = (void *)a1[242];
  a1[196] = 0;
  *((_BYTE *)a1 + 1580) = 0;
  *((_DWORD *)a1 + 482) = 0;
  if ( v11 )
  {
    a1[243] = 0;
    qfree(v11);
    a1[242] = 0;
    a1[244] = 0;
  }
  v12 = a1[209];
  a1[246] = 0;
  *((_BYTE *)a1 + 1853) = 0;
  if ( v12 )
  {
    v13 = 0;
    v14 = 1;
    do
    {
      qfree(*(void **)(a1[208] + 8 * v13));
      v13 = v14++;
    }
    while ( a1[209] > v13 );
  }
  v15 = (void *)a1[205];
  if ( v15 )
  {
    a1[206] = 0;
    qfree(v15);
    a1[205] = 0;
    a1[207] = 0;
  }
  v16 = (void *)a1[208];
  if ( v16 )
  {
    a1[209] = 0;
    qfree(v16);
    a1[208] = 0;
    a1[210] = 0;
  }
  return sub_99DF0(a1);
}
// 1669D8: using guessed type __int64 qword_1669D8;
// 1669E0: using guessed type _UNKNOWN *off_1669E0;
// 1669E8: using guessed type __int64 qword_1669E8;
