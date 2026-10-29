__int64 __fastcall sub_CE910(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rbx
  __int64 v3; // rax
  bool v4; // cc
  void *v6; // rdi
  __int64 v7; // rbx
  __int64 bpt_kernel_interface; // rax
  int v9; // eax

  v1 = *(_DWORD *)(a1 + 16);
  if ( v1 )
  {
    v2 = qword_252590;
    v3 = qword_252590 + ((_QWORD)xmmword_252598 << 8);
    if ( qword_252590 == v3 )
    {
      return 0;
    }
    else
    {
      do
      {
        if ( v1 == *(_DWORD *)v2 )
        {
          v1 = dword_25274C;
          v4 = dword_25274C <= 0;
          if ( !dword_25274C )
            return v1;
          goto LABEL_7;
        }
        v2 += 256;
      }
      while ( v3 != v2 );
      v1 = dword_25274C;
      v2 = 0;
      v4 = dword_25274C <= 0;
      if ( !dword_25274C )
        return v1;
LABEL_7:
      if ( v4 || (v1 = 0, (*(_BYTE *)(dbg + 32LL) & 0x40) == 0) )
      {
        v1 = 0;
        if ( v2 )
        {
          if ( !*(_BYTE *)(v2 + 32) )
          {
            v6 = qword_252758;
            *(_DWORD *)qword_252758 = *(_DWORD *)v2;
            v1 = sub_CDCF0((__int64)v6, 13);
            if ( (int)v1 > 0 )
            {
              v1 = 1;
              mark_builtin_widgets();
              *(_BYTE *)(v2 + 32) = 1;
              v7 = *(_QWORD *)(v2 + 248);
              while ( v7 )
              {
                bpt_kernel_interface = get_bpt_kernel_interface();
                v9 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)bpt_kernel_interface + 112LL))(
                       bpt_kernel_interface,
                       v7 + 24,
                       0);
                v7 = *(_QWORD *)(v7 + 8);
                if ( v9 <= 0 )
                  v1 = v9;
              }
            }
          }
        }
      }
    }
  }
  return v1;
}

