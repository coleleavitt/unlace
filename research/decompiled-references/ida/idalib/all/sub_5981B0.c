void __fastcall sub_5981B0(__int64 a1, __int64 a2, double a3, double a4)
{
  _QWORD *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rbp
  int v8; // eax
  const char *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  const char *v13; // rdi
  unsigned int v14; // eax
  const char *v15; // rdi
  const char *v16; // rsi

  sub_5A98A0(0);
  reset_undo();
  v5 = *(_QWORD **)(a1 + 1544);
  if ( v5[9] > 1u && (qunlink(v5[8]), (v12 = (void *)v5[8]) != nullptr) )
  {
    v5[9] = 0;
    qfree(v12);
    v5[8] = 0;
    v5[10] = 0;
    if ( !(unsigned __int8)netnode_inited() )
      goto LABEL_3;
  }
  else if ( !(unsigned __int8)netnode_inited() )
  {
    goto LABEL_3;
  }
  sub_7AFEB0(a1);
LABEL_3:
  if ( *(_QWORD *)(a1 + 56) <= 1u )
    goto LABEL_17;
  v7 = *(_QWORD *)(a1 + 1544);
  if ( (*(_BYTE *)(a1 + 72) & 1) == 0 && !(unsigned __int8)is_database_flag(8) )
  {
    v8 = *(_DWORD *)(a1 + 72);
    if ( (v8 & 2) != 0 )
    {
      v13 = haystack;
      if ( *(_QWORD *)(a1 + 56) )
        v13 = *(const char **)(a1 + 48);
      sub_594080(v13, a3, a4);
    }
    if ( (v8 & 0x10) != 0 )
      goto LABEL_8;
    v14 = getinf(3);
    if ( v14 & 0x400 | (v14 >> 9) & 1 )
    {
      if ( !errorexit )
      {
        v16 = haystack;
        if ( *(_QWORD *)(a1 + 32) )
          v16 = *(const char **)(a1 + 24);
        sub_5976A0((_QWORD *)v7, v16, a3, a4);
      }
    }
    else if ( *(_BYTE *)(v7 + 264) )
    {
      v15 = haystack;
      if ( *(_QWORD *)(a1 + 32) )
        v15 = *(const char **)(a1 + 24);
      qunlink(v15);
    }
    goto LABEL_33;
  }
  if ( !*(_BYTE *)(v7 + 265) && !*(_BYTE *)(v7 + 264) && !(unsigned __int8)is_database_flag(8) )
  {
LABEL_33:
    v8 = *(_DWORD *)(a1 + 72);
    goto LABEL_8;
  }
  sub_592960((_QWORD *)v7, a2, v6);
  v8 = *(_DWORD *)(a1 + 72);
LABEL_8:
  if ( (v8 & 0x20) != 0 )
  {
    v9 = haystack;
    if ( *(_QWORD *)(a1 + 32) )
      v9 = *(const char **)(a1 + 24);
    qunlink(v9);
  }
  v10 = *(void **)(a1 + 24);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v10);
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
  }
  v11 = *(void **)(a1 + 48);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v11);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  *(_BYTE *)(v7 + 266) = 0;
LABEL_17:
  *(_DWORD *)(a1 + 72) = 0;
}
