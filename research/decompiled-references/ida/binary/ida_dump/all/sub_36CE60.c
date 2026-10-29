__int64 __fastcall sub_36CE60(__int64 a1)
{
  __int128 vars0; // [rsp+8h] [rbp+0h]
  __int64 vars10; // [rsp+18h] [rbp+10h]
  __int64 vars18; // [rsp+20h] [rbp+18h]
  __int64 vars20; // [rsp+28h] [rbp+20h]
  __int128 vars28; // [rsp+30h] [rbp+28h]
  __int64 vars38; // [rsp+40h] [rbp+38h]
  __int128 vars40; // [rsp+48h] [rbp+40h]
  char vars50; // [rsp+58h] [rbp+50h]
  unsigned __int64 vars60; // [rsp+68h] [rbp+60h]

  vars60 = __readfsqword(0x28u);
  vars50 = 16;
  vars10 = 0;
  vars18 = 0;
  vars20 = 0;
  vars38 = 0;
  vars0 = 0;
  vars28 = 0;
  vars40 = 0;
  get_tinfo_details();
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  cleanup_argloc();
  clear_tinfo_t();
  return a1;
}
