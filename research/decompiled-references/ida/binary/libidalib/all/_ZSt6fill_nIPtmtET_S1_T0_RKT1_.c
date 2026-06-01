__int64 __fastcall std::fill_n<unsigned short *,unsigned long,unsigned short>(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax

  v3 = std::__niter_base<unsigned short *>(a1);
  return std::__fill_n_a<unsigned short *,unsigned long,unsigned short>(v3, a2, a3);
}

