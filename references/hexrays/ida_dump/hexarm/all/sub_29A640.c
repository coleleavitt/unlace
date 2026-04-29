unsigned __int64 __fastcall sub_29A640(__int64 a1, __int64 a2, char a3, unsigned __int8 a4)
{
  __int64 v7; // [rsp+10h] [rbp-78h] BYREF
  __int64 v8; // [rsp+18h] [rbp-70h] BYREF
  __int128 v9; // [rsp+20h] [rbp-68h] BYREF
  __int64 v10; // [rsp+30h] [rbp-58h] BYREF
  int v11; // [rsp+38h] [rbp-50h]
  char v12; // [rsp+3Ch] [rbp-4Ch]
  char v13; // [rsp+3Dh] [rbp-4Bh]
  unsigned __int64 v14; // [rsp+48h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  v9 = 0;
  v8 = 0;
  v7 = 0;
  copy_tinfo_t((char *)&v9 + 8, &v7);
  v10 = 0;
  copy_tinfo_t(&v10, &v8);
  v12 = a3;
  v11 = 0;
  v13 = 0;
  clear_tinfo_t(&v7);
  clear_tinfo_t(&v8);
  copy_tinfo_t(&v9, a2);
  create_tinfo(a1, a4, 10, &v9);
  clear_tinfo_t(&v10);
  clear_tinfo_t((char *)&v9 + 8);
  clear_tinfo_t(&v9);
  return v14 - __readfsqword(0x28u);
}
