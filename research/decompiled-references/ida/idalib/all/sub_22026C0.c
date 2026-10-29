__int64 __fastcall sub_22026C0(__int64 a1)
{
  __int64 v1; // rbx
  _DWORD *v2; // rdx
  char v3; // cl
  char v4; // al
  unsigned __int8 v5; // si
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdi
  unsigned __int8 v10; // dl
  int v11; // eax
  __int64 v12; // rdi

  v1 = a1;
  v2 = *(_DWORD **)a1;
  if ( *(_UNKNOWN **)a1 == &unk_26F7B20 )
  {
    v4 = *(_BYTE *)(*(_QWORD *)(a1 + 8) + 20LL);
    if ( (v4 & 7) != 3 )
    {
      if ( !(unsigned __int8)sub_2202100(a1) )
        goto LABEL_23;
LABEL_14:
      v2 = *(_DWORD **)v1;
      if ( *(_UNKNOWN **)v1 == &unk_26F7B20 )
        goto LABEL_26;
      v3 = *(_BYTE *)(v1 + 20);
      goto LABEL_5;
    }
    return (v4 & 8) == 0 ? 64 : 32;
  }
  v3 = *(_BYTE *)(a1 + 20);
  v4 = v3;
  v5 = v3 & 7;
  if ( (v3 & 7) == 3 )
    return (v4 & 8) == 0 ? 64 : 32;
  if ( (v3 & 6) == 0 || *(_DWORD *)(a1 + 16) != v2[1] )
  {
LABEL_4:
    if ( v5 > 1u && v5 != 3 )
    {
      v7 = v1;
      return (*(_BYTE *)(v7 + 20) & 8) == 0 ? 256 : 8;
    }
LABEL_5:
    if ( (v3 & 7) == 3 || (v3 & 6) == 0 || *(_DWORD *)(v1 + 16) != v2[1] )
    {
LABEL_7:
      if ( (*(_BYTE *)(v1 + 20) & 7) == 0 )
        return (*(_BYTE *)(v1 + 20) & 8) == 0 ? 512 : 4;
      if ( (*(_BYTE *)(v1 + 20) & 7) == 1 && sub_21F8C40((_QWORD *)v1) )
        return 1;
      return 2;
    }
    v11 = v2[2];
    v12 = v1 + 8;
    if ( (unsigned int)(v11 + 64) > 0x7F )
      v12 = *(_QWORD *)(v1 + 8);
    if ( !(unsigned int)sub_22097E0(v12, (unsigned int)(v11 - 1)) )
      goto LABEL_27;
LABEL_35:
    if ( *(_UNKNOWN **)v1 == &unk_26F7B20 )
      v1 = *(_QWORD *)(v1 + 8);
    goto LABEL_7;
  }
  v8 = v2[2];
  v9 = a1 + 8;
  if ( (unsigned int)(v8 + 64) > 0x7F )
    v9 = *(_QWORD *)(v1 + 8);
  if ( !(unsigned int)sub_22097E0(v9, (unsigned int)(v8 - 1)) )
    goto LABEL_14;
LABEL_23:
  v2 = *(_DWORD **)v1;
  if ( *(_UNKNOWN **)v1 != &unk_26F7B20 )
  {
    v3 = *(_BYTE *)(v1 + 20);
    v5 = v3 & 7;
    goto LABEL_4;
  }
  v7 = *(_QWORD *)(v1 + 8);
  v10 = *(_BYTE *)(v7 + 20) & 7;
  if ( v10 != 3 && v10 > 1u )
    return (*(_BYTE *)(v7 + 20) & 8) == 0 ? 256 : 8;
LABEL_26:
  if ( !(unsigned __int8)sub_2202100(v1) )
    goto LABEL_35;
LABEL_27:
  if ( *(_UNKNOWN **)v1 == &unk_26F7B20 )
    v1 = *(_QWORD *)(v1 + 8);
  return (*(_BYTE *)(v1 + 20) & 8) == 0 ? 128 : 16;
}
