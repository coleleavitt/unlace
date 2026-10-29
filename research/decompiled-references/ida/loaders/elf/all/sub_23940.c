__int64 __fastcall sub_23940(__int64 a1, int *a2, double a3, double a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // r14d
  __int64 v9; // r15
  __int64 v10; // r13
  __int64 v11; // rsi
  char v12; // dl
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 result; // rax
  __int64 v16; // rdx
  unsigned __int16 v17; // r14
  __int64 v18; // r13
  __int64 v19; // r12
  int v20; // r9d
  unsigned int v21; // ecx
  int v22; // eax
  unsigned __int16 custom_fixup; // ax
  int v24; // eax
  __int16 v25; // bx
  __int64 v26; // rax
  unsigned int v27; // ecx
  __int64 v28; // rbx
  __int16 v29; // ax
  int v30; // eax
  int dword; // eax
  int v32; // ecx

  v8 = *a2;
  v9 = *(_QWORD *)(a2 + 1);
  v10 = *(_QWORD *)(a2 + 3);
  v11 = 32;
  v12 = getinf_flag(3, 32);
  result = 3;
  if ( !v12 && a2[7] )
  {
    v16 = v8;
    if ( !*(_BYTE *)(a1 + 350) )
    {
      v17 = v8 - 2;
      if ( v17 > 0x23u )
        return result;
      v16 = (unsigned __int8)aF654[v17];
    }
    v18 = *(_QWORD *)(a6 + 16) + v10;
    v19 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 328LL);
    if ( (unsigned __int16)v16 > 0x74u )
    {
      if ( (_WORD)v16 == 229 )
        return 0;
    }
    else if ( (_WORD)v16 )
    {
      switch ( (__int16)v16 )
      {
        case 1:
        case 51:
        case 88:
        case 116:
          v20 = 4;
          if ( (_WORD)v16 == 88 )
            v19 = v9;
          v22 = 0;
          v21 = v18 - v19;
          break;
        case 7:
          LODWORD(v9) = v9 + 2;
          goto LABEL_13;
        case 8:
          LODWORD(v9) = v9 + 2;
          goto LABEL_19;
        case 22:
        case 70:
          v9 &= ~1uLL;
          if ( (v18 & 1) != 0 )
          {
            v11 = v9;
            sub_BFC0((__int64)"R_V850_PCR22 relocation to non-aligned address at %a (target %a)", a3, a4);
          }
          if ( (unsigned __int64)(v18 - v9 + 0x200000) > 0x3FFFFF )
          {
            v11 = v18;
            sub_40E00(v9, v18, v16, v13, v14);
          }
          v26 = get_dword(v9, v11, v16, v13, v14) & 0x1FFC0;
          v28 = ((v18 - v9) >> 16) & 0x3F;
          v27 = (((_DWORD)v18 - (_DWORD)v9) << 16) & 0xFFFE0000;
          goto LABEL_32;
        case 31:
        case 100:
          if ( (v18 & 1) != 0 )
          {
            v11 = v9;
            sub_BFC0((__int64)"R_V850_PCR9 relocation to non-aligned address at %a (target %a)", a3, a4);
          }
          v25 = v18 - v9;
          if ( (unsigned __int64)(v18 - v9 + 256) > 0x1FF )
          {
            v11 = v18;
            sub_40E00(v9, v18, v16, v13, v14);
          }
          v26 = get_dword(v9, v11, v16, v13, v14) & 0xFFFF078FLL;
          v27 = (8 * (_BYTE)v25) & 0x70;
          LODWORD(v28) = (v25 << 7) & 0xF800;
          goto LABEL_32;
        case 50:
          if ( v18 - v19 + 0x8000 > (unsigned __int64)&algn_17FF8[7] )
          {
            v11 = v18;
            sub_40E00(v9, v18, v16, v13, v14);
          }
          dword = get_dword(v9, v11, v16, v13, v14);
          v20 = 1;
          v32 = dword;
          v22 = 0;
          v21 = (unsigned __int16)(v18 - v19) | v32 & 0xFFFF0000;
          break;
        case 52:
        case 104:
LABEL_19:
          v21 = (unsigned __int16)v18;
          v20 = 9;
          v22 = 0x40000000;
          break;
        case 53:
        case 105:
          v20 = 7;
          v22 = 0x40000000;
          v21 = WORD1(v18);
          break;
        case 54:
        case 106:
LABEL_13:
          v20 = *(unsigned __int16 *)(a1 + 348);
          v21 = (unsigned int)(v18 + 0x8000) >> 16;
          if ( (_WORD)v20 == 0x8000 )
          {
            custom_fixup = find_custom_fixup("HIGHA16");
            v21 = (unsigned int)(v18 + 0x8000) >> 16;
            v20 = custom_fixup;
            *(_WORD *)(a1 + 348) = custom_fixup;
          }
          v22 = 0x40000000;
          break;
        case 61:
        case 62:
        case 76:
        case 79:
          if ( (v18 & 1) != 0 )
          {
            v11 = v9;
            sub_BFC0((__int64)"R_V850_*WLO* relocation to non-aligned address at %a (target %a)", a3, a4);
          }
          v24 = get_dword(v9, v11, v16, v13, v14);
          v20 = 9;
          v21 = v24 & 0xFFFF0001 | v18 & 0xFFFE;
          v22 = 0;
          break;
        case 95:
          v19 = v9 - 2;
          if ( (v18 & 1) != 0 )
          {
            v11 = v9;
            sub_BFC0((__int64)"R_V850_PC16U_R relocation to non-aligned address at %a (target %a)", a3, a4);
          }
          if ( (unsigned __int64)(v18 - v19) < 0xFFFFFFFFFFFF0001LL && v18 - v19 != 0 )
          {
            v11 = v18;
            sub_40E00(v9, v18, v16, v13, v14);
          }
          v30 = get_dword(v9, v11, v16, v13, v14);
          v20 = 4;
          v21 = v30 & 0xFFFF0001 | ((_WORD)v19 - (_WORD)v18) & 0xFFFE;
          v22 = 0;
          break;
        case 96:
          v9 &= ~1uLL;
          if ( (v18 & 1) != 0 )
          {
            v11 = v9;
            sub_BFC0((__int64)"R_V850_PC17 relocation to non-aligned address at %a (target %a)", a3, a4);
          }
          if ( (_UNKNOWN *)((char *)&loc_20000 + v18 - v9) > &loc_3FFFF )
          {
            v11 = v18;
            sub_40E00(v9, v18, v16, v13, v14);
          }
          v26 = get_dword(v9, v11, v16, v13, v14) & 0x1FFEF;
          v28 = ((v18 - v9) >> 16) & 0x10;
          v27 = (((_DWORD)v18 - (_DWORD)v9) << 16) & 0xFFFE0000;
LABEL_32:
          v19 = v9;
          v20 = 4;
          v21 = v26 | v28 | v27;
          v22 = 0;
          break;
        case 113:
          v29 = get_dword(v9, 32, v16, v13, v14);
          v20 = 9;
          v21 = v29 & 0xF80F | ((__int16)v18 << 9) & 0xFFFF0000 | (16 * (_WORD)v18) & 0x7F0;
          v22 = 0;
          break;
        default:
          return 3;
      }
      sub_42050(a1, v9, v18, v21, 0, v20, v19, v22, 0);
      return 0;
    }
    return 3;
  }
  return result;
}

