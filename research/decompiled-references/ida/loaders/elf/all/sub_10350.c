__int64 __fastcall sub_10350(__int64 a1, int *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rdx
  int v8; // r15d
  int v9; // r14d
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r12
  int dword; // r11d
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // [rsp+10h] [rbp-88h]
  __int64 v18; // [rsp+18h] [rbp-80h]

  v7 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 16) + 520LL);
  v8 = *a2;
  v9 = (unsigned __int8)*a2;
  if ( (_WORD)v7 == 1 )
    goto LABEL_4;
  if ( (v8 & 0xFC) == 0 )
  {
    if ( (v8 & 0xFE) != 0 && (_WORD)v7 != 2 )
      goto LABEL_4;
    return 0;
  }
  v7 = (unsigned int)(v9 - 17);
  if ( (unsigned int)v7 > 6 )
    return 0;
LABEL_4:
  v10 = *(_QWORD *)(a2 + 5);
  v11 = *(_QWORD *)(a2 + 3);
  v12 = *(_QWORD *)(a2 + 1);
  v17 = *(_QWORD *)(a2 + 5);
  if ( *(_WORD *)(a1 + 350) == 0x8000 )
    *(_WORD *)(a1 + 350) = find_custom_fixup("PREL31");
  if ( a3 && (*(_BYTE *)(a3 + 56) & 1) != 0 && (*(_BYTE *)(a3 + 52) & 0xF) == 2 )
  {
    v7 = (unsigned int)is_spec_ea(v17);
    v15 = v17 | 1;
    if ( (_BYTE)v7 )
      v15 = v17;
    LODWORD(v17) = v15;
  }
  dword = get_dword(v12, v10, v7, v11, a5);
  v18 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 328LL);
  switch ( v9 )
  {
    case 0:
      sub_40E20(a1, v12, 3);
      return 0;
    case 1:
    case 2:
      sub_40E20(a1, v12, 3);
      v16 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 328LL);
      goto LABEL_19;
    case 3:
      sub_40E20(a1, v12, 2);
      return 0;
    case 4:
    case 5:
      LODWORD(v16) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 328LL);
LABEL_19:
      sub_42050(a1, v12, v17, v17 - v16, 0, 4, v18, 0, 0);
      break;
    case 6:
      sub_42050(a1, v12, dword, dword, 0, 4, v18, 0, 0);
      break;
    default:
      return 0;
  }
  return 0;
}

