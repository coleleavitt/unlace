__int64 __fastcall sub_193DA10(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v4; // rax
  __int64 v6; // rbx

  v4 = sub_1933BC0(a1, *(_QWORD *)(a2 + 16), a3, a4);
  if ( v4 == 1 )
    return 1;
  v6 = v4;
  sub_1C3BC60(*a1, *(unsigned int *)(a2 + 4), 0);
  return sub_19C0480(*a1, *(unsigned int *)(a2 + 4), v6 & 0xFFFFFFFFFFFFFFFELL, (*(_QWORD *)a2 >> 19) & 1LL);
}
