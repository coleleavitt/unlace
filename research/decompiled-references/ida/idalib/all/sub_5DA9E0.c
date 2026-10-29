_QWORD *__fastcall sub_5DA9E0(__int64 *a1, __int64 a2)
{
  _QWORD *v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rbx
  void *v6; // rdi

  v2 = *(_QWORD **)(qword_2CCB598 + 1624);
  v3 = fopenWT(a2);
  if ( !v3 )
    sub_378D50();
  v4 = v3;
  sub_5DA740(a1, v3);
  qfclose(v4);
  v5 = v2[132];
  while ( v5 )
  {
    sub_5D85A0(*(_QWORD **)(v5 + 24));
    v6 = (void *)v5;
    v5 = *(_QWORD *)(v5 + 16);
    operator delete(v6, 0x28u);
  }
  v2[132] = 0;
  v2[133] = v2 + 131;
  v2[134] = v2 + 131;
  v2[135] = 0;
  return v2 + 131;
}
