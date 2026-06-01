signed __int64 __fastcall mach_msg2_trap(
        void *a1,
        void *a2,
        void *a3,
        void *a4,
        void *a5,
        void *a6,
        void *a7,
        void *a8)
{
  return mac_syscall(-47, a1, a2, a3, a4, a5, a6, a7, a8);
}
