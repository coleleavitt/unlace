void __fastcall __noreturn abort_with_payload_wrapper_internal(
        void *a1,
        void *a2,
        void *a3,
        void *a4,
        void *a5,
        unsigned __int64 a6)
{
  void *v12; // x6
  void *v13; // x7
  void *v14; // x0
  void *v15; // x7
  sigset_t v16; // [xsp+Ch] [xbp-34h] BYREF

  v16 = 32;
  sigprocmask(2, &v16, nullptr);
  __abort_with_payload(a1, a2, a3, a4, a5, (void *)a6, v12, v13);
  v14 = (void *)__getpid();
  terminate_with_payload(v14, a1, a2, a3, a4, a5, (void *)(a6 | 0x200), v15);
  __break(1u);
}
