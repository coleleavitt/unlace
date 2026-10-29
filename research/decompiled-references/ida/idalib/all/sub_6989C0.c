unsigned __int64 __fastcall sub_6989C0(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 v15; // rax
  __m128i v16; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(unsigned int *)(a2 + 4);
  v17 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 1840);
  v16 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)(v3 + v4));
  v7 = unpack_dq(&v16);
  v8 = unpack_dq(&v16);
  v9 = 8 * v7;
  v10 = *(_QWORD *)(v6 + 40);
  if ( a3 )
  {
    v13 = *(_QWORD *)(v6 + 48);
    v14 = v8;
    if ( *(_QWORD *)(v6 + 56) < (unsigned __int64)(v13 + 1) )
    {
      v15 = qvector_reserve(v6 + 40, v10, v13 + 1, 8);
      v13 = *(_QWORD *)(v6 + 48);
      *(_QWORD *)(v6 + 40) = v15;
      v10 = v15;
    }
    memmove((void *)(v10 + v9 + 8), (const void *)(v10 + v9), 8 * v13 - v9);
    *(_QWORD *)(v10 + 8 * v7) = v14;
    v11 = *(_QWORD *)(v6 + 48) + 1LL;
  }
  else
  {
    memmove((void *)(v10 + v9), (const void *)(v10 + v9 + 8), 8 * (*(_QWORD *)(v6 + 48) - v7) - 8);
    v11 = *(_QWORD *)(v6 + 48) - 1LL;
  }
  *(_QWORD *)(v6 + 48) = v11;
  *(_OWORD *)(v6 + 64) = -1;
  return v17 - __readfsqword(0x28u);
}
