/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64118
// Address: 0x00064118

//----- (00064118) --------------------------------------------------------
int __fastcall sub_64118(int a1, int a2, int (__fastcall ***a3)(int a1, int a2, int a3), int a4)
{
  int (__fastcall *v7)(int, int, int); // r3
  int v8; // r6
  int v9; // r0
  int (__fastcall **v10)(int, int, int); // r2
  int v11; // r3
  int v12; // r0
  unsigned int v13; // r7
  unsigned int v14; // r4
  int v15; // r7
  unsigned int v16; // r3
  bool v17; // zf
  int v18; // r2
  int v19; // r1
  int *v20; // r7
  int v21; // r1
  int *v22; // r0
  int (__fastcall **v23)(int, int, int); // r3
  char *v24; // r1
  int (__fastcall *v25)(int, int); // r3
  int (__fastcall **v26)(int, int, int); // r0
  int v27; // r0
  unsigned int v28; // r10
  int v29; // r3
  int (__fastcall **v30)(int, int, int); // r0
  int v31; // r0
  int v32; // r2
  int (__fastcall *v33)(int, int); // r3
  int (__fastcall *v35)(int, int, int); // r3
  int v36; // r0
  int (__fastcall **v37)(int, int, int); // r2
  int v38; // r3
  int v39; // r0
  int v40; // r1
  int v41; // r1
  int *v42; // r0
  int v43; // r3
  int v44; // r2
  int (__fastcall *v45)(int, int, int); // r3
  int v46; // r0
  int (__fastcall **v47)(int, int, int); // r2
  int v48; // r3
  int v49; // r0
  int v50; // r7
  unsigned int v51; // r1
  int *v52; // r10
  unsigned int v53; // r1
  char *v54; // r1
  int (__fastcall *v55)(int, int); // r2
  int (__fastcall **v56)(int, int, int); // r0
  int *v57; // r0
  int (__fastcall **v58)(int, int, int); // r0
  int v59; // r0
  int v61; // [sp+10h] [bp-44h]
  int v62; // [sp+14h] [bp-40h]
  int v63; // [sp+1Ch] [bp-38h] BYREF
  char v64[4]; // [sp+20h] [bp-34h] BYREF
  int v65; // [sp+24h] [bp-30h]
  int v66; // [sp+28h] [bp-2Ch]
  void *ptr; // [sp+30h] [bp-24h]
  int v68; // [sp+34h] [bp-20h]
  int v69; // [sp+38h] [bp-1Ch]
  int v70; // [sp+3Ch] [bp-18h]
  int v71; // [sp+40h] [bp-14h]
  int v72; // [sp+44h] [bp-10h]

  v7 = **a3;
  v8 = *(_DWORD *)(a1 + 8);
  if ( v7 == sub_63B40 )
  {
    v9 = (*((int (__fastcall **)(_DWORD *, int *, _DWORD))*a3[1] + 61))(a3[1], &dword_9F490, 0);
    if ( v9 < 0 )
      goto LABEL_6;
    v10 = a3[1];
    v11 = (int)v10[87];
    if ( !v11 )
      v11 = (int)v10[99];
    if ( v9 >= v11 )
    {
LABEL_6:
      if ( under_debugger )
        __und(0xFFu);
      sub_78AFC(30182);
    }
    v12 = a2 + 24 * v9;
  }
  else
  {
    v12 = v7((int)a3, (int)&dword_9F490, a2);
  }
  v13 = *(_DWORD *)(v12 + 8);
  if ( a4 )
    v61 = HIBYTE(v13) & 1;
  else
    v61 = (v13 >> 5) & 1;
  if ( !v61 )
    goto LABEL_14;
  if ( *(_WORD *)(a1 + 12) == 278 )
  {
    v14 = *(_BYTE *)(a1 + 21) | 0x10 | (unsigned __int8)(32 * (*(_BYTE *)(a1 + 20) & 0xF));
  }
  else
  {
    v14 = (v13 >> 25) & 3 | (v13 >> 8) & 0xFC;
    if ( !v14 )
    {
LABEL_14:
      switch ( *(_BYTE *)(a1 + 20) & 0xF )
      {
        case 0:
          v14 = 0;
          goto LABEL_76;
        case 1:
          v14 = 0;
          goto LABEL_75;
        case 2:
          v14 = 0;
          goto LABEL_73;
        case 3:
          v14 = 0;
          goto LABEL_72;
        case 4:
          v14 = 0;
          goto LABEL_57;
        case 5:
          v14 = 0;
          goto LABEL_56;
        case 6:
          v14 = 0;
          goto LABEL_22;
        case 7:
          v14 = 0;
          goto LABEL_21;
        case 8:
          v14 = 0;
          v15 = (v13 & 0x60000000) == 0x20000000;
          goto LABEL_23;
        case 9:
          v14 = 0;
          v15 = (v13 & 0x60000000) != 0x20000000;
          goto LABEL_23;
        case 0xA:
          v14 = 0;
          if ( (v13 & 0x80000000) == 0 )
            v15 = (v13 & 0x10000000) == 0;
          else
            v15 = (v13 >> 28) & 1;
          goto LABEL_23;
        case 0xB:
          v14 = 0;
          v15 = (v13 >> 28) & 1 ^ (v13 >> 31);
          goto LABEL_23;
        case 0xC:
          v29 = v13 & 0x40000000;
          if ( (v13 & 0x40000000) != 0 )
          {
            v29 = 0;
            v28 = -1;
            v14 = 0;
            v15 = 0;
            goto LABEL_59;
          }
          if ( ((v13 >> 28) & 1) != v13 >> 31 )
          {
LABEL_110:
            v28 = -1;
            v14 = v29;
            v15 = v29;
            goto LABEL_59;
          }
          v14 = v13 & 0x40000000;
          v16 = *(unsigned __int16 *)(a1 + 12);
          break;
        case 0xD:
          v14 = v13 & 0x40000000;
          if ( (v13 & 0x40000000) != 0 )
            goto LABEL_107;
          if ( ((v13 >> 28) & 1) != v13 >> 31 )
            goto LABEL_24;
          v29 = v13 & 0x40000000;
          goto LABEL_110;
        case 0xE:
LABEL_107:
          v16 = *(unsigned __int16 *)(a1 + 12);
          v14 = 0;
          goto LABEL_25;
        default:
          return -1;
      }
      goto LABEL_25;
    }
  }
  switch ( v14 >> 5 )
  {
    case 1u:
LABEL_75:
      v13 ^= 0x40000000u;
      goto LABEL_76;
    case 2u:
      goto LABEL_73;
    case 3u:
LABEL_72:
      v13 ^= 0x20000000u;
LABEL_73:
      v15 = (v13 >> 29) & 1;
      break;
    case 4u:
      goto LABEL_57;
    case 5u:
LABEL_56:
      v13 = ~v13;
LABEL_57:
      v15 = v13 >> 31;
      if ( !v15 )
        goto LABEL_58;
      goto LABEL_24;
    case 6u:
      goto LABEL_22;
    case 7u:
LABEL_21:
      v13 ^= 0x10000000u;
LABEL_22:
      v15 = (v13 >> 28) & 1;
      break;
    default:
LABEL_76:
      v15 = (v13 >> 30) & 1;
      break;
  }
LABEL_23:
  if ( !v15 )
  {
LABEL_58:
    v29 = v15;
    v28 = -1;
    goto LABEL_59;
  }
LABEL_24:
  v16 = *(unsigned __int16 *)(a1 + 12);
LABEL_25:
  v17 = v16 == 47;
  if ( v16 != 47 )
    v17 = v16 == 41;
  v18 = v17;
  if ( v16 == 166 )
    v18 = 1;
  v62 = v18;
  if ( v16 == 166 )
    goto LABEL_100;
  if ( v16 <= 0xA6 )
  {
    if ( v16 == 33 )
    {
      v50 = *(_DWORD *)(a1 + 64);
      if ( (v50 & 0x8000) == 0 )
        goto LABEL_126;
      v51 = *(unsigned __int16 *)(a1 + 30);
      if ( v51 > 0xC2 )
        goto LABEL_126;
      if ( v51 == 160 )
      {
        v52 = nullptr;
LABEL_149:
        if ( (*(_DWORD *)(a1 + 16) & 0x90) != 0 || *(_WORD *)(a1 + 12) == 42 )
          v53 = 4 * sub_6C204((unsigned __int16)v50) - 4;
        else
          v53 = -4;
        v54 = (char *)v52 + v53;
        v55 = (int (__fastcall *)(int, int))(*a3)[3];
        if ( v55 == sub_63A8C )
        {
          v56 = a3[1];
          v63 = -1;
          v62 = 1;
          (*((void (__fastcall **)(int (__fastcall **)(int, int, int), char *, int *, int, _DWORD))*v56 + 36))(
            v56,
            v54,
            &v63,
            4,
            0);
          v28 = v63;
        }
        else
        {
          v28 = v55((int)a3, (int)v54);
          v62 = 1;
        }
        goto LABEL_47;
      }
    }
    else
    {
      if ( v16 <= 0x21 )
      {
        if ( v16 == 1 )
        {
          v35 = **a3;
          if ( v35 == sub_63B40 )
          {
            v36 = (*((int (__fastcall **)(_DWORD *, int *, _DWORD))*a3[1] + 61))(a3[1], &dword_9F48C, 0);
            if ( v36 < 0 )
              goto LABEL_6;
            v37 = a3[1];
            v38 = (int)v37[87];
            if ( !v38 )
              v38 = (int)v37[99];
            if ( v36 >= v38 )
              goto LABEL_6;
            v39 = a2 + 24 * v36;
          }
          else
          {
            v39 = v35((int)a3, (int)&dword_9F48C, a2);
          }
          v28 = *(_DWORD *)(v39 + 8);
          goto LABEL_47;
        }
        if ( !v16 || v16 - 3 > 1 )
          goto LABEL_126;
        goto LABEL_100;
      }
      if ( v16 != 42 )
      {
        if ( v16 > 0x2A )
        {
          if ( v16 - 46 > 1 )
            goto LABEL_126;
        }
        else if ( v16 != 41 )
        {
          goto LABEL_126;
        }
        goto LABEL_100;
      }
      v50 = *(_DWORD *)(a1 + 40);
      if ( (v50 & 0x8000) == 0 )
        goto LABEL_126;
      v51 = 13;
    }
    v52 = sub_63BD0(v61, v51, a2, (int)a3);
    goto LABEL_149;
  }
  if ( v16 >= 0x11C )
  {
    if ( v16 < 0x1D4 )
      goto LABEL_126;
    if ( v16 < 0x1D6 )
    {
      v41 = *(unsigned __int16 *)(a1 + 30);
      if ( v41 == 160 )
      {
        if ( v16 != 468 )
          goto LABEL_126;
      }
      else
      {
        v42 = sub_63BD0(v61, v41, a2, (int)a3);
        v43 = *(unsigned __int16 *)(a1 + 12);
        v44 = *(_DWORD *)(a1 + 56);
        if ( v43 == 468 )
        {
          if ( (((unsigned int)v42 >> v44) & 1) != 0 )
            goto LABEL_126;
        }
        else if ( v43 != 469 || (((unsigned int)v42 >> v44) & 1) == 0 )
        {
          goto LABEL_126;
        }
      }
      v28 = *(_DWORD *)(a1 + 84);
LABEL_47:
      if ( v28 != -1 )
      {
LABEL_48:
        if ( v28 > 0xFFFEFFFF )
        {
          v45 = **a3;
          if ( v45 == sub_63B40 )
          {
            v46 = (*((int (__fastcall **)(_DWORD *, int *, _DWORD))*a3[1] + 61))(a3[1], &dword_9F48C, 0);
            if ( v46 < 0 )
              goto LABEL_6;
            v47 = a3[1];
            v48 = (int)v47[87];
            if ( !v48 )
              v48 = (int)v47[99];
            if ( v46 >= v48 )
              goto LABEL_6;
            v49 = a2 + 24 * v46;
          }
          else
          {
            v49 = v45((int)a3, (int)&dword_9F48C, a2);
          }
          v28 = *(_DWORD *)(v49 + 8);
        }
        v15 = v28 & 1;
        if ( !v62 )
          v15 = v61;
        if ( *(_WORD *)(a1 + 12) == 46 )
          v15 = v61 ^ 1;
        if ( !v15 )
        {
          v28 &= 0xFFFFFFFC;
          return v28;
        }
        v28 |= 1u;
        v29 = v28 != -1;
        goto LABEL_59;
      }
      if ( *(_BYTE *)(a1 + 25) != 1 )
      {
        v29 = 0;
        v15 = 1;
        goto LABEL_59;
      }
      goto LABEL_79;
    }
    if ( v16 >= 0x1D8 )
      goto LABEL_126;
LABEL_100:
    v64[0] = 0;
    v69 = 0;
    v72 = 0;
    v70 = 0;
    v65 = -1;
    v71 = -1;
    v66 = -2;
    ptr = (void *)-1;
    v68 = -1;
    v28 = -1;
    if ( sub_63CDC(a1, 0, v61, (int)v64, a2, a3) )
    {
      if ( *(_BYTE *)(a1 + 25) == 7 )
        v28 = v65;
      else
        v28 = (unsigned int)ptr;
    }
    if ( v66 >= -1 && ptr )
    {
      v68 = 0;
      sub_77E08(ptr);
    }
    goto LABEL_47;
  }
  if ( v16 >= 0x11A )
  {
    v40 = *(unsigned __int16 *)(a1 + 30);
    if ( v40 == 160 )
    {
      if ( v16 != 282 )
        goto LABEL_126;
    }
    else
    {
      v57 = sub_63BD0(v61, v40, a2, (int)a3);
      if ( *(_WORD *)(a1 + 12) == 282 )
      {
        if ( v57 )
          goto LABEL_126;
      }
      else if ( !v57 )
      {
        goto LABEL_126;
      }
    }
    v28 = *(_DWORD *)(a1 + 60);
    goto LABEL_47;
  }
  if ( v16 - 274 <= 1 )
  {
    v19 = *(unsigned __int16 *)(a1 + 30);
    if ( v19 == 160 )
      v20 = nullptr;
    else
      v20 = sub_63BD0(v61, v19, a2, (int)a3);
    v21 = *(unsigned __int8 *)(a1 + 44);
    if ( v21 == 160 )
      v22 = nullptr;
    else
      v22 = sub_63BD0(v61, v21, a2, (int)a3);
    v23 = *a3;
    if ( *(_WORD *)(a1 + 12) == 275 )
    {
      v24 = (char *)v20 + 2 * (_DWORD)v22;
      v25 = (int (__fastcall *)(int, int))v23[2];
      if ( v25 == sub_63A44 )
      {
        v58 = a3[1];
        LOWORD(v63) = -1;
        (*((void (__fastcall **)(int (__fastcall **)(int, int, int), char *, int *, int, _DWORD))*v58 + 36))(
          v58,
          v24,
          &v63,
          2,
          0);
        v27 = (unsigned __int16)v63;
        goto LABEL_46;
      }
    }
    else
    {
      v24 = (char *)v20 + (_DWORD)v22;
      v25 = (int (__fastcall *)(int, int))v23[1];
      if ( v25 == sub_639FC )
      {
        v26 = a3[1];
        LOBYTE(v63) = -1;
        (*((void (__fastcall **)(int (__fastcall **)(int, int, int), char *, int *, int, _DWORD))*v26 + 36))(
          v26,
          v24,
          &v63,
          1,
          0);
        v27 = (unsigned __int8)v63;
LABEL_46:
        v28 = v8 + 4 + 2 * v27;
        goto LABEL_47;
      }
    }
    v27 = v25((int)a3, (int)v24);
    goto LABEL_46;
  }
LABEL_126:
  if ( *(_BYTE *)(a1 + 25) != 1 )
    goto LABEL_127;
LABEL_79:
  if ( *(_WORD *)(a1 + 30) != 15 )
  {
LABEL_127:
    v29 = 0;
    v15 = 1;
    v28 = -1;
    goto LABEL_59;
  }
  v64[0] = 0;
  v69 = 0;
  v72 = 0;
  v70 = 0;
  v66 = -2;
  v65 = -1;
  v71 = -1;
  ptr = (void *)-1;
  v68 = -1;
  v15 = sub_63CDC(a1, 1, v61, (int)v64, a2, a3);
  if ( v15 )
  {
    v28 = (unsigned int)ptr;
    if ( sub_63CDC(a1, 2, v61, (int)v64, a2, a3) )
    {
      v59 = v28;
      v28 = (unsigned int)ptr;
    }
    else
    {
      v59 = v8;
    }
    switch ( *(_WORD *)(a1 + 12) )
    {
      case 5:
        v28 = v59 >> v28;
        break;
      case 6:
        v28 = v59 << v28;
        break;
      case 7:
        v28 = (unsigned int)v59 >> v28;
        break;
      case 8:
        v28 = sub_6C364(v59, -v28, 0x20u, 0);
        break;
      case 9:
        v28 = -v28;
        break;
      case 0xA:
        v28 &= v59;
        break;
      case 0xB:
        v28 ^= v59;
        break;
      case 0xC:
        goto LABEL_194;
      case 0xD:
        goto LABEL_192;
      case 0xE:
        v28 += v59;
        break;
      case 0xF:
        v28 += v59 + 125;
        break;
      case 0x10:
        v59 += 124;
LABEL_194:
        v28 = v59 - v28;
        break;
      case 0x11:
        v28 += 124;
LABEL_192:
        v28 -= v59;
        break;
      case 0x16:
        v28 |= v59;
        break;
      case 0x17:
      case 0x23:
      case 0x2C:
      case 0x50:
      case 0x51:
        break;
      case 0x18:
        v28 = v59 & ~v28;
        break;
      case 0x19:
        v28 = ~v28;
        break;
      case 0x1E:
      case 0x1F:
        v62 = v15;
        break;
      default:
        v28 = -1;
        break;
    }
    if ( v66 >= -1 && ptr )
    {
      v68 = 0;
      sub_77E08(ptr);
    }
    if ( v28 != -1 )
      goto LABEL_48;
    v29 = 0;
LABEL_59:
    if ( !v14 )
      v29 = 1;
    if ( !v29 )
    {
      do
      {
        v33 = (int (__fastcall *)(int, int))(*a3)[2];
        if ( v33 == sub_63A44 )
        {
          v30 = a3[1];
          LOWORD(v63) = -1;
          (*((void (__fastcall **)(int (__fastcall **)(int, int, int), int, int *, int, _DWORD))*v30 + 36))(
            v30,
            v8,
            &v63,
            2,
            0);
          v31 = (unsigned __int16)v63;
        }
        else
        {
          v31 = v33((int)a3, v8);
        }
        if ( (unsigned int)((v31 >> 11) - 29) <= 2 )
          v32 = 4;
        else
          v32 = 2;
        v8 += v32;
        if ( v15 == ((v14 >> 4) & 1) )
          break;
        v14 = (unsigned __int8)(2 * v14);
      }
      while ( (v14 & 0x1E) != 0 );
      return v8 | 1;
    }
    return v28;
  }
  if ( v66 >= -1 && ptr )
  {
    v68 = 0;
    sub_77E08(ptr);
  }
  return -1;
}
// 9F48C: using guessed type int dword_9F48C;
// 9F490: using guessed type int dword_9F490;
// D5C00: using guessed type char under_debugger;
