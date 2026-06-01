signed __int64 __fastcall mach_msg2(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned int *a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        void *a7,
        __int64 a8)
{
  _DWORD *v8; // x9
  __int64 v9; // x11

  v8 = a1;
  if ( (a2 & 0x100000000LL) != 0 )
    v8 = (_DWORD *)*a1;
  if ( (a2 & 1) != 0 && (*v8 & 0x80000000) != 0 )
    v9 = (unsigned int)v8[6];
  else
    v9 = 0;
  return mach_msg2_internal_0(
           a1,
           a2,
           (void *)(*a3 | (unsigned __int64)(a4 << 32)),
           *((void **)a3 + 1),
           *((void **)a3 + 2),
           (void *)(v9 | (a6 << 32)),
           (void *)(a5 | (unsigned __int64)(a8 << 32)),
           a7);
}
