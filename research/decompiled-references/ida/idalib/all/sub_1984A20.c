__int64 __fastcall sub_1984A20(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  unsigned __int64 v4; // rax
  __int64 result; // rax
  unsigned __int64 v6; // rbp

  v4 = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 16), a3, a4);
  if ( v4 == 1 )
    return 1;
  v6 = v4 & 0xFFFFFFFFFFFFFFFELL;
  sub_1C3BC60(*a1, *(unsigned int *)(a2 + 4), 0);
  result = a2;
  if ( v6 != *(_QWORD *)(a2 + 16) )
    return sub_19C0480(*a1, *(unsigned int *)(a2 + 4), v6, (*(_QWORD *)a2 >> 19) & 1LL);
  return result;
}
