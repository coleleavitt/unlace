__int64 __fastcall sub_A577C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 v4; // al
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 result; // rax
  unsigned int v11; // r12d
  __int64 v12; // rax
  unsigned __int8 v13; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned __int64 v20; // rdx

  v2 = *(_QWORD *)(a1 + 2320);
  if ( (*(_BYTE *)(v2 + 1) & 8) != 0 && (*(_BYTE *)(v2 + 200) & 1) != 0 )
  {
    v12 = *(_QWORD *)(a2 + 48);
    if ( ((v12 & 1) != 0 || (byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0)
      && (v12 & 4) == 0
      && (byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL] & 4) == 0 )
    {
      v13 = *(_BYTE *)(a2 + 28) & 0x7F;
      if ( (v13 == 43 || (*(_BYTE *)(a2 + 97) & 0x20) == 0 && (unsigned int)v13 - 41 > 1) && !sub_B4FEA0(a2) )
        return 2;
    }
  }
  v4 = sub_B5DE30(a2);
  if ( !v4 )
    goto LABEL_47;
  if ( v4 <= 3u )
    return 0;
  if ( v4 > 6u )
LABEL_47:
    BUG();
  v7 = *(_BYTE *)(a2 + 96) & 7;
  if ( (_DWORD)v7 != 2 && ((*(_BYTE *)(a2 + 96) & 7) != 0 || ((*(_BYTE *)(a2 + 96) >> 3) & 3) != 2) || sub_A3AE50(a2) )
  {
    if ( !(unsigned __int8)sub_A3FC00(a1, a2, v7, v5, v6) )
    {
      v11 = 3;
      if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B && (*(_BYTE *)(a2 + 97) & 0x20) != 0 )
      {
        v18 = sub_A57620(a2, a2, v14, v15, v16, v17);
        if ( v18 <= 3 )
          v11 = dword_23BAB90[v18];
      }
      v19 = sub_B50370(a2);
      switch ( v19 )
      {
        case 0u:
          return v11;
        case 1u:
          return 2;
        case 2u:
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 17448) + 340LL) == 10 && (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B )
          {
            v20 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
              v20 = *(_QWORD *)v20;
            if ( ((*(_BYTE *)(v20 + 8) + 70) & 0x7Fu) <= 3 )
              return 4;
          }
          return v11;
        case 3u:
          return 1;
        case 4u:
          return v19;
        default:
          goto LABEL_47;
      }
    }
    return 2;
  }
  v8 = sub_B684C0(a2, 0);
  if ( !v8 )
    return 2;
  while ( (*(_BYTE *)(v8 + 8) & 0x7Fu) - 34 > 5 )
  {
    v9 = *(_QWORD *)(sub_B68470(v8) + 16);
    if ( (v9 & 4) != 0 )
    {
      v8 = *(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFF8LL) + 8);
      if ( !v8 )
        return 2;
    }
    else
    {
      v8 = v9 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v8 )
        return 2;
    }
  }
  LODWORD(result) = sub_A58280(a1, v8 - 72);
  if ( (_DWORD)result == 4 || (_DWORD)result == 1 )
    return 2;
  return (unsigned int)result;
}

