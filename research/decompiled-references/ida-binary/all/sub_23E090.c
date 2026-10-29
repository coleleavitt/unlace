__int64 __fastcall sub_23E090(__int64 a1, double a2, __int64 a3, __int64 a4, char *a5)
{
  unsigned int v5; // ebp
  __int64 v6; // rbx
  __int64 v7; // rax
  bool v8; // cc
  void *v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 bpt_kernel_interface; // rax
  int v15; // eax

  v5 = *(_DWORD *)(a1 + 16);
  if ( v5 )
  {
    v6 = qword_8CC430;
    v7 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
    if ( qword_8CC430 == v7 )
    {
      return 0;
    }
    else
    {
      do
      {
        if ( v5 == *(_DWORD *)v6 )
        {
          v5 = dword_8CC5F0;
          v8 = dword_8CC5F0 <= 0;
          if ( !dword_8CC5F0 )
            return v5;
          goto LABEL_7;
        }
        v6 += 256;
      }
      while ( v7 != v6 );
      v5 = dword_8CC5F0;
      v6 = 0;
      v8 = dword_8CC5F0 <= 0;
      if ( !dword_8CC5F0 )
        return v5;
LABEL_7:
      if ( v8 || (v5 = 0, (*(_BYTE *)(dbg + 32) & 0x40) == 0) )
      {
        v5 = 0;
        if ( v6 )
        {
          if ( !*(_BYTE *)(v6 + 32) )
          {
            v10 = qword_8CC600;
            *(_DWORD *)qword_8CC600 = *(_DWORD *)v6;
            v5 = sub_23D480((__int64)v10, 13, a4, a5, a2);
            if ( (int)v5 > 0 )
            {
              v11 = 0x4000;
              v12 = 0;
              v5 = 1;
              mark_builtin_widgets(0x4000, 0, 1);
              *(_BYTE *)(v6 + 32) = 1;
              v13 = *(_QWORD *)(v6 + 248);
              while ( v13 )
              {
                bpt_kernel_interface = get_bpt_kernel_interface(v11, v12);
                v12 = v13 + 24;
                v11 = bpt_kernel_interface;
                v15 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)bpt_kernel_interface + 112LL))(
                        bpt_kernel_interface,
                        v13 + 24,
                        0);
                v13 = *(_QWORD *)(v13 + 8);
                if ( v15 <= 0 )
                  v5 = v15;
              }
            }
          }
        }
      }
    }
  }
  return v5;
}
