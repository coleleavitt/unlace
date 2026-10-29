__int64 __fastcall sub_155D540(__int64 a1)
{
  __int64 v1; // r12
  unsigned __int64 v2; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi
  unsigned __int64 v6; // rdx
  int *v7; // rsi
  int v8; // eax
  __int64 *v9; // rdi
  unsigned __int16 v11; // cx
  __int64 *v12; // rdi
  __int64 *v13; // rdi
  unsigned __int16 v14; // cx
  unsigned int v15; // eax
  _WORD *v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int16 v18; // cx
  unsigned int v19; // eax
  unsigned __int16 v20; // si
  _WORD *v21; // rdx
  unsigned int v22; // eax
  unsigned __int16 v23; // si
  _WORD *v24; // rdx
  __int64 *v25; // rdi

  v1 = 0x1000000B0000000LL;
  v2 = *(unsigned __int16 *)(a1 + 32);
  while ( 1 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)(*(_QWORD *)(v4 + 56) + 1LL) & 8) == 0 )
      goto LABEL_10;
    if ( (_WORD)v2 != 5 && (_WORD)v2 != 72 )
    {
      if ( (_WORD)v2 != 418 )
        goto LABEL_6;
      v17 = *(_QWORD *)(v4 + 2944);
      if ( v17 >= *(unsigned int *)(v4 + 2912) )
      {
        if ( *(_WORD *)(sub_14180A0(v4, 1u) + 16) != 72 )
        {
          v2 = *(unsigned __int16 *)(a1 + 32);
LABEL_6:
          if ( (_WORD)v2 != 163 && (_WORD)v2 != 329 )
            goto LABEL_10;
        }
      }
      else if ( *(_WORD *)(*(_QWORD *)(v4 + 2904) + 24 * v17 + 16) != 72 )
      {
        return 0;
      }
    }
    if ( (unsigned __int8)sub_1566C80(a1, 1) )
      return 3;
    v2 = *(unsigned __int16 *)(a1 + 32);
LABEL_10:
    if ( (unsigned __int16)v2 > 0x38u )
      break;
    if ( !_bittest64(&v1, v2) )
      return 0;
