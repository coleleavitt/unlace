__int64 __fastcall sub_847EA0(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  unsigned int v5; // edx

  result = (unsigned int)dword_2CAD0AC;
  v5 = *(_DWORD *)a1;
  if ( (dword_2CAD0AC & 0x40) == 0 || (*(_BYTE *)(a1 + 6) & 1) == 0 )
  {
    if ( v5 )
      return result;
    *(_DWORD *)(a1 + 144) = 1;
    result = (__int64)sub_844340(a1, 0x6402u, a2, 0, a3, 0);
    if ( result )
    {
      *(_WORD *)result = 28687;
    }
    else if ( *(_DWORD *)a1 )
    {
      return result;
    }
    goto LABEL_6;
  }
  if ( !v5 )
  {
    *(_DWORD *)(a1 + 144) = 1;
    if ( (result & 0x80u) != 0LL )
      return sub_844D00((unsigned int *)a1, 91224, a2, 0, a3, 0);
    result = sub_844D00((unsigned int *)a1, 25712, a2, 0, a3, 0);
    if ( !(_DWORD)result )
    {
LABEL_6:
      result = (__int64)sub_8441E0(a1, 2);
      if ( result )
      {
        *(_BYTE *)result = 1;
        ++*(_QWORD *)(a1 + 120);
        *(_BYTE *)(result + 1) = 0;
      }
    }
  }
  return result;
}

