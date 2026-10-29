unsigned __int64 __fastcall sub_1947650(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  __int64 v8; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx

  v8 = (__int64)sub_1946CC0(a1, *(_QWORD *)(a3 + 32), a5, a6);
  if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v10 = sub_A76DD0(*(_QWORD *)(*a1 + 248), v8, *(_DWORD *)(a3 + 40), *(_DWORD *)(a3 + 44));
  v11 = v10;
  if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  sub_1EA6140(a2, v10, 32, 8);
  *(_DWORD *)v12 = *(_DWORD *)a4;
  *(_QWORD *)(v12 + 4) = *(_QWORD *)(a4 + 4);
  *(__m128i *)(v12 + 16) = _mm_loadu_si128((const __m128i *)(a4 + 16));
  return v11;
}
