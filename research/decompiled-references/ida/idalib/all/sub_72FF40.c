__int64 __fastcall sub_72FF40(__int64 a1, void *a2, __int64 a3)
{
  __int64 v3; // r13
  FILE *v6; // rdi
  int v7; // eax

  v3 = a3;
  v6 = *(FILE **)(a1 + 8);
  if ( v6 )
    v3 = qfwrite(v6, a2);
  v7 = calc_crc32(*(unsigned int *)(a1 + 28), a2, a3);
  *(_QWORD *)(a1 + 32) += a3;
  *(_DWORD *)(a1 + 28) = v7;
  return v3;
}
