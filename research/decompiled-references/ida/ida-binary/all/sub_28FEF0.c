__int64 __fastcall interactive_graph_t__::vfunc_30(__int64 a1, int a2, const __m128i *a3)
{
  __int64 (*v3)(void); // rax
  int v4; // eax
  unsigned int v5; // ecx
  const __m128i *v7; // [rsp+8h] [rbp-20h]

  v3 = *(__int64 (**)(void))(*(_QWORD *)a1 + 56LL);
  if ( (char *)v3 == (char *)interactive_graph_t__::vfunc_7 )
  {
    v4 = *(_DWORD *)(a1 + 184);
  }
  else
  {
    v7 = a3;
    v4 = v3();
    a3 = v7;
  }
  v5 = 0;
  if ( v4 > a2 )
  {
    v5 = 1;
    *(__m128i *)(*(_QWORD *)(a1 + 224) + 16LL * a2) = _mm_loadu_si128(a3);
  }
  return v5;
}
