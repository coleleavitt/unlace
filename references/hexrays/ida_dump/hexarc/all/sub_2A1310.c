unsigned __int64 __fastcall sub_2A1310(__int64 *a1, __int64 a2, char a3, int a4, int a5, int a6)
{
  __int64 (__fastcall **v7)(); // [rsp+0h] [rbp-68h] BYREF
  int v8; // [rsp+8h] [rbp-60h]
  __int64 v9; // [rsp+10h] [rbp-58h]
  __int128 v10; // [rsp+18h] [rbp-50h]
  __int64 v11; // [rsp+28h] [rbp-40h]
  __int128 v12; // [rsp+30h] [rbp-38h]
  __int64 *v13; // [rsp+40h] [rbp-28h]
  unsigned __int64 v14; // [rsp+48h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  if ( !a3 )
    return sub_2A10C0(a1, a2, 8, a4, a5, a6);
  v13 = a1;
  v10 = 0;
  v8 = 0;
  v9 = 0;
  v11 = 0;
  v7 = off_4AD638;
  v12 = 0;
  sub_24E700((__int64 *)&v7, a2, 0);
  v7 = off_4A8538;
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(v11);
  }
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9);
  }
  return v14 - __readfsqword(0x28u);
}
