void __fastcall sub_69F700(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  void *v13; // rdi
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // rax

  sub_69F460((__int64)(a1 + 5), a2, a3, a4, a6, a7, a8);
  sub_69F5A0((__int64)(a1 + 2), a2, a3, a4, a6, a7, a8, a9);
  if ( a5 )
  {
    v14 = sub_3BDD60(*(_QWORD **)(*a1 + 1672LL), a2);
    v15 = sub_3BDD60(*(_QWORD **)(*a1 + 1672LL), a3);
    sub_7BEE10(a1 + 1, *a1, v14, v15, a4, 84);
  }
  v13 = (void *)a1[10];
  *((_OWORD *)a1 + 4) = -1;
  if ( v13 )
  {
    a1[11] = 0;
    qfree(v13);
    a1[10] = 0;
    a1[12] = 0;
  }
}
