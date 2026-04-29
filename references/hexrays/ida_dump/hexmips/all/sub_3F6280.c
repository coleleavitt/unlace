__int64 __fastcall sub_3F6280(__int64 a1, __int64 a2, __m128 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v6; // rsi
  unsigned __int16 v7; // dx
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int8 v10; // al
  unsigned __int8 *v11; // rbp
  int v12; // r13d
  __int64 v13; // rax
  __int64 v14; // r12
  int v15; // r13d
  __int64 v16; // r12
  _DWORD *v17; // rax
  __int64 v18; // rdi
  signed __int64 v19; // r12
  __int64 v20; // rax
  unsigned __int8 *v21; // r13
  bool v22; // cf
  __int64 v24; // rbp
  __int64 v25; // rax
  __int64 v26; // rdx
  _DWORD *v27; // rax
  _DWORD *v28; // rax
  __int64 v29; // rax
  _DWORD *v30; // rdx
  int v31; // r13d
  __int64 v32; // r12
  __int64 v33; // rax
  bool v34; // zf
  __int64 v35; // rdx
  int v36; // esi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // r9
  int v40; // eax
  unsigned __int64 v41; // rax
  char v42; // dl
  __int64 v43; // rdi
  int v44; // eax
  unsigned __int16 v45; // ax
  __int64 *v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rax
  int v50; // ecx
  __int64 v51; // r12
  _QWORD *v52; // rax
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rax
  unsigned __int64 v56; // rbp
  __int64 v57; // rdx
  int v58; // esi
  unsigned __int16 v59; // ax
  __int64 v60; // rax
  __int64 v61; // r12
  __int64 v62; // r14
  __int64 v63; // r13
  int v64; // ecx
  __int64 v65; // rdi
  signed __int64 v66; // r12
  __int64 v67; // rax
  unsigned __int8 *v68; // r13
  __int64 v69; // rax
  __int64 v70; // rsi
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rdx
  int v75; // ecx
  int v76; // eax
  int v77; // ecx
  int v78; // ecx
  int v79; // eax
  unsigned __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rax
  int v83; // ecx
  __int64 v84; // r15
  __int64 v85; // rax
  _QWORD *v86; // rdi
  __int64 v87; // r13
  __int64 v88; // r14
  __int64 v89; // rax
  _QWORD *v90; // r12
  __int64 v91; // rbp
  __int64 v92; // r13
  __int64 v93; // rax
  unsigned __int8 *v94; // r15
  __int64 v95; // rdi
  __int64 v96; // [rsp+8h] [rbp-1D0h]
  __int64 v97; // [rsp+10h] [rbp-1C8h] BYREF
  __int64 v98; // [rsp+18h] [rbp-1C0h]
  __int64 v99; // [rsp+20h] [rbp-1B8h] BYREF
  int v100; // [rsp+28h] [rbp-1B0h]
  __int128 v101; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v102; // [rsp+40h] [rbp-198h]
  __int64 v103; // [rsp+48h] [rbp-190h]
  __int64 v104; // [rsp+50h] [rbp-188h]
  _BYTE v105[6]; // [rsp+58h] [rbp-180h] BYREF
  __int16 v106; // [rsp+5Eh] [rbp-17Ah]
  __int64 v107; // [rsp+68h] [rbp-170h]
  __int64 v108; // [rsp+90h] [rbp-148h]
  _QWORD v109[8]; // [rsp+198h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 40);
  v109[0] = __readfsqword(0x28u);
  if ( v4 == *(_QWORD *)(v3 + 40) && (*(_BYTE *)(*(_QWORD *)(v3 + 920) + 128LL) & 4) != 0 )
  {
    a2 = 3;
    v38 = sub_3EAB70(
            a1,
            3u,
            *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
            v4,
            0x3BEA45E214ADDC55LL,
            **(int **)(*(_QWORD *)(a1 + 832) + 704LL),
            0);
    if ( v38 )
      *(_DWORD *)(v38 + 4) |= 0x80u;
  }
  sub_3E83C0(*(_QWORD *)(a1 + 832));
  if ( *(_QWORD *)(a1 + 784) != -1 )
  {
    v24 = sub_11E7A0(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL));
    if ( v24 )
    {
      if ( !under_debugger )
        sub_37E160(0xCC53u, a2, *(double *)a3.m128_u64);
      goto LABEL_220;
    }
    v25 = *(_QWORD *)(a1 + 16);
    v26 = *(_QWORD *)(a1 + 40);
    if ( *(_QWORD *)(v25 + 32) != v26 )
    {
      if ( !under_debugger )
        sub_37E160(0xCC54u, a2, *(double *)a3.m128_u64);
      goto LABEL_220;
    }
    if ( (*(_BYTE *)(v25 + 24) & 2) != 0 )
    {
      if ( !under_debugger )
        sub_37E160(0xCC55u, a2, *(double *)a3.m128_u64);
      goto LABEL_220;
    }
    v27 = *(_DWORD **)(a1 + 840);
    if ( v27 )
    {
      if ( *v27 == 55 )
      {
        v28 = v27 + 8;
      }
      else
      {
        if ( *v27 != 42 )
          goto LABEL_205;
        v28 = v27 + 16;
      }
      if ( *(_BYTE *)v28 == 6 && v26 == *((_QWORD *)v28 + 1) )
        goto LABEL_38;
LABEL_205:
      if ( !under_debugger )
        sub_37E160(0xCC51u, a2, *(double *)a3.m128_u64);
      goto LABEL_220;
    }
    if ( (unsigned __int8)netnode_charval(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 104LL), *(_QWORD *)(a1 + 784), 256) )
      goto LABEL_62;
    v102 = -1;
    v52 = v105;
    v103 = 0;
    v104 = 0;
    v101 = -1;
    a3 = 0;
    do
    {
      *(_WORD *)v52 = 0;
      v52 += 5;
      *((_WORD *)v52 - 19) = 0;
      *((_WORD *)v52 - 18) = 0;
      *((_DWORD *)v52 - 2) = 0;
      *((_WORD *)v52 - 17) = 0;
      *((_OWORD *)v52 - 2) = 0;
      *(v52 - 2) = 0;
    }
    while ( v109 != v52 );
    if ( (int)decode_insn(&v101, *(_QWORD *)(a1 + 784), v109, 0, 0, v39, 0.0) <= 0 )
      goto LABEL_62;
    v53 = *((_QWORD *)&v101 + 1) + ((v104 & 0x400) == 0 ? 8LL : 6LL);
    if ( (_WORD)v103 == 203 )
    {
      if ( v53 == v107 )
        goto LABEL_62;
    }
    else if ( (v103 & 0xFFF7) == 0x63 && v105[1] == 1 && !v106 && v53 == v108 )
    {
      v24 = 0;
      goto LABEL_123;
    }
    v54 = *(unsigned __int16 *)(a1 + 48);
    if ( (_WORD)v54 != 821 )
    {
      if ( (unsigned __int16)v54 > 0x335u )
      {
        if ( (unsigned __int16)v54 <= 0x344u )
        {
          if ( (unsigned __int16)v54 <= 0x33Du )
            goto LABEL_121;
        }
        else
        {
          v80 = (unsigned int)(v54 - 1736);
          if ( (unsigned __int16)(v54 - 1736) > 5u )
          {
            if ( (unsigned __int16)(v54 - 1743) > 0xDu )
              goto LABEL_121;
          }
          else
          {
            v81 = 43;
            if ( !_bittest64(&v81, v80) )
              goto LABEL_121;
          }
        }
      }
      else if ( (unsigned __int16)v54 > 0x206u )
      {
        if ( (unsigned __int16)(v54 - 546) > 1u && ((unsigned __int16)v54 > 0x241u || (unsigned __int16)v54 <= 0x23Du) )
          goto LABEL_121;
      }
      else if ( (unsigned __int16)v54 <= 0x204u )
      {
        if ( (unsigned __int16)v54 <= 0x76u )
        {
          if ( (unsigned __int16)v54 <= 0x71u && (unsigned __int16)(v54 - 82) > 0x1Fu )
            goto LABEL_121;
        }
        else if ( (unsigned __int16)(v54 - 202) > 1u )
        {
          if ( (unsigned __int16)v54 <= 0xC9u )
          {
            if ( (unsigned __int16)v54 <= 0xC5u )
              goto LABEL_121;
          }
          else if ( (unsigned __int16)(v54 - 439) > 1u )
          {
LABEL_121:
            v55 = *(_QWORD *)(a1 + 872);
            v56 = *(_QWORD *)(a1 + 880);
            if ( v56 < v55 + 1 )
            {
              v85 = qvector_reserve(a1 + 864, 0, v55 + 1, 24);
              v86 = *(_QWORD **)(a1 + 864);
              v87 = *(_QWORD *)(a1 + 872);
              v88 = v85;
              v89 = *(_QWORD *)(a1 + 880);
              *(_QWORD *)(a1 + 880) = v56;
              v90 = v86;
              v91 = v88;
              v96 = v89;
              v92 = v87 - 1;
              if ( v92 >= 0 )
              {
                do
                {
                  v93 = *v90;
                  v94 = (unsigned __int8 *)(v90 + 1);
                  v95 = v91 + 8;
                  v90 += 3;
                  v91 += 24;
                  *(_QWORD *)(v91 - 24) = v93;
                  sub_11F840(v95, v94);
                  sub_118BA0((__int64)v94);
                  v22 = v92-- == 0;
                }
                while ( !v22 );
                v86 = *(_QWORD **)(a1 + 864);
              }
              qfree(v86);
              *(_QWORD *)(a1 + 864) = v88;
              *(_QWORD *)(a1 + 880) = v96;
              v55 = *(_QWORD *)(a1 + 872);
            }
            v24 = *(_QWORD *)(a1 + 864) + 24 * v55;
            *(_QWORD *)v24 = 0;
            *(_QWORD *)(v24 + 8) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v24 + 16) = 0;
            ++*(_QWORD *)(a1 + 872);
LABEL_123:
            if ( !(*(_QWORD *)(a1 + 840) | v24) )
              goto LABEL_3;
LABEL_38:
            sub_1D1F50(a1, 3u, 1, 0, 0x3BEA45E214ADDC55LL, *(int *)(*(_QWORD *)(a1 + 832) + 352LL), 0);
            v29 = sub_63DD0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
            v30 = *(_DWORD **)(a1 + 840);
            *(_QWORD *)(a1 + 16) = v29;
            v31 = *(_DWORD *)(v29 + 72);
            if ( v30 )
            {
              v32 = (__int64)(v30 + 16);
              if ( *v30 == 55 )
                v32 = (__int64)(v30 + 8);
              sub_118BA0(v32);
              *(_BYTE *)v32 = 7;
              *(_DWORD *)(v32 + 8) = v31;
            }
            else
            {
              *(_BYTE *)(v24 + 8) = 7;
              *(_DWORD *)(v24 + 16) = v31;
            }
            LODWORD(v16) = sub_3F4C00(a1, 0, a3);
            if ( !(_DWORD)v16 && *(_WORD *)(a1 + 448) != 80 )
            {
              v33 = *(_QWORD *)(a1 + 784);
              v34 = *(_QWORD *)(a1 + 840) == 0;
              *(_QWORD *)(a1 + 784) = *(_QWORD *)(a1 + 40);
              v35 = *(_QWORD *)(a1 + 832);
              *(_QWORD *)(a1 + 40) = v33;
              v36 = *(_DWORD *)(v35 + 352);
              if ( v34 )
              {
                v97 = -4294967290LL;
                v50 = 8 * *(_DWORD *)(v35 + 84);
                if ( (unsigned __int64)v50 <= 0x3F )
                  v33 &= ~(-1LL << v50);
                v100 = v36;
                v98 = v33;
                v99 = 0x100000001LL;
                v51 = sub_1D2090(a1, 42, (unsigned __int8 *)&v99, nullptr, (unsigned __int8 *)&v97);
                sub_118BA0((__int64)&v99);
                sub_118BA0((__int64)&v97);
                *(_QWORD *)v24 = v51;
              }
              else
              {
                v100 = *(_DWORD *)(v35 + 352);
                v99 = 0x100000001LL;
                sub_1D2090(a1, 42, (unsigned __int8 *)&v99, nullptr, (unsigned __int8 *)(a1 + 848));
                sub_118BA0((__int64)&v99);
              }
              v37 = *(_QWORD *)(a1 + 40);
              LODWORD(v16) = 1;
              *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 784);
              *(_QWORD *)(a1 + 784) = v37;
            }
            if ( *(_QWORD *)(a1 + 840) )
            {
              *(_QWORD *)(a1 + 840) = 0;
              sub_118BA0(a1 + 848);
            }
            return (unsigned int)v16;
          }
        }
      }
    }
