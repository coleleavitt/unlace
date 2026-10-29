__int64 __fastcall ClpSimplex::primalPivotResult(ClpSimplex *this)
{
  __int64 v1; // rax
  bool v2; // zf
  __int64 v3; // rdx
  __int64 v4; // xmm0_8
  __int64 v5; // rdx
  __int64 v6; // xmm0_8
  __int64 v7; // rdx
  ClpNonLinearCost *v9; // rbp

  v1 = *((int *)this + 288);
  v2 = *((_QWORD *)this + 165) == 0;
  v3 = *((_QWORD *)this + 123);
  *((_QWORD *)this + 102) = *(_QWORD *)(*((_QWORD *)this + 150) + 8 * v1);
  v4 = *(_QWORD *)(v3 + 8 * v1);
  v5 = *((_QWORD *)this + 126);
  *((_QWORD *)this + 101) = v4;
  v6 = *(_QWORD *)(v5 + 8 * v1);
  v7 = *((_QWORD *)this + 147);
  *((_QWORD *)this + 103) = v6;
  *((_QWORD *)this + 104) = *(_QWORD *)(v7 + 8 * v1);
  if ( v2 )
  {
    v9 = (ClpNonLinearCost *)operator new(0x98u);
    ClpNonLinearCost::ClpNonLinearCost(v9, this, 1);
    *((_QWORD *)this + 165) = v9;
  }
  return (unsigned int)-((unsigned int)ClpSimplexPrimal::pivotResult(this, 0) < 0xFFFFFFFD);
}

