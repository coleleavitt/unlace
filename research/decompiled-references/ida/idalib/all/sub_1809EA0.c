unsigned __int64 __fastcall sub_1809EA0(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  unsigned __int64 result; // rax
  __m128i si128; // xmm0
  void *v10; // rdi
  unsigned __int64 v11; // r13
  const void *v12; // rsi
  size_t v13; // rdx
  unsigned __int64 v14; // r12

  v4 = *(unsigned int *)(a1 + 8);
  v5 = *(_QWORD *)a1;
  v6 = v4 + 1;
  v7 = *(_QWORD *)a1 + 88 * v4;
  result = *(unsigned int *)(a1 + 12);
  if ( v6 > result )
  {
    if ( v5 > a2 || v7 <= a2 )
    {
      sub_1809D00(a1, v6);
      result = *(_QWORD *)a1;
      v7 = *(_QWORD *)a1 + 88LL * *(unsigned int *)(a1 + 8);
    }
    else
    {
      v14 = a2 - v5;
      sub_1809D00(a1, v6);
      a2 = *(_QWORD *)a1 + v14;
      result = 11LL * *(unsigned int *)(a1 + 8);
      v7 = *(_QWORD *)a1 + 88LL * *(unsigned int *)(a1 + 8);
    }
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  v10 = (void *)(v7 + 24);
  *(_QWORD *)v7 = v7 + 24;
  *(__m128i *)(v7 + 8) = si128;
  v11 = *(_QWORD *)(a2 + 8);
  if ( !v11 || a2 == v7 )
    goto LABEL_4;
  v12 = (const void *)(a2 + 24);
  if ( *(_QWORD *)a2 == a2 + 24 )
  {
    v13 = *(_QWORD *)(a2 + 8);
    if ( v11 <= 0x40
      || (result = sub_2236E10(v7, v7 + 24, v13, 1),
          v13 = *(_QWORD *)(a2 + 8),
          v10 = *(void **)v7,
          v12 = *(const void **)a2,
          v13) )
    {
      result = (unsigned __int64)memcpy(v10, v12, v13);
    }
    *(_QWORD *)(v7 + 8) = v11;
    *(_QWORD *)(a2 + 8) = 0;
LABEL_4:
    ++*(_DWORD *)(a1 + 8);
    return result;
  }
  *(_QWORD *)v7 = *(_QWORD *)a2;
  result = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(v7 + 8) = v11;
  *(_QWORD *)(v7 + 16) = result;
  *(_QWORD *)a2 = v12;
  *(_OWORD *)(a2 + 8) = 0;
  ++*(_DWORD *)(a1 + 8);
  return result;
}
