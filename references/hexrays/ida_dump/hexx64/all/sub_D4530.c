__int64 __fastcall sub_D4530(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 result; // rax
  int v5; // eax

  result = 0;
  if ( a3[1] )
  {
    if ( *(_DWORD *)a1 )
    {
      *(_OWORD *)(a1 + 56) = 0;
      if ( !a3[1] )
        return result;
      while ( (unsigned __int8)sub_D3E70(a1, a2, a3) )
      {
        v5 = *(_DWORD *)(a1 + 64) + 1;
        *(_DWORD *)(a1 + 64) = v5;
        if ( v5 >= (unsigned __int64)a3[1] )
          return *(_DWORD *)(a1 + 68) != 0;
      }
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}
