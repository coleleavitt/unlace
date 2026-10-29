__int64 __fastcall del_mapping(unsigned int a1)
{
  _QWORD *v1; // rbp
  unsigned int v2; // ebx
  unsigned int v3; // eax

  v1 = *(_QWORD **)(qword_2CA1698 + 1480);
  sub_4EE550(v1 + 301, a1, 1);
  v2 = sub_614FB0(*v1, 20);
  v3 = sub_614FB0(*v1, 19);
  return auto_mark_range(v3, v2, 40);
}

