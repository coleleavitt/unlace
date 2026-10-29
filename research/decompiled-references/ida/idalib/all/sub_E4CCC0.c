void __fastcall sub_E4CCC0(__int64 a1, __int64 a2, const void *a3, size_t a4)
{
  __int64 v5; // rbp
  void *v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r9

  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(void **)(v5 + 32);
  if ( *(_QWORD *)(v5 + 24) - (_QWORD)v6 < a4 )
  {
    sub_227BF10(v5, a3, a4);
  }
  else if ( a4 )
  {
    memcpy(v6, a3, a4);
    *(_QWORD *)(v5 + 32) += a4;
  }
  sub_E3FB80(a1, *(_QWORD *)(a2 + 8));
  sub_E486B0(a1, *(unsigned __int16 **)(a2 + 16), (unsigned __int16 *)0xFFFFFFFFLL, 0, v7, v8);
}
