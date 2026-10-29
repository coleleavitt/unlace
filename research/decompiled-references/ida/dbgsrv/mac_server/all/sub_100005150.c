/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100005150
// Address: 0x0000000100005150

//----- (0000000100005150) ----------------------------------------------------
__int64 __fastcall sub_100005150(
        _DWORD *a1,
        const char *a2,
        mach_vm_address_t a3,
        unsigned int a4,
        char a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  __int64 result; // rax
  unsigned int v12; // r15d
  int v13; // r15d
  mach_error_t v14; // eax
  mach_error_t v15; // ebx
  int v16; // r13d
  unsigned int v17; // r15d
  vm_offset_t v18; // rdx
  signed int v19; // ecx
  unsigned int v20; // [rsp+14h] [rbp-3Ch]
  mach_vm_size_t outsize; // [rsp+18h] [rbp-38h] BYREF

  result = 0xFFFFFFFFLL;
  if ( a1[215] != 4 && (int)a4 > 0 && (int)a1[132] > 0 )
  {
    if ( !a5 )
      goto LABEL_8;
    v12 = a4;
    if ( task_suspend(a1[212]) )
      return 0xFFFFFFFFLL;
    a4 = v12;
    result = 0xFFFFFFFFLL;
    if ( a1[215] != 4 )
    {
LABEL_8:
      outsize = 0;
      v20 = a4;
      v13 = (int)a2;
      v14 = mach_vm_read_overwrite(a1[212], (mach_vm_address_t)a2, a4, a3, &outsize);
      v15 = v14;
      if ( v14 )
      {
        v16 = a1[212];
        mach_error_string(v14);
        a2 = "vm_read %d: ea=%a size=%d => (%s)\n";
        sub_100060FA0((__int64)a1, "vm_read %d: ea=%a size=%d => (%s)\n", v16, a6, v13, (const char *)v20);
      }
      v17 = outsize;
      if ( a5 && task_resume(a1[212]) )
      {
        if ( under_debugger == 1 )
          BUG();
        interr(0x7582u);
        return sub_1000052A0((_DWORD *)0x7582, a2, v18, v19, a6, a7, a8, a9);
      }
      else
      {
        result = 0;
        if ( !v15 )
          return v17;
      }
    }
  }
  return result;
}
// 10000529D: variable 'v18' is possibly undefined
// 10000529D: variable 'v19' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
