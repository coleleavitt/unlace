__int64 __fastcall sub_83DA00(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  unsigned __int64 v4; // rax
  _DWORD *v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  _DWORD *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  _DWORD *v16; // rdi
  _QWORD *v17; // rdi
  __int64 v18; // r12
  __int64 v19; // rdx
  _QWORD *v20; // rdi
  __int64 v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // edx
  __int64 v25; // rax
  int v26; // edx
  __int64 v27; // rax
  int v28; // edx
  _QWORD *v29; // rdi
  __int64 v30; // r13
  __int64 v31; // rax

  v2 = *(_QWORD *)(a1 + 104);
  v3 = *(_QWORD *)(v2 + 96);
  v4 = v3 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v3 & 1) != 0 )
  {
    if ( !v4 )
      goto LABEL_5;
  }
  else
  {
    if ( v4 <= 3 || (v3 & 2) == 0 )
      goto LABEL_5;
    v17 = (_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
    v18 = v17[2275];
    if ( !v18 )
    {
      *(_QWORD *)(v2 + 96) = v2 & 0xFFFFFFFFFFFFFFFALL | 1;
      goto LABEL_5;
    }
    v19 = v17[274];
    v17[284] += 24LL;
    v4 = (v19 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v17[275] >= v4 + 24 && v19 )
      v17[274] = v4 + 24;
    else
      v4 = sub_820510((__int64)(v17 + 274), 24, 3);
    *(_QWORD *)v4 = v18;
    *(_DWORD *)(v4 + 8) = 0;
    v3 = v4 | 5;
    *(_QWORD *)(v4 + 16) = v2;
    *(_QWORD *)(v2 + 96) = v4 | 5;
    LOBYTE(v4) = v4 & 0xFA | 4;
  }
  if ( (v4 & 4) != 0 )
  {
    v5 = (_DWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v5 )
    {
      v23 = *(_QWORD *)v5;
      v24 = *(_DWORD *)(*(_QWORD *)v5 + 12LL);
      if ( v5[2] != v24 )
      {
        v5[2] = v24;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 144LL))(v23, v2);
      }
    }
  }
LABEL_5:
  v6 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(v6 + 24) & 1) != 0 )
    sub_7A2E20(v6);
  v7 = *(_QWORD *)(a1 + 104);
  v8 = *(_QWORD *)(v7 + 96);
  v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v8 & 1) != 0 )
  {
    if ( v9 )
      goto LABEL_14;
LABEL_36:
    v13 = *(_QWORD *)(a1 + 128);
    goto LABEL_37;
  }
  if ( v9 <= 3 )
  {
    if ( v9 )
      goto LABEL_17;
    goto LABEL_36;
  }
  if ( (v8 & 2) == 0 )
  {
    v10 = *(_QWORD *)(a1 + 128);
    goto LABEL_11;
  }
  v20 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
  v21 = v20[2275];
  if ( !v21 )
  {
    *(_QWORD *)(v7 + 96) = v7 & 0xFFFFFFFFFFFFFFFALL | 1;
    v7 = *(_QWORD *)(a1 + 104);
    goto LABEL_17;
  }
  v22 = v20[274];
  v20[284] += 24LL;
  v9 = (v22 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v20[275] >= v9 + 24 && v22 )
    v20[274] = v9 + 24;
  else
    v9 = sub_820510((__int64)(v20 + 274), 24, 3);
  *(_QWORD *)v9 = v21;
  *(_DWORD *)(v9 + 8) = 0;
  v8 = v9 | 5;
  *(_QWORD *)(v9 + 16) = v7;
  *(_QWORD *)(v7 + 96) = v9 | 5;
  LOBYTE(v9) = v9 & 0xFA | 4;
LABEL_14:
  if ( (v9 & 4) != 0 )
  {
    v12 = (_DWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v12 )
    {
      v25 = *(_QWORD *)v12;
      v26 = *(_DWORD *)(*(_QWORD *)v12 + 12LL);
      if ( v12[2] != v26 )
      {
        v12[2] = v26;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 144LL))(v25, v7);
      }
    }
  }
  v7 = *(_QWORD *)(a1 + 104);
LABEL_17:
  v13 = *(_QWORD *)(a1 + 128);
  v14 = *(_QWORD *)(v7 + 96);
  v10 = v13;
  v15 = v14 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v14 & 1) != 0 )
  {
    if ( v15 )
    {
LABEL_19:
      if ( (v15 & 4) != 0 )
      {
        v16 = (_DWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v16 )
        {
          v27 = *(_QWORD *)v16;
          v28 = *(_DWORD *)(*(_QWORD *)v16 + 12LL);
          if ( v16[2] != v28 )
          {
            v16[2] = v28;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 144LL))(v27, v7);
          }
        }
        v10 = *(_QWORD *)(a1 + 128);
        if ( (*(_BYTE *)(v10 + 24) & 1) == 0 )
          return *(_QWORD *)(v10 + 24);
        return sub_7A2E20(v10);
      }
      v13 = *(_QWORD *)(a1 + 128);
    }
LABEL_37:
    v10 = v13;
    goto LABEL_11;
  }
  if ( v15 <= 3 )
    goto LABEL_37;
  if ( (v14 & 2) != 0 )
  {
    v29 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
    v30 = v29[2275];
    if ( v30 )
    {
      v31 = v29[274];
      v29[284] += 24LL;
      v15 = (v31 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v29[275] >= v15 + 24 && v31 )
        v29[274] = v15 + 24;
      else
        v15 = sub_820510((__int64)(v29 + 274), 24, 3);
      *(_QWORD *)v15 = v30;
      *(_DWORD *)(v15 + 8) = 0;
      v14 = v15 | 5;
      *(_QWORD *)(v15 + 16) = v7;
      *(_QWORD *)(v7 + 96) = v15 | 5;
      LOBYTE(v15) = v15 & 0xFA | 4;
      goto LABEL_19;
    }
    *(_QWORD *)(v7 + 96) = v7 & 0xFFFFFFFFFFFFFFFALL | 1;
    v10 = *(_QWORD *)(a1 + 128);
  }
LABEL_11:
  if ( (*(_BYTE *)(v10 + 24) & 1) == 0 )
    return *(_QWORD *)(v10 + 24);
  return sub_7A2E20(v10);
}

