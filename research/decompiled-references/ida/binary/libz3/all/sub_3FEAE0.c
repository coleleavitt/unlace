__int64 __fastcall sub_3FEAE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx

  sub_428A40(*(_QWORD *)(a1 + 120));
  sub_18183E0(a2, "SPACER num propagations", *(unsigned int *)(a1 + 328));
  v2 = *(_QWORD *)(a1 + 192);
  if ( v2 )
    v3 = *(unsigned int *)(v2 - 4);
  else
    v3 = 0;
  sub_18183E0(a2, "SPACER num active lemmas", v3);
  sub_18183E0(a2, "SPACER num invariants", *(unsigned int *)(a1 + 332));
  v4 = *(_QWORD *)(a1 + 168);
  if ( v4 )
    v5 = *(unsigned int *)(v4 - 4);
  else
    v5 = 0;
  sub_18183E0(a2, "SPACER num pobs", v5);
  sub_18183E0(a2, "SPACER num reach queries", *(unsigned int *)(a1 + 348));
  sub_18183E0(a2, "SPACER num ctp blocked", *(unsigned int *)(a1 + 336));
  sub_18183E0(a2, "SPACER num is_invariant", *(unsigned int *)(a1 + 340));
  sub_18183E0(a2, "SPACER num lemma jumped", *(unsigned int *)(a1 + 344));
  sub_41C7A0(a1 + 352);
  sub_1818270(a2, "time.spacer.init_rules.pt.init");
  sub_41C7A0(a1 + 376);
  sub_1818270(a2, "time.spacer.solve.pt.must_reachable");
  sub_41C7A0(a1 + 400);
  sub_1818270(a2, "time.spacer.ctp");
  sub_41C7A0(a1 + 424);
  sub_1818270(a2, "time.spacer.mbp");
  return sub_18183E0(a2, "SPACER max cluster size", *(unsigned int *)(a1 + 464));
}

