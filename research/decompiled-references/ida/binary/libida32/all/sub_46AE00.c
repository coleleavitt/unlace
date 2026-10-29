bool __fastcall sub_46AE00(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int v4; // r12d
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax

  v4 = *a2;
  v5 = switch_dbctx(*(int *)(a1 + 8));
  v6 = sub_440410(*(_QWORD *)(v5 + 1480), v4);
  v7 = switch_dbctx(*(int *)(a3 + 8));
  return *(_DWORD *)(v6 + 8) == *(_DWORD *)(sub_440410(*(_QWORD *)(v7 + 1480), v4) + 8);
}