LABEL_62:
    if ( !*(_QWORD *)(a1 + 840) )
      goto LABEL_3;
    goto LABEL_38;
  }
LABEL_3:
  v6 = *(_QWORD *)(a1 + 416);
  if ( v6 == -1 )
    return sub_3F4C00(a1, 0, a3);
  v7 = *(_WORD *)(a1 + 48);
  v8 = *(_QWORD *)(a1 + 32) + ((*(_BYTE *)(a1 + 57) & 4) == 0 ? 8LL : 6LL);
  if ( v7 == 203 )
  {
    if ( v8 == *(_QWORD *)(a1 + 80) )
      return sub_3F4C00(a1, 0, a3);
    v9 = *(_QWORD *)(a1 + 408);
    if ( !*(_BYTE *)(a1 + 384) )
    {
      if ( v6 < v9 )
      {
        v10 = *(_BYTE *)(a1 + 792);
        v11 = nullptr;
LABEL_88:
        if ( (unsigned __int16)(v7 - 439) <= 1u )
          goto LABEL_68;
        goto LABEL_14;
      }
LABEL_79:
      v11 = *(unsigned __int8 **)(a1 + 864);
      v46 = (__int64 *)&v11[24 * *(_QWORD *)(a1 + 872)];
      if ( v46 == (__int64 *)v11 )
      {
LABEL_64:
        v11 = nullptr;
      }
      else
      {
        while ( *(_QWORD *)(*(_QWORD *)v11 + 72LL) != *(_QWORD *)(a1 + 40) )
        {
          v11 += 24;
          if ( v46 == (__int64 *)v11 )
            goto LABEL_64;
        }
      }
LABEL_65:
      v10 = *(_BYTE *)(a1 + 792);
      if ( v7 > 0x241u )
      {
        if ( v7 <= 0x341u )
        {
          if ( v7 > 0x33Du )
            goto LABEL_68;
        }
        else if ( (unsigned __int16)(v7 - 1743) <= 0xDu )
        {
          goto LABEL_68;
        }
LABEL_14:
        if ( !v10 )
        {
          v12 = 0;
          if ( v6 >= v9 )
          {
            sub_1D1F50(a1, 3u, 1, 1, 0x3BEA45E214ADDC55LL, *(int *)(*(_QWORD *)(a1 + 832) + 352LL), 0);
            if ( v11 )
            {
              sub_1D2090(a1, 55, v11 + 8, nullptr, nullptr);
              v13 = sub_63DD0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
              *(_QWORD *)(a1 + 16) = v13;
              v14 = *(_QWORD *)v11;
              v15 = *(_DWORD *)(v13 + 72);
              sub_118BA0(*(_QWORD *)v11 + 64LL);
              *(_BYTE *)(v14 + 64) = 7;
              *(_DWORD *)(v14 + 72) = v15;
            }
            else
            {
              v69 = sub_1D1F50(
                      a1,
                      0x37u,
                      *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
                      *(_QWORD *)(a1 + 416),
                      0x3BEA45E214ADDC55LL,
                      0x3BEA45E214ADDC55LL,
                      0);
              v70 = *(_QWORD *)(a1 + 40);
              *(_QWORD *)(a1 + 840) = v69;
              v71 = sub_63DD0(*(_QWORD *)(a1 + 8), v70, 2);
              *(_QWORD *)(a1 + 16) = v71;
              LODWORD(v71) = *(_DWORD *)(v71 + 72);
              *(_BYTE *)(a1 + 848) = 7;
              *(_DWORD *)(a1 + 856) = v71;
            }
            LODWORD(v16) = sub_3F4C00(a1, 0, a3);
            if ( (_DWORD)v16 )
              return (unsigned int)v16;
            v17 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 56LL);
            if ( !v17
              || (unsigned int)(*v17 - 54) > 1
              && (v82 = sub_63DD0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2),
                  *(_QWORD *)(a1 + 16) = v82,
                  !*(_QWORD *)(v82 + 56)) )
            {
              sub_1D1F50(
                a1,
                0x37u,
                *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
                *(_QWORD *)(a1 + 416) + *(unsigned __int16 *)(a1 + 450),
                0x3BEA45E214ADDC55LL,
                0x3BEA45E214ADDC55LL,
                0);
            }
            if ( !v11 )
              goto LABEL_27;
            sub_118BA0((__int64)(v11 + 8));
            v18 = (__int64)(v11 + 8);
            v19 = 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD *)(a1 + 864) + 24LL * *(_QWORD *)(a1 + 872) - (__int64)v11) >> 3)
                - 2;
            if ( v19 >= 0 )
            {
              while ( 1 )
              {
                v20 = *((_QWORD *)v11 + 3);
                v21 = v11 + 32;
                v11 += 24;
                *((_QWORD *)v11 - 3) = v20;
                sub_11F840(v18, v21);
                sub_118BA0((__int64)v21);
                v22 = v19-- == 0;
                if ( v22 )
                  break;
                v18 = (__int64)(v11 + 8);
              }
            }
            goto LABEL_26;
          }
