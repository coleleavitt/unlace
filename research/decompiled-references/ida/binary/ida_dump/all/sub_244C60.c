_QWORD *__fastcall sub_244C60(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall **v5)(); // [rsp+0h] [rbp-88h] BYREF
  int v6; // [rsp+8h] [rbp-80h]
  __int64 v7; // [rsp+10h] [rbp-78h]
  __int128 v8; // [rsp+18h] [rbp-70h]
  __int64 v9; // [rsp+28h] [rbp-60h]
  __int128 v10; // [rsp+30h] [rbp-58h]
  __int64 v11; // [rsp+40h] [rbp-48h]
  __int64 v12; // [rsp+48h] [rbp-40h]
  __int64 v13; // [rsp+50h] [rbp-38h]
  unsigned __int64 v14; // [rsp+58h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v6 = 2;
  v5 = off_4DFA98;
  v7 = 0;
  v9 = 0;
  v11 = a3;
  v12 = a4;
  v13 = 0;
  v8 = 0;
  v10 = 0;
  copy_tinfo_t();
  sub_256390(&v5, a2, 0);
  *a1 = 0;
  copy_tinfo_t();
  v5 = off_4DFA98;
  clear_tinfo_t();
  v5 = off_4DBCF8;
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree();
  }
  return a1;
}
