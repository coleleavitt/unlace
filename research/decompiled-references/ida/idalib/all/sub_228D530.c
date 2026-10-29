__int64 __fastcall sub_228D530(std::_V2 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // [rsp+0h] [rbp-28h] BYREF
  __int128 v8; // [rsp+8h] [rbp-20h]

  v7 = 2;
  v8 = 0;
  if ( fcntl((int)a1, 6, &v7, a4, a5, a6) == -1 )
  {
    std::_V2::generic_category(a1);
    return (unsigned int)*__errno_location();
  }
  else
  {
    std::_V2::system_category(a1);
    return 0;
  }
}
