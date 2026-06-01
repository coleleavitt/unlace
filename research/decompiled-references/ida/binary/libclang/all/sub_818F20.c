char __fastcall sub_818F20(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int16 v4; // ax
  unsigned __int64 v5; // rax
  unsigned __int16 v6; // ax
  unsigned __int64 v7; // rdx
  char result; // al
  __int16 v9; // cx
  __int16 v10; // ax
  unsigned __int64 v11; // rdx
  unsigned __int16 v12; // dx
  unsigned __int64 v13; // rdx
  __int16 v14; // dx
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rbp
  __int64 v18; // r12
  __int64 v19; // r13
  char v20; // al
  __int64 v21; // rdi
  __int64 v22; // r13
  char v23; // al
  __int64 v24; // r12
  char v25; // al
  __int64 v26; // r12
  char v27; // al
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  void *v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // r12
  __int64 v35; // r13
  unsigned __int64 v36; // rax
  __int16 v37; // ax
  char v38; // [rsp+Fh] [rbp-59h]
  char v39; // [rsp+Fh] [rbp-59h]
  char v40; // [rsp+Fh] [rbp-59h]
  char v41; // [rsp+Fh] [rbp-59h]
  void *v42; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v43; // [rsp+18h] [rbp-50h]
  void *v44; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v45; // [rsp+28h] [rbp-40h]
  void *v46; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v47; // [rsp+38h] [rbp-30h]

  v2 = a1;
  if ( !a1 )
    goto LABEL_9;
  while ( 1 )
  {
    while ( 1 )
    {
      v4 = *(_WORD *)v2 & 0x1FF;
      if ( v4 == 21 )
      {
LABEL_68:
        v5 = *(_QWORD *)(v2 + 24);
        goto LABEL_69;
      }
      if ( v4 <= 0x15u )
      {
        if ( v4 == 4 )
        {
          if ( *(_BYTE *)(v2 + 2) >> 3 != 12 )
            break;
          v5 = *(_QWORD *)(v2 + 16);
        }
        else
        {
          if ( v4 != 19 )
            break;
          if ( (*(_BYTE *)(v2 + 3) & 1) == 0 )
            break;
          if ( *(char *)(v2 + 2) >= 0 )
            break;
          v5 = *(_QWORD *)(v2 + 16);
          if ( !v5 )
            break;
        }
        goto LABEL_69;
      }
      if ( v4 == 58 )
      {
        if ( (~*(_DWORD *)(v2 + 16) & 0x3FFF8000) == 0 )
          break;
        v5 = *(_QWORD *)(v2
                       + 8LL
                       * (((*(_DWORD *)(v2 + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(v2 + 19) & 0x40) != 0))
                       + 32);
        goto LABEL_69;
      }
      if ( v4 != 78 || ((**(_DWORD **)(v2 + 16) >> 14) & 0xC) != 0 )
        break;
      if ( *(_BYTE *)(v2 + 48) )
        goto LABEL_68;
      v5 = *(_QWORD *)(v2 + 32);
LABEL_69:
      if ( v5 == v2 )
        break;
      v2 = v5;
    }
LABEL_9:
    if ( !a2 )
      BUG();
    while ( 1 )
    {
      v6 = *(_WORD *)a2 & 0x1FF;
      if ( v6 == 21 )
      {
LABEL_75:
        v7 = *(_QWORD *)(a2 + 24);
        goto LABEL_76;
      }
      if ( v6 <= 0x15u )
      {
        if ( v6 == 4 )
        {
          if ( *(_BYTE *)(a2 + 2) >> 3 != 12 )
            break;
          v7 = *(_QWORD *)(a2 + 16);
        }
        else
        {
          if ( v6 != 19 )
            break;
          if ( (*(_BYTE *)(a2 + 3) & 1) == 0 )
            break;
          if ( *(char *)(a2 + 2) >= 0 )
            break;
          v7 = *(_QWORD *)(a2 + 16);
          if ( !v7 )
            break;
        }
        goto LABEL_76;
      }
      if ( v6 == 58 )
      {
        if ( (~*(_DWORD *)(a2 + 16) & 0x3FFF8000) == 0 )
          break;
        v7 = *(_QWORD *)(a2
                       + 8LL
                       * (((*(_DWORD *)(a2 + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(a2 + 19) & 0x40) != 0))
                       + 32);
        goto LABEL_76;
      }
      if ( v6 != 78 || ((**(_DWORD **)(a2 + 16) >> 14) & 0xC) != 0 )
        break;
      if ( *(_BYTE *)(a2 + 48) )
        goto LABEL_75;
      v7 = *(_QWORD *)(a2 + 32);
LABEL_76:
      if ( v7 == a2 )
        break;
      a2 = v7;
    }
    if ( (*(_WORD *)v2 & 0x1FF) != v6 )
      return 0;
    if ( v6 != 80 )
    {
      if ( v6 != 99 )
      {
        if ( v6 != 72 || (*(_BYTE *)(v2 + 1) & 6) != 0 || (*(_BYTE *)(a2 + 1) & 6) != 0 )
          return 0;
        return *(_QWORD *)(v2 + 16) == *(_QWORD *)(a2 + 16);
      }
      return 1;
    }
    while ( 2 )
    {
      if ( (*(_WORD *)a2 & 0x1FF) != 0x50 )
        return 0;
      v9 = (*(_WORD *)(v2 + 2) >> 3) & 0x7F;
      if ( ((*(_WORD *)(v2 + 2) >> 3) & 0x7F) != ((*(_WORD *)(a2 + 2) >> 3) & 0x7F) )
        return 0;
      v2 = *(_QWORD *)(v2 + 16);
      if ( v2 )
      {
        while ( 2 )
        {
          v10 = *(_WORD *)v2 & 0x1FF;
          if ( v10 == 21 )
            goto LABEL_61;
          if ( (unsigned __int16)v10 <= 0x15u )
          {
            if ( v10 == 4 )
            {
              if ( *(_BYTE *)(v2 + 2) >> 3 != 12 )
                goto LABEL_42;
              v11 = *(_QWORD *)(v2 + 16);
            }
            else
            {
              if ( v10 != 19 )
                goto LABEL_42;
              if ( (*(_BYTE *)(v2 + 3) & 1) == 0 )
                goto LABEL_42;
              if ( *(char *)(v2 + 2) >= 0 )
                goto LABEL_42;
              v11 = *(_QWORD *)(v2 + 16);
              if ( !v11 )
                goto LABEL_42;
            }
            goto LABEL_62;
          }
          if ( v10 == 58 )
          {
            if ( (~*(_DWORD *)(v2 + 16) & 0x3FFF8000) == 0 )
              goto LABEL_42;
            v11 = *(_QWORD *)(v2
                            + 8LL
                            * (((*(_DWORD *)(v2 + 16) >> 15) & 0x7FFF)
                             + (unsigned int)((*(_BYTE *)(v2 + 19) & 0x40) != 0))
                            + 32);
          }
          else
          {
            if ( v10 != 78 || ((**(_DWORD **)(v2 + 16) >> 14) & 0xC) != 0 )
              goto LABEL_42;
            if ( *(_BYTE *)(v2 + 48) )
LABEL_61:
              v11 = *(_QWORD *)(v2 + 24);
            else
              v11 = *(_QWORD *)(v2 + 32);
          }
LABEL_62:
          if ( v11 == v2 )
            goto LABEL_42;
          v2 = v11;
          continue;
        }
      }
      v10 = 383;
LABEL_42:
      a2 = *(_QWORD *)(a2 + 16);
      if ( !a2 )
      {
LABEL_29:
        if ( (((_BYTE)v9 + 117) & 0x7Fu) <= 1 )
          goto LABEL_51;
LABEL_30:
        if ( (_BYTE)v9 == 4 )
          goto LABEL_51;
        if ( v10 != 80 )
          return 0;
        continue;
      }
      break;
    }
    while ( 2 )
    {
      v12 = *(_WORD *)a2 & 0x1FF;
      if ( v12 == 21 )
        goto LABEL_79;
      if ( v12 > 0x15u )
      {
        if ( v12 == 58 )
        {
          if ( (~*(_DWORD *)(a2 + 16) & 0x3FFF8000) == 0 )
            goto LABEL_29;
          v13 = *(_QWORD *)(a2
                          + 8LL
                          * (((*(_DWORD *)(a2 + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(a2 + 19) & 0x40) != 0))
                          + 32);
        }
        else
        {
          if ( v12 != 78 || ((**(_DWORD **)(a2 + 16) >> 14) & 0xC) != 0 )
            goto LABEL_29;
          if ( *(_BYTE *)(a2 + 48) )
LABEL_79:
            v13 = *(_QWORD *)(a2 + 24);
          else
            v13 = *(_QWORD *)(a2 + 32);
        }
LABEL_80:
        if ( a2 == v13 )
          goto LABEL_29;
        a2 = v13;
        continue;
      }
      break;
    }
    if ( v12 == 4 )
    {
      if ( *(_BYTE *)(a2 + 2) >> 3 != 12 )
        goto LABEL_29;
      v13 = *(_QWORD *)(a2 + 16);
      goto LABEL_80;
    }
    if ( v12 != 19 || (*(_BYTE *)(a2 + 3) & 1) == 0 || *(char *)(a2 + 2) >= 0 )
      goto LABEL_29;
    v13 = *(_QWORD *)(a2 + 16);
    if ( v13 )
      goto LABEL_80;
    if ( (((_BYTE)v9 + 117) & 0x7Fu) > 1 )
      goto LABEL_30;
LABEL_51:
    v14 = *(_WORD *)a2 & 0x1FF;
    if ( v10 == 72 )
      break;
    if ( v10 == 35 )
    {
      if ( v14 == 35 )
      {
        if ( (*(_BYTE *)(v2 + 40) & 2) == 0 )
          return 0;
        if ( (*(_BYTE *)(a2 + 40) & 2) == 0 )
          return 0;
        v16 = *(_QWORD *)(v2 + 16);
        v15 = *(_QWORD *)(a2 + 16);
        if ( !v16 || !v15 )
          return 0;
LABEL_55:
        if ( v16 == v15 )
          return 1;
        goto LABEL_56;
      }
LABEL_104:
      v16 = 0;
LABEL_105:
      if ( v14 == 72 )
      {
        v15 = *(_QWORD *)(a2 + 16);
        goto LABEL_107;
      }
LABEL_204:
      if ( v14 != 47 )
        return 0;
      v15 = *(_QWORD *)(a2 + 24);
LABEL_107:
      if ( !v16 || !v15 )
        return 0;
      if ( v15 == v16 )
        return 1;
LABEL_56:
      v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 32LL))(v16);
      return v17 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 32LL))(v15);
    }
    if ( v10 != 124 || v14 != 124 )
    {
      if ( v10 == 47 )
      {
        do
        {
          if ( v14 != 47 )
          {
            v16 = *(_QWORD *)(v2 + 24);
            goto LABEL_105;
          }
          v33 = *(_QWORD *)(v2 + 24);
          v34 = *(_QWORD *)(a2 + 24);
          if ( !v33 || !v34 )
            return 0;
          if ( v33 != v34 )
          {
            v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 32LL))(v33);
            if ( v35 != (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 32LL))(v34) )
              return 0;
            v34 = *(_QWORD *)(v2 + 24);
          }
          if ( (*(_BYTE *)(v34 + 28) & 0x7Fu) - 38 <= 6 && (*(_BYTE *)(v34 + 28) & 0x7F) != 0x29 )
          {
            v36 = *(_QWORD *)(v34 + 16) & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_QWORD *)(v34 + 16) & 4) != 0 )
              v36 = *(_QWORD *)v36;
            if ( ((*(_BYTE *)(v36 + 8) + 72) & 0x7Fu) <= 3 )
              return 1;
          }
          v2 = sub_80F310(*(_QWORD *)(v2 + 16));
          a2 = sub_80F310(*(_QWORD *)(a2 + 16));
          v37 = *(_WORD *)v2 & 0x1FF;
          v14 = *(_WORD *)a2 & 0x1FF;
        }
        while ( v37 == 47 );
        if ( v37 == 99 )
          goto LABEL_103;
        if ( v37 == 72 )
        {
          v16 = *(_QWORD *)(v2 + 16);
          goto LABEL_105;
        }
      }
      else if ( v10 == 99 )
      {
LABEL_103:
        if ( v14 == 99 )
          return 1;
      }
      goto LABEL_104;
    }
    v18 = *(_QWORD *)(a2 + 24);
    v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v20 = *(_BYTE *)(v19 + 16);
    if ( v20 == 13 )
    {
      if ( (((*(_WORD *)(v19 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
        goto LABEL_123;
LABEL_148:
      v18 = *(_QWORD *)(a2 + 16);
      goto LABEL_123;
    }
    if ( v20 != 46 )
    {
      if ( v20 != 10 )
        goto LABEL_123;
      goto LABEL_148;
    }
    v28 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                               & 0xFFFFFFFFFFFFFFF0LL));
    if ( ((*(_BYTE *)(v28 + 74) & 1) != 0 || *(_QWORD *)(v28 + 128) > 7u) && *(char *)(sub_B14A40(v19) + 76) >= 0 )
      goto LABEL_148;
    v18 = *(_QWORD *)(a2 + 24);
LABEL_123:
    v21 = *(_QWORD *)(v2 + 24);
    v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v23 = *(_BYTE *)(v22 + 16);
    if ( v23 == 13 )
    {
      if ( (((*(_WORD *)(v22 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
        goto LABEL_125;
LABEL_146:
      v21 = *(_QWORD *)(v2 + 16);
      goto LABEL_125;
    }
    if ( v23 != 46 )
    {
      if ( v23 != 10 )
        goto LABEL_125;
      goto LABEL_146;
    }
    v29 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                               & 0xFFFFFFFFFFFFFFF0LL));
    if ( ((*(_BYTE *)(v29 + 74) & 1) != 0 || *(_QWORD *)(v29 + 128) > 7u) && *(char *)(sub_B14A40(v22) + 76) >= 0 )
      goto LABEL_146;
    v21 = *(_QWORD *)(v2 + 24);
LABEL_125:
    if ( !(unsigned __int8)sub_818F20(v21, v18) )
      return 0;
    v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                    & 0xFFFFFFFFFFFFFFF0LL);
    v25 = *(_BYTE *)(v24 + 16);
    switch ( v25 )
    {
      case 13:
        if ( (((*(_WORD *)(v24 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
          goto LABEL_128;
        break;
      case 46:
        v31 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL)
                                                           & 0xFFFFFFFFFFFFFFF0LL)
                                               + 8LL)
                                   & 0xFFFFFFFFFFFFFFF0LL));
        if ( (*(_BYTE *)(v31 + 74) & 1) == 0 && *(_QWORD *)(v31 + 128) <= 7u || *(char *)(sub_B14A40(v24) + 76) < 0 )
        {
LABEL_128:
          v2 = *(_QWORD *)(v2 + 16);
          goto LABEL_129;
        }
        break;
      case 10:
        break;
      default:
        goto LABEL_128;
    }
    v2 = *(_QWORD *)(v2 + 24);
LABEL_129:
    v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                    & 0xFFFFFFFFFFFFFFF0LL);
    v27 = *(_BYTE *)(v26 + 16);
    switch ( v27 )
    {
      case 13:
        if ( (((*(_WORD *)(v26 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
          goto LABEL_131;
        break;
      case 46:
        v30 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL)
                                                           & 0xFFFFFFFFFFFFFFF0LL)
                                               + 8LL)
                                   & 0xFFFFFFFFFFFFFFF0LL));
        if ( (*(_BYTE *)(v30 + 74) & 1) == 0 && *(_QWORD *)(v30 + 128) <= 7u || *(char *)(sub_B14A40(v26) + 76) < 0 )
        {
LABEL_131:
          a2 = *(_QWORD *)(a2 + 16);
          goto LABEL_132;
        }
        break;
      case 10:
        break;
      default:
        goto LABEL_131;
    }
    a2 = *(_QWORD *)(a2 + 24);
LABEL_132:
    if ( (*(_WORD *)v2 & 0x1FF) == 0x35 && (*(_WORD *)a2 & 0x1FF) == 0x35 )
    {
      sub_8041D0((__int64)&v44, *(_QWORD *)(a2 + 16), *(_DWORD *)(a2 + 24));
      sub_8041D0((__int64)&v42, *(_QWORD *)(v2 + 16), *(_DWORD *)(v2 + 24));
      if ( v43 == v45 )
      {
        if ( v43 <= 0x40 )
        {
          result = v42 == v44;
LABEL_142:
          if ( v45 > 0x40 && v44 )
          {
            v39 = result;
            operator delete[](v44);
            return v39;
          }
          return result;
        }
        result = sub_2586760(&v42, &v44);
      }
      else
      {
        if ( v45 >= v43 )
        {
          sub_2587D60(&v46, &v42);
          v32 = v46;
          if ( v47 <= 0x40 )
          {
            result = v46 == v44;
          }
          else
          {
            result = sub_2586760(&v46, &v44);
            if ( v32 )
            {
              v40 = result;
              operator delete[](v32);
              result = v40;
            }
          }
        }
        else
        {
          sub_2587D60(&v46, &v44);
          if ( v43 <= 0x40 )
            result = v42 == v46;
          else
            result = sub_2586760(&v42, &v46);
          if ( v47 > 0x40 && v46 )
          {
            v38 = result;
            operator delete[](v46);
            result = v38;
          }
        }
        if ( v43 <= 0x40 )
          goto LABEL_142;
      }
      if ( v42 )
      {
        v41 = result;
        operator delete[](v42);
        result = v41;
      }
      goto LABEL_142;
    }
  }
  if ( v14 != 72 )
  {
    v16 = *(_QWORD *)(v2 + 16);
    goto LABEL_204;
  }
  v15 = *(_QWORD *)(a2 + 16);
  v16 = *(_QWORD *)(v2 + 16);
  if ( v15 && v16 )
    goto LABEL_55;
  return 0;
}

