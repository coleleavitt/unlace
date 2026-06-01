__int64 __fastcall sub_80EBF0(__int64 a1)
{
  __int64 i; // rdx
  unsigned __int16 v2; // ax
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rdi

  if ( !a1 )
    BUG();
  for ( i = a1; ; i = v4 )
  {
    v2 = *(_WORD *)i & 0x1FF;
    if ( v2 == 21 )
    {
LABEL_13:
      v4 = *(_QWORD *)(i + 24);
      goto LABEL_14;
    }
    if ( v2 <= 0x15u )
    {
      if ( v2 == 4 )
      {
        if ( *(_BYTE *)(i + 2) >> 3 != 12 )
          return 0;
        v4 = *(_QWORD *)(i + 16);
      }
      else
      {
        if ( v2 != 19 || (*(_BYTE *)(i + 3) & 1) == 0 || *(char *)(i + 2) >= 0 )
          return 0;
        v4 = *(_QWORD *)(i + 16);
        if ( !v4 )
          return 0;
      }
      goto LABEL_14;
    }
    if ( v2 == 58 )
    {
      if ( (~*(_DWORD *)(i + 16) & 0x3FFF8000) == 0 )
        return 0;
      v4 = *(_QWORD *)(i
                     + 8LL * (((*(_DWORD *)(i + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(i + 19) & 0x40) != 0))
                     + 32);
      goto LABEL_14;
    }
    if ( v2 != 78 )
      break;
    if ( ((**(_DWORD **)(i + 16) >> 14) & 0xC) != 0 )
      return 0;
    if ( *(_BYTE *)(i + 48) )
      goto LABEL_13;
    v4 = *(_QWORD *)(i + 32);
LABEL_14:
    if ( v4 == i )
      return 0;
  }
  if ( v2 == 47 )
    return *(_QWORD *)(*(_QWORD *)(i + 24) + 48LL);
  if ( ((v2 + 393) & 0x1FFu) > 1 )
    return 0;
  v5 = *(_QWORD *)(*(_QWORD *)(i + 24) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
  v6 = *(_QWORD *)v5;
  if ( *(_BYTE *)(*(_QWORD *)v5 + 16LL) == 32 )
    return *(_QWORD *)(v6 + 32);
  else
    return *(_QWORD *)(sub_B0D320(v6) + 32);
}

