unsigned __int64 __fastcall sub_864560(unsigned __int16 *a1, _QWORD *a2)
{
  __int64 v3; // rdi
  char v4; // al
  unsigned __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  char v8; // al
  bool v9; // zf
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int16 *v13; // r13
  unsigned __int64 v14; // r12
  unsigned int v15; // ebx
  char v16; // al
  char v17; // r13
  void **v18; // rdi
  __int64 v19; // rax
  void *v20; // rcx
  __int64 v21; // r13
  __int64 v22; // rsi
  unsigned __int64 v23; // rdx
  __int64 v24; // rbx
  unsigned int v25; // edx
  unsigned int v26; // eax
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r12
  unsigned __int8 v35; // al
  __int64 v36; // r12
  unsigned int v37; // eax
  __int64 v38; // r12
  unsigned int v39; // eax
  unsigned __int16 **v40; // rdx
  unsigned __int64 v41; // r12
  _WORD *v42; // rax
  __int64 v43; // r13
  __int64 v44; // r14
  char v45; // bl
  __int64 v46; // rax
  char v47; // bl
  __int64 v48; // [rsp+8h] [rbp-80h]
  void *v49; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v50; // [rsp+18h] [rbp-70h]
  char v51; // [rsp+1Ch] [rbp-6Ch]
  void *v52; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v53; // [rsp+28h] [rbp-60h]
  void *v54; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v55; // [rsp+38h] [rbp-50h]

  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_1:
        v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                       & 0xFFFFFFFFFFFFFFF0LL);
        v4 = *(_BYTE *)(v3 + 16);
        switch ( v4 )
        {
          case 13:
            if ( (((*(_WORD *)(v3 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
              return (sub_AC6DA0(a1) << 32) | 2;
            break;
          case 46:
            v7 = sub_B14A40(v3);
            if ( (*(_BYTE *)(v7 + 74) & 1) == 0 && *(_QWORD *)(v7 + 128) <= 7u )
              return (sub_AC6DA0(a1) << 32) | 2;
            break;
          case 10:
            break;
          default:
            return (sub_AC6DA0(a1) << 32) | 2;
        }
        v6 = *a1;
        LOWORD(v6) = v6 & 0x1FF;
        if ( (unsigned __int16)v6 > 0x48u )
          break;
        if ( (unsigned __int16)v6 > 0x3Eu )
        {
          v33 = 1LL << ((unsigned __int8)v6 - 63);
          if ( (v33 & 0x1E5) == 0 )
          {
            if ( (v33 & 0x1A) != 0 )
              return 0;
            v34 = *((_QWORD *)a1 + 2);
            v35 = *(_BYTE *)(v34 + 28) & 0x7F;
            if ( v35 == 31 )
              return 0;
            if ( (unsigned int)v35 - 38 <= 6
              && (unsigned __int8)sub_788D80(*((_QWORD **)a1 + 2), (unsigned __int64)a2)
              && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 48)
                                                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                                                          + 8LL)
                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                  + 16LL)
               - 42 > 1 )
            {
              return 0;
            }
          }
          return (sub_AC6DA0(a1) << 32) | 2;
        }
        if ( (_WORD)v6 == 22 )
        {
          a1 = (unsigned __int16 *)sub_83DE90((__int64)a1);
        }
        else if ( (unsigned __int16)v6 <= 0x16u )
        {
          if ( (unsigned __int16)v6 > 0x10u )
          {
            if ( (_WORD)v6 != 21 )
              return (sub_AC6DA0(a1) << 32) | 2;
LABEL_60:
            a1 = *((unsigned __int16 **)a1 + 3);
          }
          else
          {
            if ( (unsigned __int16)v6 > 5u )
            {
              v28 = 1LL << v6;
              if ( (v28 & 0xCD40) != 0 )
                return (sub_AC6DA0(a1) << 32) | 2;
              if ( (v28 & 0x13080) != 0 )
                return 0;
            }
            else
            {
              if ( (_WORD)v6 != 4 )
              {
                if ( (_WORD)v6 == 5 )
                {
                  v8 = *((_BYTE *)a1 + 2);
                  if ( (v8 & 0x38) != 0 )
                    return 0;
                  v9 = (v8 & 0x40) == 0;
                  v10 = *((_QWORD **)a1 + 2);
                  v11 = v9 ? v10[1] : *v10;
                  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                            & 0xFFFFFFFFFFFFFFF0LL)
                                + 16LL) != 6 )
                    return 0;
                }
                return (sub_AC6DA0(a1) << 32) | 2;
              }
              if ( *((_BYTE *)a1 + 2) > 0x67u || (unsigned __int8)(*((_BYTE *)a1 + 2) >> 3) <= 5u )
                return (sub_AC6DA0(a1) << 32) | 2;
            }
LABEL_49:
            a1 = *((unsigned __int16 **)a1 + 2);
          }
        }
        else
        {
          if ( (unsigned __int16)v6 <= 0x35u )
          {
            v32 = 1LL << v6;
            if ( (v32 & 0x1FFDFFEB800000LL) == 0 )
            {
              if ( (v32 & 0x20020004000000LL) != 0 )
                return 0;
              return sub_863180(a1, (__int64)a2);
            }
            return (sub_AC6DA0(a1) << 32) | 2;
          }
          LOWORD(v6) = (v6 + 457) & 0x1FF;
          switch ( v6 )
          {
            case 0LL:
            case 1LL:
            case 2LL:
            case 5LL:
            case 6LL:
              return (sub_AC6DA0(a1) << 32) | 2;
            case 3LL:
              a1 = *(unsigned __int16 **)&a1[4 * ((*((_DWORD *)a1 + 4) >> 15) & 0x7FFF)
                                           + 16
                                           + 4 * ((*((_BYTE *)a1 + 19) & 0x40) != 0)];
              continue;
            case 4LL:
              return 0;
            case 7LL:
              goto LABEL_49;
            default:
              if ( (*((_BYTE *)a1 + 1) & 6) != 0 )
                return (sub_AC6DA0(a1) << 32) | 2;
              v40 = *((unsigned __int16 ***)a1 + 2);
              if ( (unsigned int)((__int64)(*((_QWORD *)a1 + 3) - (_QWORD)v40) >> 3) != 1 )
                return (sub_AC6DA0(a1) << 32) | 2;
              a1 = *v40;
              break;
          }
        }
      }
      if ( (unsigned __int16)v6 > 0x71u )
      {
        if ( (_WORD)v6 == 129 )
        {
          v41 = *((_QWORD *)a1 + 3);
          v42 = (_WORD *)sub_8116F0(v41);
          if ( ((*v42 + 422) & 0x1FFu) <= 4 )
          {
            if ( (unsigned int)sub_80FBD0((__int64)v42) == 212 )
              return sub_863180(a1, (__int64)a2);
            v41 = *((_QWORD *)a1 + 3);
          }
          v30 = sub_864560(v41, a2);
          if ( (_DWORD)v30 == 2 )
            return v30;
          v43 = sub_864560(*((_QWORD *)a1 + 4), a2);
          v44 = sub_864560(*((_QWORD *)a1 + 5), a2);
          result = v43 & 0xFFFFFFFF00000000LL | 2;
          if ( (_DWORD)v43 == 2 )
            return result;
          if ( (_DWORD)v44 == 2 )
            return v44;
          if ( (_DWORD)v30 == 1 )
            return v30 & 0xFFFFFFFF00000000LL | 1;
          if ( !((unsigned int)v44 | (unsigned int)v43) )
            return 0;
          sub_863FA0((__int64)&v54, *((__int64 **)a1 + 3), (__int64)a2, 0);
          v45 = sub_8320B0((__int64)&v54, nullptr);
          if ( v55 > 0x40 && v54 )
            operator delete[](v54);
          if ( v45 )
            return v44;
        }
        else
        {
          if ( (unsigned __int16)v6 <= 0x81u )
          {
            if ( (unsigned __int16)v6 <= 0x7Bu )
            {
              v29 = 1LL << ((unsigned __int8)v6 - 114);
              if ( (v29 & 0x1DB) == 0 )
              {
                if ( (v29 & 0x204) == 0 )
                  __asm { jmp     rax }
                return 0;
              }
            }
            return (sub_AC6DA0(a1) << 32) | 2;
          }
          if ( (_WORD)v6 != 130 )
            return (sub_AC6DA0(a1) << 32) | 2;
          v30 = sub_864560(*((_QWORD *)a1 + 3), a2);
          if ( (_DWORD)v30 == 2 )
            return v30;
          v46 = sub_864560(*((_QWORD *)a1 + 6), a2);
          v43 = v46;
          if ( (_DWORD)v46 != 2 )
          {
            if ( (_DWORD)v30 != 1 )
            {
              if ( (_DWORD)v46 == 1 )
              {
                sub_863FA0((__int64)&v54, *((__int64 **)a1 + 3), (__int64)a2, 0);
                v47 = sub_8325A0((__int64)&v54, nullptr);
                if ( v55 > 0x40 && v54 )
                  operator delete[](v54);
                if ( v47 )
                  return 0;
              }
              return v43;
            }
            return v30 & 0xFFFFFFFF00000000LL | 1;
          }
        }
        return v43;
      }
      if ( (unsigned __int16)v6 > 0x58u )
      {
        LOWORD(v6) = (v6 + 422) & 0x1FF;
        switch ( v6 )
        {
          case 0LL:
          case 2LL:
            if ( (unsigned int)sub_80FBD0((__int64)a1) )
              return sub_863180(a1, (__int64)a2);
            return (sub_AC6DA0(a1) << 32) | 2;
          case 1LL:
          case 3LL:
          case 4LL:
          case 5LL:
          case 6LL:
          case 7LL:
          case 8LL:
          case 9LL:
          case 10LL:
          case 13LL:
          case 14LL:
          case 15LL:
          case 17LL:
          case 18LL:
          case 19LL:
          case 20LL:
          case 21LL:
            return (sub_AC6DA0(a1) << 32) | 2;
          case 11LL:
          case 16LL:
            return 0;
          case 12LL:
            goto LABEL_49;
          case 22LL:
            a1 = (unsigned __int16 *)sub_8C4900(a1);
            goto LABEL_1;
          case 23LL:
            a1 = (unsigned __int16 *)sub_8C4680(a1);
            goto LABEL_1;
          default:
            v36 = *((_QWORD *)a1 + 1);
            v37 = sub_AC6DA0(a1);
            if ( (unsigned __int8)sub_83BCC0(v37, v36, 0, a2, 1u) )
            {
              v38 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL);
              v39 = sub_AC6DA0(a1);
              if ( (unsigned __int8)sub_83BCC0(v39, v38, 0, a2, 0) )
                goto LABEL_49;
            }
            return (sub_AC6DA0(a1) << 32) | 2;
        }
      }
      if ( (_WORD)v6 != 78 )
        break;
      if ( *((_BYTE *)a1 + 48) )
        goto LABEL_60;
      a1 = *((unsigned __int16 **)a1 + 4);
    }
    if ( (unsigned __int16)v6 <= 0x4Eu )
    {
      if ( (_WORD)v6 == 76 )
        return 0;
      return (sub_AC6DA0(a1) << 32) | 2;
    }
    v12 = 1LL << ((unsigned __int8)v6 - 79);
    if ( (v12 & 0x35E) == 0 )
    {
      if ( (v12 & 0xA0) == 0 )
        return 0;
      return (sub_AC6DA0(a1) << 32) | 2;
    }
    v13 = *((unsigned __int16 **)a1 + 2);
    if ( (_WORD)v6 != 80 )
    {
      v14 = sub_80F310(*((_QWORD *)a1 + 2));
      if ( (*(_WORD *)v14 & 0x1FF) == 0x3F )
        break;
    }
    if ( ((a1[1] >> 3) & 0x7Fu) > 0x3B )
      return (sub_AC6DA0(a1) << 32) | 2;
    v31 = 0xC00000018000030LL;
    if ( !_bittest64(&v31, (a1[1] >> 3) & 0x7F) )
      return (sub_AC6DA0(a1) << 32) | 2;
    a1 = v13;
  }
  v15 = sub_70B280((__int64)a2, *((_QWORD *)a1 + 1));
  v16 = sub_B10310(*(_QWORD *)(*((_QWORD *)a1 + 1) & 0xFFFFFFFFFFFFFFF0LL));
  v50 = v15;
  v17 = v16 ^ 1;
  if ( v15 > 0x40 )
    sub_2585A50(&v49, 0, 0);
  else
    v49 = nullptr;
  v51 = v17;
  v18 = (void **)(*(_BYTE *)(v14 + 2) >> 3);
  v19 = sub_2575940(v18);
  v20 = *(void **)(v14 + 16);
  v21 = v19;
  v22 = *(unsigned int *)(v14 + 24);
  v23 = (unsigned __int64)(v22 + 63) >> 6;
  if ( (unsigned __int64)(v22 + 63) > 0x7F )
  {
    v18 = &v52;
    sub_2585D40(&v52, v22, v23, v20);
  }
  else
  {
    v53 = *(_DWORD *)(v14 + 24);
    v52 = v20;
  }
  if ( v21 == sub_2575D20(v18, v22, v23) )
    sub_2581430(&v54, v21, &v52);
  else
    sub_2583C60(&v54, v21, &v52);
  if ( v53 > 0x40 && v52 )
    operator delete[](v52);
  v24 = sub_2580E00(&v54, &v49, 0, &v52) & 1;
  sub_5FF3B0((__int64 *)&v54);
  v25 = 0;
  if ( (_DWORD)v24 )
  {
    v26 = sub_AC6DA0(a1);
    v25 = 2;
    v24 = v26;
  }
  v27 = v24 << 32;
  result = v27 | v25;
  if ( v50 > 0x40 && v49 )
  {
    v48 = v27 | v25;
    operator delete[](v49);
    return v48;
  }
  return result;
}

