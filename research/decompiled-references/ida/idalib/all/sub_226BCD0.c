void __fastcall sub_226BCD0(
        void **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        volatile signed __int32 **a7)
{
  volatile signed __int32 *v8; // r8
  void *v9; // rax
  __int64 *v10; // r14
  size_t v11; // rax
  size_t v12; // rax
  __int64 *v13; // [rsp+10h] [rbp-210h] BYREF
  void *ptr; // [rsp+18h] [rbp-208h] BYREF
  __int64 v15; // [rsp+20h] [rbp-200h]
  _QWORD v16[16]; // [rsp+28h] [rbp-1F8h] BYREF
  volatile signed __int32 *v17[40]; // [rsp+A8h] [rbp-178h] BYREF
  char v18; // [rsp+1E8h] [rbp-38h]

  v8 = *a7;
  *a7 = nullptr;
  v9 = *a1;
  *a1 = nullptr;
  v17[0] = v8;
  ptr = v9;
  sub_226B960(&v13, (_QWORD **)&ptr, a2, a3, a4, a6, v17);
  if ( ptr )
    (*(void (__fastcall **)(void *, void **))(*(_QWORD *)ptr + 8LL))(ptr, &ptr);
  if ( v17[0] )
    sub_12E0400(v17[0] + 2);
  v10 = v13;
  if ( v13 )
  {
    v11 = j__strlen("/");
    sub_22668A0((__int64)v17, (__int64)v10, "/", v11);
    if ( (v18 & 1) == 0 )
    {
      ptr = v16;
      v15 = 0x800000000LL;
      v12 = j__strlen("/");
      v16[0] = "/";
      v16[1] = v12;
      LODWORD(v15) = 1;
      sub_225DF10((__int64)v17[34], (__int64)&ptr, a5);
      if ( ptr != v16 )
        free(ptr);
      if ( (v18 & 1) == 0 )
        sub_225BE70((__int64)v17);
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64 *))(*v13 + 8))(v13);
  }
}
