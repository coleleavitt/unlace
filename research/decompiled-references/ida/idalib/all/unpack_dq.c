__int64 __fastcall unpack_dq(__int64 a1)
{
  __int64 v1; // rbx

  v1 = (unsigned int)unpack_dd(a1);
  return v1 | (unpack_dd(a1) << 32);
}
