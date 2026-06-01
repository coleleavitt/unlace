__int64 __fastcall sub_602020(__int64 a1, const double *a2)
{
  double v2; // rbx
  _OWORD *v3; // rax
  __m128 v4; // xmm0
  __int64 v5; // rax

  v2 = *a2;
  if ( *(_QWORD *)a2 )
  {
    v3 = (_OWORD *)operator new(0x50u);
    v4 = _mm_loadh_ps(a2);
    *a2 = 0.0;
    v2 = *(double *)&v3;
    v3[1] = 0;
    v3[2] = 0;
    v3[3] = 0;
    v3[4] = 0;
    *v3 = v4;
    v5 = operator new(0x18u);
    *(_QWORD *)(v5 + 16) = 0;
    *(_QWORD *)(*(_QWORD *)&v2 + 16LL) = v5;
    *(_OWORD *)v5 = 0;
    *(_QWORD *)(*(_QWORD *)&v2 + 32LL) = sub_63BC60();
  }
  return *(_QWORD *)&v2;
}

