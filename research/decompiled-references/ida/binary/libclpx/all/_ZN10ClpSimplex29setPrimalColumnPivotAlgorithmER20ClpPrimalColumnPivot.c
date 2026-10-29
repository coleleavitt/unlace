__int64 __fastcall ClpSimplex::setPrimalColumnPivotAlgorithm(ClpSimplex *this, ClpPrimalColumnPivot *a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = *((_QWORD *)this + 156);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 64LL))(v3);
  result = (*(__int64 (__fastcall **)(ClpPrimalColumnPivot *, __int64))(*(_QWORD *)a2 + 72LL))(a2, 1);
  *((_QWORD *)this + 156) = result;
  *(_QWORD *)(result + 8) = this;
  return result;
}

