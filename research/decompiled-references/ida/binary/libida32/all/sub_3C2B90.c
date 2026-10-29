__int64 __fastcall sub_3C2B90(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 result; // rax
  __int64 v5; // rax

  v2 = sub_4EE820(a1 + 194, a2);
  if ( !v2 || (v3 = v2, (getinf(45) & 0x80u) != 0LL) || (*(_BYTE *)(v3 + 24) & 4) == 0 )
    v3 = 0;
  if ( (sub_614FB0(*a1, 45) & 0x40) == 0 )
  {
    v5 = sub_4EE820(a1 + 203, (unsigned int)a2);
    if ( v5 )
    {
      if ( (*(_BYTE *)(v5 + 8) & 0x40) != 0 )
      {
        if ( v3 )
        {
          if ( *(_DWORD *)(v3 + 4) < *(_DWORD *)(v5 + 4) )
            v3 = v5;
        }
        else
        {
          v3 = v5;
        }
      }
    }
  }
  result = sub_4EE820(a1 + 170, (unsigned int)a2);
  if ( !result || *(_BYTE *)(result + 32) )
    return v3;
  if ( v3 )
  {
    if ( *(_DWORD *)(v3 + 4) < *(_DWORD *)(result + 4) )
      return result;
    return v3;
  }
  return result;
}

