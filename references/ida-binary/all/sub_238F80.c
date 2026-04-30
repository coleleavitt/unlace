__int64 __fastcall sub_238F80(_QWORD *a1)
{
  __int64 v1; // r14
  __int64 v2; // rbx
  __int64 *v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 bpt_kernel_interface; // rax

  v1 = a1[1];
  if ( v1 )
  {
    v2 = 0;
    do
    {
      while ( 1 )
      {
        v3 = (__int64 *)(*a1 + 24 * v2);
        v4 = v3[1];
        if ( *v3 != v4 )
        {
          v5 = v3[2];
          if ( v5 )
            break;
        }
        if ( v1 == ++v2 )
          return 1;
      }
      ++v2;
      v6 = correct_address(qword_8CC550, *v3, v4, v5, 0);
      v7 = v3[2];
      v8 = v3[1];
      v9 = *v3;
      qword_8CC550 = v6;
      sub_238F20((__int64)&qword_8CC2B0, v9, v8, v7);
      bpt_kernel_interface = get_bpt_kernel_interface(&qword_8CC2B0, v9);
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)bpt_kernel_interface + 248LL))(
        bpt_kernel_interface,
        *v3,
        v3[1],
        v3[2]);
    }
    while ( v1 != v2 );
  }
  return 1;
}
