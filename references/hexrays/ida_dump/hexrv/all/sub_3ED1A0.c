__int64 __fastcall sub_3ED1A0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // r15
  char v4; // al
  __int64 v5; // rdx
  _QWORD *v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rdx
  int v9; // eax
  int v10; // ecx
  int v11; // r12d
  int v12; // r13d
  int v13; // ebp
  int v14; // ebx
  int v15; // r13d
  char **v16; // rax
  __int64 result; // rax
  __int16 v18; // ax
  unsigned __int16 v19; // ax
  int v20; // eax
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // rax
  signed int v24; // r12d
  char v25; // al
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r12
  int v29; // r14d
  __int64 v30; // rax
  signed int v31; // ebx
  __int64 v32; // rdx
  __int64 v33; // rax
  int v34; // r12d
  __int64 v35; // rdx
  int v36; // r12d
  __int64 v37; // rax
  int v38; // edx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // r14
  __int64 v42; // rdx
  __int64 v43; // rax
  int v44; // ebx
  unsigned int v45; // esi
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // r12
  unsigned int v49; // esi
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rax
  int v53; // r13d

  v3 = a1;
  v4 = *(_BYTE *)(a1 + 384);
  if ( v4 )
  {
    if ( v4 != 1 )
      return 0;
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 920LL);
    v6 = *(_QWORD **)(v5 + 96);
    v7 = &v6[*(_QWORD *)(v5 + 104)];
    if ( v6 == v7 )
      return 0;
    while ( *(_QWORD *)(a1 + 40) != *v6 )
    {
      if ( v7 == ++v6 )
        return 0;
    }
    if ( v7 == v6 )
      return 0;
  }
  if ( !(unsigned __int8)sub_3E87D0(a1, a3) )
    *(_WORD *)(a1 + 840) = 0;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 8LL);
  v9 = *(unsigned __int16 *)(a1 + 48);
  v10 = *(_DWORD *)(v8 + 104);
  if ( v9 >= v10 && v9 < *(_DWORD *)(v8 + 108) )
  {
    v11 = *(_DWORD *)(*(_QWORD *)(v8 + 112) + 16LL * (v9 - v10) + 8);
    v12 = v11 & 0x400;
    if ( (v11 & 0x100) != 0 || (v13 = -1, (*(_BYTE *)(a1 + 65) & 0xFD) == 1) )
    {
      a2 = 0;
      v13 = sub_3E9CC0(a1, 0, 0, a3);
    }
    if ( (v11 & 0x200) != 0 )
      goto LABEL_19;
LABEL_18:
    if ( (*(_BYTE *)(a1 + 105) & 0xFD) == 1 )
      goto LABEL_19;
    goto LABEL_28;
  }
  if ( (*(_BYTE *)(a1 + 65) & 0xFD) == 1 )
  {
    a2 = 0;
    v12 = 0;
    v11 = 0;
    v13 = sub_3E9CC0(a1, 0, 0, a3);
    goto LABEL_18;
  }
  v12 = 0;
  v11 = 0;
  v13 = -1;
  if ( (*(_BYTE *)(a1 + 105) & 0xFD) == 1 )
    goto LABEL_19;
LABEL_28:
  if ( (*(_BYTE *)(a1 + 844) & 6) == 0 )
  {
    v14 = -1;
    goto LABEL_20;
  }
LABEL_19:
  a2 = 1;
  v14 = sub_3E9CC0(a1, 1, 0, a3);
