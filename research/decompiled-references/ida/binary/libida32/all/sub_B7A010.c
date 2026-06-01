__int64 __fastcall sub_B7A010(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int16 v18; // ax
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 *v22; // rax
  __int64 *v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 *v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 *v28; // rax
  __int64 *v29; // rax
  __int64 v30; // rax

  if ( (_BYTE)a3 )
    return 0;
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    goto LABEL_3;
  v22 = sub_B68690(a1, a2, a3, a4, a5, a6);
  v23 = (__int64 *)*v22;
  v24 = *v22 + 8LL * *((unsigned int *)v22 + 2);
  if ( *v22 < v24 )
  {
    v27 = *v22;
    while ( *(_WORD *)(*(_QWORD *)v27 + 36LL) != 214 )
    {
      v27 += 8LL;
      if ( v24 == v27 )
        goto LABEL_3;
    }
    if ( v24 == v27 )
      goto LABEL_3;
    goto LABEL_28;
  }
  if ( v23 != (__int64 *)v24 )
  {
    if ( *(_WORD *)(*(_QWORD *)v24 + 36LL) != 214 )
    {
      v25 = (__int64 *)(v24 + 8);
      while ( v25 != v23 )
      {
        v26 = *v25++;
        if ( *(_WORD *)(v26 + 36) == 214 )
          goto LABEL_28;
      }
      goto LABEL_3;
    }
LABEL_28:
    if ( (*(_BYTE *)(a1 + 82) & 8) != 0 )
      return 0;
    return a1;
  }
LABEL_3:
  if ( !a2 )
    return 0;
  v6 = sub_BD3240(a2);
  v7 = v6;
  if ( (*(_BYTE *)(v6 + 1) & 6) != 0
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) != 48 )
  {
    v8 = sub_BD3430(v6);
    v9 = v8;
    if ( !v8 )
      return 0;
    v10 = v8;
    v13 = sub_B73D10(a1, v8, 0);
    if ( !v13 )
    {
      v10 = v9;
      v13 = sub_B79BC0(a1, v9, v11, v12, v14, v15);
      if ( !v13 )
        return 0;
    }
    if ( (*(_BYTE *)(v13 + 82) & 8) != 0 )
      return 0;
    if ( (*(_BYTE *)(v13 + 29) & 1) != 0 )
    {
      v28 = sub_B68690(v13, v10, v11, v12, v14, v15);
      v11 = *v28;
      v12 = *v28 + 8LL * *((unsigned int *)v28 + 2);
      if ( *v28 >= v12 )
      {
        if ( v11 != v12 )
        {
          while ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 214 )
          {
            v12 += 8LL;
            if ( v11 == v12 )
              goto LABEL_10;
          }
          return v13;
        }
      }
      else
      {
        v29 = (__int64 *)*v28;
        while ( 1 )
        {
          v11 = *v29;
          if ( *(_WORD *)(*v29 + 36) == 214 )
            break;
          if ( (__int64 *)v12 == ++v29 )
            goto LABEL_10;
        }
        if ( (__int64 *)v12 != v29 )
          return v13;
      }
    }
LABEL_10:
    if ( sub_B79170(v9, v10, v11, v12, v14, v15) )
      return v13;
    v18 = *(_WORD *)v7 & 0x1FF;
    if ( v18 != 71 )
    {
      if ( v18 == 46 )
      {
        v20 = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 48LL);
      }
      else
      {
        if ( ((v18 + 394) & 0x1FFu) > 1 || ((*(_WORD *)(v7 + 2) >> 3) & 0x3Fu) > 1 )
          return 0;
        v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v30 + 16) != 33 )
          v30 = sub_F3F310(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) & 0xFFFFFFFFFFFFFFF0LL), v10, v16, v17);
        v20 = *(_QWORD *)(v30 + 32);
      }
LABEL_14:
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) != 48 )
        return 0;
      return v13;
    }
    v19 = *(_QWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v19 + 28) & 0x7Fu) - 40 <= 6 )
    {
      v20 = *(_QWORD *)(v19 + 48);
      goto LABEL_14;
    }
    return 0;
  }
  return a1;
}

