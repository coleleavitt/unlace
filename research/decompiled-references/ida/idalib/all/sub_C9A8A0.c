char __fastcall sub_C9A8A0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v13; // r14
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  _DWORD *v18; // rax
  __int64 v19; // rdi
  int v20; // edx

  v1 = *(_QWORD *)(a1 + 16);
  if ( (v1 & 4) == 0 )
  {
    v3 = v1 & 0xFFFFFFFFFFFFFFF8LL;
    v4 = sub_F63270(*(_QWORD *)(*(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFF8LL) + 8) & 0xFFFFFFFFFFFFFFF0LL));
    v7 = v4;
    if ( !v4 )
      return 0;
    v8 = *(_QWORD *)(v4 + 104);
    v9 = *(_QWORD *)(v8 + 96);
    v10 = v9 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v9 & 1) == 0 )
    {
      v11 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v9 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        if ( (v9 & 2) == 0 )
          goto LABEL_6;
        v13 = v11[2295];
        v14 = v8 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v13 )
        {
          v15 = v11[294];
          v11[304] += 24LL;
          v16 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v11[295] >= v16 + 24 && v15 )
          {
            v11[294] = v16 + 24;
            v17 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v17 = sub_986170((__int64)(v11 + 294), 24, 24, 3, v5, v6);
            v16 = v17 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v17 = v13;
          v14 = v16 | 4;
          *(_DWORD *)(v17 + 8) = 0;
          *(_QWORD *)(v17 + 16) = v8;
        }
        v10 = v14 & 0xFFFFFFFFFFFFFFFELL;
        v9 = v10 | 1;
        *(_QWORD *)(v8 + 96) = v10 | 1;
      }
    }
    if ( v10 )
    {
      if ( (v10 & 4) != 0 )
      {
        v18 = (_DWORD *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v18 )
        {
          v19 = *(_QWORD *)v18;
          v20 = *(_DWORD *)(*(_QWORD *)v18 + 12LL);
          if ( v18[2] != v20 )
          {
            v18[2] = v20;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 152LL))(v19, v8);
          }
        }
      }
    }
LABEL_6:
    if ( (*(_BYTE *)(*(_QWORD *)(v7 + 128) + 1LL) & 4) != 0 && (*(_BYTE *)(v3 + 1) & 6) != 0 )
      return sub_C939F0(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    return 0;
  }
  return 0;
}
