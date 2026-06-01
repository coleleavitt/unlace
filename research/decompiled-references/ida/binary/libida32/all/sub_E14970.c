__int64 __fastcall sub_E14970(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // rdx

  v4 = ((unsigned __int64)a3 + 63) >> 6;
  if ( v4 > 1 )
  {
    sub_21E18D0(a1, a3, v4, a2);
    return a1;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = a3;
    if ( a3 > 0x40 )
    {
      sub_21E1730(a1, a2, 0);
      return a1;
    }
    else
    {
      *(_QWORD *)a1 = a2;
      return a1;
    }
  }
}

