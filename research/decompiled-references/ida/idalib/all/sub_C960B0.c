bool __fastcall sub_C960B0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 v12; // r13
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  _DWORD *v17; // rax
  __int64 v18; // rdi
  int v19; // edx

  v1 = *(_QWORD *)(a1 + 16);
  if ( (v1 & 4) != 0 )
    return 0;
  v2 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  v3 = sub_F63270(*(_QWORD *)(*(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFF8LL) + 8) & 0xFFFFFFFFFFFFFFF0LL));
  v6 = v3;
  if ( !v3 )
    return 0;
  v7 = *(_QWORD *)(v3 + 104);
  v8 = *(_QWORD *)(v7 + 96);
  v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v8 & 1) != 0 )
    goto LABEL_14;
  v10 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v8 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    goto LABEL_14;
  if ( (v8 & 2) != 0 )
  {
    v12 = v10[2295];
    v13 = v7 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v12 )
    {
      v14 = v10[294];
      v10[304] += 24LL;
      v15 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v10[295] >= v15 + 24 && v14 )
      {
        v10[294] = v15 + 24;
        v16 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v16 = sub_986170((__int64)(v10 + 294), 24, 24, 3, v4, v5);
        v15 = v16 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v16 = v12;
      v13 = v15 | 4;
      *(_DWORD *)(v16 + 8) = 0;
      *(_QWORD *)(v16 + 16) = v7;
    }
    v9 = v13 & 0xFFFFFFFFFFFFFFFELL;
    v8 = v9 | 1;
    *(_QWORD *)(v7 + 96) = v9 | 1;
LABEL_14:
    if ( v9 )
    {
      if ( (v9 & 4) != 0 )
      {
        v17 = (_DWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v17 )
        {
          v18 = *(_QWORD *)v17;
          v19 = *(_DWORD *)(*(_QWORD *)v17 + 12LL);
          if ( v17[2] != v19 )
          {
            v17[2] = v19;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 152LL))(v18, v7);
          }
        }
      }
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v6 + 128) + 1LL) & 4) == 0 )
    return 0;
  return (*(_BYTE *)(v2 + 1) & 6) != 0;
}
