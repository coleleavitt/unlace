void __fastcall sub_401CC0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  void *v5; // rbp
  void *v6[9]; // [rsp+0h] [rbp-48h] BYREF

  v6[5] = (void *)__readfsqword(0x28u);
  sub_3F98E0((__int64)v6, a1);
  sub_400520(a1, *(_QWORD *)(a1 + 280), v1, v2, v3, v4);
  v5 = v6[0];
  if ( v6[1] != v6[0] )
    sub_3F6450(a1, (__int64)v6);
  if ( v5 )
    operator delete(v5, (char *)v6[2] - (char *)v5);
}
