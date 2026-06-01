__int64 __fastcall sub_3C7D00(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 result; // rax
  __int64 v5; // rax

  v2 = sub_505D70(a1 + 203, a2);
  if ( !v2 || (v3 = v2, (getinf(45) & 0x80u) != 0LL) || (*(_BYTE *)(v3 + 44) & 4) == 0 )
    v3 = 0;
  if ( (sub_631AD0(*a1, 45) & 0x40) == 0 )
  {
    v5 = sub_505D70(a1 + 213, a2);
    if ( v5 )
    {
      if ( (*(_BYTE *)(v5 + 16) & 0x40) != 0 )
      {
        if ( v3 )
        {
          if ( *(_QWORD *)(v3 + 8) < *(_QWORD *)(v5 + 8) )
            v3 = v5;
        }
        else
        {
          v3 = v5;
        }
      }
    }
  }
  result = sub_505D70(a1 + 175, a2);
  if ( !result || *(_BYTE *)(result + 40) )
    return v3;
  if ( v3 )
  {
    if ( *(_QWORD *)(v3 + 8) < *(_QWORD *)(result + 8) )
      return result;
    return v3;
  }
  return result;
}
