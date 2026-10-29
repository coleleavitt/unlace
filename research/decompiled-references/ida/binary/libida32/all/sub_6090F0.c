unsigned __int64 __fastcall sub_6090F0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[3]; // [rsp+0h] [rbp-88h] BYREF
  void *v5; // [rsp+18h] [rbp-70h]
  __int128 v6; // [rsp+20h] [rbp-68h]
  int v7; // [rsp+30h] [rbp-58h]
  void *ptr; // [rsp+38h] [rbp-50h]
  __int128 v9; // [rsp+40h] [rbp-48h]
  __int64 v10; // [rsp+50h] [rbp-38h]
  __int64 v11; // [rsp+58h] [rbp-30h]
  unsigned __int64 v12; // [rsp+68h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v4[0] = off_2B08B08;
  v4[1] = a2;
  v4[2] = 0xFFFFFFFF00000000LL;
  v5 = nullptr;
  v7 = -1;
  ptr = nullptr;
  v10 = 0;
  v11 = a3;
  v6 = 0;
  v9 = 0;
  sub_608C40((__int64)v4, 0);
  v4[0] = off_2B08A18;
  if ( ptr )
  {
    *(_QWORD *)&v9 = 0;
    qfree(ptr);
  }
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree(v5);
  }
  return v12 - __readfsqword(0x28u);
}

