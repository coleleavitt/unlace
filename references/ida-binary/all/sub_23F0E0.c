__int64 __fastcall sub_23F0E0(__int64 a1, double a2, __int64 a3, __int64 a4, char *a5)
{
  _QWORD *v5; // rbx
  _QWORD *i; // r12
  __int64 v7; // rax
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rbp
  void *v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 j; // rbp
  __int64 bpt_kernel_interface; // rax

  v5 = *(_QWORD **)(a1 + 48);
  for ( i = &v5[*(_QWORD *)(a1 + 56)]; i != v5; ++v5 )
  {
    if ( dword_8CC5F0 && (dword_8CC5F0 <= 0 || (*(_BYTE *)(dbg + 32) & 0x40) == 0) )
    {
      v7 = *v5 << 8;
      v8 = qword_8CC430 + v7 == 0;
      v9 = qword_8CC430 + v7;
      v10 = v9;
      if ( !v8 && !*(_BYTE *)(v9 + 32) )
      {
        v12 = qword_8CC600;
        *(_DWORD *)qword_8CC600 = *(_DWORD *)v9;
        if ( (int)sub_23D480((__int64)v12, 13, a4, a5, a2) > 0 )
        {
          v13 = 0x4000;
          v14 = 0;
          mark_builtin_widgets(0x4000, 0, 1);
          *(_BYTE *)(v10 + 32) = 1;
          for ( j = *(_QWORD *)(v10 + 248); j; j = *(_QWORD *)(j + 8) )
          {
            bpt_kernel_interface = get_bpt_kernel_interface(v13, v14);
            v14 = j + 24;
            v13 = bpt_kernel_interface;
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