LABEL_20:
  if ( v12 || (v15 = -1, (*(_BYTE *)(a1 + 145) & 0xFD) == 1) )
  {
    a2 = 2;
    v15 = sub_3E9CC0(a1, 2, 0, a3);
  }
  if ( !*(_WORD *)(a1 + 840) )
  {
    sub_3ECE70((_QWORD *)a1, v11, v13, v14, v15);
    return 0;
  }
  v16 = sub_3E8130(a1);
  if ( v16 )
  {
    sub_3EB2A0(a1, (const char **)v16, v13, v14, v15);
    return 0;
  }
  if ( !(unsigned __int8)sub_3E8B60(a1) )
  {
    v19 = *(_WORD *)(a1 + 48);
    if ( v19 > 0x1B8u )
    {
      if ( v19 > 0x1CFu )
      {
        switch ( *(_WORD *)(a1 + 48) )
        {
          case 0x1D0:
            goto LABEL_118;
          case 0x1D1:
          case 0x1D2:
          case 0x1D3:
          case 0x1D4:
          case 0x1D5:
          case 0x1D6:
          case 0x1D7:
          case 0x1D8:
          case 0x1D9:
          case 0x1DA:
          case 0x1DB:
          case 0x1DC:
          case 0x1DD:
          case 0x1DE:
          case 0x1DF:
          case 0x1E0:
          case 0x1E1:
          case 0x1E2:
          case 0x1E3:
          case 0x1E4:
          case 0x1E5:
          case 0x1E6:
          case 0x1EC:
          case 0x1ED:
          case 0x1EE:
          case 0x1EF:
          case 0x1F0:
          case 0x1F1:
          case 0x1F2:
          case 0x1F3:
            sub_3EABC0(a1, (unsigned int)v13, v14, v15, a3);
            goto LABEL_42;
          case 0x1E7:
          case 0x1E8:
          case 0x1E9:
          case 0x1EA:
          case 0x1EB:
            sub_3EADA0(a1, (unsigned int)v13, v14, v15, a3);
            goto LABEL_42;
          case 0x1F4:
          case 0x1F5:
          case 0x1F6:
          case 0x1F7:
          case 0x1F8:
          case 0x1F9:
            sub_3EAF60(a1, (unsigned int)v13, v14, v15, a3);
            goto LABEL_42;
          case 0x210:
          case 0x211:
          case 0x212:
          case 0x213:
          case 0x214:
          case 0x215:
          case 0x216:
          case 0x217:
          case 0x218:
          case 0x219:
          case 0x21A:
            a1 = *(_QWORD *)(a1 + 832);
            if ( *(_BYTE *)(v3 + 105) == 2 )
            {
              v31 = sub_3E6FF0(a1, a2, a3);
              sub_3E9BD0(v3, *(_QWORD *)(v3 + 120), v31);
            }
            else
            {
              v30 = *(_QWORD *)(a1 + 712);
              if ( !v30 )
                goto LABEL_127;
              v31 = *(_DWORD *)(*(_QWORD *)(a1 + 704) + 4 * v30 - 4);
              *(_QWORD *)(a1 + 712) = v30 - 1;
              v32 = *(_QWORD *)(v3 + 832);
              v33 = *(_QWORD *)(v32 + 712);
              if ( !v33 )
                goto LABEL_127;
              v34 = *(_DWORD *)(*(_QWORD *)(v32 + 704) + 4 * v33 - 4);
              *(_QWORD *)(v32 + 712) = v33 - 1;
              sub_3E9B00(
                v3,
                *(_QWORD *)(v3 + 112),
                *(unsigned __int8 *)(v3 + 104),
                v34,
                *(_DWORD *)(*(_QWORD *)(v3 + 832) + 80LL));
              sub_3E8D60(
                v3,
                0xCu,
                *(_DWORD *)(*(_QWORD *)(v3 + 832) + 80LL),
                **(int **)(*(_QWORD *)(v3 + 832) + 648LL),
                v34,
                v31,
                0);
              sub_3E6F70(*(_QWORD *)(v3 + 832), v34);
            }
            sub_3E9170(v3, v13, v31);
            sub_3E6F70(*(_QWORD *)(v3 + 832), v31);
            goto LABEL_42;
          case 0x21B:
            v50 = *(_QWORD *)(a1 + 832);
            v51 = *(_QWORD *)(v50 + 712);
            if ( !v51 )
              goto LABEL_127;
            v44 = *(_DWORD *)(*(_QWORD *)(v50 + 704) + 4 * v51 - 4);
            *(_QWORD *)(v50 + 712) = v51 - 1;
            sub_3E9B00(
              a1,
              *(_QWORD *)(a1 + 112),
              *(unsigned __int8 *)(a1 + 104),
              v44,
              *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
            sub_3E8D60(
              a1,
              0xCu,
              *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
              **(int **)(*(_QWORD *)(a1 + 832) + 648LL),
              v44,
              v13,
              0);
            goto LABEL_112;
          case 0x21C:
          case 0x21D:
            v25 = sub_3EA630(a1, v13, v14, *(_QWORD *)(a1 + 152), *(_QWORD *)(a1 + 192), v19 == 541, a3, 1u);
LABEL_83:
            if ( !v25 )
              sub_3ECE70((_QWORD *)a1, v11, v13, v14, v15);
            goto LABEL_42;
          case 0x21E:
          case 0x21F:
            v46 = *(_QWORD *)(a1 + 832);
            v47 = *(_QWORD *)(v46 + 712);
            if ( !v47 )
              goto LABEL_127;
            v48 = *(int *)(*(_QWORD *)(v46 + 704) + 4 * v47 - 4);
            *(_QWORD *)(v46 + 712) = v47 - 1;
            v44 = v48;
            sub_3E9B00(
              a1,
              1LL << *(_QWORD *)(a1 + 112),
              *(unsigned __int8 *)(a1 + 104),
              v48,
              *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
            sub_3E8D60(a1, 0x14u, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), v13, v48, v48, 0);
            v49 = 43;
            if ( *(_WORD *)(a1 + 48) == 542 )
              v49 = 44;
            sub_3E8D60(
              a1,
              v49,
              *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
              v48,
              **(int **)(*(_QWORD *)(a1 + 832) + 632LL),
              *(_QWORD *)(a1 + 160),
              0);
            goto LABEL_112;
          case 0x220:
          case 0x221:
            v42 = *(_QWORD *)(a1 + 832);
            v43 = *(_QWORD *)(v42 + 712);
            if ( !v43 )
              goto LABEL_127;
            v44 = *(_DWORD *)(*(_QWORD *)(v42 + 704) + 4 * v43 - 4);
            *(_QWORD *)(v42 + 712) = v43 - 1;
            sub_3E9B00(
              a1,
              *(_QWORD *)(a1 + 112),
              *(unsigned __int8 *)(a1 + 104),
              v44,
              *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
            v45 = 43;
            if ( *(_WORD *)(a1 + 48) == 544 )
              v45 = 44;
            sub_3E8D60(a1, v45, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), v13, v44, *(_QWORD *)(a1 + 160), 0);
LABEL_112:
            sub_3E6F70(*(_QWORD *)(a1 + 832), v44);
            goto LABEL_42;
          case 0x222:
          case 0x223:
          case 0x224:
            v38 = 1;
            if ( v19 != 546 )
              v38 = (v19 != 547) + 2;
            v39 = *(_QWORD *)(a1 + 832);
            v40 = *(_QWORD *)(v39 + 712);
            if ( !v40 )
              goto LABEL_127;
            v41 = *(int *)(*(_QWORD *)(v39 + 704) + 4 * v40 - 4);
            *(_QWORD *)(v39 + 712) = v40 - 1;
            sub_3E9B00(a1, v38, *(unsigned __int8 *)(a1 + 144), v41, 1);
            sub_3E8D60(a1, 0x16u, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), v15, v41, v41, 0);
            sub_3E8D60(a1, 0xCu, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), v14, v41, v13, 0);
            sub_3E6F70(*(_QWORD *)(a1 + 832), v41);
            goto LABEL_42;
          case 0x225:
          case 0x226:
          case 0x227:
          case 0x228:
            v35 = *(_QWORD *)(a1 + 832);
            v36 = v19 - 549;
            if ( v19 == 552 )
              v36 = 3;
            v37 = *(_QWORD *)(v35 + 712);
            if ( !v37 )
              goto LABEL_127;
            v29 = *(_DWORD *)(*(_QWORD *)(v35 + 704) + 4 * v37 - 4);
            *(_QWORD *)(v35 + 712) = v37 - 1;
            sub_3EA150(a1, 4, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), v15, v29, 0, a3);
            if ( v36 )
            {
              v53 = sub_3E6FF0(*(_QWORD *)(a1 + 832), 4, a3);
              sub_3E9B00(a1, v36, *(unsigned __int8 *)(a1 + 144), v53, 1);
              sub_3E8D60(a1, 0x16u, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), v29, v53, v29, 0);
              sub_3E6F70(*(_QWORD *)(a1 + 832), v53);
            }
            sub_3E8D60(a1, 0xCu, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), v14, v29, v13, 0);
