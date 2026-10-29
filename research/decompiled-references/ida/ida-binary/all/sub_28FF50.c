__int64 __fastcall interactive_graph_t__::vfunc_24(__int64 a1, const __m128i *a2)
{
  __int64 v2; // rdx
  __m128i si128; // xmm0
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64); // rdx
  unsigned int v7; // ebp
  __int64 v9; // rax
  __m128i v10[2]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 232);
  if ( !a2 )
    a2 = (const __m128i *)&xmmword_8CC930;
  si128 = _mm_loadu_si128(a2);
  v4 = *(_QWORD *)(a1 + 224);
  if ( *(_QWORD *)(a1 + 240) < (unsigned __int64)(v2 + 1) )
  {
    v10[0] = si128;
    v9 = qvector_reserve(a1 + 224, v4, v2 + 1, 16);
    v2 = *(_QWORD *)(a1 + 232);
    si128 = _mm_load_si128(v10);
    *(_QWORD *)(a1 + 224) = v9;
    v4 = v9;
  }
  *(__m128i *)(v4 + 16 * v2) = si128;
  v5 = *(_QWORD *)a1;
  ++*(_QWORD *)(a1 + 232);
  v6 = *(__int64 (__fastcall **)(__int64))(v5 + 56);
  if ( v6 == interactive_graph_t__::vfunc_7 )
  {
    v7 = *(_DWORD *)(a1 + 184);
  }
  else
  {
    v7 = v6(a1);
    v5 = *(_QWORD *)a1;
  }
  (*(void (__fastcall **)(__int64, _QWORD))(v5 + 184))(a1, v7 + 1);
  return v7;
}
