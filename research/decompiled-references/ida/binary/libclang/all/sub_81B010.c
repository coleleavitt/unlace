unsigned __int64 __fastcall sub_81B010(
        _QWORD *a1,
        __int64 a2,
        __int16 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        unsigned __int8 a7,
        __int64 a8)
{
  __int64 v9; // rsi
  __int64 v13; // rax
  unsigned __int8 v14; // cl
  unsigned __int64 v15; // rbp
  __int64 v17; // rax
  int v18; // [rsp+8h] [rbp-40h]

  v9 = 8 * a5 + 40;
  v13 = a1[274];
  v14 = a7;
  a1[284] += v9;
  v15 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v9 + v15 && v13 )
  {
    a1[274] = v9 + v15;
  }
  else
  {
    v18 = a6;
    v17 = sub_804090((__int64)(a1 + 274), v9, 3);
    v14 = a7;
    a6 = v18;
    v15 = v17;
  }
  sub_81AB70(v15, a1, a1[2309], a2, a3, a6, v14, a4, a5, a8);
  return v15;
}

