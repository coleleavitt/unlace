char __fastcall sub_8C1670(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // rbp
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // r14
  __int64 v12; // rcx
  _DWORD *v13; // rdx
  __int64 v14; // rdi
  int v15; // eax

  v1 = *(_QWORD *)(a1 + 16);
  if ( (v1 & 4) != 0 )
    return 0;
  v3 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  v5 = sub_B0E910(*(_QWORD *)(*(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFF8LL) + 8) & 0xFFFFFFFFFFFFFFF0LL));
  v6 = v5;
  if ( !v5 )
    return 0;
  v7 = *(_QWORD *)(v5 + 104);
  v8 = *(_QWORD *)(v7 + 96);
  v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v8 & 1) != 0 )
  {
    if ( !v9 )
      goto LABEL_14;
  }
  else
  {
    if ( v9 <= 3 || (v8 & 2) == 0 )
      goto LABEL_14;
    v10 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
    v11 = v10[2275];
    if ( !v11 )
    {
      *(_QWORD *)(v7 + 96) = v7 & 0xFFFFFFFFFFFFFFFALL | 1;
      goto LABEL_14;
    }
    v12 = v10[274];
    v10[284] += 24LL;
    v9 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v10[275] >= v9 + 24 && v12 )
      v10[274] = v9 + 24;
    else
      v9 = sub_8C1090((__int64)(v10 + 274), 24, 3);
    *(_QWORD *)v9 = v11;
    v8 = v9 | 5;
    *(_DWORD *)(v9 + 8) = 0;
    *(_QWORD *)(v9 + 16) = v7;
    *(_QWORD *)(v7 + 96) = v9 | 5;
    LOBYTE(v9) = v9 & 0xFA | 4;
  }
  if ( (v9 & 4) != 0 )
  {
    v13 = (_DWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v13 )
    {
      v14 = *(_QWORD *)v13;
      v15 = *(_DWORD *)(*(_QWORD *)v13 + 12LL);
      if ( v13[2] != v15 )
      {
        v13[2] = v15;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 144LL))(v14, v7);
      }
    }
  }
LABEL_14:
  if ( (*(_BYTE *)(*(_QWORD *)(v6 + 128) + 1LL) & 4) == 0 || (*(_BYTE *)(v3 + 1) & 6) == 0 )
    return 0;
  return sub_8C0FA0(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
}

