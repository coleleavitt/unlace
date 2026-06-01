__int64 __fastcall sub_98EB00(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  sub_18183E0(a2, "arith conflicts", *(unsigned int *)(a1 + 320));
  sub_18183E0(a2, "arith row summations", *(unsigned int *)(a1 + 324));
  v2 = *(_QWORD *)(a1 + 696);
  if ( v2 )
    v3 = *(unsigned int *)(v2 - 4);
  else
    v3 = 0;
  sub_18183E0(a2, "arith num rows", v3);
  sub_18183E0(a2, "arith pivots", *(unsigned int *)(a1 + 328));
  sub_18183E0(a2, "arith assert lower", *(unsigned int *)(a1 + 360));
  sub_18183E0(a2, "arith assert upper", *(unsigned int *)(a1 + 364));
  sub_18183E0(a2, "arith assert diseq", *(unsigned int *)(a1 + 368));
  sub_18183E0(a2, "arith bound prop", *(unsigned int *)(a1 + 388));
  sub_18183E0(a2, "arith fixed eqs", *(unsigned int *)(a1 + 396));
  sub_18183E0(a2, "arith assume eqs", *(unsigned int *)(a1 + 408));
  sub_18183E0(a2, "arith offset eqs", *(unsigned int *)(a1 + 392));
  sub_18183E0(a2, "arith gcd tests", *(unsigned int *)(a1 + 344));
  sub_18183E0(a2, "arith gcd conflicts", *(unsigned int *)(a1 + 348));
  sub_18183E0(a2, "arith ineq splits", *(unsigned int *)(a1 + 340));
  sub_18183E0(a2, "arith gomory cuts", *(unsigned int *)(a1 + 336));
  sub_18183E0(a2, "arith branch int", *(unsigned int *)(a1 + 444));
  sub_18183E0(a2, "arith branch var", *(unsigned int *)(a1 + 448));
  sub_18183E0(a2, "arith patches", *(unsigned int *)(a1 + 352));
  sub_18183E0(a2, "arith patches_succ", *(unsigned int *)(a1 + 356));
  sub_18183E0(a2, "arith max-min", *(unsigned int *)(a1 + 404));
  sub_18183E0(a2, "arith grobner", *(unsigned int *)(a1 + 420));
  sub_18183E0(a2, "arith pseudo nonlinear", *(unsigned int *)(a1 + 432));
  sub_18183E0(a2, "arith nonlinear bounds", *(unsigned int *)(a1 + 436));
  sub_18183E0(a2, "arith nonlinear horner", *(unsigned int *)(a1 + 440));
  sub_18183E0(a2, "arith tableau max rows", *(unsigned int *)(a1 + 452));
  sub_18183E0(a2, "arith tableau max columns", *(unsigned int *)(a1 + 456));
  return sub_8E1C10((unsigned int *)(a1 + 632), a2);
}

