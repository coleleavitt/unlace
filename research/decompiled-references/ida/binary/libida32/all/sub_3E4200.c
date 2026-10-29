__int64 __fastcall sub_3E4200(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r12
  _QWORD *v5; // rax
  __int64 v6; // rbp

  v3 = 24 * a3;
  switch_dbctx(*(int *)(a1 + 8));
  v4 = *(_QWORD *)(a1 + 40);
  v5 = sub_3D80D0(v4 + 24, v3 + **(_QWORD **)(a1 + 48));
  v6 = *(_QWORD *)(a2 + 40);
  return (v4 + 32 != (_QWORD)v5)
       ^ (unsigned __int8)(v6 + 32 != (_QWORD)sub_3D80D0(v6 + 24, **(_QWORD **)(a2 + 48) + v3));
}

