__int64 __fastcall sub_87EB80(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rbp

  sub_18183E0(a2, "arith-lower", *(unsigned int *)(a1 + 396));
  sub_18183E0(a2, "arith-upper", *(unsigned int *)(a1 + 400));
  sub_18183E0(a2, "arith-propagations", *(unsigned int *)(a1 + 404));
  sub_18183E0(a2, "arith-iterations", *(unsigned int *)(a1 + 408));
  sub_18183E0(a2, "arith-pivots", *(unsigned int *)(a1 + 416));
  sub_18183E0(a2, "arith-plateau-iterations", *(unsigned int *)(a1 + 412));
  sub_18183E0(a2, "arith-fixed-eqs", *(unsigned int *)(a1 + 420));
  sub_18183E0(a2, "arith-conflicts", *(unsigned int *)(a1 + 424));
  sub_18183E0(a2, "arith-bound-propagations-lp", *(unsigned int *)(a1 + 428));
  sub_18183E0(a2, "arith-bound-propagations-cheap", *(unsigned int *)(a1 + 432));
  sub_18183E0(a2, "arith-diseq", *(unsigned int *)(a1 + 436));
  sub_18183E0(a2, "arith-eq", *(unsigned int *)(a1 + 440));
  sub_18183E0(a2, "arith-cuts", *(unsigned int *)(a1 + 444));
  sub_18183E0(a2, "arith-assume-eqs", *(unsigned int *)(a1 + 448));
  sub_18183E0(a2, "arith-branch", *(unsigned int *)(a1 + 452));
  sub_18183E0(a2, "arith-bv-axioms", *(unsigned int *)(a1 + 456));
  v2 = (unsigned int *)sub_FF9A20(*(_QWORD *)(a1 + 496));
  sub_18183E0(a2, "arith-factorizations", v2[19]);
  sub_18183E0(a2, "arith-make-feasible", v2[16]);
  sub_18183E0(a2, "arith-max-columns", v2[22]);
  sub_18183E0(a2, "arith-max-rows", v2[23]);
  sub_18183E0(a2, "arith-gcd-calls", v2[24]);
  sub_18183E0(a2, "arith-gcd-conflict", v2[25]);
  sub_18183E0(a2, "arith-cube-calls", v2[26]);
  sub_18183E0(a2, "arith-cube-success", v2[27]);
  sub_18183E0(a2, "arith-patches", v2[28]);
  sub_18183E0(a2, "arith-patches-success", v2[29]);
  sub_18183E0(a2, "arith-hnf-calls", v2[30]);
  sub_18183E0(a2, "arith-hnf-cuts", v2[31]);
  sub_18183E0(a2, "arith-gomory-cuts", v2[33]);
  sub_18183E0(a2, "arith-horner-calls", v2[40]);
  sub_18183E0(a2, "arith-horner-conflicts", v2[41]);
  sub_18183E0(a2, "arith-horner-cross-nested-forms", v2[42]);
  sub_18183E0(a2, "arith-grobner-calls", v2[43]);
  sub_18183E0(a2, "arith-grobner-conflicts", v2[44]);
  sub_18183E0(a2, "arith-offset-eqs", v2[45]);
  sub_18183E0(a2, "arith-fixed-eqs", v2[46]);
  sub_18183E0(a2, "arith-nla-add-bounds", v2[34]);
  sub_18183E0(a2, "arith-nla-propagate-bounds", v2[35]);
  sub_18183E0(a2, "arith-nla-propagate-eq", v2[36]);
  sub_18183E0(a2, "arith-nla-lemmas", v2[37]);
  sub_18183E0(a2, "arith-nra-calls", v2[38]);
  sub_18183E0(a2, "arith-bounds-improvements", v2[39]);
  sub_18183E0(a2, "arith-dio-calls", v2[47]);
  sub_18183E0(a2, "arith-dio-tighten-conflicts", v2[48]);
  sub_18183E0(a2, "arith-dio-rewrite-conflicts", v2[49]);
  sub_18183E0(a2, "arith-bounds-tightening-conflicts", v2[50]);
  sub_18183E0(a2, "arith-bounds-tightenings", v2[51]);
  sub_18183E0(a2, "arith-nla-throttled-lemmas", v2[52]);
  return sub_1817FC0(a2, v2 + 54);
}

