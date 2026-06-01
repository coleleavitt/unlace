unsigned __int64 __fastcall sub_10DAB80(__int64 a1, int a2)
{
  double v2; // rdx
  double v3; // rdi
  double v4; // rax
  double i; // rcx
  double v7[2]; // [rsp+18h] [rbp-10h] BYREF

  v2 = *(double *)(a1 + 40);
  *(_QWORD *)&v3 = a1 + 32;
  if ( v2 == 0.0 )
  {
LABEL_8:
    v7[0] = v3;
    return _mm_loadh_ps(v7).m128_u64[0];
  }
  while ( 1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)&v2 + 32LL) < a2 )
    {
      v4 = *(double *)(*(_QWORD *)&v2 + 24LL);
      if ( v4 == 0.0 )
        goto LABEL_8;
      goto LABEL_4;
    }
    v4 = *(double *)(*(_QWORD *)&v2 + 16LL);
    if ( *(_DWORD *)(*(_QWORD *)&v2 + 32LL) <= a2 )
      break;
    v3 = v2;
    if ( v4 == 0.0 )
      goto LABEL_8;
LABEL_4:
    v2 = v4;
  }
  for ( i = *(double *)(*(_QWORD *)&v2 + 24LL); i != 0.0; i = *(double *)(*(_QWORD *)&i + 24LL) )
  {
    while ( *(_DWORD *)(*(_QWORD *)&i + 32LL) > a2 )
    {
      v3 = i;
      i = *(double *)(*(_QWORD *)&i + 16LL);
      if ( i == 0.0 )
        goto LABEL_15;
    }
  }
LABEL_15:
  while ( v4 != 0.0 )
  {
    while ( *(_DWORD *)(*(_QWORD *)&v4 + 32LL) >= a2 )
    {
      v4 = *(double *)(*(_QWORD *)&v4 + 16LL);
      if ( v4 == 0.0 )
        goto LABEL_18;
    }
    v4 = *(double *)(*(_QWORD *)&v4 + 24LL);
  }
LABEL_18:
  v7[0] = v3;
  return _mm_loadh_ps(v7).m128_u64[0];
}
