/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000805C
// Address: 0x000000010000805C

//----- (000000010000805C) ----------------------------------------------------
__int64 __fastcall sub_10000805C(__int64 a1, __int64 *a2, int a3)
{
  _QWORD *v7; // x23
  unsigned __int64 v8; // x8
  __int64 v9; // x3
  unsigned __int64 v10; // x8
  __int64 v11; // x3
  _QWORD *v12; // x9
  _QWORD *v13; // x8
  bool v14; // zf
  __int64 (__fastcall **v15[3])(_QWORD, _QWORD *); // [xsp+8h] [xbp-88h] BYREF
  char *v16; // [xsp+20h] [xbp-70h] BYREF
  __int64 v17; // [xsp+28h] [xbp-68h]
  __int64 v18; // [xsp+30h] [xbp-60h]
  char *v19; // [xsp+38h] [xbp-58h] BYREF
  __int64 v20; // [xsp+40h] [xbp-50h]
  __int64 v21; // [xsp+48h] [xbp-48h]
  char v22; // [xsp+57h] [xbp-39h] BYREF

  if ( a3 && task_suspend(*(_DWORD *)(a1 + 1544)) || *(_DWORD *)(a1 + 1556) == 4 )
    return 4294967291LL;
  v19 = nullptr;
  v20 = 0;
  v21 = 0;
  sub_100007F0C(a1, (__int64)&v19, (unsigned __int64 *)(a1 + 1768));
  v7 = *(_QWORD **)(a1 + 1832);
  if ( v7 != (_QWORD *)(a1 + 1840) )
  {
    do
    {
      sub_100007F0C(a1, (__int64)&v19, v7 + 5);
      v12 = (_QWORD *)v7[1];
      if ( v12 )
      {
        do
        {
          v13 = v12;
          v12 = (_QWORD *)*v12;
        }
        while ( v12 );
      }
      else
      {
        do
        {
          v13 = (_QWORD *)v7[2];
          v14 = *v13 == (_QWORD)v7;
          v7 = v13;
        }
        while ( !v14 );
      }
      v7 = v13;
    }
    while ( v13 != (_QWORD *)(a1 + 1840) );
  }
  v16 = nullptr;
  v17 = 0;
  v18 = 0;
  v15[0] = (__int64 (__fastcall **)(_QWORD, _QWORD *))&off_100098C70;
  v15[1] = (__int64 (__fastcall **)(_QWORD, _QWORD *))a1;
  v15[2] = (__int64 (__fastcall **)(_QWORD, _QWORD *))&v16;
  sub_100007B7C(a1, v15);
  v8 = 126 - 2 * __clz(0xCCCCCCCCCCCCCCCDLL * ((80 * v20) >> 4));
  if ( 80 * v20 )
    v9 = v8;
  else
    v9 = 0;
  sub_10000B9D4((__int64)v19, (unsigned __int64 *)&v19[80 * v20], (__int64)&v22, v9, 1);
  v10 = 126 - 2 * __clz(0xCCCCCCCCCCCCCCCDLL * ((80 * v17) >> 4));
  if ( 80 * v17 )
    v11 = v10;
  else
    v11 = 0;
  sub_10000B9D4((__int64)v16, (unsigned __int64 *)&v16[80 * v17], (__int64)&v22, v11, 1);
  sub_100017310((__int64)a2, (__int64 *)&v16, (__int64 *)&v19);
  sub_100007DE0(a1, a2);
  if ( a3 && task_resume(*(_DWORD *)(a1 + 1544)) )
  {
    if ( under_debugger != 1 )
      goto LABEL_24;
    while ( 1 )
    {
      __break(1u);
LABEL_24:
      interr(30082);
    }
  }
  sub_10000AF04(&v16);
  sub_10000AF04(&v19);
  return 1;
}
// 100098C70: using guessed type __int64 (__fastcall *off_100098C70)(int, int);
// 10009D90D: using guessed type char under_debugger;
