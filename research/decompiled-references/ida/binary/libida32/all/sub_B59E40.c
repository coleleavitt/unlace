__int64 __fastcall sub_B59E40(__int64 a1)
{
  char v1; // r14
  __int64 v2; // r13
  __int64 v3; // r12
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  __int64 v14; // rdi
  int v15; // eax
  _QWORD *v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx

  v1 = 0;
  v2 = 0;
  v3 = a1;
  v4 = a1;
  if ( sub_B4F880(a1) )
    return v4;
  while ( 1 )
  {
    v5 = sub_B685F0(a1);
    if ( (unsigned int)sub_B503C0(v4, v5) )
    {
      if ( (*(_BYTE *)(v3 + 28) & 0x7F) != 0x2B )
      {
        v8 = *(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v3 + 16) & 4) != 0 )
          v8 = *(_QWORD *)v8;
        if ( ((*(_BYTE *)(v8 + 8) + 70) & 0x7Fu) <= 3 )
          return v4;
      }
      v2 = v4;
    }
    v9 = *(_QWORD *)(v4 + 72);
    if ( (v9 & 1) != 0 )
    {
      if ( v1 )
        return v2;
      v12 = v9 & 0xFFFFFFFFFFFFFFFELL;
LABEL_17:
      v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
      v1 = 1;
      v13 = v10;
      if ( v12 && (v12 & 4) != 0 && v10 )
      {
        v14 = *(_QWORD *)v10;
        v15 = *(_DWORD *)(*(_QWORD *)v10 + 12LL);
        if ( *(_DWORD *)(v13 + 8) != v15 )
        {
          *(_DWORD *)(v13 + 8) = v15;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 152LL))(v14, v4);
        }
        v10 = *(_QWORD *)(v13 + 16);
        v1 = 1;
      }
      goto LABEL_11;
    }
    if ( (v9 & 2) != 0 )
    {
      if ( v1 )
        return v2;
      v16 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
      v1 = 1;
      if ( !v16 )
      {
LABEL_25:
        v10 = 0;
        goto LABEL_11;
      }
      v17 = v16[2295];
      if ( v17 )
      {
        v18 = v16[294];
        v16[304] += 24LL;
        v19 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v16[295] >= v19 + 24 && v18 )
        {
          v16[294] = v19 + 24;
          v20 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v20 = sub_962430((__int64)(v16 + 294), 24, 24, 3, v6, v7);
          v19 = v20 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v20 = v17;
        v21 = v19 | 4;
        *(_DWORD *)(v20 + 8) = 0;
        *(_QWORD *)(v20 + 16) = v4;
      }
      else
      {
        v21 = v4 & 0xFFFFFFFFFFFFFFFBLL;
      }
      v12 = v21 & 0xFFFFFFFFFFFFFFFELL;
      v9 = v12 | 1;
      *(_QWORD *)(v4 + 72) = v12 | 1;
      goto LABEL_17;
    }
    v10 = v9 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v10 )
      goto LABEL_25;
LABEL_11:
    if ( v3 == v10 )
      return v2;
    v4 = v10;
    if ( !v10 )
      return v2;
    a1 = v10;
    if ( sub_B4F880(v10) )
      return v4;
  }
}

