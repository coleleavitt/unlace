void __fastcall sub_1417B70(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int64 v4; // [rsp+10h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 2960);
  v2 = *(_QWORD *)(v1 - 8);
  *(_QWORD *)(a1 + 2960) = v1 - 8;
  if ( v2 < 0 )
  {
    sub_14179D0((__int64)&ptr, a1);
    if ( ptr != &v4 )
      free(ptr);
  }
}
