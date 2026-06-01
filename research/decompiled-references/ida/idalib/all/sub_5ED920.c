__int64 __fastcall sub_5ED920(__int64 a1, const char **a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  LODWORD(v2) = strtoul(*a2, (char **)a2, 10);
  if ( (_DWORD)v2 && ((unsigned int)v2 & ((unsigned int)v2 - 1LL)) == 0 )
  {
    _BitScanReverse64((unsigned __int64 *)&v2, (unsigned int)v2);
    LOWORD(v2) = v2 + 1;
    if ( (unsigned __int16)v2 <= 0xFu )
    {
      *(_BYTE *)(a1 + 752) = v2;
      goto LABEL_8;
    }
    result = set_qerrno(83);
  }
  else
  {
    result = set_qerrno(1506);
  }
  if ( !(_DWORD)result )
  {
LABEL_8:
    *a2 = (const char *)skip_spaces(*a2);
    return 0;
  }
  return result;
}