LABEL_20:
    if ( (_WORD)v2 == 22 )
    {
      ++*(_WORD *)(a1 + 88);
      goto LABEL_25;
    }
    if ( (_WORD)v2 == 23 )
    {
      v14 = *(_WORD *)(a1 + 88);
      if ( v14 )
      {
        v15 = *(_DWORD *)(a1 + 2792);
        if ( !v15 )
        {
LABEL_41:
          *(_WORD *)(a1 + 88) = v14 - 1;
          goto LABEL_25;
        }
        v16 = (_WORD *)(*(_QWORD *)(a1 + 2784) + 24LL * v15 - 24);
        while ( 2 )
        {
          if ( v14 == v16[7] )
          {
            if ( *((_DWORD *)v16 + 4) != *(_DWORD *)(a1 + 90) )
            {
LABEL_39:
              if ( *(_WORD *)(a1 + 90) <= v16[8] && *(_WORD *)(a1 + 92) <= v16[9] )
                goto LABEL_41;
            }
          }
          else if ( v14 <= v16[7] )
          {
            goto LABEL_39;
          }
          --v15;
          v16 -= 12;
          *(_DWORD *)(a1 + 2792) = v15;
          if ( !v15 )
            goto LABEL_41;
          continue;
        }
      }
LABEL_25:
      v12 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v12, (int *)(a1 + 16));
      goto LABEL_26;
    }
    if ( (unsigned __int16)(v2 - 20) <= 1u )
    {
      v11 = *(_WORD *)(a1 + 90);
      if ( (_WORD)v2 == 20 )
      {
        *(_WORD *)(a1 + 90) = v11 + 1;
        goto LABEL_25;
      }
      if ( !v11 )
        goto LABEL_25;
      v22 = *(_DWORD *)(a1 + 2792);
      if ( !v22 )
      {
LABEL_70:
        *(_WORD *)(a1 + 90) = v11 - 1;
        goto LABEL_25;
      }
      v23 = *(_WORD *)(a1 + 88);
      v24 = (_WORD *)(*(_QWORD *)(a1 + 2784) + 24LL * v22 - 24);
      while ( 2 )
      {
        if ( v23 == v24[7] )
        {
          if ( *((_DWORD *)v24 + 4) != *(_DWORD *)(a1 + 90) )
          {
LABEL_68:
            if ( v24[8] >= v11 && *(_WORD *)(a1 + 92) <= v24[9] )
              goto LABEL_70;
          }
        }
        else if ( v23 <= v24[7] )
        {
          goto LABEL_68;
        }
        --v22;
        v24 -= 12;
        *(_DWORD *)(a1 + 2792) = v22;
        if ( !v22 )
          goto LABEL_70;
        continue;
      }
    }
    if ( (unsigned __int16)(v2 - 24) <= 1u )
    {
      v18 = *(_WORD *)(a1 + 92);
      if ( (_WORD)v2 == 24 )
      {
        *(_WORD *)(a1 + 92) = v18 + 1;
        goto LABEL_25;
      }
      if ( !v18 )
        goto LABEL_25;
      v19 = *(_DWORD *)(a1 + 2792);
      if ( !v19 )
      {
LABEL_59:
        *(_WORD *)(a1 + 92) = v18 - 1;
        goto LABEL_25;
      }
      v20 = *(_WORD *)(a1 + 88);
      v21 = (_WORD *)(*(_QWORD *)(a1 + 2784) + 24LL * v19 - 24);
      while ( 2 )
      {
        if ( v20 == v21[7] )
        {
          if ( *((_DWORD *)v21 + 4) != *(_DWORD *)(a1 + 90) )
          {
LABEL_57:
            if ( *(_WORD *)(a1 + 90) <= v21[8] && v21[9] >= v18 )
              goto LABEL_59;
          }
        }
        else if ( v20 <= v21[7] )
        {
          goto LABEL_57;
        }
        --v19;
        v21 -= 12;
        *(_DWORD *)(a1 + 2792) = v19;
        if ( !v19 )
          goto LABEL_59;
        continue;
      }
    }
    if ( (unsigned __int16)(v2 - 17) <= 2u || (unsigned __int16)(v2 - 14) <= 1u )
      goto LABEL_25;
    if ( (_WORD)v2 == 3 )
    {
      sub_1566D30(a1);
      goto LABEL_26;
    }
LABEL_14:
    v7 = (int *)(a1 + 16);
    if ( !sub_10CCDE0(v2) )
    {
      v25 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v25, v7);
LABEL_26:
      if ( !(unsigned __int8)sub_155CC80(a1) )
        return 3;
      goto LABEL_27;
    }
    v8 = *(_DWORD *)(a1 + 20);
    v9 = *(__int64 **)(a1 + 8);
    if ( !v8 )
      v8 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 40) = v8;
    sub_14634E0(v9, v7);
    if ( !(unsigned __int8)sub_155CC80(a1) )
      return 3;
LABEL_27:
    v2 = *(unsigned __int16 *)(a1 + 32);
    if ( (unsigned __int16)(v2 - 380) <= 3u || (_WORD)v2 == 80 || (_WORD)v2 == 156 || (((_WORD)v2 - 109) & 0xFFFB) == 0 )
    {
      do
      {
        do
        {
          v13 = *(__int64 **)(a1 + 8);
          *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
          sub_14634E0(v13, (int *)(a1 + 16));
          v2 = *(unsigned __int16 *)(a1 + 32);
        }
        while ( (unsigned __int16)(v2 - 380) <= 3u || (_WORD)v2 == 80 || (_WORD)v2 == 156 );
      }
      while ( (((_WORD)v2 - 109) & 0xFFFB) == 0 );
    }
  }
  if ( (_WORD)v2 != 416 )
    return 0;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(v5 + 2944);
  if ( v6 < *(unsigned int *)(v5 + 2912) )
  {
    if ( *(_WORD *)(*(_QWORD *)(v5 + 2904) + 24 * v6 + 16) != 31 )
      return 0;
    goto LABEL_14;
  }
  if ( *(_WORD *)(sub_14180A0(v5, 1u) + 16) == 31 )
  {
    LOWORD(v2) = *(_WORD *)(a1 + 32);
    goto LABEL_20;
  }
  return 0;
}
