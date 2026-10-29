__int64 __fastcall sub_C8400(__int64 a1, __int64 a2, char a3)
{
  __int64 bpt_kernel_interface; // rax
  __int64 v5; // rax
  unsigned int v6; // ebp

  if ( !*(_DWORD *)(a2 + 68) && *(_QWORD *)(a2 + 80) == -1 )
    goto LABEL_6;
  bpt_kernel_interface = get_bpt_kernel_interface();
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)bpt_kernel_interface + 312LL))(
         bpt_kernel_interface,
         a2 + 24,
         1);
  if ( v5 )
  {
    if ( *(_QWORD *)(v5 + 56) != -1 && (*(_DWORD *)(v5 + 76) & 0x18) != 8 )
    {
      v6 = a3 & 4;
      if ( !v6 )
      {
        if ( a2 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
          return 0;
        }
        return v6;
      }
    }
LABEL_6:
    v6 = 1;
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 248);
    *(_QWORD *)(a1 + 248) = a2;
    return v6;
  }
  if ( under_debugger )
    BUG();
  interr();
  return sub_C84B0(40052);
}

