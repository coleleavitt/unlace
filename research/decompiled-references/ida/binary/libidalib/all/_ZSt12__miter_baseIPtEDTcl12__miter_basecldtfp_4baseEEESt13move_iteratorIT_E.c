__int64 __fastcall std::__miter_base<unsigned short *>(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // [rsp+8h] [rbp-8h] BYREF

  v3 = a1;
  v1 = std::move_iterator<unsigned short *>::base(&v3);
  return std::__miter_base<unsigned short *>(v1);
}

