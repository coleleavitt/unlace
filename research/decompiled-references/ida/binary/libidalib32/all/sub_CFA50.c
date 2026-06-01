__int64 __fastcall sub_CFA50(unsigned int a1, const void *a2, unsigned int a3)
{
  _QWORD *v6; // rdi
  unsigned int v7; // r12d
  void *v8; // rax
  const void *v9; // r13
  __int64 bpt_kernel_interface; // rax

  if ( dword_2515A4 > 0 && (*(_BYTE *)(dbg + 32LL) & 0x40) != 0 )
    return 0;
  if ( (dword_24412C & 0x400) == 0 && (*(_BYTE *)(dbg + 32LL) & 0x10) == 0 )
  {
    v8 = (void *)qalloc();
    v9 = v8;
    if ( !v8 )
      sub_98F10((__int64)"dbg_write_memory", a2);
    memcpy(v8, a2, (int)a3);
    bpt_kernel_interface = get_bpt_kernel_interface();
    (*(void (__fastcall **)(__int64, const void *, _QWORD, _QWORD))(*(_QWORD *)bpt_kernel_interface + 24LL))(
      bpt_kernel_interface,
      v9,
      a1,
      a3);
    a2 = v9;
  }
  v6 = qword_2515B0;
  if ( qword_2515B0
    && (*((_QWORD *)qword_2515B0 + 1) = a2, *(_DWORD *)v6 = a1, v6[2] = (int)a3, (int)sub_CC780((__int64)v6, 20) > 0) )
  {
    v7 = *((_QWORD *)qword_2515B0 + 2);
    if ( *((__int64 *)qword_2515B0 + 2) > 0 )
    {
      invalidate_dbgmem_contents();
      HIDWORD(qword_2511A0) = 0;
    }
  }
  else
  {
    v7 = -1;
  }
  qfree();
  return v7;
}

