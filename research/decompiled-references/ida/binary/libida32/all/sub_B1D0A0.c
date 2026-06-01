const char *__fastcall sub_B1D0A0(__int64 a1, __int64 a2)
{
  unsigned __int8 *v2; // rax
  unsigned __int8 *v3; // r8
  __int64 v5; // rcx
  int v6; // edx

  v2 = *(unsigned __int8 **)(a1 + 40);
  v3 = *(unsigned __int8 **)(a1 + 48);
  if ( *(_BYTE *)(a1 + 61) == 2 )
  {
    if ( v2 == v3 )
      goto LABEL_10;
    while ( 1 )
    {
      v5 = *v2;
      if ( (byte_23ED5E0[2 * v5] & 5) == 0 )
        break;
      if ( ++v2 == v3 )
        return (const char *)sub_B1CEF0(a1, a2);
    }
    if ( (_BYTE)v5 != 42 )
      return (const char *)sub_B1CEF0(a1, a2);
    *(_QWORD *)(a1 + 40) = ++v2;
  }
  if ( v3 != v2 )
    return (const char *)sub_B1CEF0(a1, a2);
LABEL_10:
  v6 = *(_DWORD *)(a1 + 56) + (_DWORD)v2 - *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a2 + 4) = 7;
  *(_DWORD *)a2 = v6;
  *(_DWORD *)(a2 + 12) = 0;
  *(_QWORD *)(a1 + 40) = v2;
  *(_QWORD *)(a2 + 16) = &byte_22CD811;
  *(_DWORD *)(a2 + 8) = 0;
  return &byte_22CD811;
}

