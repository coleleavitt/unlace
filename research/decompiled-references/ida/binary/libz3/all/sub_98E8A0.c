__int64 __fastcall sub_98E8A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  sub_18183E0(a2, "arith conflicts", *(unsigned int *)(a1 + 192));
  sub_18183E0(a2, "arith row summations", *(unsigned int *)(a1 + 196));
  v2 = *(_QWORD *)(a1 + 568);
  if ( v2 )
    v3 = *(unsigned int *)(v2 - 4);
  else
    v3 = 0;
  sub_18183E0(a2, "arith num rows", v3);
  sub_18183E0(a2, "arith pivots", *(unsigned int *)(a1 + 200));
  sub_18183E0(a2, "arith assert lower", *(unsigned int *)(a1 + 232));
  sub_18183E0(a2, "arith assert upper", *(unsigned int *)(a1 + 236));
  sub_18183E0(a2, "arith assert diseq", *(unsigned int *)(a1 + 240));
  sub_18183E0(a2, "arith bound prop", *(unsigned int *)(a1 + 260));
  sub_18183E0(a2, "arith fixed eqs", *(unsigned int *)(a1 + 268));
  sub_18183E0(a2, "arith assume eqs", *(unsigned int *)(a1 + 280));
  sub_18183E0(a2, "arith offset eqs", *(unsigned int *)(a1 + 264));
  sub_18183E0(a2, "arith gcd tests", *(unsigned int *)(a1 + 216));
  sub_18183E0(a2, "arith gcd conflicts", *(unsigned int *)(a1 + 220));
  sub_18183E0(a2, "arith ineq splits", *(unsigned int *)(a1 + 212));
  sub_18183E0(a2, "arith gomory cuts", *(unsigned int *)(a1 + 208));
  sub_18183E0(a2, "arith branch int", *(unsigned int *)(a1 + 316));
  sub_18183E0(a2, "arith branch var", *(unsigned int *)(a1 + 320));
  sub_18183E0(a2, "arith patches", *(unsigned int *)(a1 + 224));
  sub_18183E0(a2, "arith patches_succ", *(unsigned int *)(a1 + 228));
  sub_18183E0(a2, "arith max-min", *(unsigned int *)(a1 + 276));
  sub_18183E0(a2, "arith grobner", *(unsigned int *)(a1 + 292));
  sub_18183E0(a2, "arith pseudo nonlinear", *(unsigned int *)(a1 + 304));
  sub_18183E0(a2, "arith nonlinear bounds", *(unsigned int *)(a1 + 308));
  sub_18183E0(a2, "arith nonlinear horner", *(unsigned int *)(a1 + 312));
  sub_18183E0(a2, "arith tableau max rows", *(unsigned int *)(a1 + 324));
  sub_18183E0(a2, "arith tableau max columns", *(unsigned int *)(a1 + 328));
  return sub_8E1C10((unsigned int *)(a1 + 504), a2);
}

