__int64 __fastcall std::__uninitialized_default_n_1<true>::__uninit_default_n<unsigned short *,unsigned long>(
        __int64 a1,
        __int64 a2)
{
  __int16 v3; // [rsp+1Eh] [rbp-2h] BYREF

  v3 = 0;
  return std::fill_n<unsigned short *,unsigned long,unsigned short>(a1, a2, &v3);
}

