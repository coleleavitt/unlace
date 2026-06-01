__int64 __fastcall sub_17125C0(__int64 a1, __int64 a2)
{
  char v3; // al
  char **v4; // rdi

  v3 = *(_BYTE *)(a2 + 24);
  if ( *(_BYTE *)(a1 + 24) )
  {
    if ( !v3 )
    {
      *(_BYTE *)(a1 + 24) = 0;
      v4 = *(char ***)a1;
      if ( v4 != (char **)(a1 + 16) )
        free(v4);
      return a1;
    }
    sub_1712470((char ***)a1, (char ***)a2);
    return a1;
  }
  else
  {
    if ( !v3 )
      return a1;
    *(_QWORD *)a1 = a1 + 16;
    *(_QWORD *)(a1 + 8) = 0x100000000LL;
    if ( *(_DWORD *)(a2 + 8) )
      sub_1712470((char ***)a1, (char ***)a2);
    *(_BYTE *)(a1 + 24) = 1;
    return a1;
  }
}
