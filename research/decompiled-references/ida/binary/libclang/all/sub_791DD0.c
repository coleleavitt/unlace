__int64 __fastcall sub_791DD0(__int64 a1, unsigned __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 (__fastcall **v7)(); // [rsp+0h] [rbp-68h] BYREF
  int v8; // [rsp+8h] [rbp-60h]
  __int128 v9; // [rsp+10h] [rbp-58h]
  __int64 v10; // [rsp+20h] [rbp-48h]
  char v11; // [rsp+28h] [rbp-40h]
  int v12; // [rsp+2Ch] [rbp-3Ch]
  __int64 v13; // [rsp+30h] [rbp-38h]

  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  v13 = a1;
  v9 = 0;
  v7 = &off_49DA2C8;
  v8 = 0;
  v11 = 0;
  v12 = 1;
  v10 = 0;
  sub_2623850(&v7, 0, 0, 0, a5, a6);
  sub_791C00((__int64)&v7, *a2);
  v7 = &off_49DA2C8;
  sub_2623770(&v7);
  return a1;
}

