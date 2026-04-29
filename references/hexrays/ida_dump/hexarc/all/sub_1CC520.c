__int64 __fastcall sub_1CC520(__int64 *a1, __int64 *a2)
{
  unsigned int v2; // ebx
  __int64 (__fastcall **v4)(); // [rsp+0h] [rbp-48h] BYREF
  __int64 v5[2]; // [rsp+8h] [rbp-40h] BYREF
  char v6; // [rsp+18h] [rbp-30h]
  __int64 *v7; // [rsp+20h] [rbp-28h]
  unsigned int v8; // [rsp+28h] [rbp-20h]
  unsigned __int64 v9; // [rsp+38h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  v7 = a1;
  v5[0] = 0;
  v5[1] = 0;
  v6 = 0;
  v4 = off_4AB298;
  v8 = 0;
  sub_69010((__int64 *)&v4, a1, 0, 0);
  if ( a2 )
    sub_5E350(a2, v5);
  v2 = v8;
  v4 = off_4A8358;
  qfree(v5[0]);
  return v2;
}
