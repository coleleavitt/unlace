char __fastcall sub_210E270(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  bool v3; // zf
  char result; // al
  __int128 v5; // [rsp+0h] [rbp-28h] BYREF
  __int64 v6; // [rsp+10h] [rbp-18h]
  int v7; // [rsp+18h] [rbp-10h]

  v3 = *(_BYTE *)a1 == 1;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( v3 )
  {
    *a2 = *(_QWORD *)(a1 + 16);
    return 1;
  }
  else
  {
    result = sub_210D940(a1, (__int64 *)&v5, a3, 0);
    *a2 = v6;
    if ( result )
    {
      result = 0;
      if ( v5 == 0 )
        return v7 == 0;
    }
  }
  return result;
}
