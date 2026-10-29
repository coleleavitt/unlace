__int64 __fastcall sub_CEA20(__int64 a1)
{
  int v1; // ebx
  __int64 i; // rbx
  __int64 bpt_kernel_interface; // rax
  void *v6; // rdi
  __int64 j; // rbp
  __int64 v8; // rax

  v1 = dword_25274C;
  if ( dword_25274C )
  {
    if ( dword_25274C <= 0 || (v1 = 0, (*(_BYTE *)(dbg + 32LL) & 0x40) == 0) )
    {
      v1 = 0;
      if ( a1 )
      {
        if ( *(_BYTE *)(a1 + 32) )
        {
          for ( i = *(_QWORD *)(a1 + 248); i; i = *(_QWORD *)(i + 8) )
          {
            bpt_kernel_interface = get_bpt_kernel_interface();
            (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)bpt_kernel_interface + 112LL))(
              bpt_kernel_interface,
              i + 24,
              1);
          }
          v6 = qword_252758;
          *(_DWORD *)qword_252758 = *(_DWORD *)a1;
          v1 = sub_CDCF0((__int64)v6, 14);
          if ( v1 <= 0 )
          {
            for ( j = *(_QWORD *)(a1 + 248); j; j = *(_QWORD *)(j + 8) )
            {
              v8 = get_bpt_kernel_interface();
              (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v8 + 112LL))(v8, j + 24, 0);
            }
          }
          else
          {
            mark_builtin_widgets();
            *(_BYTE *)(a1 + 32) = 0;
          }
        }
      }
    }
  }
  return (unsigned int)v1;
}

