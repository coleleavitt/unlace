__int64 __fastcall sub_DFE0A0(__int64 a1, const void *a2, size_t a3)
{
  _QWORD *v4; // r14
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  _DWORD *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  _DWORD *v16; // r15
  unsigned __int64 v17; // r13
  bool v18; // al
  __int64 v19; // rax

  v4 = *(_QWORD **)(a1 + 400);
  if ( !v4 )
    return 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = v4[4];
      if ( !v5 )
        goto LABEL_19;
      v6 = *(_QWORD *)(v5 + 16);
      if ( (v6 & 4) != 0 )
        goto LABEL_19;
      v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
      v8 = v7;
      if ( !v7 )
        goto LABEL_19;
      if ( (*(_BYTE *)(v7 + 28) & 0x7Fu) - 35 > 3 )
        goto LABEL_19;
      v9 = *(_QWORD *)(v7 + 40);
      if ( (v9 & 7) != 0 )
        goto LABEL_19;
      v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v10 )
        goto LABEL_19;
      v11 = *(_DWORD **)(v10 + 16);
      if ( *v11 != a3 || a3 && memcmp(v11 + 4, a2, a3) )
        goto LABEL_19;
      v12 = *(_QWORD *)(sub_B68470(v8 + 72) + 16);
      v13 = (v12 & 4) != 0 ? *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL) : v12 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v13 )
        BUG();
      if ( (*(_BYTE *)(v13 - 36) & 0x7Fu) - 60 > 1 )
        goto LABEL_19;
      v14 = *(_QWORD *)(v13 - 24);
      v15 = v13 - 64;
      if ( (v14 & 7) == 0 )
        break;
      sub_B6AF40(v15);
      v4 = (_QWORD *)v4[1];
      if ( !v4 )
        return 0;
    }
    v16 = *(_DWORD **)(v13 + 104);
    v17 = v14 & 0xFFFFFFFFFFFFFFF8LL;
    v18 = sub_B6AF40(v15);
    if ( v17 )
    {
      if ( v18 )
      {
        v19 = *(_QWORD *)(v17 + 16);
        if ( *(_DWORD *)v19 == 9
          && *(_QWORD *)(v19 + 16) == 0x6F7461636F6C6C61LL
          && *(_BYTE *)(v19 + 24) == 114
          && *v16
          && (v16[2] & 0x7FFFFFFF) == 1 )
        {
          return sub_DFB220((_QWORD *)v4[1], v4[17]);
        }
      }
    }
LABEL_19:
    v4 = (_QWORD *)v4[1];
    if ( !v4 )
      return 0;
  }
}

