__int64 __fastcall sub_462A90(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r12
  __int64 (__fastcall ***bpt_kernel_interface)(); // rax
  __int64 result; // rax

  switch_dbctx(*(int *)(a1 + 8));
  if ( a2 >= *(_QWORD *)(a1 + 48) || (v2 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * a2)) == 0 )
  {
    if ( !under_debugger )
      interr(2662);
LABEL_9:
    BUG();
  }
  bpt_kernel_interface = get_bpt_kernel_interface();
  if ( !((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(), __int64))(*bpt_kernel_interface)[15])(
          bpt_kernel_interface,
          v2) )
  {
    if ( !under_debugger )
      interr(2661);
    goto LABEL_9;
  }
  result = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(result + 8 * a2) = 0;
  return result;
}
