__int64 *__fastcall sub_19C4C50(
        __m128 *a1,
        __int64 a2,
        char a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11,
        char a12,
        __int64 a13,
        __int64 a14,
        char a15,
        char a16,
        __int64 a17)
{
  char v20; // al
  __int64 *v21; // r13
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  unsigned __int64 v29; // rax

  v20 = sub_18C0FD0((__int64)a1, a10);
  v21 = sub_C0C460(
          (_QWORD *)a1[15].m128_u64[1],
          a2,
          a3,
          a4,
          a5,
          a6,
          a9,
          a10,
          a11,
          *(_QWORD *)a13,
          *(_QWORD *)(a13 + 8),
          *(_QWORD *)(a13 + 16),
          a17,
          a14,
          a15,
          a16,
          v20);
  *((_BYTE *)v21 + 2) = *((_BYTE *)v21 + 2) & 0x7F | (a12 << 7);
  sub_1911B60(a1, (__int64)v21, a7, a8);
  v23 = *(_QWORD *)(a14 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v23 + 16) == 26
    || (v25 = *(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v25 + 16) == 26)
    && (v23 = sub_F63050(*(_QWORD *)(a14 & 0xFFFFFFFFFFFFFFF0LL), v21, v25, v22)) != 0 )
  {
    if ( ((*(_BYTE *)(v23 + 19) >> 1) & 0xFu) - 9 <= 1 )
    {
      v26 = sub_18B0530((__int64)a1, *(_DWORD *)(a13 + 8), v23, *(double *)a7.m128_u64, a8);
      if ( v26 )
      {
        v27 = *(_QWORD *)&byte_8[a14 & 0xFFFFFFFFFFFFFFF0LL];
        v28 = ((unsigned __int8)v27 | (unsigned __int8)a14) & 7;
        if ( (v27 & 8) != 0
          && (v28 = *(__int64 *)((char *)&qword_18
                               + (*(_QWORD *)&byte_8[a14 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
                  | *(_QWORD *)&byte_8[a14 & 0xFFFFFFFFFFFFFFF0LL] & 7LL
                  | a14 & 7,
              (*(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[a14 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
             & 0xFFFFFFFFFFFFFFF8LL) != 0) )
        {
          v29 = sub_A70C40(a1[15].m128_i64[1], v26, v28);
        }
        else
        {
          v29 = v28 | v26 & 0xFFFFFFFFFFFFFFF0LL;
        }
        v21[1] = v29;
      }
    }
  }
  return v21;
}
