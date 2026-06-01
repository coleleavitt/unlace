unsigned __int64 __fastcall sub_10E0B00(__int64 a1)
{
  double v1; // rdx
  double v2; // rdi
  double v3; // rax
  int v4; // ecx
  double i; // rcx
  double v7[2]; // [rsp+18h] [rbp-10h] BYREF

  v1 = *(double *)(a1 + 40);
  *(_QWORD *)&v2 = a1 + 32;
  if ( v1 == 0.0 )
  {
LABEL_8:
    v7[0] = v2;
    return _mm_loadh_ps(v7).m128_u64[0];
  }
  while ( 1 )
  {
    v4 = *(_DWORD *)(*(_QWORD *)&v1 + 32LL);
    if ( v4 <= 0 )
    {
      v3 = *(double *)(*(_QWORD *)&v1 + 24LL);
      if ( v3 == 0.0 )
        goto LABEL_8;
      goto LABEL_4;
    }
    v3 = *(double *)(*(_QWORD *)&v1 + 16LL);
    if ( v4 == 1 )
      break;
    v2 = v1;
    if ( v3 == 0.0 )
      goto LABEL_8;
LABEL_4:
    v1 = v3;
  }
  for ( i = *(double *)(*(_QWORD *)&v1 + 24LL); i != 0.0; i = *(double *)(*(_QWORD *)&i + 24LL) )
  {
    while ( *(int *)(*(_QWORD *)&i + 32LL) > 1 )
    {
      v2 = i;
      i = *(double *)(*(_QWORD *)&i + 16LL);
      if ( i == 0.0 )
        goto LABEL_15;
    }
  }
LABEL_15:
  while ( v3 != 0.0 )
  {
    while ( *(int *)(*(_QWORD *)&v3 + 32LL) > 0 )
    {
      v3 = *(double *)(*(_QWORD *)&v3 + 16LL);
      if ( v3 == 0.0 )
        goto LABEL_18;
    }
    v3 = *(double *)(*(_QWORD *)&v3 + 24LL);
  }
LABEL_18:
  v7[0] = v2;
  return _mm_loadh_ps(v7).m128_u64[0];
}
