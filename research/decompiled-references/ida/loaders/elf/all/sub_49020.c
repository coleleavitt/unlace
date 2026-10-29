unsigned __int64 __fastcall sub_49020(unsigned __int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rdx
  __int64 v6; // rax
  int v7; // esi

  if ( *(_QWORD *)(a1 + 8) > 1u )
    return a1;
  v4 = a2[36];
  if ( a1 && a1 >= v4 )
  {
    v6 = a2[37];
    v7 = 0;
    if ( v4 + 96 * v6 >= a1 )
    {
      v7 = 2;
      if ( 0xAAAAAAAAAAAAAAABLL * ((__int64)(a1 - v4) >> 5) < a2[39] )
        v7 = 1;
    }
  }
  else
  {
    v7 = 0;
  }
  sub_48F40((__int64)a2, (__int64 *)a1, v7, *(_DWORD *)(a1 + 48));
  return a1;
}

