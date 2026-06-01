__int64 __fastcall sub_6D5330(__int64 a1, __int64 a2, char a3, unsigned __int8 a4)
{
  unsigned int v5; // ebx
  __int64 v8; // [rsp+18h] [rbp-78h] BYREF
  __int64 v9; // [rsp+20h] [rbp-70h] BYREF
  __int128 v10; // [rsp+28h] [rbp-68h] BYREF
  __int64 v11; // [rsp+38h] [rbp-58h] BYREF
  int v12; // [rsp+40h] [rbp-50h]
  char v13; // [rsp+44h] [rbp-4Ch]
  char v14; // [rsp+45h] [rbp-4Bh]
  unsigned __int64 v15; // [rsp+50h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v10 = 0;
  v9 = 0;
  v8 = 0;
  copy_tinfo_t((char *)&v10 + 8);
  v11 = 0;
  copy_tinfo_t(&v11);
  v13 = a3;
  v12 = 0;
  v14 = 0;
  clear_tinfo_t(&v8);
  clear_tinfo_t(&v9);
  copy_tinfo_t(&v10);
  v5 = create_tinfo(a1, a4, 10, &v10);
  clear_tinfo_t(&v11);
  clear_tinfo_t((char *)&v10 + 8);
  clear_tinfo_t(&v10);
  return v5;
}
