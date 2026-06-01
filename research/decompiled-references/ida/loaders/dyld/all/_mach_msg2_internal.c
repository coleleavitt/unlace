signed __int64 __fastcall mach_msg2_internal(
        void *a1,
        unsigned __int64 a2,
        void *a3,
        void *a4,
        void *a5,
        void *a6,
        void *a7,
        void *a8)
{
  void *v16; // x27
  signed __int64 result; // x0
  unsigned __int64 v18; // x8
  void *v19; // x26

  v16 = (void *)(a2 & 0xFFFFFFFFFFFFFBBFLL);
  result = mach_msg2_trap(a1, (void *)(a2 & 0xFFFFFFFFFFFFFBBFLL), a3, a4, a5, a6, a7, a8);
  if ( (_DWORD)result )
  {
    if ( (a2 & 0x40) == 0 )
    {
      while ( (_DWORD)result == 268435463 )
        result = mach_msg2_trap(a1, v16, a3, a4, a5, a6, a7, a8);
    }
    if ( (a2 & 0x400) == 0 && (_DWORD)result == 268451845 )
    {
      if ( (~(_BYTE)a2 & 3) != 0 )
        v18 = a2;
      else
        v18 = a2 & 0xFFFFFFFFFFFFBBBELL;
      v19 = (void *)(v18 & 0xFFFFFFFFFFFFFBBELL);
      do
        result = mach_msg2_trap(a1, v19, (void *)(unsigned int)a3, a4, a5, a6, a7, a8);
      while ( (_DWORD)result == 268451845 );
    }
  }
  return result;
}
