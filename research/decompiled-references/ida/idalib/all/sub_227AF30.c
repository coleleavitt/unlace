void __fastcall sub_227AF30(__int64 a1, const void *a2, size_t a3)
{
  _QWORD *v3; // rbp
  __int64 v5; // rdi
  unsigned __int64 v6; // rdx

  v3 = *(_QWORD **)(a1 + 48);
  v5 = v3[1];
  v6 = v5 + a3;
  if ( v6 > v3[2] )
  {
    sub_2236E10((__int64)v3, v3 + 3, v6, 1);
    v5 = v3[1];
  }
  if ( a3 )
  {
    memcpy((void *)(*v3 + v5), a2, a3);
    v5 = v3[1];
  }
  v3[1] = v5 + a3;
}
