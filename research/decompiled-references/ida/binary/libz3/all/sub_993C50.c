__int64 __fastcall sub_993C50(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // eax
  __int64 v3; // rdx

  v2 = sub_B39350(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *a2), *(unsigned int *)(a1 + 8));
  LODWORD(v3) = 0;
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 680) + 8LL * v2) )
  {
    v3 = *(_QWORD *)(a1 + 688);
    LOBYTE(v3) = *(_QWORD *)(v3 + 8LL * v2) == 0;
  }
  return (unsigned int)v3;
}

