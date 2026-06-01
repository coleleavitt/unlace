__int64 sub_EC4A0()
{
  __int64 bpt_kernel_interface; // rax
  __int64 result; // rax
  char *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // r12

  bpt_kernel_interface = get_bpt_kernel_interface();
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bpt_kernel_interface + 8LL))(bpt_kernel_interface, 0);
  result = 0;
  if ( dbg && (_QWORD)xmmword_2524F8 )
  {
    nullsub_101();
    v2 = (char *)s1;
    if ( xmmword_2526F0 )
      v2 = (char *)qword_2526E8;
    sub_E7590(v2, "EventCnd", 0);
    sub_A3DF0();
    v3 = dbg;
    v4 = qword_2524F0;
    v5 = *(int *)(dbg + 64LL);
    if ( (int)v5 > 0 )
    {
      v6 = 32 * v5;
      v7 = 0;
      while ( 1 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(v3 + 56) + v7 + 9) & 1) != 0 )
        {
          netnode_check();
          netnode_hashset();
        }
        v7 += 32;
        v4 += 56;
        if ( v6 == v7 )
          break;
        v3 = dbg;
      }
    }
    sub_E78B0();
    return 1;
  }
  return result;
}

