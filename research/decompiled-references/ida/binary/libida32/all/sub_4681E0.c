__int64 __fastcall sub_4681E0(__int64 *a1, const char *a2)
{
  __int64 v2; // rax
  size_t v3; // rax
  size_t v5; // r12
  void *v6; // rax
  const void *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // [rsp+0h] [rbp-60h] BYREF
  void *ptr; // [rsp+8h] [rbp-58h] BYREF
  __int128 v11; // [rsp+10h] [rbp-50h]
  __int64 v12; // [rsp+20h] [rbp-40h]
  int v13; // [rsp+28h] [rbp-38h]
  unsigned __int64 v14; // [rsp+38h] [rbp-28h]

  v2 = *a1;
  v14 = __readfsqword(0x28u);
  ptr = nullptr;
  v9 = v2;
  v3 = a1[2];
  v11 = 0;
  if ( v3 )
  {
    v5 = v3;
    v6 = (void *)qalloc_or_throw(v3, a2);
    v7 = (const void *)a1[1];
    *((_QWORD *)&v11 + 1) = v5;
    ptr = v6;
    memcpy(v6, v7, v5);
    v8 = a1[4];
    *(_QWORD *)&v11 = v5;
    v12 = v8;
  }
  else
  {
    v12 = a1[4];
  }
  v13 = *((_DWORD *)a1 + 10);
  sub_3573A0((char **)&ptr);
  create_std_modmerge_handlers(&v9, 0xFFFFFFFFLL, &xmmword_2CA1A00, &off_2C57A20, 2);
  sub_3573A0((char **)&ptr);
  create_std_modmerge_handlers(&v9, 0xFFFFFFFFLL, &xmmword_2CA19C0, &off_2C579F0, 1);
  sub_3573A0((char **)&ptr);
  create_std_modmerge_handlers(&v9, 0xFFFFFFFFLL, &xmmword_2CA1980, &off_2C579C0, 2);
  sub_3573A0((char **)&ptr);
  create_std_modmerge_handlers(&v9, 0xFFFFFFFFLL, &xmmword_2CA1940, 0, 0);
  sub_3573A0((char **)&ptr);
  create_nodeval_merge_handlers(0, (int)&v9, -1, (int)"$ arm segflags", (int)&off_2C579A0, 1, 1);
  if ( ptr )
  {
    *(_QWORD *)&v11 = 0;
    qfree(ptr);
  }
  return 0;
}

