__int64 __fastcall sub_59F450(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  char *v4; // r14
  __int64 v5; // r13
  __int64 v6; // rbp
  __int64 v7; // r9

  v2 = *(_QWORD *)(a2 + 8);
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(
         *(_QWORD *)(a1 + 24),
         *(_QWORD *)(a2 + 64));
  v4 = *(char **)(a1 + 16);
  v5 = v3;
  v6 = sub_186B270(0x48u);
  sub_59A080(v6, v2, (_QWORD *)(a1 + 8), v4, v5, v7);
  return v6;
}

