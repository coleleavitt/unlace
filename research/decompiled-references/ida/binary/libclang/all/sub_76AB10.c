bool __fastcall sub_76AB10(__int64 a1, unsigned __int64 a2)
{
  char v2; // al
  unsigned __int8 v4; // dl
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  int v11; // eax
  unsigned __int64 v12; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // rdx

  v2 = *(_BYTE *)(a1 + 96);
  v4 = v2 & 7;
  v5 = v2 & 7;
  if ( (v2 & 7) == 0 )
  {
    v6 = *(_QWORD *)(a1 + 48);
    v7 = *(_QWORD *)&byte_8[v6 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v7 & 8) != 0 )
    {
      a2 = v7 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (unsigned int)((*(__int64 *)((char *)&qword_18 + (v7 & 0xFFFFFFFFFFFFFFF0LL))
                         | (unsigned __int64)(((unsigned __int8)v6 | (unsigned __int8)v7) & 7)) >> 9) == 3 )
        return 0;
    }
    v8 = *(_BYTE *)(a1 + 28) & 0x7D;
    if ( (_BYTE)v8 == 41 )
      return (v2 & 0x18) == 0;
    v9 = *(_QWORD *)(a1 + 16);
    v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v9 & 4) != 0 )
    {
      v11 = *(_BYTE *)(sub_79C2A0(*(_QWORD *)(v10 + 8), a2, v8, v6) + 8) & 0x7F;
      if ( v11 )
      {
LABEL_6:
        if ( v11 == 22 )
          return 0;
        if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0x29 )
        {
          v12 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
            v12 = *(_QWORD *)v12;
          if ( ((*(_BYTE *)(v12 + 8) + 72) & 0x7Fu) <= 3 )
            return 0;
        }
        v2 = *(_BYTE *)(a1 + 96);
        return (v2 & 0x18) == 0;
      }
    }
    else
    {
      v11 = *(_BYTE *)(sub_79C2A0(v10, a2, v8, v6) + 8) & 0x7F;
      if ( v11 )
        goto LABEL_6;
    }
    return 0;
  }
  if ( (_DWORD)v5 != 5 )
    return v4 > 3u;
  v14 = *(_BYTE *)(a1 + 28) & 0x7F;
  v15 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( v14 == 38 || v14 == 44 )
  {
    v16 = *(_QWORD *)(a1 + 16);
    v17 = v16 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v16 & 4) != 0 )
      v17 = *(_QWORD *)(v17 + 8);
    if ( !v17 )
      return 0;
    v18 = *(_BYTE *)(sub_79C2A0(v17, a2, v15, v5) + 8) & 0x7F;
    if ( (unsigned __int8)v18 > 0x10u )
    {
      if ( (((_BYTE)v18 + 96) & 0x7Fu) <= 5 )
        goto LABEL_26;
    }
    else
    {
      v19 = 65922;
      if ( _bittest64(&v19, v18) )
      {
LABEL_26:
        v4 = *(_BYTE *)(a1 + 96) & 7;
        return v4 > 3u;
      }
    }
    LOBYTE(v15) = *(_BYTE *)(a1 + 28) & 0x7F;
  }
  if ( (_BYTE)v15 == 41 )
    goto LABEL_26;
  return 0;
}

