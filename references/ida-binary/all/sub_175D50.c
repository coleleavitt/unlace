__int64 __fastcall sub_175D50(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rsi

  result = (unsigned int)a2;
  if ( a2 >= 0 )
  {
    v4 = *(_QWORD *)(a1 + 64);
    result = 0;
    if ( v4 )
    {
      v5 = a2;
      v6 = *(_QWORD *)(a1 + 56);
      if ( v5 >= v4 )
        return (unsigned int)(*(_DWORD *)(v6 + 4 * v4 - 4) + a2 + 1 - v4);
      else
        return *(unsigned int *)(v6 + 4 * v5);
    }
  }
  return result;
}
