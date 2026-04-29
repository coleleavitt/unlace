char __fastcall sub_13BC0(__int64 a1, int a2, unsigned __int8 a3)
{
  __int64 ph; // rax
  int v8; // edx
  int v9; // ecx
  char result; // al
  unsigned __int16 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // rdx
  char v16; // al
  __int64 v17; // rdi
  int v18; // esi
  bool v19; // zf
  char v20; // al
  int v21; // r10d
  char v22; // r9
  char v23; // di
  __int16 v24; // ax
  char v25; // di
  int v26; // esi
  __int64 v27; // rsi
  char v28; // di
  unsigned int v29; // [rsp+0h] [rbp-48h]
  int v30; // [rsp+4h] [rbp-44h]
  __int64 v31; // [rsp+8h] [rbp-40h]

  ph = get_ph();
  v8 = *(unsigned __int16 *)(a1 + 24);
  v9 = *(_DWORD *)(ph + 104);
  if ( v8 < v9 )
    return 0;
  if ( v8 >= *(_DWORD *)(ph + 108) )
    return 0;
  v11 = *(_WORD *)(a1 + 24);
  v12 = *(unsigned int *)(*(_QWORD *)(ph + 112) + 16LL * (v8 - v9) + 8);
  if ( !(_DWORD)v12 )
    return 0;
  v13 = a1 + 41;
  v14 = a1 + 361;
  v15 = (a3 << 8) | 4u;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( ((unsigned int)v15 & (unsigned int)v12) == 0 )
        goto LABEL_25;
      v16 = *(_BYTE *)v13;
      if ( *(_BYTE *)v13 != 1 )
        break;
      if ( *(unsigned __int16 *)(v13 + 5) == a2 )
        return 1;
LABEL_25:
      v13 += 40;
      v15 = (unsigned int)(2 * v15);
      if ( v14 == v13 )
        return 0;
    }
    if ( (unsigned __int8)(v16 - 2) > 2u || !a3 )
      goto LABEL_25;
    v17 = *(unsigned __int16 *)(v13 + 5);
    if ( a2 == *(unsigned __int16 *)(v13 + 5) )
      return a3;
    if ( !*(_BYTE *)(v13 + 31) )
      break;
    v18 = *(_DWORD *)(a1 + 28) & 0x10;
    v19 = v16 == 2;
    v20 = *(_BYTE *)(v13 + 32);
    if ( !v19 )
    {
      v21 = v20 & 7;
      if ( v18 )
      {
        v22 = *(_BYTE *)(a1 + 33);
        if ( (v22 & 1) != 0 )
        {
          if ( a2 == (v20 & 7 | 8) )
            return a3;
        }
        else if ( a2 == v21 )
        {
          return a3;
        }
        v23 = v20 >> 3;
        v24 = (v20 >> 3) & 7;
        v25 = v23 & 7;
        goto LABEL_18;
      }
      if ( a2 == v21 )
        return a3;
      v24 = (v20 >> 3) & 7;
LABEL_37:
      if ( v11 > 0x5C0u )
      {
        if ( v11 > 0x5F1u )
        {
          if ( (unsigned __int16)(v11 - 1532) > 0xFu )
            goto LABEL_41;
        }
        else if ( v11 <= 0x5EDu )
        {
          goto LABEL_41;
        }
      }
      else if ( v11 <= 0x5BCu )
      {
        if ( v11 > 0x378u )
        {
          if ( (unsigned __int16)(v11 - 993) > 3u )
            goto LABEL_41;
        }
        else if ( v11 <= 0x374u )
        {
          goto LABEL_41;
        }
      }
LABEL_49:
      v31 = v14;
      v30 = v15;
      if ( (*(_BYTE *)(a1 + 273) & 0x10) != 0 )
        v24 |= 0x10u;
      v29 = v12;
      v24 = sub_13910(a1, v24);
      v14 = v31;
      LODWORD(v15) = v30;
      v12 = v29;
LABEL_41:
      v26 = v24;
      if ( v24 == 4 )
        goto LABEL_32;
      goto LABEL_42;
    }
    v28 = v20 >> 3;
    v24 = (v20 >> 3) & 7;
    v25 = v28 & 7;
    if ( !v18 )
      goto LABEL_37;
    v22 = *(_BYTE *)(a1 + 33);
LABEL_18:
    if ( (v22 & 2) == 0 )
      goto LABEL_37;
    LOBYTE(v17) = v25 | 8;
    v24 = (char)v17;
    if ( v11 <= 0x5C0u )
    {
      if ( v11 > 0x5BCu )
        goto LABEL_49;
      if ( v11 <= 0x378u )
      {
        if ( v11 > 0x374u )
          goto LABEL_49;
        goto LABEL_23;
      }
      goto LABEL_63;
    }
    if ( v11 > 0x5F1u )
    {
      if ( (unsigned __int16)(v11 - 1532) <= 0xFu )
        goto LABEL_49;
    }
    else if ( v11 > 0x5EDu )
    {
      goto LABEL_49;
    }
LABEL_23:
    v26 = (char)v17;
LABEL_42:
    if ( a2 == v26 )
      return a3;
LABEL_32:
    if ( a2 == *(unsigned __int16 *)(v13 + 25) )
      return a3;
    v13 += 40;
    v15 = (unsigned int)(2 * v15);
    if ( v14 == v13 )
      return 0;
  }
  v27 = *(_DWORD *)(a1 + 28) & 0x1018;
  LOBYTE(v27) = (*(_DWORD *)(a1 + 28) & 0x1018) == 8;
  result = v27 | ((*(_DWORD *)(a1 + 28) & 0x1018) == 4096);
  if ( !result )
    goto LABEL_32;
  if ( (_WORD)v17 == 0xFFFF )
  {
    if ( a2 == 4 )
      return result;
    v24 = sub_138F0();
LABEL_63:
    if ( (unsigned __int16)(v11 - 993) <= 3u )
      goto LABEL_49;
    goto LABEL_23;
  }
  if ( (unsigned __int16)v17 > 7u )
  {
    sub_138D0(v17, v27, v15, v12, v14);
    return sub_13F20();
  }
  else if ( a2 != dword_27640[(unsigned __int16)v17] )
  {
    switch ( (__int16)v17 )
    {
      case 1:
      case 3:
        v26 = 7;
        goto LABEL_42;
      case 4:
      case 5:
      case 6:
      case 7:
        goto LABEL_32;
      default:
        v26 = 6;
        goto LABEL_42;
    }
  }
  return result;
}
