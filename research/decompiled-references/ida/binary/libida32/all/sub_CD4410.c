__int64 __fastcall sub_CD4410(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // eax
  __int64 v5; // rsi

  v4 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 8) = v4;
  if ( v4 > 0x40 )
  {
    sub_21E17D0(a1);
    v4 = *(_DWORD *)(a1 + 8);
    if ( v4 > 0x40 )
    {
      sub_21E63F0(a1, a3);
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
  sub_CD43C0((unsigned __int64 *)a1);
  return a1;
}

