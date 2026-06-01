__int64 __fastcall sub_79E420(unsigned __int64 a1)
{
  unsigned __int8 v2; // al
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  unsigned __int64 v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rcx
  __int64 *v12; // rax
  __int64 *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rsi
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  unsigned __int64 v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rbp
  __int64 v23; // rdi
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  _DWORD *v26; // rdi
  __int64 v27; // rbp
  __int64 v28; // rdi
  unsigned __int64 v29; // rax
  _DWORD *v30; // rdi
  __int64 v31; // rax
  int v32; // edx
  __int64 v33; // rax
  int v34; // edx

  v2 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( v2 == 18 )
  {
    v3 = *(_QWORD *)(a1 + 120);
    v4 = v3;
    if ( v3 )
      goto LABEL_3;
    v27 = *(_QWORD *)(a1 + 96);
    v28 = *(_QWORD *)(v27 + 88);
    v24 = v28 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v28 & 1) != 0 )
    {
      if ( !v24 )
        goto LABEL_47;
LABEL_52:
      if ( (v24 & 4) != 0 )
      {
        v30 = (_DWORD *)(v28 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v30 )
        {
          v31 = *(_QWORD *)v30;
          v32 = *(_DWORD *)(*(_QWORD *)v30 + 12LL);
          if ( v30[2] != v32 )
          {
            v30[2] = v32;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 144LL))(v31, v27);
LABEL_56:
            v3 = *(_QWORD *)(a1 + 120);
            goto LABEL_3;
          }
        }
      }
      v4 = *(_QWORD *)(a1 + 120);
      goto LABEL_63;
    }
    if ( v24 > 3 )
    {
      if ( (v28 & 2) == 0 )
        goto LABEL_47;
      v29 = sub_6D4E90((_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFCLL), v27);
      v28 = v29 | 1;
      *(_QWORD *)(v27 + 88) = v29 | 1;
      v24 = v29 & 0xFFFFFFFFFFFFFFFELL;
      if ( !v24 )
        goto LABEL_56;
      goto LABEL_52;
    }
    goto LABEL_68;
  }
  if ( v2 == 17 )
  {
    v3 = *(_QWORD *)(a1 + 104);
    v4 = v3;
    if ( v3 )
      goto LABEL_3;
    v22 = *(_QWORD *)(a1 + 96);
    v23 = *(_QWORD *)(v22 + 88);
    v24 = v23 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v23 & 1) != 0 )
    {
      if ( !v24 )
        goto LABEL_47;
    }
    else
    {
      if ( v24 <= 3 )
      {
LABEL_68:
        if ( !v24 )
          goto LABEL_47;
        goto LABEL_63;
      }
      if ( (v23 & 2) == 0 )
        goto LABEL_47;
      v25 = sub_6D4E90((_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFCLL), v22);
      v23 = v25 | 1;
      *(_QWORD *)(v22 + 88) = v25 | 1;
      v24 = v25 & 0xFFFFFFFFFFFFFFFELL;
      if ( !v24 )
      {
LABEL_72:
        v3 = *(_QWORD *)(a1 + 104);
LABEL_3:
        if ( v3 > 7 )
        {
          v5 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
          goto LABEL_5;
        }
        goto LABEL_47;
      }
    }
    if ( (v24 & 4) == 0
      || (v26 = (_DWORD *)(v23 & 0xFFFFFFFFFFFFFFF8LL)) == nullptr
      || (v33 = *(_QWORD *)v26, v34 = *(_DWORD *)(*(_QWORD *)v26 + 12LL), v26[2] == v34) )
    {
      v4 = *(_QWORD *)(a1 + 104);
LABEL_63:
      v3 = v4;
      goto LABEL_3;
    }
    v26[2] = v34;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 144LL))(v33, v22);
    goto LABEL_72;
  }
  if ( (unsigned int)v2 - 56 <= 4 )
  {
    v5 = sub_78B3D0(a1);
LABEL_5:
    if ( v5 )
      goto LABEL_6;
  }
LABEL_47:
  v5 = a1;
LABEL_6:
  if ( (*(_BYTE *)(v5 + 29) & 1) == 0 )
    goto LABEL_18;
  v6 = v5;
  if ( (*(_BYTE *)(v5 + 28) & 0x7F) != 0 )
    v6 = sub_793320(v5);
  v7 = sub_6BB160(*(_QWORD *)(v6 + 88), v5);
  v8 = (_QWORD *)*v7;
  v9 = *v7 + 8LL * *((unsigned int *)v7 + 2);
  if ( (unsigned __int64)v8 >= v9 )
  {
    if ( v8 == (_QWORD *)v9 )
      goto LABEL_18;
    while ( *(_WORD *)(*(_QWORD *)v9 + 32LL) != 208 )
    {
      v9 += 8LL;
      if ( v8 == (_QWORD *)v9 )
        goto LABEL_18;
    }
    v10 = v8;
  }
  else
  {
    v10 = v8;
    while ( *(_WORD *)(*v10 + 32LL) != 208 )
    {
      if ( (_QWORD *)v9 == ++v10 )
        goto LABEL_18;
    }
  }
  if ( v10 != (_QWORD *)v9 )
  {
    v11 = *v8;
    if ( *(_WORD *)(*v8 + 32LL) != 208 )
    {
      v12 = v8 + 1;
      do
        v11 = *v12++;
      while ( *(_WORD *)(v11 + 32) != 208 );
    }
    return v11;
  }
LABEL_18:
  v14 = (__int64 *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
  {
    v15 = sub_79A2E0(*v14);
    v16 = v15;
    if ( (*(_BYTE *)(v15 + 29) & 1) == 0 )
      return 0;
  }
  else
  {
    v15 = sub_79A2E0((__int64)v14);
    v16 = v15;
    if ( (*(_BYTE *)(v15 + 29) & 1) == 0 )
      return 0;
  }
  if ( (*(_BYTE *)(v15 + 28) & 0x7F) != 0 )
    v15 = sub_793320(v15);
  v17 = sub_6BB160(*(_QWORD *)(v15 + 88), v16);
  v18 = (_QWORD *)*v17;
  v19 = *v17 + 8LL * *((unsigned int *)v17 + 2);
  if ( (unsigned __int64)v18 >= v19 )
  {
    if ( v18 == (_QWORD *)v19 )
      return 0;
    while ( *(_WORD *)(*(_QWORD *)v19 + 32LL) != 208 )
    {
      v19 += 8LL;
      if ( v18 == (_QWORD *)v19 )
        return 0;
    }
    v20 = v18;
  }
  else
  {
    v20 = v18;
    while ( *(_WORD *)(*v20 + 32LL) != 208 )
    {
      if ( (_QWORD *)v19 == ++v20 )
        return 0;
    }
  }
  if ( v20 == (_QWORD *)v19 )
    return 0;
  v11 = *v18;
  if ( *(_WORD *)(*v18 + 32LL) == 208 )
    return v11;
  do
  {
    v21 = v18[1];
    ++v18;
  }
  while ( *(_WORD *)(v21 + 32) != 208 );
  return v21;
}

