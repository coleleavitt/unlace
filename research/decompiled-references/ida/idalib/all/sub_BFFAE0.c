__int64 __fastcall sub_BFFAE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  void **v5; // r12
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rax
  __int16 v9; // ax
  __int64 v10; // rdx
  __int16 v11; // ax
  __int64 v13; // rcx
  unsigned __int16 *v14; // rbx
  unsigned __int16 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int16 v18; // ax
  __int16 v19; // ax
  __int64 v20; // rdi
  __int64 v21; // rbp
  __int64 v22; // rbx
  __int64 v23; // rdi
  __int64 v24; // rsi
  int v25; // eax
  __int16 v26; // ax
  __int64 v27; // r13
  __int64 v28; // rdi
  __int64 v29; // r14
  unsigned __int8 v30; // al
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r12
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rbx
  __int64 v45; // rsi
  void *v46; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v47; // [rsp+8h] [rbp-50h]
  void *v48; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v49; // [rsp+18h] [rbp-40h]
  void *v50; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v51; // [rsp+28h] [rbp-30h]

  v6 = a2;
  v7 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v9 = *(_WORD *)v7 & 0x1FF;
      if ( v9 == 20 )
        break;
      switch ( v9 )
      {
        case 4:
          if ( *(_BYTE *)(v7 + 2) >> 3 != 12 )
            goto LABEL_9;
          v8 = *(_QWORD *)(v7 + 16);
          break;
        case 57:
          if ( (*(_DWORD *)(v7 + 16) & 0x3FFF8000) == 0x3FFF8000 )
            goto LABEL_9;
          v8 = *(_QWORD *)(v7
                         + 8LL * (((*(_BYTE *)(v7 + 19) & 0x40) != 0) + ((*(_DWORD *)(v7 + 16) >> 15) & 0x7FFFu))
                         + 32);
          break;
        case 77:
          if ( ((**(_DWORD **)(v7 + 16) >> 14) & 0xC) != 0 )
            goto LABEL_9;
          if ( (*(_BYTE *)(v7 + 2) & 8) != 0 )
            goto LABEL_3;
          v8 = *(_QWORD *)(v7 + 32);
          break;
        case 18:
          if ( (*(_QWORD *)v7 & 0x1000000) == 0 )
            goto LABEL_9;
          if ( (BYTE2(*(_QWORD *)v7) & 0x80u) == 0 )
            goto LABEL_9;
          v8 = *(_QWORD *)(v7 + 16);
          if ( !v8 )
            goto LABEL_9;
          break;
        default:
          goto LABEL_9;
      }
LABEL_4:
      if ( v8 == v7 )
        goto LABEL_9;
      v7 = v8;
    }
LABEL_3:
    v8 = *(_QWORD *)(v7 + 24);
    goto LABEL_4;
  }
LABEL_9:
  if ( !a2 )
    BUG();
  while ( 1 )
  {
    v11 = *(_WORD *)v6 & 0x1FF;
    switch ( v11 )
    {
      case 20:
LABEL_11:
        v10 = *(_QWORD *)(v6 + 24);
        goto LABEL_12;
      case 4:
        if ( *(_BYTE *)(v6 + 2) >> 3 != 12 )
          goto LABEL_17;
        v10 = *(_QWORD *)(v6 + 16);
        goto LABEL_12;
      case 57:
        if ( (*(_DWORD *)(v6 + 16) & 0x3FFF8000) == 0x3FFF8000 )
          goto LABEL_17;
        a2 = (*(_DWORD *)(v6 + 16) >> 15) & 0x7FFF;
        v10 = *(_QWORD *)(v6 + 8LL * (((*(_BYTE *)(v6 + 19) & 0x40) != 0) + (unsigned int)a2) + 32);
        goto LABEL_12;
    }
    if ( v11 != 77 )
      break;
    if ( ((**(_DWORD **)(v6 + 16) >> 14) & 0xC) != 0 )
      goto LABEL_17;
    if ( (*(_BYTE *)(v6 + 2) & 8) != 0 )
      goto LABEL_11;
    v10 = *(_QWORD *)(v6 + 32);
LABEL_12:
    if ( v10 == v6 )
      goto LABEL_45;
    v6 = v10;
  }
  if ( v11 == 18 )
  {
    if ( (*(_QWORD *)v6 & 0x1000000) == 0 )
      goto LABEL_17;
    if ( (BYTE2(*(_QWORD *)v6) & 0x80u) == 0 )
      goto LABEL_17;
    v10 = *(_QWORD *)(v6 + 16);
    if ( !v10 )
      goto LABEL_17;
    goto LABEL_12;
  }
