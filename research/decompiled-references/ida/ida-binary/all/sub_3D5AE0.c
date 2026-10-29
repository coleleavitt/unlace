unsigned __int64 sub_3D5AE0()
{
  __int64 user_idadir; // rax
  _BYTE v2[4104]; // [rsp+0h] [rbp-1018h] BYREF
  unsigned __int64 v3; // [rsp+1008h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  user_idadir = get_user_idadir();
  qmakepath(v2, 4096, user_idadir, "shortcuts.cfg", 0);
  sub_4B11F0(v2);
  return v3 - __readfsqword(0x28u);
}
