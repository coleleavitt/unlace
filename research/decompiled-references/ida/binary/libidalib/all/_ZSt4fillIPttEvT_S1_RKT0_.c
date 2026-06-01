__int64 __fastcall std::fill<unsigned short *,unsigned short>(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax

  v3 = std::__niter_base<unsigned short *>(a2);
  v4 = std::__niter_base<unsigned short *>(a1);
  return std::__fill_a<unsigned short *,unsigned short>(v4, v3, a3);
}

