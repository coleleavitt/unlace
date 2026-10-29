__int64 __fastcall sub_C9CA70(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // r13
  __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  __int64 *v9; // rbx
  __int64 v10; // rax
  unsigned int v11; // ebp
  __int64 *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  __int64 v20; // rbp
  char v21; // al
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int16 v26; // ax
  unsigned __int16 v27; // cx
  unsigned __int8 v28; // bp
  __int64 *v29; // rbx
  __int64 v30; // rax
  __int64 *v31; // rbx
  __int64 v32; // rax
  _QWORD *v33; // r15
  __int64 v34; // r14
  char v35; // al
  __int64 v36; // rax
  __int64 v37; // rcx
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rdx
  unsigned __int64 v42; // rbx
  __int64 v43; // rdi
  char v44; // al
  __int64 v45; // rdx
  __int64 v46; // rdx
  _QWORD *v47; // rbx
  __int64 v48; // rax
  unsigned __int64 v49; // r12
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rbp
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  _QWORD *v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rax
  __int64 v68; // rdx
  unsigned __int64 v69; // rax
  _QWORD *v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rdi
  __int64 v73; // rbx

  v5 = a2;
  v7 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                          + 16LL);
  if ( (unsigned int)(v7 - 25) <= 1 )
    goto LABEL_2;
  v8 = a3;
  if ( (unsigned __int8)(v7 - 2) > 4u )
  {
LABEL_3:
    if ( *(_BYTE *)(a1 + 24) )
      goto LABEL_4;
LABEL_9:
    v11 = *(_DWORD *)a1;
    switch ( *(_DWORD *)a1 )
    {
      case 0:
        return 1;
      case 1:
      case 8:
        v49 = v8 & 0xFFFFFFFFFFFFFFF0LL;
        v50 = *(_QWORD *)(*(_QWORD *)&byte_8[v8 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL;
        v51 = *(_QWORD *)(*(_QWORD *)&byte_8[v5[2334] & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)
            & 0xFFFFFFFFFFFFFFF0LL;
        if ( v50 == v51 )
          return 1;
        if ( sub_A62E10((__int64)v5, v8, v50, v7, a5) )
          v49 = sub_AAF890(v5, v8, v52, v53, v54) & 0xFFFFFFFFFFFFFFF0LL;
        v55 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v49 + 8) & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned __int8)sub_F65320(*v55) )
        {
          if ( v51 == sub_A70710(v5, (unsigned __int64)v55, v56, v57, v58) )
            return 1;
        }
        return v55 == (_QWORD *)v51;
      case 2:
        v33 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
        v34 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        v35 = *(_BYTE *)(v34 + 16);
        if ( v35 != 47 )
          goto LABEL_45;
        v36 = sub_F60F10(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
                a2,
                a3,
                v7,
                a5);
        if ( (*(_BYTE *)(v36 + 74) & 1) == 0 && (*(_QWORD *)(v36 + 128) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        {
          v8 = v5[2340];
          v33 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
          goto LABEL_44;
        }
        if ( !(unsigned __int8)sub_F61000(v34) )
          goto LABEL_44;
        v33 = nullptr;
        v67 = *(_QWORD *)(sub_F60F10(v34, a2, v64, v65, v66) + 128);
        v8 = v67 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v67 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          goto LABEL_44;
        if ( (v67 & 4) == 0 )
          goto LABEL_137;
        v72 = *(_QWORD *)v8;
        v73 = *(_QWORD *)(*(_QWORD *)v8 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_QWORD *)(v73 + 8) & 7LL | (*(__int64 *)(v73 + 8) >> 3) & 1 )
        {
          v67 = sub_F64F00(v72);
LABEL_137:
          v8 = v67 & 0xFFFFFFFFFFFFFFF0LL;
        }
        else
        {
          v8 = v73 & 0xFFFFFFFFFFFFFFF0LL;
        }
        v33 = (_QWORD *)v8;
LABEL_44:
        v34 = *(_QWORD *)(*(_QWORD *)(*v33 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        v35 = *(_BYTE *)(v34 + 16);
LABEL_45:
        if ( v35 == 13 && (((*(_WORD *)(v34 + 18) >> 3) + 44) & 0x1FFu) <= 0xB )
          v33 = (_QWORD *)(sub_A682D0(v5, v8) & 0xFFFFFFFFFFFFFFF0LL);
        v37 = *(_QWORD *)(a1 + 8);
        v38 = *(_QWORD *)(v33[1] & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL;
        if ( v37 == v38 )
          return 1;
        v39 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v38 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v39 + 16) == 13 )
        {
          v40 = (*(_WORD *)(v39 + 18) >> 3) & 0x1FF;
          v41 = (unsigned int)(v40 + 76);
          LOWORD(v41) = (v40 + 76) & 0x1FF;
          switch ( v41 )
          {
            case 0LL:
              if ( *(_BYTE *)(a1 + 24) && (v37 == v5[2344] || v37 == v5[2338]) )
                return 0;
              goto LABEL_83;
            case 1LL:
            case 2LL:
              if ( v37 == v5[2345] || v37 == v5[2339] )
                return 6;
              if ( v37 == v5[2344] )
                return 1;
              if ( v37 == v5[2338] )
                return 5;
              goto LABEL_87;
            case 7LL:
              if ( v37 != v5[2339] )
                goto LABEL_103;
              return 5;
            case 8LL:
              if ( v37 != v5[2340] )
                goto LABEL_94;
              return 5;
            case 9LL:
              if ( v37 != v5[2341] )
                return 0;
              return 5;
            case 10LL:
              if ( v5[2342] != v37 )
                return 0;
              return 5;
            case 12LL:
            case 13LL:
LABEL_83:
              if ( v37 == v5[2345] || v37 == v5[2339] )
                return 6;
              if ( v37 == v5[2344] )
                return 5;
              if ( v37 == v5[2338] )
                return 1;
LABEL_87:
              if ( !*(_BYTE *)(a1 + 24) )
              {
                v63 = (unsigned int)(v40 + 76);
                LOWORD(v63) = v63 & 0x1FF;
                switch ( v63 )
                {
                  case 0LL:
                    if ( v37 != v5[2340] && v37 != v5[2346] )
                      return 0;
                    return v11;
                  case 1LL:
                    if ( v5[2346] == v37 )
                      return v11;
                    if ( v37 == v5[2345] )
                      return 3;
                    return 0;
                  case 3LL:
                  case 14LL:
                    if ( v37 != v5[2332] && v37 != v5[2333] )
                      return 3;
                    return 0;
                  case 7LL:
                  case 15LL:
                    goto LABEL_104;
                  case 8LL:
                  case 16LL:
                    goto LABEL_95;
                  case 12LL:
                    if ( v37 == v5[2340] )
                      return v11;
                    if ( v37 == v5[2339] )
                      return 3;
                    return 0;
                  case 44LL:
                  case 45LL:
                    if ( v5[2351] != v37 )
                      return 0;
                    return v11;
                  default:
                    return 0;
                }
              }
              break;
            case 15LL:
              if ( v37 == v5[2345] )
                return 5;
LABEL_103:
              if ( *(_BYTE *)(a1 + 24) )
                return 0;
LABEL_104:
              if ( v37 != v5[2338] && v37 != v5[2344] )
                return 0;
              return 3;
            case 16LL:
              if ( v37 == v5[2346] )
                return 5;
LABEL_94:
              if ( *(_BYTE *)(a1 + 24) )
                return 0;
LABEL_95:
              if ( v37 == v5[2338]
                || v37 == v5[2344]
                || v37 == v5[2339]
                || v5[2345] == v37
                || v37 == v5[2332]
                || v37 == v5[2333] )
              {
                return v11;
              }
              return 0;
            case 17LL:
              if ( v37 != v5[2347] )
                return 0;
              return 5;
            case 18LL:
              if ( v37 != v5[2348] )
                return 0;
              return 5;
            default:
              goto LABEL_87;
          }
        }
        return 0;
      case 3:
        v42 = v8 & 0xFFFFFFFFFFFFFFF0LL;
        v43 = *(_QWORD *)v42;
        v44 = *(_BYTE *)(*(_QWORD *)v42 + 16LL);
        if ( v44 == 34 )
          return 1;
        v45 = *(_QWORD *)(*(_QWORD *)(v43 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v45 + 16) != 34 )
          goto LABEL_55;
        if ( sub_F63050(v43, a2, v45, v7) )
          return 1;
        v43 = *(_QWORD *)v42;
        v44 = *(_BYTE *)(*(_QWORD *)v42 + 16LL);
LABEL_55:
        if ( v44 == 11 )
          return 1;
        v46 = *(_QWORD *)(*(_QWORD *)(v43 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v46 + 16) != 11 )
          goto LABEL_59;
        if ( sub_F63050(v43, a2, v46, v7) )
          return 1;
        v43 = *(_QWORD *)v42;
        v44 = *(_BYTE *)(*(_QWORD *)v42 + 16LL);
LABEL_59:
        if ( v44 == 42
          || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v43 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42
          && (v43 = sub_F63050(v43, a2, v46, v7)) != 0 )
        {
          v47 = (_QWORD *)(*(_QWORD *)(v43 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          if ( sub_F63660(*v47) )
            return 1;
          v48 = *(_QWORD *)(*(_QWORD *)(*v47 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v48 + 16) == 13 && ((*(_WORD *)(v48 + 18) >> 3) & 0x1FF) == 0x1B3 )
            return 1;
        }
        return 0;
      case 4:
        v13 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
        v14 = *v13;
        if ( *(_BYTE *)(*v13 + 16) == 42 )
          goto LABEL_69;
        v15 = *(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        v16 = *(unsigned __int8 *)(v15 + 16);
        if ( (_BYTE)v16 != 42 )
          goto LABEL_14;
        v14 = sub_F63050(*v13, a2, v16, v15);
        if ( v14 )
        {
LABEL_69:
          v59 = *(_QWORD *)(*(_QWORD *)(v14 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          v60 = *(_QWORD *)(*(_QWORD *)(v59 + 8) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v60 + 16) == 13 && ((*(_WORD *)(v60 + 18) >> 3) & 0x1FF) == 0x1B3
            || !*(_BYTE *)(a1 + 24) && (unsigned __int8)sub_F57EE0(v59) )
          {
            return 1;
          }
          return v11;
        }
        v17 = *(_QWORD *)(*v13 + 8) & 0xFFFFFFFFFFFFFFF0LL;
        v15 = *(_QWORD *)v17;
        LOBYTE(v16) = *(_BYTE *)(*(_QWORD *)v17 + 16LL);
LABEL_14:
        if ( *(_BYTE *)(a1 + 24) || (_BYTE)v16 != 13 )
        {
          if ( (_BYTE)v16 != 34 && (_BYTE)v16 != 11 )
            return 0;
          return v11;
        }
        if ( ((*(_WORD *)(v15 + 18) >> 3) & 0x1FF) != 0x1E8 )
          return 0;
        v11 = 2;
        if ( (*(_BYTE *)(v5[290] + 1) & 8) != 0 )
          return v11;
        return 1;
      case 5:
        v19 = v8 & 0xFFFFFFFFFFFFFFF0LL;
        v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v19 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        v21 = *(_BYTE *)(v20 + 16);
        if ( v21 != 47 )
          goto LABEL_31;
        v22 = sub_F60F10(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v19 + 8LL) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, v7, a5);
        if ( (*(_BYTE *)(v22 + 74) & 1) == 0 && (*(_QWORD *)(v22 + 128) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          return 0;
        if ( (unsigned __int8)sub_F61000(v20) )
        {
          v68 = *(_QWORD *)(sub_F60F10(v20, a2, v23, v24, v25) + 128);
          v69 = 0;
          v70 = (_QWORD *)(v68 & 0xFFFFFFFFFFFFFFF8LL);
          if ( (v68 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            if ( (v68 & 4) != 0 )
            {
              v71 = *(_QWORD *)(*v70 & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_QWORD *)(v71 + 8) & 7LL | (*(__int64 *)(v71 + 8) >> 3) & 1 )
                v71 = sub_F64F00(*v70);
              v69 = v71 & 0xFFFFFFFFFFFFFFF0LL;
            }
            else
            {
              v69 = v68 & 0xFFFFFFFFFFFFFFF0LL;
            }
          }
          v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v69 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
          v21 = *(_BYTE *)(v20 + 16);
        }
        else
        {
          v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v19 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
          v21 = *(_BYTE *)(v20 + 16);
        }
LABEL_31:
        if ( v21 != 13 )
          return 0;
        v26 = (*(_WORD *)(v20 + 18) >> 3) & 0x1FF;
        v27 = (v26 + 76) & 0x1FF;
        if ( v27 > 0xDu )
        {
          v28 = *(_BYTE *)(a1 + 24);
        }
        else
        {
          if ( ((1LL << ((unsigned __int8)(*(_WORD *)(v20 + 18) >> 3) + 76)) & 0x3006) != 0 )
            return 1;
          v28 = *(_BYTE *)(a1 + 24);
          if ( !v27 )
            return v28 ^ 1u;
        }
        if ( !v28 && ((v26 + 73) & 0x1FFu) <= 0xD )
        {
          v11 = 3;
          if ( ((1LL << ((unsigned __int8)v26 + 73)) & 0x1811) != 0 )
            return v11;
          v11 = 2;
          if ( ((1LL << ((unsigned __int8)v26 + 73)) & 0x2020) != 0 )
            return v11;
        }
        return 0;
      case 6:
        v29 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
        v30 = *v29;
        if ( *(_BYTE *)(*v29 + 16) != 42 )
        {
          v61 = *(_QWORD *)(*(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v61 + 16) != 42 )
            return 0;
          v30 = sub_F63050(*v29, a2, v61, v7);
          if ( !v30 )
            return 0;
        }
        return (unsigned __int8)sub_F57EE0(*(_QWORD *)(*(_QWORD *)(v30 + 32) & 0xFFFFFFFFFFFFFFF0LL));
      case 7:
        v31 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
        v32 = *v31;
        if ( *(_BYTE *)(*v31 + 16) != 42 )
        {
          v62 = *(_QWORD *)(*(_QWORD *)(v32 + 8) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v62 + 16) != 42 )
            return 0;
          v32 = sub_F63050(*v31, a2, v62, v7);
          if ( !v32 )
            return 0;
        }
        return *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v32 + 32) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)&byte_8[v5[2333] & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
    }
  }
  if ( (_BYTE)v7 != 3 )
  {
LABEL_2:
    a2 = (__int64 *)a3;
    v8 = sub_A75D20(v5, a3);
    goto LABEL_3;
  }
  if ( !*(_BYTE *)(a1 + 24) )
    goto LABEL_9;
LABEL_4:
  v9 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *v9;
  if ( *(_BYTE *)(*v9 + 16) == 42
    || (v18 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v18 + 16) == 42)
    && (v10 = sub_F63050(*v9, a2, v18, v7)) != 0 )
  {
    v8 = *(_QWORD *)(v10 + 32);
    if ( (v8 & 1) == 0 && (byte_8[v8 & 0xFFFFFFFFFFFFFFF0LL] & 1) == 0 )
      goto LABEL_9;
  }
  return 0;
}
