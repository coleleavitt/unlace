__int64 __fastcall sub_35D5F0(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v10; // rsi
  __int64 v11; // rsi

  if ( a5 )
  {
    if ( (*(_BYTE *)(a5 + 73) & 0x10) != 0 )
    {
      *(_QWORD *)a2 = *(_QWORD *)(a5 + 112);
      result = *(unsigned int *)(a5 + 120);
      *(_DWORD *)(a2 + 8) = result;
    }
    else
    {
      result = get_array_parameters(a2, a3);
      if ( result <= 0 )
      {
        v11 = *(_QWORD *)(a1 + 16);
        if ( a3 != v11 )
          result = get_array_parameters(a2, v11);
      }
    }
    if ( (*(_BYTE *)(a5 + 73) & 4) != 0 )
      *(_DWORD *)a2 |= 2u;
  }
  else
  {
    result = get_array_parameters(a2, a3);
    if ( result <= 0 )
    {
      v10 = *(_QWORD *)(a1 + 16);
      if ( a3 != v10 )
        result = get_array_parameters(a2, v10);
    }
  }
  if ( a4 )
    *(_DWORD *)a2 &= ~1u;
  return result;
}
