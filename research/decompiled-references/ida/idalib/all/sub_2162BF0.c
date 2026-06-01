_QWORD *__fastcall sub_2162BF0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v5; // rbp

  v4 = sub_2195B10(a1, a2, a3, a4);
  v5 = operator new(0x40u);
  sub_2220590(v5, a2, 3, v4);
  *a1 = v5;
  return a1;
}
