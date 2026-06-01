const char *__fastcall sub_10B7720(__int64 a1)
{
  const char *v1; // rbx
  void *v3[2]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v4; // [rsp+10h] [rbp-68h] BYREF
  void *v5; // [rsp+20h] [rbp-58h] BYREF
  _DWORD v6[18]; // [rsp+30h] [rbp-48h] BYREF

  sub_22984A0(v3, *(_QWORD *)(a1 + 944), *(_QWORD *)(a1 + 952), 0);
  sub_2296190(&v5, v3);
  if ( v3[0] != &v4 )
    operator delete(v3[0]);
  v1 = "a.exe";
  if ( v6[7] != 15 )
    v1 = "a.out";
  if ( v5 != v6 )
    operator delete(v5);
  return v1;
}

