unsigned __int64 __fastcall sub_1A0A220(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rax

  v6 = sub_B7E900(a1, a2, a3, a4, a5, a6);
  if ( !v6 )
    return 0;
LABEL_2:
  v7 = (_QWORD *)sub_B8C330(v6);
  if ( sub_B8F530(v7, v6, *(_QWORD *)(v6 + 48), (*(_BYTE *)(v7[290] + 213LL) >> 2) & 3, 1) )
    goto LABEL_9;
  v12 = *(_QWORD *)(v6 + 48);
  if ( (v12 & 1) == 0 )
  {
    v13 = v12 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (*(_BYTE *)(v13 + 8) & 1) == 0 )
    {
      v14 = sub_F63240(*(_QWORD *)v13, v6, v8, v9, v10, v11);
      if ( v14 )
      {
        v15 = sub_1A0A220(v14);
        if ( v15 )
          return v15;
      }
LABEL_9:
      while ( 1 )
      {
        v16 = *(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v6 = v16;
        if ( !v16 )
          return 0;
        if ( (*(_BYTE *)(v16 + 28) & 0x7Fu) - 49 <= 2 )
          goto LABEL_2;
      }
    }
  }
  return v6;
}
