__int64 __fastcall sub_7AB940(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // rbp
  __int16 v8; // ax
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 *v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rdi

  if ( a3 )
    return 0;
  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v12 = sub_79A2B0(a1);
    v13 = *v12;
    v14 = *v12 + 8LL * *((unsigned int *)v12 + 2);
    if ( v13 < v14 )
    {
      while ( *(_WORD *)(*(_QWORD *)v13 + 32LL) != 209 )
      {
        v13 += 8LL;
        if ( v14 == v13 )
          goto LABEL_3;
      }
    }
    else
    {
      if ( v13 == v14 )
        goto LABEL_3;
      while ( *(_WORD *)(*(_QWORD *)v14 + 32LL) != 209 )
      {
        v14 += 8LL;
        if ( v13 == v14 )
          goto LABEL_3;
      }
    }
    if ( v13 != v14 )
    {
      if ( (*(_BYTE *)(a1 + 82) & 8) != 0 )
        return 0;
      return a1;
    }
  }
LABEL_3:
  if ( !a2 )
    return 0;
  v3 = sub_804930(a2);
  v4 = v3;
  if ( (*(_BYTE *)(v3 + 1) & 6) != 0
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) != 47 )
  {
    v5 = sub_804B20(v3);
    v6 = v5;
    if ( !v5 )
      return 0;
    v7 = sub_7A4F50(a1, v5, 0);
    if ( !v7 )
    {
      v7 = sub_7AB500(a1, v6);
      if ( !v7 )
        return 0;
    }
    if ( (*(_BYTE *)(v7 + 82) & 8) != 0 )
      return 0;
    if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
      goto LABEL_10;
    v15 = sub_79A2B0(v7);
    v16 = *v15;
    v17 = *v15 + 8LL * *((unsigned int *)v15 + 2);
    if ( v16 < v17 )
    {
      while ( *(_WORD *)(*(_QWORD *)v16 + 32LL) != 209 )
      {
        v16 += 8LL;
        if ( v17 == v16 )
          goto LABEL_10;
      }
    }
    else
    {
      if ( v16 == v17 )
      {
LABEL_10:
        if ( (unsigned __int8)sub_7AAC00(v6) )
          return v7;
        v8 = *(_WORD *)v4 & 0x1FF;
        if ( v8 != 72 )
        {
          if ( v8 == 47 )
          {
            v10 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 48LL);
          }
          else
          {
            if ( ((v8 + 393) & 0x1FFu) > 1 || ((*(_WORD *)(v4 + 2) >> 3) & 0x3Fu) > 1 )
              return 0;
            v18 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
            v19 = *(_QWORD *)v18;
            if ( *(_BYTE *)(*(_QWORD *)v18 + 16LL) != 32 )
              v19 = sub_B0D320(v19);
            v10 = *(_QWORD *)(v19 + 32);
          }
LABEL_14:
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) != 47 )
            return 0;
          return v7;
        }
        v9 = *(_QWORD *)(v4 + 16);
        if ( (*(_BYTE *)(v9 + 28) & 0x7Fu) - 38 <= 6 )
        {
          v10 = *(_QWORD *)(v9 + 48);
          goto LABEL_14;
        }
        return 0;
      }
      while ( *(_WORD *)(*(_QWORD *)v17 + 32LL) != 209 )
      {
        v17 += 8LL;
        if ( v16 == v17 )
          goto LABEL_10;
      }
    }
    if ( v16 != v17 )
      return v7;
    goto LABEL_10;
  }
  return a1;
}

