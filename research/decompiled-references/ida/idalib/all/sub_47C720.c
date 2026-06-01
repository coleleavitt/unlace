__int64 __fastcall sub_47C720(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rax
  size_t v2; // rax
  size_t v4; // r12
  void *v5; // rax
  const void *v6; // rsi
  unsigned __int64 v7; // rax
  __m128i v8; // [rsp+0h] [rbp-60h] BYREF
  __int128 v9; // [rsp+10h] [rbp-50h]
  unsigned __int64 v10; // [rsp+20h] [rbp-40h]
  int v11; // [rsp+28h] [rbp-38h]
  unsigned __int64 v12; // [rsp+38h] [rbp-28h]

  v1 = *a1;
  v12 = __readfsqword(0x28u);
  v8 = (__m128i)v1;
  v2 = a1[2];
  v9 = 0;
  if ( v2 )
  {
    v4 = v2;
    v5 = (void *)qalloc_or_throw(v2);
    v6 = (const void *)a1[1];
    *((_QWORD *)&v9 + 1) = v4;
    v8.m128i_i64[1] = (__int64)v5;
    memcpy(v5, v6, v4);
    v7 = a1[4];
    *(_QWORD *)&v9 = v4;
    v10 = v7;
  }
  else
  {
    v10 = a1[4];
  }
  v11 = *((_DWORD *)a1 + 10);
  sub_35A790((char **)&v8.m128i_i64[1]);
  create_std_modmerge_handlers(&v8, -1, (__int64)&xmmword_2CCB900, (__int64)&off_2C81A40, 2);
  sub_35A790((char **)&v8.m128i_i64[1]);
  create_std_modmerge_handlers(&v8, -1, (__int64)&xmmword_2CCB8C0, (__int64)&off_2C81A10, 1);
  sub_35A790((char **)&v8.m128i_i64[1]);
  create_std_modmerge_handlers(&v8, -1, (__int64)&xmmword_2CCB880, (__int64)&off_2C819E0, 2);
  sub_35A790((char **)&v8.m128i_i64[1]);
  create_std_modmerge_handlers(&v8, -1, (__int64)&xmmword_2CCB840, 0, 0);
  sub_35A790((char **)&v8.m128i_i64[1]);
  create_nodeval_merge_handlers(nullptr, v8.m128i_i64, -1, "$ arm segflags", (__int64)&off_2C819C0, 1, 1);
  if ( v8.m128i_i64[1] )
  {
    *(_QWORD *)&v9 = 0;
    qfree((void *)v8.m128i_i64[1]);
  }
  return 0;
}
