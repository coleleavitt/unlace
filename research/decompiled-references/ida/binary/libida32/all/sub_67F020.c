void __fastcall sub_67F020(__int64 *a1, unsigned int a2, unsigned int a3, unsigned int a4, char a5)
{
  void *v9; // rdi
  unsigned int v10; // r13d
  unsigned int v11; // eax

  sub_67ED80((__int64)(a1 + 5), a2, a3, a4);
  sub_67EEC0(a1 + 2, a2, a3, a4);
  if ( a5 )
  {
    v10 = sub_3B90A0(*(_QWORD **)(*a1 + 1480), a2);
    v11 = sub_3B90A0(*(_QWORD **)(*a1 + 1480), a3);
    sub_79BA30(a1 + 1, *a1, v10, v11, a4, 84);
  }
  v9 = (void *)a1[9];
  a1[8] = -1;
  if ( v9 )
  {
    a1[10] = 0;
    qfree(v9);
    a1[9] = 0;
    a1[11] = 0;
  }
}

