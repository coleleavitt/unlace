void __fastcall sub_22BF710(__int64 **a1, unsigned int a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  _QWORD *v4; // rax
  __int64 *v5; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // [rsp+8h] [rbp-20h] BYREF

  v2 = **a1;
  v3 = sub_2055240(*a1[2], a2, 0);
  v4 = sub_20AFB20(v3);
  v5 = a1[1];
  v7 = v4;
  v6 = (_QWORD *)sub_20B52A0(v5, &v7, 1, 0, 1);
  sub_20B3610(v2, v6);
}
