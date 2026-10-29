signed __int64 __fastcall msyscall_errno(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        void *a9,
        void *a10,
        void *a11,
        void *a12,
        void *a13,
        void *a14,
        void *a15,
        void *a16)
{
  char v16; // cf
  signed __int64 result; // x0

  result = mac_syscall(a1, a9, a10, a11, a12, a13, a14, a15, a16);
  if ( v16 )
    return cerror_0(result);
  return result;
}
