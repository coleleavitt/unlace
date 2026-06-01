__int64 __fastcall sub_44E710(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 bpt_kernel_interface; // rax
  __int64 result; // rax

  v3 = *(int *)(a1 + 8);
  switch_dbctx(v3);
  if ( a2 >= *(_QWORD *)(a1 + 48) || (v4 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * a2)) == 0 )
  {
    if ( !under_debugger )
      interr(2662);
LABEL_9:
    BUG();
  }
  bpt_kernel_interface = get_bpt_kernel_interface(v3, a2);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)bpt_kernel_interface + 120LL))(
          bpt_kernel_interface,
          v4) )
  {
    if ( !under_debugger )
      interr(2661);
    goto LABEL_9;
  }
  result = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(result + 8 * a2) = 0;
  return result;
}