LABEL_45:
  if ( (*(_WORD *)v7 & 0x1FF) != v11 )
    goto LABEL_17;
  if ( v11 == 79 )
  {
    v13 = (*(_WORD *)(v7 + 2) >> 3) & 0x7F;
    if ( ((*(_WORD *)(v6 + 2) >> 3) & 0x7F) != ((*(_WORD *)(v7 + 2) >> 3) & 0x7F) )
      goto LABEL_17;
    v14 = *(unsigned __int16 **)(v7 + 16);
    if ( v14 )
      goto LABEL_58;
    while ( 1 )
    {
      v16 = 383;
LABEL_61:
      v6 = *(_QWORD *)(v6 + 16);
      if ( v6 )
        break;
LABEL_69:
      LOBYTE(v5) = (_BYTE)v13 == 4 || (((_BYTE)v13 + 117) & 0x7Fu) <= 1;
      if ( (_BYTE)v5 )
      {
        v19 = *(_WORD *)v6 & 0x1FF;
        if ( (_WORD)v16 == 71 )
        {
          if ( v19 == 71 )
          {
            v20 = *((_QWORD *)v14 + 2);
            v21 = *(_QWORD *)(v6 + 16);
            if ( !v20 || !v21 )
              goto LABEL_17;
            if ( v21 != v20 )
            {
              v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 32LL))(v20);
              LOBYTE(v5) = v22 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 32LL))(v21);
            }
            return (unsigned int)v5;
          }
        }
        else if ( (_WORD)v16 == 34 )
        {
          if ( v19 == 34 )
          {
            if ( (v14[20] & 2) == 0 )
              goto LABEL_17;
            if ( (*(_BYTE *)(v6 + 40) & 2) == 0 )
              goto LABEL_17;
            v23 = *((_QWORD *)v14 + 2);
            v24 = *(_QWORD *)(v6 + 16);
            if ( !v23 )
              goto LABEL_17;
LABEL_112:
            if ( !v24 )
              goto LABEL_17;
            if ( v24 != v23 )
            {
              LOBYTE(v25) = sub_BF69E0(v23, v24);
              LODWORD(v5) = v25;
            }
            return (unsigned int)v5;
          }
          goto LABEL_117;
        }
        if ( v19 == 34 )
        {
          if ( (_WORD)v16 == 123 )
            goto LABEL_117;
          goto LABEL_122;
        }
        if ( (_WORD)v16 != 123 )
        {
LABEL_122:
          if ( (_WORD)v16 == 46 )
          {
            if ( v19 == 46 )
            {
              v27 = *(_QWORD *)(v6 + 24);
              v28 = *((_QWORD *)v14 + 3);
              if ( !v27 || !v28 )
                goto LABEL_17;
              while ( 1 )
              {
                if ( v28 != v27 )
                {
                  v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 32LL))(v28);
                  if ( v29 != (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 32LL))(v27) )
                    goto LABEL_17;
                  v28 = *((_QWORD *)v14 + 3);
                }
                v30 = *(_BYTE *)(v28 + 28) & 0x7F;
                if ( (unsigned int)v30 - 40 <= 6 && v30 != 43 )
                {
                  v31 = *(_QWORD *)(v28 + 16) & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (*(_QWORD *)(v28 + 16) & 4) != 0 )
                    v31 = *(_QWORD *)v31;
                  if ( ((*(_BYTE *)(v31 + 8) + 70) & 0x7Fu) <= 3 )
                    return (unsigned int)v5;
                }
                v14 = (unsigned __int16 *)sub_BFBAE0(*((_QWORD *)v14 + 2));
                v32 = sub_BFBAE0(*(_QWORD *)(v6 + 16));
                v6 = v32;
                LOWORD(v16) = *v14 & 0x1FF;
                if ( (_WORD)v16 != 46 )
                  goto LABEL_178;
                if ( (*(_WORD *)v32 & 0x1FF) != 0x2E )
                  break;
                v28 = *((_QWORD *)v14 + 3);
                v27 = *(_QWORD *)(v32 + 24);
                if ( !v28 || !v27 )
                  goto LABEL_17;
              }
            }
            v23 = *((_QWORD *)v14 + 3);
            goto LABEL_118;
          }
