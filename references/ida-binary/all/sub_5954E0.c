bool __fastcall sub_5954E0(__int64 **a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax
  _QWORD v5[4]; // [rsp+0h] [rbp-20h] BYREF

  v5[1] = a1;
  v5[0] = a2;
  v2 = **a1;
  v3 = (_QWORD *)sub_595872(v5);
  return sub_593630(v3, v2);
}
