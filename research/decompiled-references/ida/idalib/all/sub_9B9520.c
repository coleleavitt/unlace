__int16 __fastcall sub_9B9520(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  __int64 v6; // rbx
  int v7; // eax
  int *v8; // rdx
  int v9; // r12d
  int *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // ebx
  unsigned __int64 v17; // rsi
  __int64 v18; // rcx
  unsigned __int8 v19; // kr08_1
  __int64 *v20; // rbx
  __int64 v21; // r12
  __int64 v22; // r14
  __int64 v23; // r13
  int v24; // eax
  int *v25; // rdx
  int v26; // r15d
  int *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // r9
  unsigned int v31; // r8d
  __int64 *v32; // rcx
  __int64 v33; // r11
  int v34; // r14d
  unsigned __int64 v35; // rax
  __int64 v36; // rsi
  int v37; // ebx
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // r9
  unsigned int v41; // r8d
  __int64 *v42; // rsi
  __int64 v43; // r11
  __int64 v44; // rax
  __int64 v45; // rsi
  __int64 v46; // r11
  __int64 v47; // rcx
  int v48; // ecx
  int v49; // r14d
  __int64 v50; // r11
  int v51; // eax
  int v52; // esi
  int v53; // r14d
  __int64 v54; // r11
  int v55; // eax
  int v56; // r10d
  int v57; // eax
  int v58; // r9d
  int v59; // eax
  unsigned __int64 v61; // [rsp+0h] [rbp-40h]

  LOWORD(v4) = *(_WORD *)a2 & 0x1FF;
  if ( (unsigned __int16)v4 <= 0x75u )
  {
    if ( (_WORD)v4 == 4 )
    {
      v19 = *(_BYTE *)(a2 + 2) >> 3;
      LOWORD(v4) = v19;
      switch ( v19 )
      {
        case 0u:
        case 1u:
        case 2u:
        case 3u:
        case 5u:
        case 6u:
        case 7u:
        case 8u:
        case 9u:
        case 0xAu:
        case 0xBu:
        case 0xCu:
        case 0xDu:
          return v4;
        case 4u:
          goto LABEL_45;
        default:
          LOWORD(v4) = *(_BYTE *)(a2 + 2) >> 3;
          if ( *(_BYTE *)(a2 + 2) >> 3 == 4 )
LABEL_45:
            LOWORD(v4) = sub_9B8FC0((int **)a1, a2);
          break;
      }
      return v4;
    }
  }
  else if ( (unsigned __int16)v4 <= 0x77u )
  {
    switch ( (*(_WORD *)(a2 + 2) >> 3) & 0x3F )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 0xA:
      case 0xB:
      case 0xC:
      case 0xD:
      case 0xE:
      case 0xF:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x20:
        return v4;
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1A:
      case 0x1B:
      case 0x1C:
      case 0x1D:
      case 0x1E:
      case 0x1F:
        goto LABEL_8;
      default:
        break;
    }
  }
  if ( (unsigned __int16)v4 > 0x75u )
  {
    if ( (_WORD)v4 == 139 )
    {
      v36 = *(_QWORD *)(a2 + 8);
      if ( v36 )
      {
        LOWORD(v4) = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
                   - 42;
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
                             - 42) <= 2u )
        {
          v37 = sub_9B6620(*(_QWORD *)a1 + 72LL, v36);
          v38 = sub_9B8790((__int64 *)(*(_QWORD *)a1 + 216LL), 16, 3u);
          *(_BYTE *)(v38 + 8) = 3;
          *(_QWORD *)v38 = off_2B40550;
          *(_DWORD *)(v38 + 12) = v37;
          LOWORD(v4) = sub_9B58F0(a1 + 16, v38);
        }
      }
      return v4;
    }
    if ( (unsigned __int16)v4 <= 0x8Bu )
    {
      if ( (unsigned __int16)v4 <= 0x77u )
      {
        LODWORD(v4) = ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) - 21;
        if ( (unsigned int)v4 <= 0xA )
LABEL_8:
          LOWORD(v4) = sub_9B92D0((__int64 *)a1, a2);
      }
      return v4;
    }
    if ( (_WORD)v4 == 245 )
    {
      v4 = *(_QWORD *)(a2 + 8);
      if ( (v4 & 1) != 0 )
      {
        v4 &= ~1uLL;
        v20 = (__int64 *)(v4 + 8);
        v21 = v4 + 8LL * *(unsigned int *)v4 + 8;
      }
      else
      {
        v21 = a2 + 16;
        v20 = (__int64 *)(a2 + 8);
        if ( !v4 )
          return v4;
      }
      if ( v20 == (__int64 *)v21 )
        return v4;
      while ( 1 )
      {
        v22 = *v20;
        LODWORD(v4) = (*(_BYTE *)(*v20 + 28) & 0x7F) - 40;
        if ( (unsigned int)v4 > 6 )
          goto LABEL_33;
        LOWORD(v4) = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 48)
                                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
                   - 42;
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 48)
                                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
                             - 42) > 2u )
          goto LABEL_33;
        v4 = sub_B73640(*v20);
        v23 = v4;
        if ( !v4 )
          goto LABEL_33;
        v24 = sub_9B6470((int *)(*(_QWORD *)a1 + 72LL), v22);
        v25 = *(int **)a1;
        v26 = v24;
        v27 = (int *)(*(_QWORD *)a1 + 72LL);
        if ( (*(_WORD *)v23 & 0x1FF) == 0x47 )
        {
          v28 = (unsigned int)v25[40];
          v29 = *(_QWORD *)(v23 + 16);
          v30 = *((_QWORD *)v25 + 18);
          if ( !(_DWORD)v28 )
            goto LABEL_65;
          v31 = (v28 - 1) & (((unsigned int)v29 >> 9) ^ ((unsigned int)v29 >> 4));
          v32 = (__int64 *)(v30 + 16LL * v31);
          v33 = *v32;
          if ( v29 != *v32 )
          {
            v48 = 1;
            if ( v33 == -4096 )
            {
LABEL_65:
              v51 = sub_9B6470(v27, v29);
              v25 = *(int **)a1;
              v34 = v51;
              goto LABEL_42;
            }
            while ( 1 )
            {
              v49 = v48 + 1;
              v31 = (v28 - 1) & (v48 + v31);
              v32 = (__int64 *)(v30 + 16LL * v31);
              v50 = *v32;
              if ( v29 == *v32 )
                break;
              v48 = v49;
              if ( v50 == -4096 )
                goto LABEL_65;
            }
          }
          if ( v32 == (__int64 *)(v30 + 16 * v28) )
            goto LABEL_65;
          v34 = *((_DWORD *)v32 + 2);
        }
        else
        {
          v39 = (unsigned int)v25[46];
          v40 = *((_QWORD *)v25 + 21);
          if ( !(_DWORD)v39 )
            goto LABEL_69;
          v41 = (v39 - 1) & (((unsigned int)v23 >> 9) ^ ((unsigned int)v23 >> 4));
          v42 = (__int64 *)(v40 + 16LL * v41);
          v43 = *v42;
          if ( v23 != *v42 )
          {
            v52 = 1;
            if ( v43 == -4096 )
            {
LABEL_69:
              v55 = sub_9B6620((__int64)v27, v23);
              v25 = *(int **)a1;
              v34 = v55;
              goto LABEL_42;
            }
            while ( 1 )
            {
              v53 = v52 + 1;
              v41 = (v39 - 1) & (v52 + v41);
              v42 = (__int64 *)(v40 + 16LL * v41);
              v54 = *v42;
              if ( v23 == *v42 )
                break;
              v52 = v53;
              if ( v54 == -4096 )
                goto LABEL_69;
            }
          }
          if ( v42 == (__int64 *)(v40 + 16 * v39) )
            goto LABEL_69;
          v34 = *((_DWORD *)v42 + 2);
        }
