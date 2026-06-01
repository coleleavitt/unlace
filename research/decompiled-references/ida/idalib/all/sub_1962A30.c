__int64 __fastcall sub_1962A30(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v7; // rbx

  v4 = *a1;
  sub_18C79E0(v4, *(_DWORD *)(*(_QWORD *)(v4 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640), 4);
  sub_15F2480(v4);
  v5 = sub_1962720(a1, *(unsigned int **)(a2 + 16), 1u, a3, a4);
  if ( v5 != 1 )
    return sub_190F410(
             *a1,
             *(_DWORD *)(a2 + 24),
             v5 & 0xFFFFFFFFFFFFFFFELL,
             *(_DWORD *)(a2 + 28),
             *(_DWORD *)(a2 + 4),
             a3);
  v7 = *a1;
  sub_18C3E40(*a1);
  sub_190D5E0(v7, a3);
  return 1;
}
