__int64 __fastcall sub_5C5BD0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  char v4; // cl
  __int64 v5; // rdx
  char v6; // dl
  __int64 v7; // rax
  char v8; // dl
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned __int8 v12; // al
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rdx

  v1 = *(_QWORD *)(a1 + 120);
  if ( !v1 )
    return 0;
  v2 = *(unsigned int *)(a1 + 208);
  v4 = *(_BYTE *)(v1 + 186);
  v5 = *(_QWORD *)(v1 + 40);
  if ( (_DWORD)v2 || v4 )
  {
    if ( (v4 & 0x3F) != 0 )
    {
      if ( (v5 & 3) != 0 )
        goto LABEL_10;
LABEL_14:
      if ( (v5 & 0x1C) != 0 )
        goto LABEL_15;
LABEL_23:
      *(_BYTE *)(v1 + 184) = *(_BYTE *)(a1 + 736);
      *(_BYTE *)(*(_QWORD *)(a1 + 120) + 185LL) = *(_BYTE *)(a1 + 737);
      v13 = *(_QWORD *)(a1 + 120);
      *(_BYTE *)(a1 + 737) = 0;
      *(_QWORD *)(v13 + 40) |= 0x800uLL;
      *(_QWORD *)(a1 + 120) = 0;
      return 0;
    }
  }
  else if ( !v5 )
  {
    return set_qerrno(47, v2);
  }
  v2 = 0x180000000LL;
  if ( (v5 & 0x180000000LL) == 0 )
  {
    *(_BYTE *)(v1 + 186) = v4 | 7;
    v1 = *(_QWORD *)(a1 + 120);
    v5 = *(_QWORD *)(v1 + 40);
  }
  if ( (v5 & 0x1F) == 0 )
  {
    *(_QWORD *)(v1 + 40) = v5 | 0x40000000;
    v1 = *(_QWORD *)(a1 + 120);
    v5 = *(_QWORD *)(v1 + 40);
  }
  if ( (v5 & 3) == 0 )
    goto LABEL_14;
LABEL_10:
  v6 = *(_BYTE *)(v1 + 186);
  if ( (v6 & 0x38) != 0 )
  {
    if ( (v6 & 0x3F) == 0x32 )
      goto LABEL_12;
    return set_qerrno(69, v2);
  }
  if ( (v6 & 0x3E) == 0 )
    return set_qerrno(69, v2);
LABEL_12:
  *(_BYTE *)(v1 + 186) = v6 & 0xCF;
  v7 = *(_QWORD *)(a1 + 120);
  v8 = *(_BYTE *)(v7 + 186);
  if ( (*(_BYTE *)(v7 + 40) & 1) != 0 )
  {
    *(_BYTE *)(v7 + 186) = v8 | 0x10;
    v1 = *(_QWORD *)(a1 + 120);
    v5 = *(_QWORD *)(v1 + 40);
    goto LABEL_14;
  }
  *(_BYTE *)(v7 + 186) = v8 | 0x20;
  v1 = *(_QWORD *)(a1 + 120);
  v5 = *(_QWORD *)(v1 + 40);
  if ( (v5 & 0x1C) == 0 )
    goto LABEL_23;
LABEL_15:
  v9 = *(unsigned __int8 *)(v1 + 186);
  switch ( *(_BYTE *)(v1 + 186) & 0x3F )
  {
    case 7:
    case 0x17:
    case 0x27:
      v10 = 65;
      *(_BYTE *)(v1 + 186) = v9 & 0xF0;
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 40LL);
      if ( (v11 & 0x10) == 0 )
      {
        v10 = 64;
        if ( (v11 & 8) == 0 )
          v10 = 63;
      }
      v12 = getinf(v10);
      *(_BYTE *)(*(_QWORD *)(a1 + 120) + 186LL) |= get_scalar_bt(v12);
      v1 = *(_QWORD *)(a1 + 120);
      goto LABEL_23;
    case 9:
      v9 = (unsigned int)v9 & 0xFFFFFFCF;
      *(_BYTE *)(v1 + 186) = v9;
      v15 = *(_QWORD *)(a1 + 120);
      v16 = *(_QWORD *)(v15 + 40);
      if ( (v16 & 0x10) != 0 )
        return set_qerrno(70, v9);
      if ( (v16 & 8) != 0 )
      {
        *(_BYTE *)(v15 + 186) |= 0x10u;
        v1 = *(_QWORD *)(a1 + 120);
        goto LABEL_23;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 96) + 771LL) & 8) == 0 )
      {
        *(_BYTE *)(v15 + 186) |= 0x30u;
        v1 = *(_QWORD *)(a1 + 120);
        goto LABEL_23;
      }
      result = set_qerrno(1530, v9);
      break;
    case 0x19:
      if ( (v5 & 8) != 0 )
      {
        *(_BYTE *)(v1 + 186) = v9 & 0xCF;
        *(_BYTE *)(*(_QWORD *)(a1 + 120) + 186LL) |= 0x20u;
        v1 = *(_QWORD *)(a1 + 120);
      }
      goto LABEL_23;
    default:
      return set_qerrno(70, v9);
  }
  return result;
}

