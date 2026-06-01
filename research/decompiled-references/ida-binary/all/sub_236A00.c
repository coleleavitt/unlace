__int64 __fastcall sub_236A00(__int64 a1, __int64 a2, char a3, double a4)
{
  __int64 bpt_kernel_interface; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebp

  if ( !*(_DWORD *)(a2 + 68) && *(_QWORD *)(a2 + 80) == -1 )
    goto LABEL_6;
  bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
  v7 = a2 + 24;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)bpt_kernel_interface + 312LL))(
         bpt_kernel_interface,
         v7,
         1);
  if ( v8 )
  {
    if ( *(_QWORD *)(v8 + 56) != -1 && (*(_DWORD *)(v8 + 76) & 0x18) != 8 )
    {
      v11 = a3 & 4;
      if ( !v11 )
      {
        if ( a2 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
          return 0;
        }
        return v11;
      }
    }
LABEL_6:
    v11 = 1;
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 248);
    *(_QWORD *)(a1 + 248) = a2;
    return v11;
  }
  if ( under_debugger )
    BUG();
  interr(40052, v7, v9, v10, a4);
  return sub_236AB0();
}
