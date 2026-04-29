__int64 __fastcall sub_1364D0(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 func; // rax
  unsigned int v6; // eax

  result = 1;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 60LL) != a2 )
  {
    result = 0;
    if ( *(_DWORD *)(a1 + 1184) == a2 )
    {
      v4 = sub_32B3E0(a1, a3);
      func = get_func(v4);
      if ( func )
        v6 = *(_DWORD *)(func + 16);
      else
        v6 = *(_DWORD *)(a1 + 112);
      return (v6 >> 4) & 1;
    }
  }
  return result;
}
