char __fastcall sub_210E200(__int64 a1, _QWORD *a2)
{
  bool v2; // zf
  char result; // al
  __int128 v4; // [rsp+0h] [rbp-28h] BYREF
  __int64 v5; // [rsp+10h] [rbp-18h]
  int v6; // [rsp+18h] [rbp-10h]

  v2 = *(_BYTE *)a1 == 1;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( v2 )
  {
    *a2 = *(_QWORD *)(a1 + 16);
    return 1;
  }
  else
  {
    result = sub_210D940(a1, (__int64 *)&v4, nullptr, 0);
    *a2 = v5;
    if ( result )
    {
      result = 0;
      if ( v4 == 0 )
        return v6 == 0;
    }
  }
  return result;
}
