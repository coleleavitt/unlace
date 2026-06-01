__int64 __fastcall sub_5D1B00(__int64 a1, const char **a2)
{
  unsigned int v2; // eax
  __int64 result; // rax
  unsigned int v4; // edx
  unsigned __int16 v5; // dx

  v2 = strtoul(*a2, (char **)a2, 10);
  if ( v2 && (v2 & (v2 - 1)) == 0 )
  {
    _BitScanReverse(&v4, v2);
    v5 = v4 + 1;
    if ( v5 <= 0xFu )
    {
      *(_BYTE *)(a1 + 736) = v5;
      goto LABEL_8;
    }
    result = set_qerrno(83, a2);
  }
  else
  {
    result = set_qerrno(1506, a2);
  }
  if ( !(_DWORD)result )
  {
LABEL_8:
    *a2 = (const char *)skip_spaces(*a2);
    return 0;
  }
  return result;
}

