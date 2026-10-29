_QWORD *__fastcall sub_3D57A0(_QWORD *a1)
{
  __int64 v2; // rbp
  void *v3; // rdi
  __int64 v4; // rbp
  void *v5; // rdi
  __int64 v6; // rbp
  void *v7; // rdi

  v2 = a1[181];
  while ( v2 )
  {
    sub_3D3610(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x28u);
  }
  v4 = a1[297];
  a1[181] = 0;
  a1[182] = a1 + 180;
  a1[183] = a1 + 180;
  a1[184] = 0;
  while ( v4 )
  {
    sub_3D3270(*(_QWORD **)(v4 + 24));
    v5 = (void *)v4;
    v4 = *(_QWORD *)(v4 + 16);
    operator delete(v5, 0x40u);
  }
  v6 = a1[92];
  a1[297] = 0;
  a1[298] = a1 + 296;
  a1[299] = a1 + 296;
  a1[300] = 0;
  while ( v6 )
  {
    sub_3D3440(*(_QWORD **)(v6 + 24));
    v7 = (void *)v6;
    v6 = *(_QWORD *)(v6 + 16);
    operator delete(v7, 0x28u);
  }
  a1[92] = 0;
  a1[93] = a1 + 91;
  a1[94] = a1 + 91;
  a1[95] = 0;
  return a1 + 91;
}

