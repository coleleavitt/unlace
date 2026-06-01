__int64 __fastcall sub_4000A0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r12
  _QWORD *v4; // r13
  _QWORD *v5; // rax
  __int64 v6; // r12
  __int64 v7; // rdi

  sub_E32170(*(_QWORD *)(a1 + 232));
  sub_E32170(*(_QWORD *)(a1 + 240));
  sub_E32170(*(_QWORD *)(a1 + 248));
  v3 = *(_QWORD **)(a1 + 264);
  v4 = &v3[2 * *(unsigned int *)(a1 + 272)];
  if ( v3 != v4 )
  {
    while ( *v3 <= 1u )
    {
      v3 += 2;
      if ( v4 == v3 )
        goto LABEL_9;
    }
    while ( v4 != v3 )
    {
      sub_3FEAE0(v3[1], a2);
      v5 = v3 + 2;
      if ( v4 == v3 + 2 )
        break;
      while ( 1 )
      {
        v3 = v5;
        if ( *v5 > 1u )
          break;
        v5 += 2;
        if ( v4 == v5 )
          goto LABEL_9;
      }
    }
  }
LABEL_9:
  sub_18183E0(a2, "SPACER num queries", *(unsigned int *)(a1 + 544));
  sub_18183E0(a2, "SPACER num reuse reach facts", *(unsigned int *)(a1 + 548));
  sub_18183E0(a2, "SPACER max query lvl", *(unsigned int *)(a1 + 552));
  sub_18183E0(a2, "SPACER max depth", *(unsigned int *)(a1 + 556));
  sub_18183E0(a2, "SPACER inductive level", *(unsigned int *)(a1 + 364));
  sub_18183E0(a2, "SPACER cex depth", *(unsigned int *)(a1 + 560));
  sub_18183E0(a2, "SPACER expand pob undef", *(unsigned int *)(a1 + 564));
  sub_18183E0(a2, "SPACER num lemmas", *(unsigned int *)(a1 + 568));
  sub_18183E0(a2, "SPACER restarts", *(unsigned int *)(a1 + 572));
  sub_18183E0(a2, "SPACER conj", *(unsigned int *)(a1 + 584));
  sub_18183E0(a2, "SPACER conj success", *(unsigned int *)(a1 + 588));
  sub_18183E0(a2, "SPACER conj failed", *(unsigned int *)(a1 + 592));
  sub_18183E0(a2, "SPACER pob out of gas", *(unsigned int *)(a1 + 612));
  sub_18183E0(a2, "SPACER subsume pob", *(unsigned int *)(a1 + 596));
  sub_18183E0(a2, "SPACER subsume failed", *(unsigned int *)(a1 + 600));
  sub_18183E0(a2, "SPACER subsume success", *(unsigned int *)(a1 + 604));
  sub_18183E0(a2, "SPACER concretize", *(unsigned int *)(a1 + 608));
  sub_18183E0(a2, "SPACER non local gen", *(unsigned int *)(a1 + 616));
  sub_41C7A0(a1 + 120);
  sub_1818270(a2, "time.spacer.init_rules");
  sub_41C7A0(a1);
  sub_1818270(a2, "time.spacer.solve");
  sub_41C7A0(a1 + 24);
  sub_1818270(a2, "time.spacer.solve.propagate");
  sub_41C7A0(a1 + 48);
  sub_1818270(a2, "time.spacer.solve.reach");
  sub_41C7A0(a1 + 72);
  sub_1818270(a2, "time.spacer.solve.reach.is-reach");
  sub_41C7A0(a1 + 96);
  sub_1818270(a2, "time.spacer.solve.reach.children");
  sub_18183E0(a2, "spacer.lemmas_imported", *(unsigned int *)(a1 + 576));
  sub_18183E0(a2, "spacer.lemmas_discarded", *(unsigned int *)(a1 + 580));
  if ( *(_DWORD *)(a1 + 384) )
  {
    v6 = 0;
    do
    {
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8 * v6++);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 24LL))(v7, a2);
    }
    while ( (unsigned int)v6 < *(_DWORD *)(a1 + 384) );
  }
  return sub_47B5D0(*(_QWORD *)(a1 + 536), a2);
}

