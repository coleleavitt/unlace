/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000048B4
// Address: 0x00000001000048B4

//----- (00000001000048B4) ----------------------------------------------------
__int64 __fastcall sub_1000048B4(__int64 a1, mach_vm_address_t a2, mach_vm_address_t data, mach_vm_size_t size, int a5)
{
  __int64 result; // x0
  unsigned int v6; // w19
  __int64 v7; // x8
  mach_vm_address_t v10; // x21
  __int64 v11; // x23
  __int64 v12; // x23
  mach_error_t v13; // w0
  mach_error_t v14; // w20
  int v15; // w25
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  unsigned int v22; // w19
  _DWORD *v23; // x0
  mach_vm_address_t v24; // x1
  vm_offset_t v25; // x2
  signed int v26; // w3
  mach_vm_size_t outsize; // [xsp+20h] [xbp-50h] BYREF

  if ( *(_DWORD *)(a1 + 1556) == 4 )
    return 0xFFFFFFFFLL;
  v6 = size;
  v7 = a1;
  result = 0xFFFFFFFFLL;
  if ( (int)size >= 1 && *(int *)(v7 + 528) >= 1 )
  {
    if ( a5 )
    {
      v10 = a2;
      v11 = v7;
      if ( task_suspend(*(_DWORD *)(v7 + 1544)) )
        return 0xFFFFFFFFLL;
      v7 = v11;
      a2 = v10;
      if ( *(_DWORD *)(v11 + 1556) == 4 )
        return 0xFFFFFFFFLL;
    }
    outsize = 0;
    v12 = v7;
    v13 = mach_vm_read_overwrite(*(_DWORD *)(v7 + 1544), a2, v6, data, &outsize);
    v14 = v13;
    if ( v13 )
    {
      v15 = *(_DWORD *)(v12 + 1544);
      mach_error_string(v13);
      sub_1000560A0(v12, "vm_read %d: ea=%a size=%d => (%s)\n", v16, v17, v18, v19, v20, v21, v15);
    }
    v22 = outsize;
    if ( a5 && task_resume(*(_DWORD *)(v12 + 1544)) )
    {
      if ( under_debugger == 1 )
        __break(1u);
      interr(30082);
      return sub_100004A08(v23, v24, v25, v26);
    }
    else if ( v14 )
    {
      return 0;
    }
    else
    {
      return v22;
    }
  }
  return result;
}
// 1000049C0: variable 'v16' is possibly undefined
// 1000049C0: variable 'v17' is possibly undefined
// 1000049C0: variable 'v18' is possibly undefined
// 1000049C0: variable 'v19' is possibly undefined
// 1000049C0: variable 'v20' is possibly undefined
// 1000049C0: variable 'v21' is possibly undefined
// 100004A05: variable 'v23' is possibly undefined
// 100004A05: variable 'v24' is possibly undefined
// 100004A05: variable 'v25' is possibly undefined
// 100004A05: variable 'v26' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
