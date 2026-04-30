__int64 __fastcall ida_ui_proxy_t__::vfunc_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  unsigned int v15; // r12d
  _QWORD *v16; // rbp
  _QWORD *v17; // rdi
  const char *v18; // rbp
  size_t v19; // rax
  double v20; // xmm4_8
  double v21; // xmm5_8
  char v23; // [rsp+0h] [rbp-48h]
  int v24; // [rsp+Ch] [rbp-3Ch] BYREF
  void *ptr[7]; // [rsp+10h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  v15 = *(unsigned __int8 *)(a1 + 32);
  if ( (_BYTE)v15 )
  {
    v24 = 0;
    v16 = QT::QCoreApplication::self;
    if ( a2 )
    {
      check_process_exit(a2, &v24, 0xFFFFFFFFLL);
    }
    else
    {
      v15 = 0;
      sub_169630((int)"Failed to launch child process", 0, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, v23);
    }
    v17 = v16 + 2;
    v18 = &s1;
    sub_541CC0(v17);
    v19 = 0;
    if ( *(_QWORD *)(a1 + 16) )
    {
      v18 = *(const char **)(a1 + 8);
      if ( v18 )
      {
        if ( *v18 )
          v19 = strlen(v18 + 1) + 1;
      }
    }
    *(double *)a7.m128_u64 = QT::QString::fromUtf8(ptr, v19, v18);
    sub_30A6D0((QT::QString *)ptr, nullptr, a7, a8, a9, a10, v20, v21, a13, a14);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  else
  {
    return 1;
  }
  return v15;
}