LABEL_87:
            sub_3E6F70(*(_QWORD *)(a1 + 832), v29);
            goto LABEL_42;
          default:
            goto LABEL_40;
        }
      }
      v52 = 1LL << ((unsigned __int8)v19 + 71);
      if ( (v52 & 0x555554) != 0 )
      {
        sub_3E9290(a1, v13, v14, a3);
        goto LABEL_42;
      }
      if ( (v52 & 0x2AAAA8) != 0 )
      {
LABEL_118:
        sub_3E9340(a1, v13, v14, a3);
        goto LABEL_42;
      }
      if ( (v52 & 3) != 0 )
      {
        sub_3E9760(a1, v13, v14, v15);
        goto LABEL_42;
      }
    }
    else if ( v19 )
    {
      switch ( v19 )
      {
        case 1u:
        case 0x70u:
        case 0x7Au:
        case 0x7Bu:
        case 0x7Fu:
        case 0xA2u:
          sub_3E8D60(a1, 4u, *(unsigned __int16 *)(a1 + 842), v14, 0x3BEA45E214ADDC55LL, v13, 0);
          goto LABEL_42;
        case 2u:
          if ( v15 == -1 )
          {
            v22 = *(_QWORD *)(a1 + 832);
            v23 = *(_QWORD *)(v22 + 712);
            if ( v23 )
            {
              v24 = *(_DWORD *)(*(_QWORD *)(v22 + 704) + 4 * v23 - 4);
              *(_QWORD *)(v22 + 712) = v23 - 1;
              sub_3E9BD0(a1, *(_QWORD *)(a1 + 40), v24);
              sub_3E8D60(a1, 0xCu, *(unsigned __int16 *)(a1 + 842), v24, v14, v13, 0);
              goto LABEL_42;
            }
LABEL_127:
            sub_3E4E50(a3, a1, a2);
          }
          if ( !under_debugger )
            sub_37DDE0(0xCE1Cu, a2, a3);
          return result;
        case 3u:
        case 0xA3u:
          sub_3E8D60(
            a1,
            0x38u,
            *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
            *(_QWORD *)(a1 + 120),
            0x3BEA45E214ADDC55LL,
            0x3BEA45E214ADDC55LL,
            0);
          goto LABEL_42;
        case 4u:
          sub_3E8D60(
            a1,
            0x39u,
            *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
            *(int *)(*(_QWORD *)(a1 + 832) + 64LL),
            v14,
            0x3BEA45E214ADDC55LL,
            *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
          goto LABEL_42;
        case 5u:
        case 6u:
        case 7u:
        case 8u:
        case 9u:
        case 0xAu:
        case 0x86u:
        case 0x87u:
        case 0x88u:
        case 0x89u:
        case 0x8Au:
        case 0x8Bu:
          sub_3E8ED0(a1, (unsigned int)v13, v14, a3);
          goto LABEL_42;
        case 0x13u:
        case 0x1Cu:
        case 0x33u:
        case 0x37u:
          sub_3E8D60(a1, 0xCu, *(unsigned __int16 *)(a1 + 842), v14, v15, v13, 0);
          goto LABEL_42;
        case 0x14u:
        case 0x15u:
        case 0x1Fu:
        case 0x20u:
        case 0x3Au:
        case 0x71u:
        case 0x72u:
        case 0x73u:
        case 0x80u:
        case 0x81u:
        case 0x82u:
        case 0x83u:
          sub_3EA220(a1, v13, v14, v15, a3);
          goto LABEL_42;
        case 0x16u:
        case 0x21u:
          sub_3E8D60(a1, 0x15u, *(unsigned __int16 *)(a1 + 842), v14, v15, v13, 0);
          goto LABEL_42;
        case 0x17u:
        case 0x24u:
          sub_3E8D60(a1, 0x13u, *(unsigned __int16 *)(a1 + 842), v14, v15, v13, 0);
          goto LABEL_42;
        case 0x18u:
        case 0x25u:
          sub_3E8D60(a1, 0x14u, *(unsigned __int16 *)(a1 + 842), v14, v15, v13, 0);
          goto LABEL_42;
        case 0x19u:
        case 0x1Au:
        case 0x1Bu:
        case 0x1Eu:
        case 0x22u:
        case 0x23u:
        case 0x34u:
        case 0x35u:
        case 0x36u:
        case 0x39u:
        case 0x3Bu:
        case 0x3Cu:
          sub_3E8E20(a1, (unsigned int)v13, v14, v15, a3);
          goto LABEL_42;
        case 0x1Du:
        case 0x38u:
          sub_3E8D60(a1, 0xDu, *(unsigned __int16 *)(a1 + 842), v14, v15, v13, 0);
          goto LABEL_42;
        case 0x44u:
        case 0x4Cu:
          sub_3E8D60(a1, 0xEu, *(unsigned __int16 *)(a1 + 842), v14, v15, v13, 0);
          goto LABEL_42;
        case 0x45u:
        case 0x46u:
        case 0x47u:
          sub_3EA3B0(a1, (unsigned int)v14, v15, v13, a3);
          goto LABEL_42;
        case 0x48u:
        case 0x4Du:
          sub_3E8D60(a1, 0x10u, *(unsigned __int16 *)(a1 + 842), v14, v15, v13, 0);
          goto LABEL_42;
        case 0x49u:
        case 0x4Eu:
          sub_3E8D60(a1, 0xFu, *(unsigned __int16 *)(a1 + 842), v14, v15, v13, 0);
          goto LABEL_42;
        case 0x4Au:
        case 0x4Fu:
          sub_3E8D60(a1, 0x12u, *(unsigned __int16 *)(a1 + 842), v14, v15, v13, 0);
          goto LABEL_42;
        case 0x4Bu:
        case 0x50u:
          sub_3E8D60(a1, 0x11u, *(unsigned __int16 *)(a1 + 842), v14, v15, v13, 0);
          goto LABEL_42;
        case 0x5Fu:
        case 0x60u:
        case 0x61u:
        case 0x62u:
          if ( (v11 & 0x800) != 0 || (v21 = -1, (*(_BYTE *)(a1 + 185) & 0xFD) == 1) )
            v21 = sub_3E9CC0(a1, 3, 0, a3);
          sub_3E9080(a1, v14, v15, v21, v13, a3);
          goto LABEL_42;
        case 0x63u:
          sub_3E8D60(a1, 0x45u, *(unsigned __int16 *)(a1 + 842), v14, v15, v13, 0);
          goto LABEL_42;
        case 0x64u:
          sub_3E8D60(a1, 0x46u, *(unsigned __int16 *)(a1 + 842), v14, v15, v13, 0);
          goto LABEL_42;
        case 0x65u:
          sub_3E8D60(a1, 0x47u, *(unsigned __int16 *)(a1 + 842), v14, v15, v13, 0);
          goto LABEL_42;
        case 0x66u:
          sub_3E8D60(a1, 0x48u, *(unsigned __int16 *)(a1 + 842), v14, v15, v13, 0);
          goto LABEL_42;
        case 0x6Du:
        case 0x6Eu:
        case 0x6Fu:
          sub_3E9580(a1, (unsigned int)v14, v13, a3);
          goto LABEL_42;
        case 0x79u:
          goto LABEL_42;
        case 0x7Cu:
          sub_3E8D60(a1, 7u, *(unsigned __int16 *)(a1 + 842), v14, 0x3BEA45E214ADDC55LL, v13, 0);
          goto LABEL_42;
        case 0x7Du:
        case 0x7Eu:
          sub_3E8D60(a1, 5u, *(unsigned __int16 *)(a1 + 842), v14, 0x3BEA45E214ADDC55LL, v13, 0);
          goto LABEL_42;
        case 0x85u:
          sub_3E8D60(a1, 0x44u, *(unsigned __int16 *)(a1 + 842), v14, 0x3BEA45E214ADDC55LL, v13, 0);
          goto LABEL_42;
        case 0x8Cu:
        case 0xA4u:
        case 0xA5u:
          sub_3E8D60(
            a1,
            0x37u,
            *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
            *(_QWORD *)(a1 + 80),
            0x3BEA45E214ADDC55LL,
            0x3BEA45E214ADDC55LL,
            0);
          goto LABEL_42;
        case 0x8Du:
          sub_3E8D60(
            a1,
            0x36u,
            *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
            0x3BEA45E214ADDC55LL,
            *(int *)(*(_QWORD *)(a1 + 832) + 64LL),
            v13,
            *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
          goto LABEL_42;
        case 0x8Eu:
          sub_3E8D60(a1, 0x3Au, 0, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
          goto LABEL_42;
        case 0x16Fu:
        case 0x170u:
        case 0x1AFu:
        case 0x1B0u:
          sub_3E8C90(a1, (unsigned int)v13, v14, v15, a3);
          goto LABEL_42;
        case 0x1AEu:
          v26 = *(_QWORD *)(a1 + 832);
          v27 = *(_QWORD *)(v26 + 712);
          if ( !v27 )
            goto LABEL_127;
          v28 = *(int *)(*(_QWORD *)(v26 + 704) + 4 * v27 - 4);
          *(_QWORD *)(v26 + 712) = v27 - 1;
          v29 = v28;
          sub_3E8D60(a1, 3u, 1, *(_QWORD *)(a1 + 192), 0x3BEA45E214ADDC55LL, v28, *(unsigned __int8 *)(a1 + 184));
          sub_3E8D60(a1, 0x16u, *(unsigned __int16 *)(a1 + 842), v15, v28, v28, 0);
          sub_3E8D60(a1, 0xCu, *(unsigned __int16 *)(a1 + 842), v14, v28, v13, 0);
          goto LABEL_87;
        case 0x1B1u:
        case 0x1B2u:
          v25 = sub_3EA630(a1, v13, v14, *(_QWORD *)(a1 + 152), *(_QWORD *)(a1 + 192), v19 == 433, a3, 0);
          goto LABEL_83;
        case 0x1B8u:
          sub_3EAAD0(a1, (unsigned int)v13, v14, a3);
          goto LABEL_42;
        default:
          goto LABEL_40;
      }
LABEL_134:
      BUG();
    }
LABEL_40:
    if ( (*(_BYTE *)(a1 + 844) & 6) != 0 )
    {
      sub_3E9170(a1, v13, v14);
LABEL_42:
      v20 = *(_DWORD *)(v3 + 844);
      if ( (v20 & 6) != 4 && (v20 & 8) == 0 )
        sub_3EB140(v3, v13, *(_WORD *)(v3 + 842), (v20 & 6) != 6, a3);
      return 0;
    }
    if ( !under_debugger )
      sub_37DDE0(0xCE1Du, a2, a3);
    goto LABEL_134;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 25LL) & 0x20) == 0 )
  {
    v18 = *(_WORD *)(a1 + 48);
    if ( (unsigned __int16)(v18 - 164) > 1u && v18 != 140 )
      return 0;
    sub_3E8D60(a1, 0x3Au, 1, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
  }
  return 1;
}
