/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000205E0
// Address: 0x00000001000205E0

//----- (00000001000205E0) ----------------------------------------------------
char __fastcall sub_1000205E0(__int64 a1, __int64 a2, double a3)
{
  mach_vm_address_t v4; // rsi
  __int64 v5; // rcx
  _BYTE v7[48]; // [rsp+8h] [rbp-D8h] BYREF
  _BYTE v8[8]; // [rsp+38h] [rbp-A8h] BYREF
  mach_vm_address_t v9; // [rsp+40h] [rbp-A0h]

  v4 = *(unsigned int *)(a2 + 4);
  if ( sub_10001EF70(a1, v4, (__int64)v7) )
  {
    v5 = *(int *)(a1 + 244);
    v9 -= v5;
    v4 = v9;
    if ( !sub_100004C10(a1, v9, (vm_offset_t)v8, v5, a3) )
    {
      v4 = *(unsigned int *)(a2 + 4);
      if ( sub_10001F270(a1, v4, (__int64)v7) )
        return __stack_chk_guard;
      goto LABEL_9;
    }
  }
  else
  {
    if ( under_debugger == 1 )
      goto LABEL_10;
    interr(0x757Eu);
  }
  if ( under_debugger == 1 )
    goto LABEL_10;
  interr(0x7580u);
LABEL_9:
  if ( under_debugger == 1 )
LABEL_10:
    BUG();
  interr(0x7581u);
  return sub_1000206C0(30081, v4);
}
// 1000AE23D: using guessed type char under_debugger;
