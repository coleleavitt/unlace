__int64 __fastcall sub_E3B610(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  sub_1817FC0(a2, a1 + 72);
  sub_18183E0(a2, "par unsat", *(unsigned int *)(a1 + 264));
  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
    v3 = *(unsigned int *)(v2 - 4);
  else
    v3 = 0;
  sub_18183E0(a2, "par models", v3);
  return sub_1818270(a2, "par progress");
}

