void __fastcall sub_225C440(__int64 a1, _QWORD **a2)
{
  void *v2[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v3; // [rsp+10h] [rbp-28h] BYREF

  sub_2253560(v2, a2);
  sub_A0AAD0(a1 + 16, v2);
  if ( v2[0] != &v3 )
    operator delete(v2[0]);
}
