__int64 __fastcall sub_6D8040(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned __int8 v5; // al
  __int64 v6; // rcx
  unsigned __int64 v7; // r12
  __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // kr08_8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rdx

  v2 = *(_QWORD *)(a1 + 2160);
  if ( (*(_BYTE *)(v2 + 1) & 8) != 0 && (*(_BYTE *)(v2 + 192) & 1) != 0 )
  {
    v4 = *(_QWORD *)(a2 + 48);
    if ( ((v4 & 1) != 0 || (byte_8[v4 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0)
      && (v4 & 4) == 0
      && (byte_8[v4 & 0xFFFFFFFFFFFFFFF0LL] & 4) == 0 )
    {
      v5 = *(_BYTE *)(a2 + 28) & 0x7F;
      if ( (v5 == 41 || (*(_BYTE *)(a2 + 97) & 0x20) == 0 && (unsigned int)v5 - 39 > 1) && !sub_77CBA0(a2) )
      {
LABEL_38:
        LODWORD(v7) = 2;
        return (unsigned int)v7;
      }
    }
  }
  if ( (unsigned __int8)sub_78CBC0(a2) <= 3u )
  {
    LODWORD(v7) = 0;
    return (unsigned int)v7;
  }
  v9 = *(_BYTE *)(a2 + 96) & 7;
  if ( (_DWORD)v9 != 2 && ((*(_BYTE *)(a2 + 96) & 7) != 0 || ((*(_BYTE *)(a2 + 96) >> 3) & 3) != 2) )
    goto LABEL_53;
  if ( (*(_BYTE *)(a2 + 28) & 0x7D) != 0x29 )
  {
    v10 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v10 = *(_QWORD *)(v10 + 8);
    v11 = *(_BYTE *)(sub_79C2A0(v10, a2, v9, v6) + 8) & 0x7F;
    if ( !v11 || v11 == 22 )
      goto LABEL_53;
    if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x29 )
    {
      v13 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        v13 = *(_QWORD *)v13;
      if ( ((*(_BYTE *)(v13 + 8) + 72) & 0x7Fu) <= 3 )
      {
LABEL_53:
        if ( !(unsigned __int8)sub_6CBE20(a1, a2) )
        {
          LODWORD(v7) = 3;
          if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x29 && (*(_BYTE *)(a2 + 97) & 0x20) != 0 )
            LODWORD(v7) = 2 * ((unsigned int)sub_6B0F60((_QWORD *)a2) == 3) + 2;
          v12 = sub_77D1A0(a2);
          switch ( v12 )
          {
            case 0LL:
              return (unsigned int)v7;
            case 1LL:
              goto LABEL_38;
            case 2LL:
              if ( *(_DWORD *)(*(_QWORD *)(a1 + 17288) + 340LL) == 10 && (*(_BYTE *)(a2 + 28) & 0x7F) != 0x29 )
              {
                v17 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
                if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
                  v17 = *(_QWORD *)v17;
                if ( ((*(_BYTE *)(v17 + 8) + 72) & 0x7Fu) <= 3 )
                  LODWORD(v7) = 4;
              }
              return (unsigned int)v7;
            case 3LL:
              LODWORD(v7) = 1;
              return (unsigned int)v7;
            case 4LL:
              LODWORD(v7) = 4;
              return (unsigned int)v7;
            default:
              *(_DWORD *)(a2 + 72) = v12;
              BUG();
          }
        }
        goto LABEL_38;
      }
    }
  }
  v14 = sub_79AA10(a2, 0);
  if ( !v14 )
    goto LABEL_38;
  while ( (*(_BYTE *)(v14 + 8) & 0x7Fu) - 32 > 5 )
  {
    while ( 1 )
    {
      v15 = *(_QWORD *)(sub_79A2E0(v14) + 16);
      v14 = v15 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v15 & 4) == 0 )
        break;
      v14 = *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF8LL) + 8);
      if ( !v14 )
        goto LABEL_38;
      if ( (*(_BYTE *)(v14 + 8) & 0x7Fu) - 32 <= 5 )
        goto LABEL_37;
    }
    if ( !v14 )
      goto LABEL_38;
  }
LABEL_37:
  v7 = (unsigned int)sub_6D7DE0(a1, (_BYTE *)(v14 - 72));
  v16 = 18;
  if ( _bittest64(&v16, v7) )
    goto LABEL_38;
  return (unsigned int)v7;
}

