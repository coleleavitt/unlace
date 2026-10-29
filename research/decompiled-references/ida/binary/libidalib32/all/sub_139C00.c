__int64 sub_139C00()
{
  const char *v0; // r8
  __int64 v2; // [rsp+0h] [rbp-38h] BYREF
  __int128 v3; // [rsp+8h] [rbp-30h]
  unsigned __int64 v4; // [rsp+18h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  v2 = 0;
  v3 = 0;
  get_manual_insn();
  v0 = (const char *)itext();
  if ( (unsigned __int8)sub_139030((__int64)&v2, 0, (__int64)s1, (__int64)"%s", v0) )
    set_manual_insn();
  if ( v2 )
  {
    *(_QWORD *)&v3 = 0;
    qfree();
  }
  return 1;
}

