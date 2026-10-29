void __fastcall sub_213A120(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rdi
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rbp
  __int64 v7; // rax
  __m128 *v8; // rsi

  v2 = *(_QWORD *)(a1 + 368);
  v3 = *(_QWORD **)(a1 + 32);
  v4 = *(_QWORD *)(v2 - 8);
  v5 = *(_DWORD *)(v4 + 8);
  v6 = *(_QWORD *)(v4 + 16);
  if ( !v5 )
  {
    v5 = sub_2239B50(v3, *(_QWORD *)(v4 + 16));
    v3 = *(_QWORD **)(a1 + 32);
  }
  *(_DWORD *)(a1 + 296) = v5;
  v7 = *(_QWORD *)(*v3 + 24LL * (unsigned int)(v5 - 1));
  v8 = *(__m128 **)(v7 + 8);
  sub_2124C60(a1 + 48, (__int64)v8, *(_QWORD *)(v7 + 16) - (_QWORD)v8, v6, 1);
  sub_2132C70(a1, v8);
  if ( *(_DWORD *)sub_2153C00(a1) == 9 )
    sub_2132C70(a1, v8);
  operator delete(*(void **)(*(_QWORD *)(a1 + 368) - 8LL), 0x20u);
  *(_QWORD *)(a1 + 368) -= 8LL;
}
