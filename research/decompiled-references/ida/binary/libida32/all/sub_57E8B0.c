void __fastcall sub_57E8B0(__int64 a1, double a2, double a3)
{
  _QWORD *v4; // rbp
  __int64 v5; // rbp
  int v6; // eax
  const char *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  const char *v11; // rdi
  unsigned int v12; // eax
  const char *v13; // rdi
  const char *v14; // rsi

  sub_58F6E0(0);
  reset_undo();
  v4 = *(_QWORD **)(a1 + 1352);
  if ( v4[9] > 1u && (qunlink(v4[8]), (v10 = (void *)v4[8]) != nullptr) )
  {
    v4[9] = 0;
    qfree(v10);
    v4[8] = 0;
    v4[10] = 0;
    if ( !(unsigned __int8)netnode_inited() )
      goto LABEL_3;
  }
  else if ( !(unsigned __int8)netnode_inited() )
  {
    goto LABEL_3;
  }
  sub_78F160(a1);
LABEL_3:
  if ( *(_QWORD *)(a1 + 56) <= 1u )
    goto LABEL_17;
  v5 = *(_QWORD *)(a1 + 1352);
  if ( (*(_BYTE *)(a1 + 72) & 1) == 0 && !(unsigned __int8)is_database_flag(8) )
  {
    v6 = *(_DWORD *)(a1 + 72);
    if ( (v6 & 2) != 0 )
    {
      v11 = haystack;
      if ( *(_QWORD *)(a1 + 56) )
        v11 = *(const char **)(a1 + 48);
      sub_57A760(v11, a2, a3);
    }
    if ( (v6 & 0x10) != 0 )
      goto LABEL_8;
    v12 = getinf(3);
    if ( v12 & 0x400 | (v12 >> 9) & 1 )
    {
      if ( !errorexit )
      {
        v14 = haystack;
        if ( *(_QWORD *)(a1 + 32) )
          v14 = *(const char **)(a1 + 24);
        sub_57DDA0((_QWORD *)v5, v14, a2, a3);
      }
    }
    else if ( *(_BYTE *)(v5 + 264) )
    {
      v13 = haystack;
      if ( *(_QWORD *)(a1 + 32) )
        v13 = *(const char **)(a1 + 24);
      qunlink(v13);
    }
    goto LABEL_33;
  }
  if ( !*(_BYTE *)(v5 + 265) && !*(_BYTE *)(v5 + 264) && !(unsigned __int8)is_database_flag(8) )
  {
LABEL_33:
    v6 = *(_DWORD *)(a1 + 72);
    goto LABEL_8;
  }
  sub_5790F0((_QWORD *)v5);
  v6 = *(_DWORD *)(a1 + 72);
LABEL_8:
  if ( (v6 & 0x20) != 0 )
  {
    v7 = haystack;
    if ( *(_QWORD *)(a1 + 32) )
      v7 = *(const char **)(a1 + 24);
    qunlink(v7);
  }
  v8 = *(void **)(a1 + 24);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v8);
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
  }
  v9 = *(void **)(a1 + 48);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v9);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  *(_BYTE *)(v5 + 266) = 0;
LABEL_17:
  *(_DWORD *)(a1 + 72) = 0;
}

