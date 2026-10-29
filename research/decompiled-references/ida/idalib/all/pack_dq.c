__int64 __fastcall pack_dq(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax

  v3 = HIDWORD(a3);
  v4 = pack_dd(a1, a2, a3);
  return pack_dd(v4, a2, (unsigned int)v3);
}
