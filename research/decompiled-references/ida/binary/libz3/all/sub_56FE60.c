__int64 __fastcall sub_56FE60(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int *v3; // rsi

  v2 = *(_QWORD *)(a1 + 16);
  v3 = (unsigned int *)(**(_QWORD **)(v2 + 64) + 32LL * a2);
  return *((_QWORD *)v3 + 1) & (*(_QWORD *)(*(_QWORD *)(v2 + 24) + *v3) >> v3[1]);
}

