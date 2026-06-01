unsigned __int64 __fastcall sub_20A07F0(_QWORD *a1)
{
  int v1; // eax
  __int64 v2; // rdi

  v1 = *(unsigned __int8 *)a1;
  if ( (unsigned int)(v1 - 5) <= 0x20 )
  {
    if ( (BYTE1(*a1) & 0x7F) == 2 || *((_DWORD *)a1 - 2) || *(_BYTE *)a1 == 30 )
    {
      v2 = a1[1];
      if ( (v2 & 4) != 0 )
        return v2 & 0xFFFFFFFFFFFFFFF8LL;
    }
    return 0;
  }
  if ( (_BYTE)v1 != 4 && (unsigned int)(v1 - 1) > 1 )
    return 0;
  return (unsigned __int64)(a1 + 1);
}
