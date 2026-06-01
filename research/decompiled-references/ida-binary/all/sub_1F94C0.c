__int64 __fastcall sub_1F94C0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  bool v5; // zf
  __int64 (__fastcall *v6)(__int64 *, __int64 *, __int128 *, __int64 *, _QWORD); // rax
  const char *v7; // rsi
  unsigned int v8; // ebp
  __int64 v10; // [rsp+8h] [rbp-60h] BYREF
  __int128 v11; // [rsp+10h] [rbp-58h] BYREF
  __int64 v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-38h]
  __int64 v15; // [rsp+38h] [rbp-30h]
  unsigned __int64 v16; // [rsp+48h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  v4 = *a1;
  v5 = a1[53] == 0;
  v12 = 0;
  v13 = -1;
  v14 = 0;
  v6 = *(__int64 (__fastcall **)(__int64 *, __int64 *, __int128 *, __int64 *, _QWORD))(v4 + 680);
  v15 = 0;
  v11 = 0;
  if ( v5 )
    sub_1E69C0(0.0, (__int64)a1, a2, a3, a4);
  v7 = (const char *)&v10;
  v8 = v6(a1, &v10, &v11, a1 + 48, 0);
  if ( (_BYTE)v8 )
  {
    v7 = (const char *)a1[91];
    LOBYTE(v8) = (int)bookmarks_t_get_dirtree_id(v10, v7) <= 6;
  }
  if ( v15 )
    qfree(v15, v7);
  return v8;
}
