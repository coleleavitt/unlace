unsigned __int64 __fastcall sub_7D0AC0(__int64 a1)
{
  unsigned __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  _QWORD *v8; // rax
  __int64 v9; // r12
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  char v12; // dl
  __int64 v13; // rdi
  int v14; // eax

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 64);
  if ( (v2 & 1) != 0 )
    return v1;
  v3 = v2 >> 1;
  if ( (v2 & 2) != 0 )
    return v1;
  if ( (v2 & 1) != 0 )
  {
    v5 = v2 & 0xFFFFFFFFFFFFFFF8LL;
    v6 = *(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFFELL;
    v1 = v5;
    goto LABEL_5;
  }
  if ( (v2 & 0xFFFFFFFFFFFFFFFELL) <= 3 )
    return 0;
  v8 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCLL);
  v1 = (unsigned __int64)v8;
  if ( (v3 & 1) == 0 )
    return v1;
  v9 = v8[2275];
  if ( !v9 )
  {
    *(_QWORD *)(a1 + 64) = a1 & 0xFFFFFFFFFFFFFFFALL | 1;
    LOBYTE(v6) = a1 & 0xFA;
    if ( (a1 & 0xFFFFFFFFFFFFFFFALL) != 0 )
    {
      v5 = a1 & 0xFFFFFFFFFFFFFFF8LL;
      v1 = a1 & 0xFFFFFFFFFFFFFFF8LL;
      goto LABEL_5;
    }
    return 0;
  }
  v10 = v8[274];
  v8[284] += 24LL;
  v11 = (v10 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(v1 + 2200) >= v11 + 24 && v10 )
    *(_QWORD *)(v1 + 2192) = v11 + 24;
  else
    v11 = sub_7CF9B0(v1 + 2192, 24, 3);
  *(_QWORD *)v11 = v9;
  *(_DWORD *)(v11 + 8) = 0;
  *(_QWORD *)(v11 + 16) = a1;
  *(_QWORD *)(a1 + 64) = v11 | 5;
  v12 = v11;
  v5 = v11 & 0xFFFFFFFFFFFFFFF8LL;
  v1 = v5;
  LOBYTE(v6) = v12 & 0xFA | 4;
LABEL_5:
  if ( (v6 & 4) != 0 && v5 )
  {
    v13 = *(_QWORD *)v1;
    v14 = *(_DWORD *)(*(_QWORD *)v1 + 12LL);
    if ( *(_DWORD *)(v1 + 8) != v14 )
    {
      *(_DWORD *)(v1 + 8) = v14;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 144LL))(v13, a1);
    }
    return *(_QWORD *)(v1 + 16);
  }
  return v1;
}

