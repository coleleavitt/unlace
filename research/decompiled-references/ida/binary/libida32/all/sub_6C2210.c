__int64 __fastcall sub_6C2210(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v11; // r12
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  _DWORD *v14; // rdi
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // rdi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdi
  _DWORD *v20; // rdi
  __int64 v21; // rax
  int v22; // edx
  unsigned __int64 v23; // rax

  v6 = *(_QWORD *)(a1 + 120);
  if ( v6 )
  {
    if ( v6 > 7 )
      goto LABEL_3;
    return 0;
  }
  v11 = *(_QWORD *)(a1 + 96);
  v12 = *(_QWORD *)(v11 + 88);
  v13 = v12 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v12 & 1) != 0 )
  {
    if ( !v13 )
      goto LABEL_16;
    goto LABEL_10;
  }
  if ( v13 <= 3 || (v12 & 2) == 0 )
    goto LABEL_16;
  v23 = sub_6C1EC0((_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL), v11, 0, a4, a5, a6);
  v12 = v23 | 1;
  *(_QWORD *)(v11 + 88) = v23 | 1;
  v13 = v23 & 0xFFFFFFFFFFFFFFFELL;
  if ( v13 )
  {
LABEL_10:
    if ( (v13 & 4) != 0 )
    {
      v14 = (_DWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v14 )
      {
        v15 = *(_QWORD *)v14;
        v16 = *(_DWORD *)(*(_QWORD *)v14 + 12LL);
        if ( v14[2] != v16 )
        {
          v14[2] = v16;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 152LL))(v15, v11);
        }
      }
    }
  }
  v6 = *(_QWORD *)(a1 + 120);
  if ( v6 <= 7 )
  {
    if ( !v6 )
    {
      v11 = *(_QWORD *)(a1 + 96);
      goto LABEL_16;
    }
    return 0;
  }
LABEL_3:
  if ( (*(_BYTE *)((v6 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) != 0 )
  {
    sub_B84BC0(a1);
    v6 = *(_QWORD *)(a1 + 120);
    a4 = *(unsigned int *)((v6 & 0xFFFFFFFFFFFFFFF8LL) + 24);
    if ( v6 )
      goto LABEL_26;
    v11 = *(_QWORD *)(a1 + 96);
LABEL_16:
    v17 = *(_QWORD *)(v11 + 88);
    v18 = v17 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v17 & 1) == 0 )
    {
      if ( v18 <= 3 )
        return 0;
      v9 = 0;
      if ( (v17 & 2) == 0 )
        return v9;
      v19 = sub_6C1EC0((_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCLL), v11, 0, a4, a5, a6);
      v18 = v19 & 0xFFFFFFFFFFFFFFFELL;
      v17 = v19 | 1;
      *(_QWORD *)(v11 + 88) = v17;
    }
    if ( v18 )
    {
      if ( (v18 & 4) != 0 )
      {
        v20 = (_DWORD *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v20 )
        {
          v21 = *(_QWORD *)v20;
          v22 = *(_DWORD *)(*(_QWORD *)v20 + 12LL);
          if ( v20[2] != v22 )
          {
            v20[2] = v22;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 152LL))(v21, v11);
          }
        }
      }
    }
    v6 = *(_QWORD *)(a1 + 120);
LABEL_26:
    if ( v6 > 7 )
      goto LABEL_4;
    return 0;
  }
LABEL_4:
  v8 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)(v8 + 72) & 1) != 0 )
  {
    sub_B84BC0(a1);
    v8 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
  }
  return *(_QWORD *)(v8 + 16);
}

