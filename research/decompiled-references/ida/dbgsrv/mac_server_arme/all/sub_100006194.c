/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100006194
// Address: 0x0000000100006194

//----- (0000000100006194) ----------------------------------------------------
__int64 __fastcall sub_100006194(__int64 a1)
{
  mach_port_name_t *v2; // x20
  task_t v3; // w0
  __int64 result; // x0

  v2 = (mach_port_name_t *)(a1 + 1932);
  if ( mach_port_allocate(mach_task_self_, 1u, (mach_port_name_t *)(a1 + 1932)) )
  {
    if ( under_debugger == 1 )
      goto LABEL_13;
    interr(30094);
    goto LABEL_8;
  }
  if ( mach_port_insert_right(mach_task_self_, *v2, *v2, 0x14u) )
  {
LABEL_8:
    if ( under_debugger == 1 )
      goto LABEL_13;
    interr(30095);
    goto LABEL_10;
  }
  v3 = *(_DWORD *)(a1 + 1544);
  *(_DWORD *)(a1 + 2160) = 14;
  if ( task_get_exception_ports(
         v3,
         0x1BFEu,
         (exception_mask_array_t)(a1 + 1936),
         (mach_msg_type_number_t *)(a1 + 2160),
         (exception_handler_array_t)(a1 + 1992),
         (exception_behavior_array_t)(a1 + 2048),
         (exception_flavor_array_t)(a1 + 2104)) )
  {
LABEL_10:
    if ( under_debugger == 1 )
      goto LABEL_13;
    interr(30096);
    goto LABEL_12;
  }
  result = task_set_exception_ports(*(_DWORD *)(a1 + 1544), 0x60u, *(_DWORD *)(a1 + 1932), -2147483647, 5);
  if ( (_DWORD)result )
  {
LABEL_12:
    if ( under_debugger != 1 )
    {
LABEL_14:
      interr(30097);
      return sub_1000062B0();
    }
LABEL_13:
    __break(1u);
    goto LABEL_14;
  }
  return result;
}
// 1000A590D: using guessed type char under_debugger;
