_QWORD *__fastcall sub_1300E20(_QWORD *a1)
{
  void *v2[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v3; // [rsp+10h] [rbp-28h] BYREF

  sub_228B760(v2);
  sub_10DAE60(a1, (__int64)v2[0], (__int64)v2[1]);
  if ( v2[0] != &v3 )
    operator delete(v2[0]);
  return a1;
}
