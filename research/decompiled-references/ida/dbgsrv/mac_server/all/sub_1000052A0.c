/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000052A0
// Address: 0x00000001000052A0

//----- (00000001000052A0) ----------------------------------------------------
__int64 __fastcall sub_1000052A0(
        _DWORD *a1,
        const char *a2,
        vm_offset_t a3,
        signed int a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  __int64 result; // rax
  char v11; // r14
  __int64 v12; // rbx
  mach_vm_address_t v13; // rdx
  unsigned int v14; // ecx

  result = -1;
  if ( a1[215] != 4 && a4 > 0 && (int)a1[132] > 0 )
  {
    if ( task_suspend(a1[212]) )
    {
      return -1;
    }
    else
    {
      result = -1;
      if ( a1[215] != 4 )
      {
        v11 = sub_100004DC0((__int64)a1, (mach_vm_address_t)a2, a3, a4, 1u, a5, a6, a7, a8);
        if ( task_resume(a1[212]) )
        {
          if ( under_debugger == 1 )
            BUG();
          interr(0x7582u);
          return sub_100005360((_DWORD *)0x7582, a2, v13, v14, a5, a6, a7, a8);
        }
        else
        {
          v12 = a4 & 0x7FFFFFFF;
          result = 0;
          if ( v11 )
            return v12;
        }
      }
    }
  }
  return result;
}
// 100005359: variable 'v13' is possibly undefined
// 100005359: variable 'v14' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
