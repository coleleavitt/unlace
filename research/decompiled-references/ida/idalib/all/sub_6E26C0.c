unsigned __int64 __fastcall sub_6E26C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  _DWORD *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdi
  _DWORD *v20; // rdi
  __int64 v21; // rax
  int v22; // edx

  v6 = *(_QWORD *)(a1 + 120);
  if ( !v6 )
  {
    v10 = *(_QWORD *)(a1 + 96);
    v12 = *(_QWORD *)(v10 + 88);
    v13 = v12 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v12 & 1) != 0 )
    {
      if ( v13 )
        goto LABEL_13;
    }
    else if ( v13 > 3 && (v12 & 2) != 0 )
    {
      v14 = sub_6E2500((_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL), v10, a3, a4, a5, a6);
      v12 = v14 | 1;
      *(_QWORD *)(v10 + 88) = v14 | 1;
      v13 = v14 & 0xFFFFFFFFFFFFFFFELL;
      if ( !v13 )
      {
LABEL_17:
        v6 = *(_QWORD *)(a1 + 120);
        if ( v6 > 7 )
          goto LABEL_3;
        if ( v6 )
          return 0;
        v10 = *(_QWORD *)(a1 + 96);
        goto LABEL_20;
      }
LABEL_13:
      if ( (v13 & 4) != 0 )
      {
        v15 = (_DWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v15 )
        {
          v16 = *(_QWORD *)v15;
          a3 = *(unsigned int *)(*(_QWORD *)v15 + 12LL);
          if ( v15[2] != (_DWORD)a3 )
          {
            v15[2] = a3;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 152LL))(v16, v10);
          }
        }
      }
      goto LABEL_17;
    }
LABEL_20:
    v17 = *(_QWORD *)(v10 + 88);
    v18 = v17 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v17 & 1) == 0 )
    {
      if ( v18 <= 3 || (v17 & 2) == 0 )
        return 0;
      v19 = sub_6E2500((_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCLL), v10, a3, a4, a5, a6);
      v18 = v19 & 0xFFFFFFFFFFFFFFFELL;
      v17 = v19 | 1;
      *(_QWORD *)(v10 + 88) = v17;
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
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 152LL))(v21, v10);
          }
        }
      }
    }
    v6 = *(_QWORD *)(a1 + 120);
    if ( v6 <= 7 )
      return 0;
    goto LABEL_3;
  }
  if ( v6 <= 7 )
    return 0;
LABEL_3:
  v7 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
  if ( !v7 )
    return 0;
  result = sub_B8E970(v7 + 48);
  if ( result )
  {
    while ( (*(_BYTE *)(result + 28) & 0x7F) != 0x32 )
    {
      v9 = *(_QWORD *)(result + 8);
      result = v9 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v9 <= 7 )
        return 0;
    }
  }
  return result;
}
