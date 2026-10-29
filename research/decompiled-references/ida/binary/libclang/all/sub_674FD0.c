__int64 __fastcall sub_674FD0(
        __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128i a6,
        double a7,
        __m128 a8)
{
  __int64 v8; // r13
  unsigned __int64 v9; // rbp
  int v10; // r14d
  __int64 v11; // rax
  _BYTE *v12; // rbx
  __int64 v13; // r15
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 *v16; // rax
  __int64 v17; // r14
  unsigned __int64 i; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int8 v21; // cl
  __int64 v22; // r15
  unsigned int v23; // eax
  __int64 v24; // rsi
  int v25; // edx
  int v26; // eax
  __int64 *v27; // r13
  __int64 v28; // r15
  unsigned __int64 v29; // rdx
  __int16 v30; // ax
  __int64 v31; // rax
  __int64 *v32; // r15
  __int64 *v33; // r13
  unsigned int v34; // eax
  __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  __int64 *v37; // rax
  char v38; // dl
  int v39; // edx
  __int64 v40; // rax
  unsigned __int64 v41; // rbx
  unsigned int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  unsigned int v47; // eax
  unsigned int v48; // eax

  v8 = 0;
  v9 = a2;
  v10 = *(unsigned __int16 *)(a2 + 4);
  if ( *(_WORD *)(a2 + 4) )
  {
    do
    {
      while ( 1 )
      {
        v11 = sub_8C5580(v9);
        a4 = 16 * v8;
        v12 = (_BYTE *)(v11 + 16 * v8);
        if ( (*v12 & 1) == 0 )
          break;
LABEL_3:
        if ( v10 == (_DWORD)++v8 )
          goto LABEL_11;
      }
      v13 = *(_QWORD *)(v9 + 8 * v8 + 32);
      if ( (unsigned __int8)sub_8C54E0(v9, v11 + 16 * v8) )
      {
        a2 = *(_QWORD *)v12 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !(unsigned __int8)sub_66D270(a1, a2, a5, a6, a7, a8) )
          return 0;
        goto LABEL_3;
      }
      a2 = v13;
      if ( !(unsigned __int8)sub_672CC0(a1, v13, a5, a6, a7, a8) )
        return 0;
      ++v8;
    }
    while ( v10 != (_DWORD)v8 );
  }
