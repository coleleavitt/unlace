__int64 __fastcall sub_CF960(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *i; // r12
  __int64 v3; // rax
  bool v4; // zf
  __int64 v5; // rax
  __int64 v6; // rbp
  void *v8; // rdi
  __int64 j; // rbp
  __int64 bpt_kernel_interface; // rax

  v1 = *(_QWORD **)(a1 + 48);
  for ( i = &v1[*(_QWORD *)(a1 + 56)]; i != v1; ++v1 )
  {
    if ( dword_25274C && (dword_25274C <= 0 || (*(_BYTE *)(dbg + 32LL) & 0x40) == 0) )
    {
      v3 = *v1 << 8;
      v4 = qword_252590 + v3 == 0;
      v5 = qword_252590 + v3;
      v6 = v5;
      if ( !v4 && !*(_BYTE *)(v5 + 32) )
      {
        v8 = qword_252758;
        *(_DWORD *)qword_252758 = *(_DWORD *)v5;
        if ( (int)sub_CDCF0((__int64)v8, 13) > 0 )
        {
          mark_builtin_widgets();
          *(_BYTE *)(v6 + 32) = 1;
          for ( j = *(_QWORD *)(v6 + 248); j; j = *(_QWORD *)(j + 8) )
          {
            bpt_kernel_interface = get_bpt_kernel_interface();
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)bpt_kernel_interface + 112LL))(
              bpt_kernel_interface,
              j + 24,
              0);
          }
        }
      }
    }
  }
  return 1;
}

