__int64 __fastcall sub_817820(unsigned __int64 a1, __int64 a2, int a3)
{
  _BYTE *v6; // rax
  __int64 v7; // rax
  _BYTE *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rbp
  char v18; // al
  _BYTE *v20; // rdx
  char v21; // al
  __int64 v22; // rsi
  bool v23; // al
  int v24; // ebp
  __int64 v25; // rax
  unsigned __int64 *v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // r13
  char v36; // al
  unsigned int v37; // r13d
  int v38; // ebp
  __int64 v39; // rax
  void *v40; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v41; // [rsp+8h] [rbp-60h]
  char v42; // [rsp+Ch] [rbp-5Ch]
  void *v43; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v44; // [rsp+18h] [rbp-50h]
  char v45; // [rsp+1Ch] [rbp-4Ch]
  void *v46; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v47; // [rsp+28h] [rbp-40h]
  char v48; // [rsp+2Ch] [rbp-3Ch]
  void *v49; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v50; // [rsp+38h] [rbp-30h]

  while ( 1 )
  {
    if ( ((*(_DWORD *)a1 >> 14) & 8) != 0 )
    {
      v6 = *(_BYTE **)(a2 + 2160);
      if ( (v6[1] & 0x10) == 0 || (*v6 & 0x20) != 0 )
        break;
    }
LABEL_6:
    v7 = *(_WORD *)a1 & 0x1FF;
    if ( (((_WORD)v7 + 431) & 0x1FFu) <= 8 )
    {
      v8 = *(_BYTE **)(a2 + 2160);
      v9 = *(_QWORD *)(a1 + 8);
      if ( (v8[1] & 8) != 0 )
        goto LABEL_17;
      v10 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v10 + 16) == 41 )
        goto LABEL_12;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 41 )
      {
        v10 = sub_B0D320(v10);
        if ( !v10 )
          goto LABEL_16;
        v8 = *(_BYTE **)(a2 + 2160);
LABEL_12:
        v11 = *(_QWORD *)&byte_8[*(_QWORD *)(v10 + 32) & 0xFFFFFFFFFFFFFFF0LL];
        v12 = ((unsigned __int8)v11 | (unsigned __int8)*(_QWORD *)(v10 + 32)) & 7;
        if ( (v11 & 8) != 0 )
        {
          v12 |= *(__int64 *)((char *)&qword_18 + (v11 & 0xFFFFFFFFFFFFFFF0LL));
          if ( (v8[47] & 0x20) != 0 && (v8[60] & 1) + 4 == (unsigned int)(v12 >> 9) )
            v12 &= 0x1FFu;
        }
        v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v13 + 16) != 13 || ((*(_WORD *)(v13 + 18) >> 3) & 0x1FF) != 0x1B2 || v12 )
        {
LABEL_16:
          v9 = *(_QWORD *)(a1 + 8);
          goto LABEL_17;
        }
        v34 = *(_QWORD *)(a1 + 16);
        v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL);
        v36 = *(_BYTE *)(v35 + 16);
        switch ( v36 )
        {
          case 13:
            if ( (((*(_WORD *)(v35 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
              goto LABEL_16;
            break;
          case 46:
            v39 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                       & 0xFFFFFFFFFFFFFFF0LL));
            if ( (*(_BYTE *)(v39 + 74) & 1) == 0 && *(_QWORD *)(v39 + 128) <= 7u || *(char *)(sub_B14A40(v35) + 76) < 0 )
              goto LABEL_16;
            v34 = *(_QWORD *)(a1 + 16);
            break;
          case 10:
            break;
          default:
            goto LABEL_16;
        }
        a1 = v34;
      }
      else
      {
LABEL_17:
        if ( (v9 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
          return 0;
        v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v14 + 16) == 13 && ((*(_WORD *)(v14 + 18) >> 3) & 0x1FF) == 0x1E7 )
          return 3;
        v15 = sub_B0D970(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL));
        if ( !v15 )
          goto LABEL_23;
        if ( (*(_BYTE *)(*(_QWORD *)(a2 + 2160) + 1LL) & 0x10) != 0 )
          goto LABEL_23;
        v16 = sub_B14A40(v15);
        if ( (*(_BYTE *)(v16 + 29) & 1) == 0 )
          goto LABEL_23;
        v26 = sub_79A2B0(v16);
        v27 = *v26;
        v28 = *((unsigned int *)v26 + 2);
        v29 = v27 + 8 * v28;
        if ( v27 >= v29 )
        {
          if ( v27 == v29 )
            goto LABEL_23;
          v33 = v27 + 8 * v28;
          while ( 1 )
          {
            v29 = v33;
            if ( *(_WORD *)(*(_QWORD *)v33 + 32LL) == 371 )
              break;
            v33 += 8LL;
            if ( v27 == v33 )
              goto LABEL_23;
          }
        }
        else
        {
          v30 = v27;
          while ( 1 )
          {
            v27 = v30;
            if ( *(_WORD *)(*(_QWORD *)v30 + 32LL) == 371 )
              break;
            v30 += 8LL;
            if ( v29 == v30 )
              goto LABEL_23;
          }
        }
        if ( v27 == v29
          || (*(_WORD *)a1 & 0x1FF) != 0x4D
          || (v31 = *(_QWORD *)(a1 + 32), (*(_WORD *)v31 & 0x1FF) != 0x36) )
        {
LABEL_23:
          v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL);
          v18 = *(_BYTE *)(v17 + 16);
          switch ( v18 )
          {
            case 13:
              if ( (((*(_WORD *)(v17 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
                return 0;
              break;
            case 46:
              v32 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                         & 0xFFFFFFFFFFFFFFF0LL));
              if ( (*(_BYTE *)(v32 + 74) & 1) == 0 && *(_QWORD *)(v32 + 128) <= 7u
                || *(char *)(sub_B14A40(v17) + 76) < 0 )
              {
                return 0;
              }
              break;
            case 10:
              break;
            default:
              return 0;
          }
          v20 = *(_BYTE **)(a2 + 2160);
          v21 = v20[1];
          if ( (v21 & 8) != 0
            && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                    & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) == 46 )
          {
            return 0;
          }
          if ( (v21 & 0x10) == 0 )
          {
            if ( !(unsigned __int8)sub_865090(a1, a2, 0) )
              return 0;
            goto LABEL_42;
          }
          if ( (*(_WORD *)a1 & 0x1FF) != 0x35 )
            goto LABEL_40;
          v22 = *(unsigned int *)(a1 + 24);
          if ( (unsigned __int64)(v22 + 63) <= 0x7F )
          {
            v49 = *(void **)(a1 + 16);
            goto LABEL_37;
          }
          sub_2585D40(&v49, v22, (unsigned __int64)(v22 + 63) >> 6, *(_QWORD *)(a1 + 16));
          v37 = v50;
          if ( v50 <= 0x40 )
          {
LABEL_37:
            v23 = v49 == nullptr;
          }
          else
          {
            v38 = sub_2587400(&v49);
            if ( v49 )
              operator delete[](v49);
            v23 = v37 == v38;
          }
          if ( v23 )
            return 2;
          v20 = *(_BYTE **)(a2 + 2160);
LABEL_40:
          if ( (*v20 & 0x20) == 0 || !(unsigned __int8)sub_865070(a1, a2) )
            return 0;
LABEL_42:
          sub_863FA0(&v40, a1, a2, 0);
          v45 = 0;
          v44 = 64;
          v43 = nullptr;
          if ( v41 == 64 )
          {
            v24 = v42 ? sub_25867A0(&v40, &v43) : sub_2586820(&v40, &v43);
          }
          else
          {
            if ( v41 > 0x40 )
            {
              sub_2587BE0(&v49, &v43, v41);
              v48 = 0;
              v47 = v50;
              v46 = v49;
              v24 = sub_804370((__int64 *)&v40, (__int64 *)&v46);
              if ( v47 > 0x40 )
              {
LABEL_47:
                if ( v46 )
                  operator delete[](v46);
              }
            }
            else
            {
              if ( v42 )
              {
                sub_2587D60(&v49, &v40);
                v48 = 1;
              }
              else
              {
                sub_2587BE0(&v49, &v40, 64);
                v48 = 0;
              }
              v47 = v50;
              v46 = v49;
              v24 = sub_804370((__int64 *)&v46, (__int64 *)&v43);
              if ( v47 > 0x40 )
                goto LABEL_47;
            }
            if ( v44 > 0x40 && v43 )
              operator delete[](v43);
            if ( v41 > 0x40 && v40 )
              operator delete[](v40);
          }
          if ( v24 )
            return 0;
          if ( (*(_WORD *)a1 & 0x1FF) == 0x35 )
            return 2;
          return 1;
        }
        a1 = **(_QWORD **)(v31 + 16);
      }
    }
    else if ( (unsigned __int16)v7 > 0x50u )
    {
      if ( (_WORD)v7 == 112 )
      {
        a1 = sub_8C4900(a1);
      }
      else
      {
        if ( (_WORD)v7 != 113 )
          goto LABEL_16;
        a1 = sub_8C4680(a1);
      }
    }
    else if ( (unsigned __int16)v7 <= 0x30u )
    {
      if ( (_WORD)v7 == 21 )
      {
LABEL_68:
        a1 = *(_QWORD *)(a1 + 24);
      }
      else
      {
        if ( (_WORD)v7 != 27 || !*(_QWORD *)(a1 + 16) )
          goto LABEL_16;
        a1 = *(_QWORD *)(a1 + 16);
      }
    }
    else
    {
      LOWORD(v7) = (v7 + 463) & 0x1FF;
      switch ( v7 )
      {
        case 0LL:
          v25 = *(_QWORD *)(a1 + 16);
          a1 = v25 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v25 & 4) != 0 )
            a1 = *(_QWORD *)(a1 + 40);
          continue;
        case 9LL:
          if ( (~*(_DWORD *)(a1 + 16) & 0x3FFF8000) == 0 )
            return 0;
          a1 = *(_QWORD *)(a1
                         + 8LL
                         * (((*(_DWORD *)(a1 + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(a1 + 19) & 0x40) != 0))
                         + 32);
          continue;
        case 10LL:
          return 4;
        case 29LL:
          if ( ((**(_DWORD **)(a1 + 16) >> 14) & 0xC) != 0 )
            return 0;
          if ( *(_BYTE *)(a1 + 48) )
            goto LABEL_68;
          a1 = *(_QWORD *)(a1 + 32);
          break;
        case 31LL:
          a1 = *(_QWORD *)(a1 + 16);
          continue;
        default:
          goto LABEL_16;
      }
    }
  }
  if ( ((*(_DWORD *)a1 >> 14) & 0x1Fu) > 0xF )
    return 0;
  if ( a3 != 1 )
  {
    if ( a3 == 2 )
      return 0;
    goto LABEL_6;
  }
  if ( ((*(_DWORD *)a1 >> 14) & 4) != 0 )
    return 1;
  return (unsigned __int8)sub_B07CE0(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2);
}