LABEL_42:
        v35 = sub_9B8790((__int64 *)v25 + 27, 24, 3u);
        *(_BYTE *)(v35 + 8) = 2;
        *(_QWORD *)v35 = off_2B40528;
        *(_DWORD *)(v35 + 12) = v26;
        *(_DWORD *)(v35 + 16) = v34;
        LOWORD(v4) = sub_9B58F0(a1 + 16, v35);
LABEL_33:
        if ( (__int64 *)v21 == ++v20 )
          return v4;
      }
    }
    if ( (unsigned __int16)v4 <= 0x100u )
      return v4;
LABEL_80:
    *(_QWORD *)&dword_0 = a4;
    BUG();
  }
  if ( (unsigned __int16)v4 >= 0x69u )
    return v4;
  if ( (unsigned __int16)v4 <= 0x4Eu )
  {
    if ( (_WORD)v4 )
      return v4;
    goto LABEL_80;
  }
  if ( (unsigned __int16)v4 > 0x67u )
  {
    LOWORD(v4) = sub_9B6620(*(_QWORD *)a1 + 72LL, a2);
    return v4;
  }
  if ( (unsigned __int16)v4 < 0x50u )
  {
    LOWORD(v4) = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                                            + 8LL)
                                                & 0xFFFFFFFFFFFFFFF0LL)
                                    + 16LL)
               - 42;
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                                            + 8LL)
                                                & 0xFFFFFFFFFFFFFFF0LL)
                                    + 16LL)
                         - 42) <= 2u )
    {
      sub_9B9520(a1, *(_QWORD *)(a2 + 16));
      v6 = *(_QWORD *)(a2 + 16);
      v7 = sub_9B6620(*(_QWORD *)a1 + 72LL, a2);
      v8 = *(int **)a1;
      v9 = v7;
      v10 = (int *)(*(_QWORD *)a1 + 72LL);
      if ( (*(_WORD *)v6 & 0x1FF) == 0x47 )
      {
        v11 = (unsigned int)v8[40];
        v12 = *(_QWORD *)(v6 + 16);
        v13 = *((_QWORD *)v8 + 18);
        if ( (_DWORD)v11 )
        {
          LODWORD(v14) = (v11 - 1) & (((unsigned int)v12 >> 9) ^ ((unsigned int)v12 >> 4));
          v15 = v13 + 16LL * (unsigned int)v14;
          if ( v12 != *(_QWORD *)v15 )
          {
            if ( *(_QWORD *)v15 == -4096 )
              goto LABEL_74;
            v56 = 1;
            while ( 1 )
            {
              v14 = ((_DWORD)v11 - 1) & (unsigned int)(v14 + v56);
              v15 = v13 + 16 * v14;
              if ( v12 == *(_QWORD *)v15 )
                break;
              ++v56;
              if ( *(_QWORD *)v15 == -4096 )
                goto LABEL_74;
            }
          }
          if ( v15 != v13 + 16 * v11 )
          {
            v16 = *(_DWORD *)(v15 + 8);
LABEL_22:
            v4 = sub_9B8790((__int64 *)v8 + 27, 24, 3u);
            *(_DWORD *)(v4 + 12) = v9;
            *(_DWORD *)(v4 + 16) = v16;
            v17 = *(unsigned int *)(a1 + 28);
            *(_QWORD *)v4 = off_2B40528;
            v18 = *(unsigned int *)(a1 + 24);
            *(_BYTE *)(v4 + 8) = 2;
            if ( v18 + 1 > v17 )
            {
              v61 = v4;
              sub_2237220(a1 + 16, a1 + 32, v18 + 1, 8);
              v18 = *(unsigned int *)(a1 + 24);
              v4 = v61;
            }
            *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v18) = v4;
            ++*(_DWORD *)(a1 + 24);
            return v4;
          }
        }
LABEL_74:
        v57 = sub_9B6470(v10, v12);
        v8 = *(int **)a1;
        v16 = v57;
        goto LABEL_22;
      }
      v44 = (unsigned int)v8[46];
      v45 = *((_QWORD *)v8 + 21);
      if ( (_DWORD)v44 )
      {
        LODWORD(v46) = (v44 - 1) & (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4));
        v47 = v45 + 16LL * (unsigned int)v46;
        if ( v6 != *(_QWORD *)v47 )
        {
          if ( *(_QWORD *)v47 == -4096 )
            goto LABEL_79;
          v58 = 1;
          while ( 1 )
          {
            v46 = ((_DWORD)v44 - 1) & (unsigned int)(v46 + v58);
            v47 = v45 + 16 * v46;
            if ( v6 == *(_QWORD *)v47 )
              break;
            ++v58;
            if ( *(_QWORD *)v47 == -4096 )
              goto LABEL_79;
          }
        }
        if ( v47 != v45 + 16 * v44 )
        {
          v16 = *(_DWORD *)(v47 + 8);
          goto LABEL_22;
        }
      }
LABEL_79:
      v59 = sub_9B6620((__int64)v10, v6);
      v8 = *(int **)a1;
      v16 = v59;
      goto LABEL_22;
    }
  }
  return v4;
}
