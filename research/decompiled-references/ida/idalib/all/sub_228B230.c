__int64 __fastcall sub_228B230(size_t *a1, bool *a2)
{
  __int64 result; // rax
  _OWORD v3[2]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v4; // [rsp+20h] [rbp-38h]
  __int128 v5; // [rsp+30h] [rbp-28h]
  __int64 v6; // [rsp+40h] [rbp-18h]

  v4 = 0;
  memset(v3, 0, sizeof(v3));
  v5 = 0;
  v6 = 0;
  HIDWORD(v4) = 0xFFFF;
  result = sub_2288640(a1, (__int64)v3);
  if ( !(_DWORD)result )
  {
    *a2 = DWORD2(v4) == 3;
    std::_V2::system_category((std::_V2 *)a1);
    return 0;
  }
  return result;
}