LABEL_11:
  v15 = *(_QWORD *)(sub_8C58D0(v9, a2, a3, a4) + 56);
  v16 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v15 & 4) != 0 )
    v16 = (__int64 *)v16[4];
  v17 = *v16;
  for ( i = (unsigned __int64)(v16 + 1); ; i = v48 * ((i != -4) + (i + 4 - (i != -4)) / v48) )
  {
LABEL_14:
    v19 = v17;
    v20 = v17 & 7;
    if ( (v17 & 7) != 0 )
      goto LABEL_26;
    while ( 1 )
    {
      if ( (v17 & 8) != 0 )
        goto LABEL_26;
      v21 = *(_BYTE *)(*(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      switch ( v21 )
      {
        case 0x1Au:
          goto LABEL_63;
        case 0x27u:
          if ( v17 )
          {
            i += 8LL;
LABEL_78:
            v47 = sub_B1AFD0(*(_QWORD *)(v17 + 32));
            v17 = *(_QWORD *)(v17 + 32);
            i = v47 * ((i - (i != 0)) / v47 + (i != 0));
            goto LABEL_14;
          }
LABEL_69:
          v20 = v17;
LABEL_70:
          v19 = v20;
          goto LABEL_63;
        case 8u:
          if ( v17 )
          {
            v34 = sub_B1AFD0(*(_QWORD *)(v17 + 40));
            v17 = *(_QWORD *)(v17 + 40);
            i = v34 * ((i != -8) + (i + 8 - (i != -8)) / v34);
            goto LABEL_14;
          }
          goto LABEL_70;
        case 9u:
          if ( v17 )
          {
            ++i;
            goto LABEL_78;
          }
          goto LABEL_70;
        case 0x1Bu:
          if ( v17 )
          {
            i += 16LL;
            goto LABEL_78;
          }
          goto LABEL_70;
      }
      if ( v21 != 24 )
        break;
      if ( !v17 )
        goto LABEL_70;
      v22 = 16;
      if ( (unsigned __int8)(*(_WORD *)(v17 + 18) >> 3) == 6 )
        v22 = 16LL * (*(_QWORD *)(v17 + 32) != 0);
      v23 = sub_B1AFD0(*(_QWORD *)(v17 + 40));
      v17 = *(_QWORD *)(v17 + 40);
      i = ((i + v22 != 0) + (i + v22 - (i + v22 != 0)) / v23) * v23;
      v19 = v17;
      v20 = v17 & 7;
      if ( (v17 & 7) != 0 )
        goto LABEL_26;
    }
    if ( v21 <= 1u )
      break;
    if ( v21 != 29 )
      goto LABEL_69;
    if ( !v17 )
      goto LABEL_70;
    v48 = sub_B1AFD0(*(_QWORD *)(v17 + 24));
    v17 = *(_QWORD *)(v17 + 24);
  }
  if ( v17 )
    goto LABEL_78;
  v19 = 0;
LABEL_63:
  if ( (v17 & 8) != 0 || *(_BYTE *)(*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
  {
LABEL_26:
    i = 0;
    v17 = 0;
  }
  v24 = sub_8C58F0(v9);
  if ( !(unsigned __int8)sub_673240(a1, v24, a5, a6, a7, a8) )
    return 0;
  v25 = *(_DWORD *)(v17 + 20) >> 6;
  LOWORD(v26) = v25;
  if ( (*(_BYTE *)(v9 + 2) & 0x20) == 0 || *(_BYTE *)(v17 + 16) == 25 )
  {
LABEL_38:
    v29 = (v17 + 8LL * (unsigned __int16)v26 + 4LL * ((*(_BYTE *)(v17 + 23) & 0x10) != 0) + 48 + 7)
        & 0xFFFFFFFFFFFFFFF8LL;
    v30 = (*(_WORD *)(v17 + 22) >> 6) & 0xF;
    if ( (*(_BYTE *)(v17 + 23) & 8) != 0 )
    {
      v35 = ((*(_BYTE *)(v29 + 1) & 4) != 0) + 1LL;
      if ( (_BYTE)v30 == 2 )
      {
        v45 = v35 + (*(_WORD *)v29 & 0x3FF);
        v46 = 8 * v35;
        v45 *= 8;
        v32 = (__int64 *)(v29 + v45);
        v29 += v46;
        if ( v46 != v45 )
        {
LABEL_41:
          v33 = (__int64 *)v29;
          while ( (unsigned __int8)sub_673340(a1, *v33, a5, a6, a7, a8) )
          {
            if ( v32 == ++v33 )
            {
              v30 = (*(_WORD *)(v17 + 22) >> 6) & 0xF;
              goto LABEL_48;
            }
          }
          return 0;
        }
LABEL_53:
        if ( (*(_BYTE *)(v9 + 2) & 0x40) == 0 )
          goto LABEL_58;
        v38 = *(_BYTE *)(v17 + 16);
        if ( v38 == 26 )
        {
          v39 = 8 * ((*(_WORD *)(v17 + 22) & 0x3C0) != 0) + 15;
        }
        else
        {
          v40 = 16;
          if ( v38 == 25 )
          {
LABEL_57:
            v41 = v40 + i;
            v42 = sub_B1AFD0(*(_QWORD *)(v17 + 24));
            if ( !(unsigned __int8)sub_673BB0(
                                     a1,
                                     *(_QWORD *)(v17 + 24),
                                     v42 * ((v41 != 0) + (v41 - (v41 != 0)) / v42),
                                     a5,
                                     a6,
                                     a7,
                                     a8) )
              return 0;
LABEL_58:
            v43 = sub_8C5930(v9);
            if ( !(unsigned __int8)sub_672860(a1, v43, a3, a5, a6, a7, a8) )
              return 0;
            v44 = sub_8C53B0(v9);
            result = sub_672860(a1, v44, a3, a5, a6, a7, a8);
            if ( !(_BYTE)result )
              return 0;
            return result;
          }
          v39 = 15;
        }
        v40 = 8 * ((v39 + ((*(_DWORD *)(v17 + 20) >> 3) & 0x7FFF8u)) >> 3) + 8;
        goto LABEL_57;
      }
    }
    else if ( (_BYTE)v30 == 2 )
    {
      v31 = 8LL * (*(_WORD *)v29 & 0x3FF);
      v32 = (__int64 *)(v29 + v31);
      if ( v31 )
        goto LABEL_41;
      goto LABEL_53;
    }
LABEL_48:
    if ( (unsigned int)(unsigned __int8)v30 - 6 <= 2 )
    {
      v36 = (v17
           + 4LL * ((*(_BYTE *)(v17 + 23) & 0x10) != 0)
           + 8LL * (unsigned __int16)(*(_DWORD *)(v17 + 20) >> 6)
           + 48
           + 7)
          & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(v17 + 23) & 8) == 0 || (v37 = (__int64 *)(v36 + 16), (*(_BYTE *)(v36 + 1) & 4) == 0) )
        v37 = (__int64 *)(v36 + 8LL * ((unsigned __int8)(*(_BYTE *)(v17 + 23) & 8) >> 3));
      if ( *v37 && !(unsigned __int8)sub_672860(a1, *v37, a3, a5, a6, a7, a8) )
        return 0;
    }
    goto LABEL_53;
  }
  if ( !(_WORD)v25 )
  {
    LOWORD(v26) = 0;
    goto LABEL_38;
  }
  v27 = (__int64 *)(i + 16);
  v28 = i + 8LL * ((unsigned int)(unsigned __int16)v25 - 1) + 24;
  while ( (unsigned __int8)sub_66D270(a1, *v27, a5, a6, a7, a8) )
  {
    if ( ++v27 == (__int64 *)v28 )
    {
      v26 = *(_DWORD *)(v17 + 20) >> 6;
      goto LABEL_38;
    }
  }
  return 0;
}