LABEL_178:
          if ( (_WORD)v16 == 98 )
          {
            if ( (*(_WORD *)v6 & 0x1FF) == 0x62 )
              return (unsigned int)v5;
          }
          else if ( (_WORD)v16 == 71 )
          {
            v23 = *((_QWORD *)v14 + 2);
LABEL_118:
            v26 = *(_WORD *)v6 & 0x1FF;
            if ( v26 == 71 )
            {
              v24 = *(_QWORD *)(v6 + 16);
            }
            else
            {
              if ( v26 != 46 )
                goto LABEL_17;
              v24 = *(_QWORD *)(v6 + 24);
            }
            if ( !v23 )
            {
LABEL_17:
              LODWORD(v5) = 0;
              return (unsigned int)v5;
            }
            goto LABEL_112;
          }
LABEL_117:
          v23 = 0;
          goto LABEL_118;
        }
        if ( v19 != 123 || !v14 )
          goto LABEL_117;
        if ( sub_9ECBA0(v6, a2, v16, v13, a5) )
          v36 = *(_QWORD *)(v6 + 16);
        else
          v36 = *(_QWORD *)(v6 + 24);
        if ( sub_9ECBA0((__int64)v14, a2, v33, v34, v35) )
          v37 = *((_QWORD *)v14 + 2);
        else
          v37 = *((_QWORD *)v14 + 3);
        if ( !(unsigned __int8)sub_BFFAE0(v37, v36) )
          goto LABEL_17;
        if ( sub_9ECBA0((__int64)v14, v36, v38, v39, v40) )
          v44 = *((_QWORD *)v14 + 3);
        else
          v44 = *((_QWORD *)v14 + 2);
        if ( sub_9ECBA0(v6, v36, v41, v42, v43) )
          v45 = *(_QWORD *)(v6 + 24);
        else
          v45 = *(_QWORD *)(v6 + 16);
        if ( (*(_WORD *)v44 & 0x1FF) != 0x34 || (*(_WORD *)v45 & 0x1FF) != 0x34 )
        {
          LODWORD(v5) = sub_BFFAE0(v44, v45);
          return (unsigned int)v5;
        }
        v5 = &v46;
        sub_BF6990((__int64)&v48, *(_QWORD *)(v45 + 16), *(_DWORD *)(v45 + 24));
        sub_BF6990((__int64)&v46, *(_QWORD *)(v44 + 16), *(_DWORD *)(v44 + 24));
        if ( v47 == v49 )
        {
          if ( v47 <= 0x40 )
          {
            LOBYTE(v5) = v46 == v48;
            goto LABEL_161;
          }
          LODWORD(v5) = sub_2205D70(&v46, &v48);
LABEL_168:
          if ( v46 )
            operator delete[](v46);
          goto LABEL_161;
        }
        if ( v47 <= v49 )
        {
          sub_2206CD0(&v50, &v46, v49);
          if ( v51 <= 0x40 )
          {
            LOBYTE(v5) = v50 == v48;
            goto LABEL_160;
          }
          LODWORD(v5) = sub_2205D70(&v50, &v48);
        }
        else
        {
          sub_2206CD0(&v50, &v48, v47);
          if ( v47 <= 0x40 )
            LOBYTE(v5) = v46 == v50;
          else
            LODWORD(v5) = sub_2205D70(&v46, &v50);
          if ( v51 <= 0x40 )
            goto LABEL_160;
        }
        if ( v50 )
          operator delete[](v50);
