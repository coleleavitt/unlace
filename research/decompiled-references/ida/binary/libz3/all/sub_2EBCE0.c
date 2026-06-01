__int64 __fastcall sub_2EBCE0(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v2; // rax
  _DWORD *v3; // rdx
  __int64 v4; // [rsp+8h] [rbp-10h] BYREF

  sub_180C5A0(&v4, "maxres");
  result = 1;
  if ( v4 == *(_QWORD *)(a1 + 752) )
  {
    v2 = *(_DWORD **)(a1 + 608);
    if ( v2 && (v3 = &v2[26 * *(v2 - 1)], v2 != v3) )
    {
      while ( *v2 == 2 )
      {
        v2 += 26;
        if ( v3 == v2 )
          return 0;
      }
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}

