__int64 __fastcall ClpSimplex::setDualRowPivotAlgorithm(ClpSimplex *this, ClpDualRowPivot *a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = *((_QWORD *)this + 155);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
  result = (*(__int64 (__fastcall **)(ClpDualRowPivot *, __int64))(*(_QWORD *)a2 + 88LL))(a2, 1);
  *((_QWORD *)this + 155) = result;
  *(_QWORD *)(result + 8) = this;
  return result;
}

