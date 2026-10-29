size_t __fastcall sub_835950(__int64 a1, void *a2, size_t a3)
{
  _QWORD *v5; // rax
  __int64 v6; // rsi
  size_t v7; // rbx

  v5 = *(_QWORD **)(a1 + 8);
  v6 = *(_QWORD *)(a1 + 16);
  v7 = v5[1] - v6;
  if ( v7 > a3 )
    v7 = a3;
  memmove(a2, (const void *)(*v5 + v6), v7);
  *(_QWORD *)(a1 + 16) += v7;
  return v7;
}
