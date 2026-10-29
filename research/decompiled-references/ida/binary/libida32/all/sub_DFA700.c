void __fastcall sub_DFA700(__int64 a1, double *a2, __int64 a3)
{
  __int64 v3; // rax
  double v4; // rcx
  double v5[2]; // [rsp+0h] [rbp-10h] BYREF

  if ( !*(_BYTE *)(a1 + 24) )
  {
    v3 = *((_QWORD *)a2 + 1);
    if ( v3 )
      *(_QWORD *)(v3 + 16) = a3;
    v4 = a2[2];
    if ( v4 != 0.0 )
      *(_QWORD *)(*(_QWORD *)&v4 + 8LL) = a3;
    v5[0] = v4;
    *(__m128 *)(a3 + 8) = _mm_loadh_ps(v5);
    if ( *(double **)(a1 + 8) == a2 )
      *(_QWORD *)(a1 + 8) = a3;
    a2[4] = 0.0;
    *(_QWORD *)(a3 + 32) = a1;
  }
}

