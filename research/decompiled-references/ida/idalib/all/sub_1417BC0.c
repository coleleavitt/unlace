__int64 __fastcall sub_1417BC0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v5; // [rsp+10h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 2960);
  v2 = *(_QWORD *)(v1 - 8);
  *(_QWORD *)(a1 + 2960) = v1 - 8;
  if ( v2 >= 0 )
  {
    *(_QWORD *)(a1 + 2944) = v2;
    return sub_145C660(a1);
  }
  *(_QWORD *)(a1 + 2944) = ~v2;
  sub_14179D0((__int64)ptr, a1);
  sub_14178A0((char ***)(a1 + 2904), (char ***)ptr);
  if ( ptr[0] == &v5 )
    return sub_145C660(a1);
  free(ptr[0]);
  return sub_145C660(a1);
}
