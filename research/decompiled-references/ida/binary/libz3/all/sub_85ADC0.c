__int64 __fastcall sub_85ADC0(__int64 a1, unsigned int *a2, unsigned __int8 a3, __m128 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx

  if ( *(_DWORD *)(a1 + 104) )
  {
    do
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 512LL))(a1);
    while ( (*(_DWORD *)(a1 + 104))-- != 1 );
  }
  if ( !*(_BYTE *)(a1 + 848) )
    sub_855310(a1);
  sub_859CE0(a1, a2, a4);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1720LL);
  if ( !v6 )
    return a3 ^ (unsigned int)(2 * *(_DWORD *)(v6 + 28));
  v7 = *a2;
  if ( (unsigned int)v7 < *(_DWORD *)(v6 - 4) )
  {
    v6 = *(_QWORD *)(v6 + 8 * v7);
    return a3 ^ (unsigned int)(2 * *(_DWORD *)(v6 + 28));
  }
  return a3;
}

