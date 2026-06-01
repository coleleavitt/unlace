__int64 __fastcall sub_2404E0(__int64 a1, __int64 a2, __int64 a3, char *a4, double a5)
{
  unsigned int v6; // ebp
  unsigned int v7; // ebx
  _QWORD *v8; // rdi
  __int64 bpt_kernel_interface; // rax

  v6 = a3;
  if ( dword_8CC5F0 <= 0 || (v7 = 0, (*(_BYTE *)(dbg + 32) & 0x40) == 0) )
  {
    v8 = qword_8CC600;
    if ( qword_8CC600
      && (*(_QWORD *)qword_8CC600 = a1, v8[1] = a2, v8[2] = (int)a3, (int)sub_23D480((__int64)v8, 19, a3, a4, a5) > 0) )
    {
      v7 = *((_QWORD *)qword_8CC600 + 2);
      if ( *((__int64 *)qword_8CC600 + 2) > 0 && (dword_8BA5B0 & 0x400) == 0 && (*(_BYTE *)(dbg + 32) & 0x10) == 0 )
      {
        bpt_kernel_interface = get_bpt_kernel_interface(v8, 19);
        (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)bpt_kernel_interface + 32LL))(
          bpt_kernel_interface,
          a2,
          a1,
          v6);
      }
    }
    else
    {
      return (unsigned int)-1;
    }
  }
  return v7;
}
