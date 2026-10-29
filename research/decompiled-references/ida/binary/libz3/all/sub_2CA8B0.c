__int64 __fastcall sub_2CA8B0(__int64 *a1)
{
  __int64 v1; // r15
  __int64 v2; // r14
  __int64 v3; // r13
  unsigned int v4; // r12d
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rax

  v1 = sub_26B5C0(a1, 5);
  v2 = sub_26B5C0(a1, 4);
  v3 = sub_26B6B0(a1, 3);
  v4 = sub_26B490(a1, 2);
  v5 = sub_26B5C0(a1, 1);
  v6 = sub_26B5C0(a1, 0);
  v7 = Z3_qe_model_project_with_witness(v6, v5, v4, v3, v2, v1);
  return sub_26B3D0(a1, v7);
}

