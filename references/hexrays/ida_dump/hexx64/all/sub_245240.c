_QWORD *__fastcall sub_245240(_QWORD *a1, __int64 a2)
{
  __int64 v3; // [rsp+0h] [rbp-78h] BYREF
  __int64 v4; // [rsp+8h] [rbp-70h] BYREF
  __int128 v5; // [rsp+10h] [rbp-68h] BYREF
  __int64 v6; // [rsp+20h] [rbp-58h] BYREF
  int v7; // [rsp+28h] [rbp-50h]
  __int16 v8; // [rsp+2Ch] [rbp-4Ch]
  unsigned __int64 v9; // [rsp+38h] [rbp-40h]

  v9 = __readfsqword(0x28u);
  set_tinfo_property(a2, 6, 192);
  v3 = 0;
  v4 = 0;
  v5 = 0;
  copy_tinfo_t((char *)&v5 + 8, &v4);
  v6 = 0;
  copy_tinfo_t(&v6, &v3);
  v7 = 0;
  v8 = 0;
  clear_tinfo_t(&v4);
  clear_tinfo_t(&v3);
  copy_tinfo_t(&v5, a2);
  create_tinfo(a2, 10, 10, &v5);
  clear_tinfo_t(&v6);
  clear_tinfo_t((char *)&v5 + 8);
  clear_tinfo_t(&v5);
  *a1 = 0;
  copy_tinfo_t(a1, a2);
  return a1;
}
