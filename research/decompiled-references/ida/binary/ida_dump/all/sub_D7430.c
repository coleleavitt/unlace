__int64 __fastcall sub_D7430(__int64 a1)
{
  __int64 func; // rax
  __int64 result; // rax

  sub_330F80(*(_QWORD *)(a1 + 64));
  if ( (*(_BYTE *)(a1 + 24) & 8) != 0 )
  {
    func = get_func();
    if ( func )
      return *(_QWORD *)(func + 48);
  }
  result = sub_D73B0(*(_QWORD *)(a1 + 64));
  if ( result == -1 )
    return 0;
  return result;
}
