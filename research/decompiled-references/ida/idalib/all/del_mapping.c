__int64 __fastcall del_mapping(__int64 a1)
{
  _QWORD *v1; // rbp
  __int64 v2; // rbx
  __int64 v3; // rax

  v1 = *(_QWORD **)(qword_2CCB598 + 1672);
  sub_505AA0(v1 + 315, a1, 1);
  v2 = sub_631AD0(*v1, 20);
  v3 = sub_631AD0(*v1, 19);
  return auto_mark_range(v3, v2, 40);
}
