__int64 __fastcall sub_C9240(_QWORD *a1)
{
  __int64 v1; // r14
  __int64 v2; // rbp
  unsigned int *v3; // rbx
  __int64 bpt_kernel_interface; // rax

  v1 = a1[1];
  if ( v1 )
  {
    v2 = 0;
    do
    {
      while ( 1 )
      {
        v3 = (unsigned int *)(*a1 + 16 * v2);
        if ( *v3 != v3[1] )
        {
          if ( *((_QWORD *)v3 + 1) )
            break;
        }
        if ( v1 == ++v2 )
          return 1;
      }
      ++v2;
      dword_251530 = correct_address();
      sub_C91D0((__int64)&qword_2512A0);
      bpt_kernel_interface = get_bpt_kernel_interface();
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)bpt_kernel_interface + 248LL))(
        bpt_kernel_interface,
        *v3,
        v3[1],
        v3[2]);
    }
    while ( v1 != v2 );
  }
  return 1;
}

