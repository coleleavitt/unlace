__int64 __fastcall sub_5E18A0(__int64 a1)
{
  __int64 v1; // rax
  char v3; // cl
  __int64 v4; // rdx
  char v5; // dl
  __int64 v6; // rax
  char v7; // dl
  char v8; // si
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned __int8 v11; // al
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // rdx

  v1 = *(_QWORD *)(a1 + 128);
  if ( !v1 )
    return 0;
  v3 = *(_BYTE *)(v1 + 186);
  v4 = *(_QWORD *)(v1 + 40);
  if ( *(_DWORD *)(a1 + 216) || v3 )
  {
    if ( (v3 & 0x3F) != 0 )
    {
      if ( (v4 & 3) != 0 )
        goto LABEL_10;
LABEL_14:
      if ( (v4 & 0x1C) != 0 )
        goto LABEL_15;
LABEL_23:
      *(_BYTE *)(v1 + 184) = *(_BYTE *)(a1 + 752);
      *(_BYTE *)(*(_QWORD *)(a1 + 128) + 185LL) = *(_BYTE *)(a1 + 753);
      v12 = *(_QWORD *)(a1 + 128);
      *(_BYTE *)(a1 + 753) = 0;
      *(_QWORD *)(v12 + 40) |= 0x800uLL;
      *(_QWORD *)(a1 + 128) = 0;
      return 0;
    }
  }
  else if ( !v4 )
  {
    return set_qerrno(47);
  }
  if ( (v4 & 0x180000000LL) == 0 )
  {
    *(_BYTE *)(v1 + 186) = v3 | 7;
    v1 = *(_QWORD *)(a1 + 128);
    v4 = *(_QWORD *)(v1 + 40);
  }
  if ( (v4 & 0x1F) == 0 )
  {
    *(_QWORD *)(v1 + 40) = v4 | 0x40000000;
    v1 = *(_QWORD *)(a1 + 128);
    v4 = *(_QWORD *)(v1 + 40);
  }
  if ( (v4 & 3) == 0 )
    goto LABEL_14;
LABEL_10:
  v5 = *(_BYTE *)(v1 + 186);
  if ( (v5 & 0x38) != 0 )
  {
    if ( (v5 & 0x3F) == 0x32 )
      goto LABEL_12;
    return set_qerrno(69);
  }
  if ( (v5 & 0x3E) == 0 )
    return set_qerrno(69);
LABEL_12:
  *(_BYTE *)(v1 + 186) = v5 & 0xCF;
  v6 = *(_QWORD *)(a1 + 128);
  v7 = *(_BYTE *)(v6 + 186);
  if ( (*(_BYTE *)(v6 + 40) & 1) != 0 )
  {
    *(_BYTE *)(v6 + 186) = v7 | 0x10;
    v1 = *(_QWORD *)(a1 + 128);
    v4 = *(_QWORD *)(v1 + 40);
    goto LABEL_14;
  }
  *(_BYTE *)(v6 + 186) = v7 | 0x20;
  v1 = *(_QWORD *)(a1 + 128);
  v4 = *(_QWORD *)(v1 + 40);
  if ( (v4 & 0x1C) == 0 )
    goto LABEL_23;
LABEL_15:
  v8 = *(_BYTE *)(v1 + 186);
  switch ( v8 & 0x3F )
  {
    case 7:
    case 0x17:
    case 0x27:
      v9 = 65;
      *(_BYTE *)(v1 + 186) = v8 & 0xF0;
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 128) + 40LL);
      if ( (v10 & 0x10) == 0 )
      {
        v9 = 64;
        if ( (v10 & 8) == 0 )
          v9 = 63;
      }
      v11 = getinf(v9);
      *(_BYTE *)(*(_QWORD *)(a1 + 128) + 186LL) |= get_scalar_bt(v11);
      v1 = *(_QWORD *)(a1 + 128);
      goto LABEL_23;
    case 9:
      *(_BYTE *)(v1 + 186) = v8 & 0xCF;
      v14 = *(_QWORD *)(a1 + 128);
      v15 = *(_QWORD *)(v14 + 40);
      if ( (v15 & 0x10) != 0 )
        return set_qerrno(70);
      if ( (v15 & 8) != 0 )
      {
        *(_BYTE *)(v14 + 186) |= 0x10u;
        v1 = *(_QWORD *)(a1 + 128);
        goto LABEL_23;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 104) + 939LL) & 8) == 0 )
      {
        *(_BYTE *)(v14 + 186) |= 0x30u;
        v1 = *(_QWORD *)(a1 + 128);
        goto LABEL_23;
      }
      result = set_qerrno(1530);
      break;
    case 0x19:
      if ( (v4 & 8) != 0 )
      {
        *(_BYTE *)(v1 + 186) = v8 & 0xCF;
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 186LL) |= 0x20u;
        v1 = *(_QWORD *)(a1 + 128);
      }
      goto LABEL_23;
    default:
      return set_qerrno(70);
  }
  return result;
}
