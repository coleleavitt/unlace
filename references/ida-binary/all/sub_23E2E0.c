__int64 __fastcall sub_23E2E0(__int64 a1, __int64 a2, __int64 a3, char *a4, double a5)
{
  __int64 *v5; // rbx
  __int64 *v6; // rbp
  __int64 v7; // rdi

  v5 = *(__int64 **)(a1 + 48);
  v6 = &v5[*(_QWORD *)(a1 + 56)];
  while ( v6 != v5 )
  {
    v7 = *v5++;
    sub_23E1A0(qword_8CC430 + (v7 << 8), a2, a3, a4, a5);
  }
  return 1;
}
