bool __fastcall sub_595302(_QWORD **a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v4; // [rsp+0h] [rbp-10h] BYREF
  _QWORD **v5; // [rsp+8h] [rbp-8h]

  v5 = a1;
  v4 = a2;
  v2 = (_QWORD *)sub_5952F0((__int64)&v4);
  return *v2 == **v5;
}
