__int64 __fastcall sub_228D4C0(std::_V2 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int16 v7; // [rsp+0h] [rbp-28h] BYREF
  __int128 v8; // [rsp+2h] [rbp-26h]
  __int64 v9; // [rsp+12h] [rbp-16h]
  int v10; // [rsp+1Ah] [rbp-Eh]
  __int16 v11; // [rsp+1Eh] [rbp-Ah]

  v8 = 0;
  v11 = 0;
  v9 = 0;
  v10 = 0;
  v7 = 1;
  if ( fcntl((int)a1, 7, &v7, 1, a5, a6) == -1 )
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
