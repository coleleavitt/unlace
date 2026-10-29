/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000068D0
// Address: 0x00000001000068D0

//----- (00000001000068D0) ----------------------------------------------------
kern_return_t __fastcall sub_1000068D0(__int64 a1)
{
  task_t v2; // edi
  kern_return_t result; // eax

  if ( mach_port_allocate(mach_task_self_, 1u, (mach_port_name_t *)(a1 + 1236)) )
  {
    if ( under_debugger == 1 )
      goto LABEL_13;
    interr(0x758Eu);
    goto LABEL_8;
  }
  if ( mach_port_insert_right(mach_task_self_, *(_DWORD *)(a1 + 1236), *(_DWORD *)(a1 + 1236), 0x14u) )
  {
LABEL_8:
    if ( under_debugger == 1 )
      goto LABEL_13;
    interr(0x758Fu);
    goto LABEL_10;
  }
  v2 = *(_DWORD *)(a1 + 848);
  *(_DWORD *)(a1 + 1464) = 14;
  if ( task_get_exception_ports(
         v2,
         0x1BFEu,
         (exception_mask_array_t)(a1 + 1240),
         (mach_msg_type_number_t *)(a1 + 1464),
         (exception_handler_array_t)(a1 + 1296),
         (exception_behavior_array_t)(a1 + 1352),
         (exception_flavor_array_t)(a1 + 1408)) )
  {
LABEL_10:
    if ( under_debugger == 1 )
      goto LABEL_13;
    interr(0x7590u);
LABEL_12:
    if ( under_debugger != 1 )
    {
      interr(0x7591u);
      return sub_1000069F0();
    }
LABEL_13:
    BUG();
  }
  result = task_set_exception_ports(*(_DWORD *)(a1 + 848), 0x60u, *(_DWORD *)(a1 + 1236), -2147483647, 13);
  if ( result )
    goto LABEL_12;
  return result;
}
// 1000AE23D: using guessed type char under_debugger;
