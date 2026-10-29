unsigned __int64 __fastcall sub_ED6340(__int64 a1, double *a2)
{
  __int64 v2; // rax
  double v3; // rdx
  __int64 v4; // rcx
  bool v5; // al
  __int64 v6; // rax
  double v8[3]; // [rsp+0h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v3 = a2[2];
  if ( v2 && *(__int64 *)&v3 > v2 )
    v3 = *(double *)(a1 + 48);
  v4 = *((_QWORD *)a2 + 9);
  v5 = 0;
  if ( v4 )
    v5 = (*(_BYTE *)(v4 + 40) & 4) != 0;
  *(_BYTE *)(a1 + 316) = *(_BYTE *)(a1 + 316) & 0xEF | (16 * v5);
  if ( *(__int64 *)&v3 > *(_QWORD *)(a1 + 40) )
    *(double *)(a1 + 40) = v3;
  v6 = *((_QWORD *)a2 + 5);
  if ( *(_QWORD *)(a1 + 56) < v6 )
    *(_QWORD *)(a1 + 56) = v6;
  if ( *((_QWORD *)a2 + 5) >= *(__int64 *)&v3 )
    v3 = a2[5];
  v8[0] = v3;
  return _mm_loadh_ps(v8).m128_u64[0];
}
