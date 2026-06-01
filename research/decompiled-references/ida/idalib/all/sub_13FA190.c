void __fastcall sub_13FA190(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 *v3; // rax
  __int64 v4; // [rsp+8h] [rbp-10h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v4 = a2;
  v3 = *(__int64 **)(v2 + 8);
  if ( v3 == *(__int64 **)(v2 + 16) )
  {
    sub_13FA040(v2, *(const void **)(v2 + 8), &v4);
  }
  else
  {
    *v3 = a2;
    *(_QWORD *)(v2 + 8) = v3 + 1;
  }
}
