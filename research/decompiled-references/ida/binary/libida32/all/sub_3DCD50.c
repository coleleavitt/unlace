void __fastcall sub_3DCD50(__int64 a1, int a2, int a3, int a4, int *a5)
{
  unsigned int v5; // eax
  __int64 v6; // rsi
  __int64 v7; // r9
  unsigned int v8; // ebx
  __int64 v9; // r10
  __int64 v10; // r9
  _DWORD *v11; // rsi
  unsigned int *v12; // rsi
  _QWORD *v13; // rax
  __int64 v14; // r12
  unsigned int v15; // ebp
  __int64 v16; // rax

  if ( a2 != 6 )
    return;
  v5 = *a5;
  if ( (unsigned int)*a5 > 0x2F )
  {
    v12 = *((unsigned int **)a5 + 1);
    v13 = v12 + 2;
    *((_QWORD *)a5 + 1) = v12 + 2;
    v8 = *v12;
LABEL_9:
    v11 = v13 + 1;
    *((_QWORD *)a5 + 1) = v13 + 1;
    v10 = *v13;
    goto LABEL_10;
  }
  v6 = *((_QWORD *)a5 + 2);
  v7 = v5 + 8;
  *a5 = v7;
  v8 = *(_DWORD *)(v6 + v5);
  if ( (unsigned int)v7 > 0x2F )
  {
    v13 = *((_QWORD **)a5 + 1);
    goto LABEL_9;
  }
  v9 = v5 + 16;
  *a5 = v9;
  v10 = *(_QWORD *)(v6 + v7);
  if ( (unsigned int)v9 <= 0x2F )
  {
    v11 = (_DWORD *)(v9 + v6);
    *a5 = v5 + 24;
    goto LABEL_6;
  }
  v11 = *((_DWORD **)a5 + 1);
LABEL_10:
  *((_QWORD *)a5 + 1) = v11 + 2;
LABEL_6:
  if ( (~(_WORD)v10 & 0x600) == 0 )
  {
    v14 = *(_QWORD *)(a1 + 8LL * a3 + 56);
    v15 = v8 + *v11;
    switch_dbctx(*(int *)(*(_QWORD *)(a1 + 8LL * a4 + 56) + 8LL));
    if ( (get_flags_ex(v15, 4) & 0x10000) != 0 )
    {
      v16 = switch_dbctx(*(int *)(v14 + 8));
      sub_3DC640(*(_QWORD **)(v16 + 1480), v8, v15, 0x15u);
    }
  }
}

