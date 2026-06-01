__int64 __fastcall sub_16CBF0(__int64 a1, int a2)
{
  __int64 v3; // [rsp+0h] [rbp-68h] BYREF
  __int128 v4; // [rsp+8h] [rbp-60h]
  __int128 v5; // [rsp+18h] [rbp-50h]
  __int128 v6; // [rsp+28h] [rbp-40h]
  __int64 v7; // [rsp+38h] [rbp-30h]
  __int64 v8; // [rsp+40h] [rbp-28h]
  unsigned __int64 v9; // [rsp+48h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v3 = 72;
  v7 = 0;
  v8 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( sub_16C9C0(a2, &v3) )
    qsnprintf(&unk_8C9140, 1024, "URL: %s\n%s", (const char *)v6, *((const char **)&v6 + 1));
  else
    qstrncpy(&unk_8C9140, "<error>", 1024);
  return (*(__int64 (__fastcall **)(__int64, __int64, void *))(*(_QWORD *)a1 + 8LL))(a1, 5, &unk_8C9140);
}
