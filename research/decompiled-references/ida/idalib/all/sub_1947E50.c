__int64 __fastcall sub_1947E50(__int64 *a1, __int64 a2, __int64 a3, unsigned int *a4, __m128 a5, __m128 a6)
{
  __int64 v7; // rbx
  void **v8; // rax
  __int64 v9; // rdx

  v7 = a3;
  if ( (*(_BYTE *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
  {
    v8 = sub_1946B40(a1, *((void ***)a4 + 2), a5, a6);
    if ( !v8 )
      return 0;
    v7 = sub_1E70DB0(*a1, *v8, *(unsigned int *)(v7 + 48), *a4);
    if ( (v7 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return 0;
  }
  sub_1EA6140(a2, v7, 24, 8);
  *(_DWORD *)v9 = *a4;
  *(_QWORD *)(v9 + 4) = *(_QWORD *)(a4 + 1);
  *(_QWORD *)(v9 + 16) = *((_QWORD *)a4 + 2);
  return v7;
}