LABEL_71:
          v43 = a1;
          v44 = sub_3F61E0(a1, a3);
          v16 = v44;
          if ( v44 )
            return (unsigned int)v16;
          if ( *(_WORD *)(a1 + 448) == 80 )
            goto LABEL_55;
          if ( (unsigned int)(v12 - 1) <= 1 )
          {
            v45 = *(_WORD *)(a1 + 48);
            if ( v45 <= 0xC9u )
            {
              if ( v45 <= 0xC5u )
              {
                switch ( *(_WORD *)(a1 + 48) )
                {
                  case 'R':
                  case 'S':
                  case 'T':
                  case 'U':
                  case 'V':
                  case 'W':
                  case 'X':
                  case 'Y':
                  case 'Z':
                  case '[':
                  case '\\':
                  case ']':
                  case '^':
                  case '_':
                  case '`':
                  case 'a':
                    v16 = *(_BYTE *)(a1 + 105) != 0;
                    goto LABEL_93;
                  case 'b':
                  case 'c':
                  case 'd':
                  case 'e':
                  case 'f':
                  case 'g':
                  case 'h':
                  case 'i':
                  case 'j':
                  case 'k':
                  case 'l':
                  case 'm':
                    goto LABEL_96;
                  case 'n':
                  case 'o':
                  case 'p':
                  case 'q':
                    goto LABEL_100;
                  case 's':
                  case 'u':
                  case 'v':
                    goto LABEL_93;
                  default:
                    goto LABEL_102;
                }
              }
              goto LABEL_96;
            }
            if ( v45 > 0x341u )
            {
              if ( v45 != 1739 )
              {
                if ( v45 <= 0x6CBu )
                {
                  if ( (unsigned __int16)(v45 - 1736) > 1u )
                    goto LABEL_102;
                  goto LABEL_93;
                }
                if ( (unsigned __int16)(v45 - 1743) > 0xDu )
                  goto LABEL_102;
              }
            }
            else
            {
              if ( v45 > 0x33Du )
              {
LABEL_96:
                v16 = 1;
                goto LABEL_93;
              }
              if ( v45 > 0x241u )
              {
                if ( v45 != 821 )
                  goto LABEL_102;
                goto LABEL_93;
              }
              if ( v45 <= 0x23Du )
              {
                if ( v45 > 0xCBu && (unsigned __int16)(v45 - 439) > 1u )
                  goto LABEL_102;
LABEL_93:
                v47 = a1 + 40 * v16;
                if ( *(_BYTE *)(v47 + 65) == 7 )
                {
                  v48 = *(_QWORD *)(v47 + 80);
                  v49 = *(_QWORD *)(a1 + 832);
                  if ( v12 == 1 )
                  {
                    v97 = -4294967290LL;
                    v78 = 8 * *(_DWORD *)(v49 + 84);
                    if ( (unsigned __int64)v78 <= 0x3F )
                      v48 &= ~(-1LL << v78);
                    v98 = v48;
                    v79 = *(_DWORD *)(v49 + 352);
                    v99 = 0x100000001LL;
                    v100 = v79;
                    sub_1D2090(a1, 42, (unsigned __int8 *)&v99, nullptr, (unsigned __int8 *)&v97);
                    sub_118BA0((__int64)&v99);
                    sub_118BA0((__int64)&v97);
                  }
                  else
                  {
                    sub_1D1F50(a1, 0x37u, *(_DWORD *)(v49 + 84), v48, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
                  }
                  goto LABEL_55;
                }
LABEL_219:
                sub_3E5390(*(double *)a3.m128_u64, v43, v6);
              }
            }
LABEL_100:
            v16 = 2;
            goto LABEL_93;
          }
          return sub_3F4C00(a1, 0, a3);
        }
        if ( !under_debugger )
          sub_37E160(0xCC56u, v6, *(double *)a3.m128_u64);
