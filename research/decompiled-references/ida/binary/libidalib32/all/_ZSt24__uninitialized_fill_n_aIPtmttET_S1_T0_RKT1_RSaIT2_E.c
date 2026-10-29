__int64 __fastcall std::__uninitialized_fill_n_a<unsigned short *,unsigned long,unsigned short,unsigned short>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  return std::uninitialized_fill_n<unsigned short *,unsigned long,unsigned short>(
           a1,
           a2,
           a3,
           a2,
           a5,
           a6,
           a4,
           a3,
           a2,
           a1);
}

