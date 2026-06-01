__int64 __fastcall sub_6A3290(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 (__fastcall **v9)(); // [rsp+0h] [rbp-78h] BYREF
  int v10; // [rsp+8h] [rbp-70h]
  __int128 v11; // [rsp+10h] [rbp-68h]
  __int64 v12; // [rsp+20h] [rbp-58h]
  char v13; // [rsp+28h] [rbp-50h]
  int v14; // [rsp+2Ch] [rbp-4Ch]
  __int64 v15; // [rsp+30h] [rbp-48h]

  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  v15 = a1;
  v11 = 0;
  v9 = &off_49DA2C8;
  v10 = 0;
  v13 = 0;
  v14 = 1;
  v12 = 0;
  sub_2623850(&v9, 0, 0, 0, a5, a6);
  sub_6A1280(a2, (char *)&v9, a3 + 17304, a4, a3);
  v9 = &off_49DA2C8;
  sub_2623770(&v9);
  return a1;
}

