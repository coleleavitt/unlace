__int64 __fastcall sub_98E640(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  sub_18183E0(a2, "arith conflicts", *(unsigned int *)(a1 + 256));
  sub_18183E0(a2, "arith row summations", *(unsigned int *)(a1 + 260));
  v2 = *(_QWORD *)(a1 + 632);
  if ( v2 )
    v3 = *(unsigned int *)(v2 - 4);
  else
    v3 = 0;
  sub_18183E0(a2, "arith num rows", v3);
  sub_18183E0(a2, "arith pivots", *(unsigned int *)(a1 + 264));
  sub_18183E0(a2, "arith assert lower", *(unsigned int *)(a1 + 296));
  sub_18183E0(a2, "arith assert upper", *(unsigned int *)(a1 + 300));
  sub_18183E0(a2, "arith assert diseq", *(unsigned int *)(a1 + 304));
  sub_18183E0(a2, "arith bound prop", *(unsigned int *)(a1 + 324));
  sub_18183E0(a2, "arith fixed eqs", *(unsigned int *)(a1 + 332));
  sub_18183E0(a2, "arith assume eqs", *(unsigned int *)(a1 + 344));
  sub_18183E0(a2, "arith offset eqs", *(unsigned int *)(a1 + 328));
  sub_18183E0(a2, "arith gcd tests", *(unsigned int *)(a1 + 280));
  sub_18183E0(a2, "arith gcd conflicts", *(unsigned int *)(a1 + 284));
  sub_18183E0(a2, "arith ineq splits", *(unsigned int *)(a1 + 276));
  sub_18183E0(a2, "arith gomory cuts", *(unsigned int *)(a1 + 272));
  sub_18183E0(a2, "arith branch int", *(unsigned int *)(a1 + 380));
  sub_18183E0(a2, "arith branch var", *(unsigned int *)(a1 + 384));
  sub_18183E0(a2, "arith patches", *(unsigned int *)(a1 + 288));
  sub_18183E0(a2, "arith patches_succ", *(unsigned int *)(a1 + 292));
  sub_18183E0(a2, "arith max-min", *(unsigned int *)(a1 + 340));
  sub_18183E0(a2, "arith grobner", *(unsigned int *)(a1 + 356));
  sub_18183E0(a2, "arith pseudo nonlinear", *(unsigned int *)(a1 + 368));
  sub_18183E0(a2, "arith nonlinear bounds", *(unsigned int *)(a1 + 372));
  sub_18183E0(a2, "arith nonlinear horner", *(unsigned int *)(a1 + 376));
  sub_18183E0(a2, "arith tableau max rows", *(unsigned int *)(a1 + 388));
  sub_18183E0(a2, "arith tableau max columns", *(unsigned int *)(a1 + 392));
  return sub_8E1C10((unsigned int *)(a1 + 568), a2);
}

