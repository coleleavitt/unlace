__int64 __fastcall sub_1F97A0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  bool v5; // zf
  __int64 (__fastcall *v6)(__int64 *, const char **, __int128 *, __int64 *, _QWORD); // rax
  unsigned int v8; // r13d
  const char *v9; // rsi
  unsigned int v10; // ebp
  unsigned int v12; // eax
  const char *v13; // [rsp+0h] [rbp-70h] BYREF
  __int128 v14; // [rsp+8h] [rbp-68h] BYREF
  __int64 v15; // [rsp+18h] [rbp-58h]
  __int64 v16; // [rsp+20h] [rbp-50h]
  __int64 v17; // [rsp+28h] [rbp-48h]
  __int64 v18; // [rsp+30h] [rbp-40h]
  unsigned __int64 v19; // [rsp+40h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  v4 = *a1;
  v5 = a1[53] == 0;
  v15 = 0;
  v16 = -1;
  v17 = 0;
  v6 = *(__int64 (__fastcall **)(__int64 *, const char **, __int128 *, __int64 *, _QWORD))(v4 + 680);
  v18 = 0;
  v14 = 0;
  if ( v5 )
    sub_1E69C0(0.0, (__int64)a1, a2, a3, a4);
  v8 = a3;
  v9 = (const char *)&v13;
  v10 = v6(a1, &v13, &v14, a1 + 48, 0);
  if ( (_BYTE)v10 )
  {
    v9 = v13;
    bookmarks_t_get_desc(a2, v13, v8, a1[91]);
    v10 = v12;
  }
  if ( v18 )
    qfree(v18, v9);
  return v10;
}
