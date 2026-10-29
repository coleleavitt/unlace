__int64 __fastcall sub_CF8150(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // eax
  __int64 v5; // rsi

  v4 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 8) = v4;
  if ( v4 > 0x40 )
  {
    sub_2205510(a1);
    v4 = *(_DWORD *)(a1 + 8);
    if ( v4 > 0x40 )
    {
      sub_220A130(a1, a3);
      return a1;
    }
  }
  else
  {
    *(_QWORD *)a1 = *(_QWORD *)a2;
  }
  v5 = 0;
  if ( a3 != v4 )
    v5 = *(_QWORD *)a1 << a3;
  *(_QWORD *)a1 = v5;
  sub_CF8100((unsigned __int64 *)a1);
  return a1;
}
