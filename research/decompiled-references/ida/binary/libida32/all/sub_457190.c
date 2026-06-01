__int64 __fastcall sub_457190(__int64 a1, int a2, int a3, unsigned int a4)
{
  __int64 v6; // rax
  unsigned __int16 v7; // r14
  __int64 v8; // rax
  unsigned __int16 v9; // ax

  v6 = switch_dbctx(*(int *)(a1 + 4LL * a2 + 16));
  v7 = sub_3B9AA0(*(_QWORD *)(v6 + 1480), a4, 4);
  v8 = switch_dbctx(*(int *)(a1 + 4LL * a3 + 16));
  v9 = sub_3B9AA0(*(_QWORD *)(v8 + 1480), a4, 4);
  return sub_456FA0(a1, a2, v7, a3, v9, a4);
}

