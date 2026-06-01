__int64 __fastcall sub_67B2B0(__int64 a1, int *a2)
{
  __int64 *v2; // rax
  unsigned int v3; // ebp
  __int64 v4; // rbx
  unsigned __int64 v5; // r12
  __int64 *v6; // rbx
  unsigned int v7; // eax
  char v9; // al
  __int64 v10; // rbp
  unsigned int v11; // eax
  __m128i v12[2]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *((__int64 **)a2 + 2);
  v3 = *a2;
  if ( !v2 )
    return v3;
  v4 = *v2;
  v5 = (unsigned __int64)(v2 + 1);
  if ( !*v2 )
    return v3;
  if ( (v4 & 7) != 0 || (v4 & 8) != 0 )
  {
    v6 = (__int64 *)(v4 & 0xFFFFFFFFFFFFFFF0LL);
    v7 = sub_B1AFD0(*v6 & 0xFFFFFFFFFFFFFFF0LL);
    v4 = *v6;
    if ( (v4 & 7) != 0 || (v4 & 8) != 0 )
      return v3;
    v5 = v7 * ((v5 - 1) / v7 + 1);
  }
  v9 = *(_BYTE *)(*(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( v9 != 24 || !v4 )
  {
    if ( v9 == 20 && v4 || v9 == 22 && v4 )
      return *(unsigned int *)(v5 + 16);
    return v3;
  }
  v10 = 16;
  if ( (unsigned __int8)(*(_WORD *)(v4 + 18) >> 3) == 6 )
    v10 = 16LL * (*(_QWORD *)(v4 + 32) != 0);
  v11 = sub_B1AFD0(*(_QWORD *)(v4 + 40));
  v12[0] = _mm_unpacklo_epi64(
             _mm_loadl_epi64((const __m128i *)(v4 + 40)),
             (__m128i)(v11 * ((v5 + v10 != 0) + (v5 + v10 - (v5 + v10 != 0)) / v11)));
  return sub_B1E2D0(v12);
}