LABEL_220:
        BUG();
      }
      goto LABEL_10;
    }
  }
  else if ( (v7 & 0xFFF7) == 0x63 )
  {
    if ( *(_BYTE *)(a1 + 65) == 1 && !*(_WORD *)(a1 + 70) && v8 == *(_QWORD *)(a1 + 120) )
      return sub_3F4C00(a1, 0, a3);
    v9 = *(_QWORD *)(a1 + 408);
    if ( !*(_BYTE *)(a1 + 384) )
    {
      if ( v6 < v9 )
      {
        v10 = *(_BYTE *)(a1 + 792);
        v11 = nullptr;
LABEL_10:
        if ( v7 > 0x23Du )
          goto LABEL_68;
        if ( v7 <= 0xC9u )
        {
          if ( v7 <= 0xC5u && (unsigned __int16)(v7 - 82) > 0x1Fu )
            goto LABEL_14;
LABEL_68:
          v6 = (unsigned int)(v10 & (v6 < v9)) + 1;
          v40 = sub_3F4C00(a1, v6, a3);
          v16 = v40;
          if ( v40 )
            return (unsigned int)v16;
          v41 = *(_QWORD *)(a1 + 416);
          v42 = *(_BYTE *)(a1 + 792);
          if ( v41 < *(_QWORD *)(a1 + 408) )
          {
            v12 = 1;
            if ( v42 )
            {
              v72 = *(unsigned __int16 *)(a1 + 450);
              v97 = -4294967290LL;
              v73 = v72 + v41;
              v74 = *(_QWORD *)(a1 + 832);
              v75 = 8 * *(_DWORD *)(v74 + 84);
              if ( (unsigned __int64)v75 <= 0x3F )
                v73 &= ~(-1LL << v75);
              v98 = v73;
              v76 = *(_DWORD *)(v74 + 352);
              v99 = 0x100000001LL;
              v100 = v76;
              sub_1D2090(a1, 42, (unsigned __int8 *)&v99, nullptr, (unsigned __int8 *)&v97);
              v12 = 2;
              sub_118BA0((__int64)&v99);
              sub_118BA0((__int64)&v97);
              v6 = *(_QWORD *)(a1 + 416);
              *(_QWORD *)(a1 + 16) = sub_63DD0(*(_QWORD *)(a1 + 8), v6, 2);
            }
            goto LABEL_71;
          }
          if ( v42 )
          {
            v57 = *(_QWORD *)(a1 + 832);
            v58 = *(_DWORD *)(v57 + 352);
            if ( v11 )
            {
              v100 = *(_DWORD *)(v57 + 352);
              v99 = 0x100000001LL;
              sub_1D2090(a1, 42, (unsigned __int8 *)&v99, nullptr, v11 + 8);
              sub_118BA0((__int64)&v99);
            }
            else
            {
              v97 = -4294967290LL;
              v83 = 8 * *(_DWORD *)(v57 + 84);
              if ( (unsigned __int64)v83 <= 0x3F )
                v41 &= ~(-1LL << v83);
              v100 = v58;
              v98 = v41;
              v99 = 0x100000001LL;
              v84 = sub_1D2090(a1, 42, (unsigned __int8 *)&v99, nullptr, (unsigned __int8 *)&v97);
              sub_118BA0((__int64)&v99);
              sub_118BA0((__int64)&v97);
              *(_QWORD *)(a1 + 840) = v84;
            }
            v6 = 55;
            v43 = a1;
            *(_QWORD *)(a1 + 16) = sub_63DD0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
            sub_1D1F50(
              a1,
              0x37u,
              *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
              *(_QWORD *)(a1 + 416) + *(unsigned __int16 *)(a1 + 450),
              0x3BEA45E214ADDC55LL,
              0x3BEA45E214ADDC55LL,
              0);
          }
          else
          {
            v6 = 55;
            v43 = a1;
            if ( v11 )
              sub_1D2090(a1, 55, v11 + 8, nullptr, nullptr);
            else
              *(_QWORD *)(a1 + 840) = sub_1D1F50(
                                        a1,
                                        0x37u,
                                        *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
                                        *(_QWORD *)(a1 + 416),
                                        0x3BEA45E214ADDC55LL,
                                        0x3BEA45E214ADDC55LL,
                                        0);
          }
          v59 = *(_WORD *)(a1 + 48);
          if ( v59 <= 0xC9u )
          {
            if ( v59 <= 0xC5u )
            {
              switch ( *(_WORD *)(a1 + 48) )
              {
                case 'R':
                case 'S':
                case 'T':
                case 'U':
                case 'V':
                case 'W':
                case 'X':
                case 'Y':
                case 'Z':
                case '[':
                case '\\':
                case ']':
                case '^':
                case '_':
                case '`':
                case 'a':
                  v16 = *(_BYTE *)(a1 + 105) != 0;
                  goto LABEL_133;
                case 'b':
                case 'c':
                case 'd':
                case 'e':
                case 'f':
                case 'g':
                case 'h':
                case 'i':
                case 'j':
                case 'k':
                case 'l':
                case 'm':
                  goto LABEL_140;
                case 'n':
                case 'o':
                case 'p':
                case 'q':
                  goto LABEL_144;
                case 's':
                case 'u':
                case 'v':
                  goto LABEL_133;
                default:
                  goto LABEL_102;
              }
            }
            goto LABEL_140;
          }
          if ( v59 > 0x341u )
          {
            if ( v59 != 1739 )
            {
              if ( v59 <= 0x6CBu )
              {
                if ( (unsigned __int16)(v59 - 1736) > 1u )
                  goto LABEL_102;
                goto LABEL_133;
              }
              if ( (unsigned __int16)(v59 - 1743) > 0xDu )
                goto LABEL_102;
            }
          }
          else
          {
            if ( v59 > 0x33Du )
            {
LABEL_140:
              v16 = 1;
              goto LABEL_133;
            }
            if ( v59 > 0x241u )
            {
              if ( v59 != 821 )
                goto LABEL_102;
              goto LABEL_133;
            }
            if ( v59 <= 0x23Du )
            {
              if ( v59 > 0xCBu && (unsigned __int16)(v59 - 439) > 1u )
              {
LABEL_102:
                if ( !under_debugger )
                  sub_37E160(0xCC4Fu, v6, *(double *)a3.m128_u64);
                goto LABEL_220;
              }
LABEL_133:
              v60 = a1 + 40 * v16;
              if ( *(_BYTE *)(v60 + 65) == 7 )
              {
                v61 = *(_QWORD *)(v60 + 80);
                v62 = *(_QWORD *)(a1 + 832);
                if ( !v11 )
                {
                  *(_BYTE *)(a1 + 848) = 6;
                  v77 = 8 * *(_DWORD *)(v62 + 84);
                  if ( (unsigned __int64)v77 <= 0x3F )
                    v61 &= ~(-1LL << v77);
                  *(_QWORD *)(a1 + 856) = v61;
                  goto LABEL_27;
                }
                v63 = *(_QWORD *)v11;
                sub_118BA0(*(_QWORD *)v11 + 64LL);
                *(_BYTE *)(v63 + 64) = 6;
                v64 = 8 * *(_DWORD *)(v62 + 84);
                if ( (unsigned __int64)v64 <= 0x3F )
                  v61 &= ~(-1LL << v64);
                *(_QWORD *)(v63 + 72) = v61;
                sub_118BA0((__int64)(v11 + 8));
                v65 = (__int64)(v11 + 8);
                v66 = 0xAAAAAAAAAAAAAAABLL
                    * ((*(_QWORD *)(a1 + 864) + 24LL * *(_QWORD *)(a1 + 872) - (__int64)v11) >> 3)
                    - 2;
                if ( v66 >= 0 )
                {
                  while ( 1 )
                  {
                    v67 = *((_QWORD *)v11 + 3);
                    v68 = v11 + 32;
                    v11 += 24;
                    *((_QWORD *)v11 - 3) = v67;
                    sub_11F840(v65, v68);
                    sub_118BA0((__int64)v68);
                    v22 = v66-- == 0;
                    if ( v22 )
                      break;
                    v65 = (__int64)(v11 + 8);
                  }
                }
LABEL_26:
                --*(_QWORD *)(a1 + 872);
LABEL_27:
                LODWORD(v16) = 1;
                return (unsigned int)v16;
              }
              goto LABEL_219;
            }
          }
LABEL_144:
          v16 = 2;
          goto LABEL_133;
        }
        goto LABEL_88;
      }
      goto LABEL_79;
    }
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 408);
    if ( !*(_BYTE *)(a1 + 384) )
    {
      v11 = nullptr;
      if ( v6 < v9 )
        goto LABEL_65;
      goto LABEL_79;
    }
  }
  if ( v6 >= v9 )
  {
LABEL_55:
    LODWORD(v16) = 0;
    return (unsigned int)v16;
  }
  return sub_3F61E0(a1, a3);
}
