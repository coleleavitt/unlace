__int64 __fastcall sub_23E1A0(__int64 a1, __int64 a2, __int64 a3, char *a4, double a5)
{
  int v5; // ebx
  __int64 v6; // rbp
  __int64 i; // rbx
  __int64 bpt_kernel_interface; // rax
  void *v10; // rdi
  __int64 v11; // rsi
  __int64 j; // rbp
  __int64 v13; // rax

  v5 = dword_8CC5F0;
  if ( dword_8CC5F0 )
  {
    v6 = a1;
    if ( dword_8CC5F0 <= 0 || (v5 = 0, (*(_BYTE *)(dbg + 32) & 0x40) == 0) )
    {
      v5 = 0;
      if ( a1 )
      {
        if ( *(_BYTE *)(a1 + 32) )
        {
          for ( i = *(_QWORD *)(a1 + 248); i; i = *(_QWORD *)(i + 8) )
          {
            bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
            a2 = i + 24;
            a1 = bpt_kernel_interface;
            (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)bpt_kernel_interface + 112LL))(
              bpt_kernel_interface,
              i + 24,
              1);
          }
          v10 = qword_8CC600;
          v11 = 14;
          *(_DWORD *)qword_8CC600 = *(_DWORD *)v6;
          v5 = sub_23D480((__int64)v10, 14, a3, a4, a5);
          if ( v5 <= 0 )
          {
            for ( j = *(_QWORD *)(v6 + 248); j; j = *(_QWORD *)(j + 8) )
            {
              v13 = get_bpt_kernel_interface(v10, v11);
              v11 = j + 24;
              v10 = (void *)v13;
              (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v13 + 112LL))(v13, j + 24, 0);
            }
          }
          else
          {
            mark_builtin_widgets(0x4000, 0, 1);
            *(_BYTE *)(v6 + 32) = 0;
          }
        }
      }
    }
  }
  return (unsigned int)v5;
}
