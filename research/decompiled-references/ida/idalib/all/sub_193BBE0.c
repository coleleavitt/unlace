__int64 __fastcall sub_193BBE0(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v4; // rax
  __int64 v6; // rax

  v4 = sub_1933BC0(a1, *(_QWORD *)(a2 + 16), a3, a4);
  if ( v4 == 1 )
    return 1;
  v6 = sub_19A3EF0(*a1, v4 & 0xFFFFFFFFFFFFFFFELL);
  return sub_1C36C00(*a1, *(unsigned int *)(a2 + 4), *(unsigned int *)(a2 + 8), v6 & 0xFFFFFFFFFFFFFFFELL);
}
