bool __fastcall sub_8C13F0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // r13
  __int64 v11; // rcx
  _DWORD *v12; // rdx
  __int64 v13; // rdi
  int v14; // eax

  v1 = *(_QWORD *)(a1 + 16);
  if ( (v1 & 4) != 0 )
    return 0;
  v3 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  v4 = sub_B0E910(*(_QWORD *)(*(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFF8LL) + 8) & 0xFFFFFFFFFFFFFFF0LL));
  v5 = v4;
  if ( !v4 )
    return 0;
  v6 = *(_QWORD *)(v4 + 104);
  v7 = *(_QWORD *)(v6 + 96);
  v8 = v7 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v7 & 1) != 0 )
  {
    if ( !v8 )
      goto LABEL_14;
  }
  else
  {
    if ( v8 <= 3 || (v7 & 2) == 0 )
      goto LABEL_14;
    v9 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
    v10 = v9[2275];
    if ( !v10 )
    {
      *(_QWORD *)(v6 + 96) = v6 & 0xFFFFFFFFFFFFFFFALL | 1;
      goto LABEL_14;
    }
    v11 = v9[274];
    v9[284] += 24LL;
    v8 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v9[275] >= v8 + 24 && v11 )
      v9[274] = v8 + 24;
    else
      v8 = sub_8C1090((__int64)(v9 + 274), 24, 3);
    *(_QWORD *)v8 = v10;
    v7 = v8 | 5;
    *(_DWORD *)(v8 + 8) = 0;
    *(_QWORD *)(v8 + 16) = v6;
    *(_QWORD *)(v6 + 96) = v8 | 5;
    LOBYTE(v8) = v8 & 0xFA | 4;
  }
  if ( (v8 & 4) != 0 )
  {
    v12 = (_DWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v12 )
    {
      v13 = *(_QWORD *)v12;
      v14 = *(_DWORD *)(*(_QWORD *)v12 + 12LL);
      if ( v12[2] != v14 )
      {
        v12[2] = v14;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 144LL))(v13, v6);
      }
    }
  }
LABEL_14:
  if ( (*(_BYTE *)(*(_QWORD *)(v5 + 128) + 1LL) & 4) != 0 )
    return (*(_BYTE *)(v3 + 1) & 6) != 0;
  return 0;
}