LABEL_160:
        if ( v47 <= 0x40 )
        {
LABEL_161:
          if ( v49 > 0x40 && v48 )
            operator delete[](v48);
          return (unsigned int)v5;
        }
        goto LABEL_168;
      }
      if ( (_WORD)v16 != 79 )
        goto LABEL_17;
      if ( (*(_WORD *)v6 & 0x1FF) != 0x4F )
        goto LABEL_17;
      v13 = (v14[1] >> 3) & 0x7F;
      if ( ((v14[1] >> 3) & 0x7F) != ((*(_WORD *)(v6 + 2) >> 3) & 0x7F) )
        goto LABEL_17;
      v14 = *((unsigned __int16 **)v14 + 2);
      if ( v14 )
      {
LABEL_58:
        while ( 1 )
        {
          v16 = *v14;
          LOWORD(v16) = v16 & 0x1FF;
          if ( (_WORD)v16 == 20 )
            break;
          switch ( (_WORD)v16 )
          {
            case 4:
              if ( *((_BYTE *)v14 + 2) >> 3 != 12 )
                goto LABEL_61;
              v15 = *((unsigned __int16 **)v14 + 2);
              break;
            case 0x39:
              if ( (*((_DWORD *)v14 + 4) & 0x3FFF8000) == 0x3FFF8000 )
                goto LABEL_61;
              a2 = (*((_BYTE *)v14 + 19) & 0x40) != 0;
              v15 = *(unsigned __int16 **)&v14[4 * (unsigned int)a2 + 16 + 4 * ((*((_DWORD *)v14 + 4) >> 15) & 0x7FFF)];
              break;
            case 0x4D:
              if ( ((**((_DWORD **)v14 + 2) >> 14) & 0xC) != 0 )
                goto LABEL_61;
              if ( (v14[1] & 8) != 0 )
                goto LABEL_55;
              v15 = *((unsigned __int16 **)v14 + 4);
              break;
            case 0x12:
              if ( (*(_QWORD *)v14 & 0x1000000) == 0 )
                goto LABEL_61;
              if ( (BYTE2(*(_QWORD *)v14) & 0x80u) == 0 )
                goto LABEL_61;
              v15 = *((unsigned __int16 **)v14 + 2);
              if ( !v15 )
                goto LABEL_61;
              break;
            default:
              goto LABEL_61;
          }
LABEL_56:
          if ( v15 == v14 )
            goto LABEL_61;
          v14 = v15;
        }
LABEL_55:
        v15 = *((unsigned __int16 **)v14 + 3);
        goto LABEL_56;
      }
    }
    while ( 1 )
    {
      v18 = *(_WORD *)v6 & 0x1FF;
      if ( v18 == 20 )
        break;
      switch ( v18 )
      {
        case 4:
          if ( *(_BYTE *)(v6 + 2) >> 3 != 12 )
            goto LABEL_69;
          v17 = *(_QWORD *)(v6 + 16);
          break;
        case 57:
          if ( (*(_DWORD *)(v6 + 16) & 0x3FFF8000) == 0x3FFF8000 )
            goto LABEL_69;
          a2 = (*(_BYTE *)(v6 + 19) & 0x40) != 0;
          v17 = *(_QWORD *)(v6 + 8LL * ((unsigned int)a2 + ((*(_DWORD *)(v6 + 16) >> 15) & 0x7FFF)) + 32);
          break;
        case 77:
          if ( ((**(_DWORD **)(v6 + 16) >> 14) & 0xC) != 0 )
            goto LABEL_69;
          if ( (*(_BYTE *)(v6 + 2) & 8) != 0 )
            goto LABEL_63;
          v17 = *(_QWORD *)(v6 + 32);
          break;
        case 18:
          if ( (*(_QWORD *)v6 & 0x1000000) == 0 )
            goto LABEL_69;
          if ( (BYTE2(*(_QWORD *)v6) & 0x80u) == 0 )
            goto LABEL_69;
          v17 = *(_QWORD *)(v6 + 16);
          if ( !v17 )
            goto LABEL_69;
          break;
        default:
          goto LABEL_69;
      }
LABEL_64:
      if ( v17 == v6 )
        goto LABEL_69;
      v6 = v17;
    }
LABEL_63:
    v17 = *(_QWORD *)(v6 + 24);
    goto LABEL_64;
  }
  LODWORD(v5) = 1;
  if ( v11 != 98 )
  {
    if ( v11 == 71 && (*(_BYTE *)(v7 + 1) & 6) == 0 && (*(_BYTE *)(v6 + 1) & 6) == 0 )
    {
      LOBYTE(v5) = *(_QWORD *)(v7 + 16) == *(_QWORD *)(v6 + 16);
      return (unsigned int)v5;
    }
    goto LABEL_17;
  }
  return (unsigned int)v5;
}
