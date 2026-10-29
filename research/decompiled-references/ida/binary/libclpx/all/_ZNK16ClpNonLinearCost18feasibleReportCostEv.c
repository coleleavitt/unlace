double __fastcall ClpNonLinearCost::feasibleReportCost(ClpNonLinearCost *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 12);
  return (*(double *)(*(_QWORD *)(v1 + 160) + 8LL) + *((double *)this + 1))
       * *(double *)v1
       / (*(double *)(v1 + 88)
        * *(double *)(v1 + 96))
       - *(double *)(v1 + 40);
}

