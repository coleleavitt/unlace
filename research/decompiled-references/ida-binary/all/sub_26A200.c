__int64 sub_26A200()
{
  unsigned __int8 v0; // bl
  _QWORD v2[2]; // [rsp+0h] [rbp-78h] BYREF
  char v3; // [rsp+10h] [rbp-68h]
  char *v4; // [rsp+20h] [rbp-58h] BYREF
  __int128 v5; // [rsp+28h] [rbp-50h]
  char v6; // [rsp+38h] [rbp-40h]
  unsigned __int8 v7; // [rsp+39h] [rbp-3Fh]
  __int64 v8; // [rsp+40h] [rbp-38h]
  __int128 v9; // [rsp+48h] [rbp-30h]
  unsigned __int64 v10; // [rsp+58h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  sub_53A950();
  if ( (get_merge_state() & 3) != 0 )
    v0 = is_diff_merge_mode() + 3;
  else
    v0 = 1 - ((dword_8CC5F0 == 0) - 1);
  v5 = 0;
  v4 = nullptr;
  v4 = (char *)qvector_reserve(&v4, 0, 9, 1);
  *(_QWORD *)&v5 = 9;
  strcpy(v4, "Original");
  v2[0] = 0;
  v7 = v0;
  v6 = 0;
  v8 = 0;
  v2[1] = 0;
  v3 = 0;
  v9 = 0;
  sub_268600((__int64)v2, (const char *)v0, 0, 0x6C616E696769724FLL, 0.0);
  sub_268DF0((__int64)&v4, (__int64)v2, 4);
  jvalue_t_clear(v2);
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8, (const char *)v2);
  }
  if ( v4 )
  {
    *(_QWORD *)&v5 = 0;
    qfree(v4, (const char *)v2);
  }
  return 1;
}
