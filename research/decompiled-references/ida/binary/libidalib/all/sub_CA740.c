__int64 __fastcall sub_CA740(_QWORD *a1)
{
  __int64 v1; // r14
  __int64 v2; // rbx
  _QWORD *v3; // rbp
  __int64 bpt_kernel_interface; // rax

  v1 = a1[1];
  if ( v1 )
  {
    v2 = 0;
    do
    {
      while ( 1 )
      {
        v3 = (_QWORD *)(*a1 + 24 * v2);
        if ( *v3 != v3[1] )
        {
          if ( v3[2] )
            break;
        }
        if ( v1 == ++v2 )
          return 1;
      }
      ++v2;
      qword_2526B0 = correct_address();
      sub_CA6D0((__int64)&qword_252410);
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

