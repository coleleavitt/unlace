unsigned __int64 __fastcall sub_411C80(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  _QWORD *v6; // rsi
  __int64 v7; // rbx
  unsigned int v8; // ebp
  _QWORD *v9; // rsi
  _QWORD *v11; // rsi
  unsigned __int64 v12; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-40h]
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v12 = a2;
  v13 = a3;
  if ( a4 )
  {
    v6 = sub_411C00(a1 + 1792, &v12);
    if ( v6 != (_QWORD *)(a1 + 1856) )
      sub_40D830(a1 + 1792, (__int64)v6, 26);
    v12 = a3;
    v7 = a1 + 1896;
    v13 = a2;
    v8 = 28;
  }
  else
  {
    v11 = sub_411C00(a1 + 2000, &v12);
    if ( v11 != (_QWORD *)(a1 + 2064) )
      sub_40D830(a1 + 2000, (__int64)v11, 30);
    v13 = a2;
    v7 = a1 + 2104;
    v8 = 32;
    v12 = a3;
  }
  v9 = sub_411C00(v7, &v12);
  if ( v9 == (_QWORD *)(v7 + 64) )
    return v14 - __readfsqword(0x28u);
  else
    return sub_40D830(v7, (__int64)v9, v8);
}
