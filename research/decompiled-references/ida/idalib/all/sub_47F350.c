bool __fastcall sub_47F350(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax

  v4 = *a2;
  v5 = switch_dbctx(*(int *)(a1 + 8));
  v6 = sub_454000(*(_QWORD *)(v5 + 1672), v4);
  v7 = switch_dbctx(*(int *)(a3 + 8));
  return *(_QWORD *)(v6 + 16) == *(_QWORD *)(sub_454000(*(_QWORD *)(v7 + 1672), v4) + 16);
}
