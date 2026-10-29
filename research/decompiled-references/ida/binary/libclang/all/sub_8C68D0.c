__int64 __fastcall sub_8C68D0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rdi
  unsigned __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rax
  bool v9; // zf
  __int64 v10; // rdi

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 && (unsigned int)sub_A7AE10(v2) != 6 )
  {
    v3 = *(_QWORD *)(a1 + 40);
    v4 = 0;
    if ( ((*(__int64 *)(v3 + 8) >> 1) & 3uLL) - 2 <= 1 )
      v4 = *(_QWORD *)(v3 + 16);
    return sub_B0E910(v4);
  }
  v6 = *(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0LL;
  v4 = *(_QWORD *)v6;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v6 + 16LL) - 42 <= 1 )
    goto LABEL_21;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42 > 1 )
    goto LABEL_12;
  v4 = sub_B0D320(v4);
  if ( v4 )
  {
LABEL_21:
    while ( 1 )
    {
      v7 = *(_QWORD *)(v4 + 32);
      if ( (*(_BYTE *)(v4 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v4 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v4 + 16) - 42 <= 1 )
          break;
        v8 = sub_B0D320(v4);
        v9 = (*(_BYTE *)(v8 + 18) & 0x10) == 0;
        v7 = *(_QWORD *)(v8 + 32);
        if ( v9 )
          goto LABEL_11;
      }
    }
LABEL_11:
    v4 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
  }
  else
  {
    v4 = *(_QWORD *)v6;
  }
LABEL_12:
  if ( (*(_BYTE *)(a1 + 2) & 0x10) == 0 )
    return sub_B0E910(v4);
  if ( *(_BYTE *)(v4 + 16) == 41 )
    return sub_B0E910(*(_QWORD *)(*(_QWORD *)(v4 + 32) & 0xFFFFFFFFFFFFFFF0LL));
  v10 = *(_QWORD *)(*(_QWORD *)(sub_B0D320(v4) + 32) & 0xFFFFFFFFFFFFFFF0LL);
  return sub_B0E910(v10);
}

