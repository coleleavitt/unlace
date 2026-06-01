__int64 __fastcall sub_773A00(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r14
  unsigned __int64 v5; // r13
  __int64 v6; // rbx
  __int64 v7; // rax
  char v8; // dl
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  char v11; // cl
  unsigned __int64 v12; // rcx
  char v13; // si
  char v14; // dl
  char v15; // si
  __int64 v16; // rdx
  char v17; // al
  char v18; // cl
  __int64 v19; // rdx
  char v20; // al
  unsigned __int64 v21; // rax
  char v22; // dl
  char v23; // cl
  __int64 v24; // rcx
  char v25; // dl
  __int64 v26; // rcx
  char v27; // dl
  __int64 i; // rsi
  unsigned __int64 v29; // rcx
  char v30; // r8

  result = a2 - a1;
  if ( (__int64)(a2 - a1) <= 144 )
    return result;
  v4 = a3;
  v5 = a2;
  v6 = 0x8E38E38E38E38E39LL * result;
  v7 = (__int64)(0x8E38E38E38E38E39LL * result) >> 1;
  if ( !a3 )
    goto LABEL_46;
  while ( 2 )
  {
    v8 = *(_BYTE *)(a1 + 17);
    --v4;
    v9 = a1 + 9;
    v10 = a1 + 9 * v7;
    v11 = *(_BYTE *)(v10 + 8);
    if ( v8 != v11 )
    {
      if ( v8 )
      {
        v14 = *(_BYTE *)(v5 - 1);
        if ( v14 == v11 )
        {
          if ( *(_QWORD *)v10 < *(_QWORD *)(v5 - 9) )
            goto LABEL_33;
        }
        else if ( v11 )
        {
          goto LABEL_33;
        }
        if ( v14 )
        {
          v12 = *(_QWORD *)(a1 + 9);
          goto LABEL_40;
        }
LABEL_20:
        v19 = *(_QWORD *)a1;
        v20 = *(_BYTE *)(a1 + 8);
        *(_QWORD *)a1 = *(_QWORD *)(v5 - 9);
        *(_BYTE *)(a1 + 8) = *(_BYTE *)(v5 - 1);
        *(_QWORD *)(v5 - 9) = v19;
        *(_BYTE *)(v5 - 1) = v20;
        goto LABEL_21;
      }
      if ( *(_BYTE *)(v5 - 1) )
      {
        if ( !v11 )
          goto LABEL_33;
      }
      else
      {
        if ( *(_QWORD *)(a1 + 9) < *(_QWORD *)(v5 - 9) )
          goto LABEL_16;
        if ( v11 )
          goto LABEL_20;
      }
LABEL_32:
      if ( *(_QWORD *)v10 >= *(_QWORD *)(v5 - 9) )
        goto LABEL_33;
      goto LABEL_20;
    }
    v12 = *(_QWORD *)(a1 + 9);
    if ( v12 >= *(_QWORD *)v10 )
    {
      v15 = *(_BYTE *)(v5 - 1);
      if ( v8 == v15 )
      {
        if ( v12 < *(_QWORD *)(v5 - 9) )
          goto LABEL_16;
      }
      else
      {
        if ( v8 )
          goto LABEL_16;
        if ( v15 )
          goto LABEL_33;
      }
      goto LABEL_32;
    }
    v13 = *(_BYTE *)(v5 - 1);
    if ( v8 == v13 )
    {
      if ( *(_QWORD *)v10 < *(_QWORD *)(v5 - 9) )
        goto LABEL_33;
LABEL_40:
      if ( v12 < *(_QWORD *)(v5 - 9) )
        goto LABEL_20;
LABEL_16:
      v16 = *(_QWORD *)a1;
      v17 = *(_BYTE *)(a1 + 8);
      *(_QWORD *)a1 = *(_QWORD *)(a1 + 9);
      v18 = *(_BYTE *)(a1 + 17);
      *(_QWORD *)(a1 + 9) = v16;
      *(_BYTE *)(a1 + 8) = v18;
      *(_BYTE *)(a1 + 17) = v17;
      goto LABEL_21;
    }
    if ( !v8 )
    {
      if ( v13 )
        goto LABEL_16;
      goto LABEL_40;
    }
LABEL_33:
    v26 = *(_QWORD *)a1;
    v27 = *(_BYTE *)(a1 + 8);
    *(_QWORD *)a1 = *(_QWORD *)v10;
    *(_BYTE *)(a1 + 8) = *(_BYTE *)(v10 + 8);
    *(_QWORD *)v10 = v26;
    *(_BYTE *)(v10 + 8) = v27;
LABEL_21:
    v21 = v5;
LABEL_22:
    v22 = *(_BYTE *)(a1 + 8);
    while ( 1 )
    {
      v23 = *(_BYTE *)(v9 + 8);
      if ( v23 != v22 )
        break;
      if ( *(_QWORD *)v9 >= *(_QWORD *)a1 )
        goto LABEL_27;
LABEL_24:
      v9 += 9LL;
    }
    if ( v23 )
      goto LABEL_24;
    do
    {
LABEL_27:
      while ( 1 )
      {
        v21 -= 9LL;
        if ( v22 != *(_BYTE *)(v21 + 8) )
          break;
        if ( *(_QWORD *)a1 >= *(_QWORD *)v21 )
        {
          if ( v9 >= v21 )
            goto LABEL_44;
LABEL_30:
          v24 = *(_QWORD *)v9;
          v9 += 9LL;
          v25 = *(_BYTE *)(v9 - 1);
          *(_QWORD *)(v9 - 9) = *(_QWORD *)v21;
          *(_BYTE *)(v9 - 1) = *(_BYTE *)(v21 + 8);
          *(_QWORD *)v21 = v24;
          *(_BYTE *)(v21 + 8) = v25;
          goto LABEL_22;
        }
      }
    }
    while ( v22 );
    if ( v9 < v21 )
      goto LABEL_30;
LABEL_44:
    sub_773A00(v9, v5, v4);
    result = v9 - a1;
    if ( (__int64)(v9 - a1) > 144 )
    {
      v5 = v9;
      v6 = 0x8E38E38E38E38E39LL * result;
      v7 = (__int64)(0x8E38E38E38E38E39LL * result) >> 1;
      if ( !v4 )
      {
LABEL_46:
        for ( i = v7 - 1; ; --i )
        {
          sub_773660(a1, i, v6, *(_QWORD *)(a1 + 9 * i), *(_BYTE *)(a1 + 9 * i + 8));
          if ( !i )
            break;
        }
        for ( result = v5 - a1;
              (__int64)(v5 - a1) > 9;
              result = sub_773660(a1, 0, 0x8E38E38E38E38E39LL * (v5 - a1), v29, v30) )
        {
          v5 -= 9LL;
          v29 = *(_QWORD *)v5;
          v30 = *(_BYTE *)(v5 + 8);
          *(_QWORD *)v5 = *(_QWORD *)a1;
          *(_BYTE *)(v5 + 8) = *(_BYTE *)(a1 + 8);
        }
        return result;
      }
      continue;
    }
    return result;
  }
}
