bool __fastcall sub_1AC1A90(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // r12
  __int16 v9; // ax
  bool result; // al
  __int64 v11; // rbx
  __int64 v12; // r13
  char v13; // al
  __int64 v14; // r12
  char v15; // al
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9

  v2 = a2;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( (*(_DWORD *)a1 & 0x8000) != 0 || (*(_DWORD *)v2 & 0x8000) != 0 )
        return 0;
      v3 = sub_BFD550(a1);
      v8 = sub_BFD550(v2);
      v9 = *(_WORD *)v3 & 0x1FF;
      if ( v9 != 124 )
        break;
      if ( (*(_WORD *)v8 & 0x1FF) != 0x7C )
        return 0;
      v2 = *(_QWORD *)(v8 + 24);
      a1 = *(_QWORD *)(v3 + 24);
    }
    if ( v9 != 123 )
      break;
    if ( (*(_WORD *)v8 & 0x1FF) != 0x7B )
      return 0;
    v2 = *(_QWORD *)(v8 + 24);
    v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v13 = *(_BYTE *)(v12 + 16);
    switch ( v13 )
    {
      case 13:
        if ( (((*(_WORD *)(v12 + 18) >> 3) + 76) & 0x1FFu) <= 0x13 )
          goto LABEL_23;
        break;
      case 47:
        v16 = sub_F60F10(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL),
                a2,
                v4,
                v5,
                v6,
                v7);
        if ( ((*((_BYTE *)v16 + 74) & 1) != 0 || (v16[16] & 0xFFFFFFFFFFFFFFF8LL) != 0)
          && *((char *)sub_F60F10(v12, a2, v4, v5, v6, v7) + 76) >= 0 )
        {
LABEL_23:
          v2 = *(_QWORD *)(v8 + 16);
          break;
        }
        v2 = *(_QWORD *)(v8 + 24);
        break;
      case 10:
        goto LABEL_23;
    }
    a1 = *(_QWORD *)(v3 + 24);
    v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v15 = *(_BYTE *)(v14 + 16);
    switch ( v15 )
    {
      case 13:
        if ( (((*(_WORD *)(v14 + 18) >> 3) + 76) & 0x1FFu) <= 0x13 )
          goto LABEL_17;
        break;
      case 47:
        v17 = sub_F60F10(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL),
                a2,
                v4,
                v5,
                v6,
                v7);
        if ( ((*((_BYTE *)v17 + 74) & 1) != 0 || (v17[16] & 0xFFFFFFFFFFFFFFF8LL) != 0)
          && *((char *)sub_F60F10(v14, a2, v18, v19, v20, v21) + 76) >= 0 )
        {
LABEL_17:
          a1 = *(_QWORD *)(v3 + 16);
        }
        else
        {
          a1 = *(_QWORD *)(v3 + 24);
        }
        break;
      case 10:
        goto LABEL_17;
    }
  }
  result = 0;
  if ( (*(_WORD *)v8 & 0x1FF) == 0x47 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 16) + 56LL))(*(_QWORD *)(v3 + 16));
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 16) + 56LL))(*(_QWORD *)(v8 + 16)) == v11;
  }
  return result;
}
