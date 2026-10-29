void __fastcall sub_4D04C0(__int64 a1, int a2)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  __int64 (__fastcall *v5)(__int64); // rax
  __int64 v6; // rdi
  int v7; // [rsp+0h] [rbp-28h]
  void *v8; // [rsp+8h] [rbp-20h]

  sub_4DB8C0(a1 + 408, a1 + 296);
  sub_4DB7E0(a1 + 408);
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_4DBD20(a1 + 296, 1000, a2, v2, v3, v4, v7, v8);
  v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 192LL);
  if ( v5 == sub_4D0080 )
  {
    sub_4C43E0(a1 + 64);
  }
  else
  {
    v6 = v5(a1);
    sub_4C43E0(v6);
  }
}

