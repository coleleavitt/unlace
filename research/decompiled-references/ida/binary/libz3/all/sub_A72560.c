__int64 __fastcall sub_A72560(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int *v3; // rbp

  v2 = *(_QWORD *)(a1 + 64);
  sub_8E1C10((unsigned int *)(v2 + 32), a2);
  sub_18183E0(a2, "arith-lower", *(unsigned int *)(v2 + 432));
  sub_18183E0(a2, "arith-upper", *(unsigned int *)(v2 + 436));
  sub_18183E0(a2, "arith-propagations", *(unsigned int *)(v2 + 440));
  sub_18183E0(a2, "arith-iterations", *(unsigned int *)(v2 + 444));
  sub_18183E0(a2, "arith-pivots", *(unsigned int *)(v2 + 452));
  sub_18183E0(a2, "arith-plateau-iterations", *(unsigned int *)(v2 + 448));
  sub_18183E0(a2, "arith-fixed-eqs", *(unsigned int *)(v2 + 456));
  sub_18183E0(a2, "arith-conflicts", *(unsigned int *)(v2 + 460));
  sub_18183E0(a2, "arith-bound-propagations-lp", *(unsigned int *)(v2 + 464));
  sub_18183E0(a2, "arith-bound-propagations-cheap", *(unsigned int *)(v2 + 468));
  sub_18183E0(a2, "arith-diseq", *(unsigned int *)(v2 + 472));
  sub_18183E0(a2, "arith-eq", *(unsigned int *)(v2 + 476));
  sub_18183E0(a2, "arith-cuts", *(unsigned int *)(v2 + 480));
  sub_18183E0(a2, "arith-assume-eqs", *(unsigned int *)(v2 + 484));
  sub_18183E0(a2, "arith-branch", *(unsigned int *)(v2 + 488));
  sub_18183E0(a2, "arith-bv-axioms", *(unsigned int *)(v2 + 492));
  v3 = (unsigned int *)sub_FF9A20(*(_QWORD *)(v2 + 504));
  sub_18183E0(a2, "arith-factorizations", v3[19]);
  sub_18183E0(a2, "arith-make-feasible", v3[16]);
  sub_18183E0(a2, "arith-max-columns", v3[22]);
  sub_18183E0(a2, "arith-max-rows", v3[23]);
  sub_18183E0(a2, "arith-gcd-calls", v3[24]);
  sub_18183E0(a2, "arith-gcd-conflict", v3[25]);
  sub_18183E0(a2, "arith-cube-calls", v3[26]);
  sub_18183E0(a2, "arith-cube-success", v3[27]);
  sub_18183E0(a2, "arith-patches", v3[28]);
  sub_18183E0(a2, "arith-patches-success", v3[29]);
  sub_18183E0(a2, "arith-hnf-calls", v3[30]);
  sub_18183E0(a2, "arith-hnf-cuts", v3[31]);
  sub_18183E0(a2, "arith-gomory-cuts", v3[33]);
  sub_18183E0(a2, "arith-horner-calls", v3[40]);
  sub_18183E0(a2, "arith-horner-conflicts", v3[41]);
  sub_18183E0(a2, "arith-horner-cross-nested-forms", v3[42]);
  sub_18183E0(a2, "arith-grobner-calls", v3[43]);
  sub_18183E0(a2, "arith-grobner-conflicts", v3[44]);
  sub_18183E0(a2, "arith-offset-eqs", v3[45]);
  sub_18183E0(a2, "arith-fixed-eqs", v3[46]);
  sub_18183E0(a2, "arith-nla-add-bounds", v3[34]);
  sub_18183E0(a2, "arith-nla-propagate-bounds", v3[35]);
  sub_18183E0(a2, "arith-nla-propagate-eq", v3[36]);
  sub_18183E0(a2, "arith-nla-lemmas", v3[37]);
  sub_18183E0(a2, "arith-nra-calls", v3[38]);
  sub_18183E0(a2, "arith-bounds-improvements", v3[39]);
  sub_18183E0(a2, "arith-dio-calls", v3[47]);
  sub_18183E0(a2, "arith-dio-tighten-conflicts", v3[48]);
  sub_18183E0(a2, "arith-dio-rewrite-conflicts", v3[49]);
  sub_18183E0(a2, "arith-bounds-tightening-conflicts", v3[50]);
  sub_18183E0(a2, "arith-bounds-tightenings", v3[51]);
  sub_18183E0(a2, "arith-nla-throttled-lemmas", v3[52]);
  return sub_1817FC0(a2, v3 + 54);
}

