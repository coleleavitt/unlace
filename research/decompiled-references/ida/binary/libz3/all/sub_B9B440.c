__int64 __fastcall sub_B9B440(__int64 *a1, unsigned int a2, double a3, __m128 a4, __m128 a5)
{
  int **v5; // rbp
  __int64 v6; // r12
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 result; // rax

  v5 = *(int ***)(a1[5] + 8LL * a2);
  if ( (*((_BYTE *)v5 + 30) & 1) == 0 )
    return (unsigned __int8)sub_B9B270((_QWORD *)a1[3], v5[2]);
  v6 = *a1;
  v7 = sub_952CC0(*(__int64 **)(*a1 + 7472), a1[9]);
  sub_B6F6E0(v6, (__int64)v5, 0, v7, a3, a4, a5);
  v8 = *(unsigned int *)v5;
  v9 = *(_QWORD *)(*(_QWORD *)(v6 + 8656) + 8 * v8);
  result = *(unsigned __int8 *)(v9 + 53);
  if ( (result & 0x80u) != 0LL )
  {
    sub_B39E50(*(_QWORD *)(*(_QWORD *)(v6 + 8656) + 8 * v8), *a1);
    return *(unsigned __int8 *)(v9 + 53);
  }
  return result;
}

