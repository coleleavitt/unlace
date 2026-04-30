__int64 __fastcall sub_240310(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char *a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  unsigned int v12; // r14d
  void *v15; // r12
  _QWORD *v16; // rdi
  unsigned int v17; // ebp
  void *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  void *v25; // rdi
  __int64 bpt_kernel_interface; // rax
  char v27; // [rsp+0h] [rbp-38h]

  v12 = a3;
  if ( dword_8CC5F0 > 0 && (*(_BYTE *)(dbg + 32) & 0x40) != 0 )
    return 0;
  if ( (dword_8BA5B0 & 0x400) != 0 )
  {
    v15 = nullptr;
  }
  else
  {
    v15 = nullptr;
    if ( (*(_BYTE *)(dbg + 32) & 0x10) == 0 )
    {
      v18 = (void *)qalloc((int)a3);
      v15 = v18;
      if ( !v18 )
        sub_22DB40((int)"dbg_write_memory", a2, v19, v20, v21, v22, a5, a6, a7, a8, v23, v24, a11, a12, v27);
      v25 = v18;
      memcpy(v18, (const void *)a2, (int)v12);
      bpt_kernel_interface = get_bpt_kernel_interface(v25, a2);
      (*(void (__fastcall **)(__int64, void *, __int64, _QWORD))(*(_QWORD *)bpt_kernel_interface + 24LL))(
        bpt_kernel_interface,
        v15,
        a1,
        v12);
      a2 = (__int64)v15;
    }
  }
  v16 = qword_8CC600;
  if ( qword_8CC600
    && (*((_QWORD *)qword_8CC600 + 1) = a2,
        a2 = 20,
        *v16 = a1,
        v16[2] = (int)v12,
        (int)sub_23D480((__int64)v16, 20, a3, a4, *(double *)a5.m128_u64) > 0) )
  {
    v17 = *((_QWORD *)qword_8CC600 + 2);
    if ( *((__int64 *)qword_8CC600 + 2) > 0 )
    {
      a2 = (int)v12;
      invalidate_dbgmem_contents(a1, (int)v12);
      HIDWORD(qword_8CC120) = 0;
    }
  }
  else
  {
    v17 = -1;
  }
  qfree(v15, (const char *)a2);
  return v17;
}
