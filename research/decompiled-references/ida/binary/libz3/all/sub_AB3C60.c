__int64 __fastcall sub_AB3C60(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdi
  char *v6; // r13
  int v7; // edx
  unsigned int v8; // esi
  char *v9; // rcx
  char *v10; // rax
  char *v11; // rbp
  void *v12; // r12
  char *v13; // rsi
  unsigned int v14; // ebp
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v19; // esi

  v2 = *(_QWORD *)(a1 + 400);
  if ( v2 )
    v3 = *(unsigned int *)(v2 - 4);
  else
    v3 = 0;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 104LL))(a1, v3);
  v4 = *(_QWORD *)(a1 + 536);
  if ( v4 )
    *(_DWORD *)(v4 - 4) = 0;
  if ( *(_DWORD *)(a1 + 572) || *(_DWORD *)(a1 + 576) )
  {
    v5 = *(unsigned int *)(a1 + 568);
    v6 = *(char **)(a1 + 560);
    v7 = 0;
    v8 = *(_DWORD *)(a1 + 568);
    v9 = &v6[56 * v5];
    v10 = v6;
    if ( v6 == v9 )
      goto LABEL_21;
    do
    {
      while ( *((_DWORD *)v10 + 1) )
      {
        *((_DWORD *)v10 + 1) = 0;
        v10 += 56;
        if ( v9 == v10 )
          goto LABEL_12;
      }
      v10 += 56;
      ++v7;
    }
    while ( v9 != v10 );
LABEL_12:
    if ( v8 <= 0x10 || 3 * v8 >= 4 * v7 )
      goto LABEL_21;
    if ( v6 )
    {
      v11 = v6;
      do
      {
        v12 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v11 + 8);
        v13 = v11 + 24;
        v11 += 56;
        sub_182CBA0(v12, v13);
      }
      while ( v11 != &v6[56 * v5] );
      sub_186B220(v6);
      v14 = *(_DWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 560) = 0;
      v14 >>= 1;
      v15 = v14;
      *(_DWORD *)(a1 + 568) = v14;
      v16 = sub_186B270(56LL * v14);
      if ( !v14 )
        goto LABEL_20;
    }
    else
    {
      *(_QWORD *)(a1 + 560) = 0;
      v19 = v8 >> 1;
      v15 = v19;
      *(_DWORD *)(a1 + 568) = v19;
      v16 = sub_186B270(56LL * v19);
    }
    v17 = v16;
    do
    {
      *(_OWORD *)(v17 + 24) = 0;
      v17 += 56;
      *(_OWORD *)(v17 - 48) = 0;
      *(_QWORD *)(v17 - 56) = 0;
      *(_BYTE *)(v17 - 44) = 0;
      *(_DWORD *)(v17 - 32) = 1;
      *(_BYTE *)(v17 - 28) = 0;
      *(_DWORD *)(v17 - 16) = 0;
    }
    while ( v16 + 56 * v15 != v17 );
LABEL_20:
    *(_QWORD *)(a1 + 560) = v16;
LABEL_21:
    *(_QWORD *)(a1 + 572) = 0;
  }
  return sub_965AC0(a1);
}

