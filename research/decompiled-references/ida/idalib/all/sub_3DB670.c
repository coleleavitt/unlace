_QWORD *__fastcall sub_3DB670(_QWORD *a1)
{
  __int64 v2; // rbp
  void *v3; // rdi
  __int64 v4; // rbp
  void *v5; // rdi
  __int64 v6; // rbp
  void *v7; // rdi

  v2 = a1[187];
  while ( v2 )
  {
    sub_3D9180(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x30u);
  }
  v4 = a1[311];
  a1[187] = 0;
  a1[188] = a1 + 186;
  a1[189] = a1 + 186;
  a1[190] = 0;
  while ( v4 )
  {
    sub_3D8FB0(*(_QWORD **)(v4 + 24));
    v5 = (void *)v4;
    v4 = *(_QWORD *)(v4 + 16);
    operator delete(v5, 0x50u);
  }
  v6 = a1[93];
  a1[311] = 0;
  a1[312] = a1 + 310;
  a1[313] = a1 + 310;
  a1[314] = 0;
  while ( v6 )
  {
    sub_3D9350(*(_QWORD **)(v6 + 24));
    v7 = (void *)v6;
    v6 = *(_QWORD *)(v6 + 16);
    operator delete(v7, 0x28u);
  }
  a1[93] = 0;
  a1[94] = a1 + 92;
  a1[95] = a1 + 92;
  a1[96] = 0;
  return a1 + 92;
}
