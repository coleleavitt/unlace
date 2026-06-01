__int64 __fastcall sub_47F7D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = switch_dbctx(*(int *)(a1 + 8));
  return sub_6429C0(
           v2,
           *(_QWORD *)(16 * a2 + **(_QWORD **)(a1 + 40)),
           *(_QWORD *)(16 * a2 + **(_QWORD **)(a1 + 40) + 8));
}
