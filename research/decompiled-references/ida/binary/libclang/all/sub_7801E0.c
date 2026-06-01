__int64 __fastcall sub_7801E0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 (__fastcall **v8)(); // [rsp+0h] [rbp-68h] BYREF
  int v9; // [rsp+8h] [rbp-60h]
  __int128 v10; // [rsp+10h] [rbp-58h]
  __int64 v11; // [rsp+20h] [rbp-48h]
  char v12; // [rsp+28h] [rbp-40h]
  int v13; // [rsp+2Ch] [rbp-3Ch]
  __int64 v14; // [rsp+30h] [rbp-38h]

  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  v14 = a1;
  v10 = 0;
  v8 = &off_49DA2C8;
  v9 = 0;
  v12 = 0;
  v13 = 1;
  v11 = 0;
  sub_2623850(&v8, 0, 0, 0, a5, a6);
  v6 = sub_798D40(a2);
  sub_77FFB0(a2, (__int64)&v8, v6 + 17304);
  v8 = &off_49DA2C8;
  sub_2623770(&v8);
  return a1;
}

