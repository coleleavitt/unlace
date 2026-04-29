unsigned __int64 __fastcall sub_2642E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall **v4)(int, int, int, int, int, int, char); // [rsp+0h] [rbp-68h] BYREF
  __int64 v5; // [rsp+8h] [rbp-60h]
  __int128 v6; // [rsp+10h] [rbp-58h]
  int v7; // [rsp+20h] [rbp-48h]
  __int64 v8; // [rsp+28h] [rbp-40h]
  char v9; // [rsp+30h] [rbp-38h]
  __int64 v10; // [rsp+38h] [rbp-30h]
  unsigned __int64 v11; // [rsp+48h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v8 = a3;
  v10 = a2;
  v5 = 0;
  v7 = 0;
  v9 = 0;
  v4 = &off_4B3938;
  v6 = 0;
  sub_2631B0(a1, 0, &v4, 0);
  v4 = &off_4B6FB8;
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree(v5);
  }
  return v11 - __readfsqword(0x28u);
}
