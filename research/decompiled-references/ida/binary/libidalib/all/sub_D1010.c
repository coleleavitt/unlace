__int64 __fastcall sub_D1010(__int64 a1, const void *a2, unsigned int a3)
{
  _QWORD *v6; // rdi
  unsigned int v7; // ebp
  void *v8; // rax
  const void *v9; // r12
  __int64 bpt_kernel_interface; // rax

  if ( dword_25274C > 0 && (*(_BYTE *)(dbg + 32LL) & 0x40) != 0 )
    return 0;
  if ( (dword_245190 & 0x400) == 0 && (*(_BYTE *)(dbg + 32LL) & 0x10) == 0 )
  {
    v8 = (void *)qalloc();
    v9 = v8;
    if ( !v8 )
      sub_98FF0((__int64)"dbg_write_memory", a2);
    memcpy(v8, a2, (int)a3);
    bpt_kernel_interface = get_bpt_kernel_interface();
    (*(void (__fastcall **)(__int64, const void *, __int64, _QWORD))(*(_QWORD *)bpt_kernel_interface + 24LL))(
      bpt_kernel_interface,
      v9,
      a1,
      a3);
    a2 = v9;
  }
  v6 = qword_252758;
  if ( qword_252758
    && (*((_QWORD *)qword_252758 + 1) = a2, *v6 = a1, v6[2] = (int)a3, (int)sub_CDCF0((__int64)v6, 20) > 0) )
  {
    v7 = *((_QWORD *)qword_252758 + 2);
    if ( *((__int64 *)qword_252758 + 2) > 0 )
    {
      invalidate_dbgmem_contents();
      HIDWORD(qword_252280) = 0;
    }
  }
  else
  {
    v7 = -1;
  }
  qfree();
  return v7;
}

