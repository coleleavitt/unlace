/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100004A08
// Address: 0x0000000100004A08

//----- (0000000100004A08) ----------------------------------------------------
__int64 __fastcall sub_100004A08(_DWORD *a1, mach_vm_address_t a2, vm_offset_t a3, signed int a4)
{
  __int64 result; // x0
  _DWORD *v9; // x22
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  int v13; // w20
  __int64 v14; // x0
  mach_vm_address_t v15; // x1
  mach_vm_address_t v16; // x2
  mach_vm_size_t v17; // x3
  char v18; // [xsp+0h] [xbp-20h]

  if ( a1[389] == 4 )
    return -1;
  result = -1;
  if ( a4 >= 1 && (int)a1[132] >= 1 )
  {
    v9 = a1;
    if ( task_suspend(a1[386]) || v9[389] == 4 )
      return -1;
    v13 = sub_1000045B4((__int64)v9, a2, a3, a4, 1, v10, v11, v12, v18);
    if ( task_resume(v9[386]) )
    {
      if ( under_debugger == 1 )
        __break(1u);
      interr(30082);
      return sub_100004AD4(v14, v15, v16, v17);
    }
    else if ( v13 )
    {
      return a4 & 0x7FFFFFFF;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
// 100004A90: variable 'v10' is possibly undefined
// 100004A90: variable 'v11' is possibly undefined
// 100004A90: variable 'v12' is possibly undefined
// 100004A90: variable 'v18' is possibly undefined
// 100004AD1: variable 'v14' is possibly undefined
// 100004AD1: variable 'v15' is possibly undefined
// 100004AD1: variable 'v16' is possibly undefined
// 100004AD1: variable 'v17' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
