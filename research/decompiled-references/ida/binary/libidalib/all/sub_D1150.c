__int64 __fastcall sub_D1150(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // ebx
  _QWORD *v6; // rdi
  __int64 bpt_kernel_interface; // rax

  if ( dword_25274C <= 0 || (v5 = 0, (*(_BYTE *)(dbg + 32LL) & 0x40) == 0) )
  {
    v6 = qword_252758;
    if ( qword_252758
      && (*(_QWORD *)qword_252758 = a1, v6[1] = a2, v6[2] = (int)a3, (int)sub_CDCF0((__int64)v6, 19) > 0) )
    {
      v5 = *((_QWORD *)qword_252758 + 2);
      if ( *((__int64 *)qword_252758 + 2) > 0 && (dword_245190 & 0x400) == 0 && (*(_BYTE *)(dbg + 32LL) & 0x10) == 0 )
      {
        bpt_kernel_interface = get_bpt_kernel_interface();
        (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)bpt_kernel_interface + 32LL))(
          bpt_kernel_interface,
          a2,
          a1,
          a3);
      }
    }
    else
    {
      return (unsigned int)-1;
    }
  }
  return v5;
}

