size_t __fastcall sub_4B54B0(_QWORD *a1, void *a2, size_t a3)
{
  __int64 v5; // rsi
  size_t v6; // rbx

  v5 = a1[4];
  v6 = *(_QWORD *)(*a1 + 8LL) - v5;
  if ( v6 > a3 )
    v6 = a3;
  memmove(a2, (const void *)(*(_QWORD *)*a1 + v5), v6);
  a1[4] += v6;
  return v6;
}
