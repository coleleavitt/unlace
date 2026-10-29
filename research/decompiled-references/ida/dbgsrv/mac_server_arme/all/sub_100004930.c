/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100004930
// Address: 0x0000000100004930

//----- (0000000100004930) ----------------------------------------------------
__int64 __fastcall sub_100004930(
        __int64 a1,
        mach_vm_address_t a2,
        vm_offset_t a3,
        signed int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  __int64 v13; // x20
  __int64 result; // x0
  int v15; // w26
  char v16; // w27
  vm_offset_t v17; // x0
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  vm_prot_t v24; // w4
  unsigned int v25; // w25
  mach_vm_size_t v26; // x24
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x5
  __int64 v31; // x6
  __int64 v32; // x7
  vm_offset_t v33; // x0
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x5
  __int64 v38; // x6
  __int64 v39; // x7
  vm_map_t v40; // w8
  kern_return_t v41; // w8
  mach_error_t v42; // w0
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  __int64 v46; // x5
  __int64 v47; // x6
  __int64 v48; // x7
  __int64 v49; // x0
  char *v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  __int64 v54; // x5
  __int64 v55; // x6
  __int64 v56; // x7
  mach_vm_size_t outsize; // [xsp+20h] [xbp-B0h] BYREF
  vm_prot_t new_protection[19]; // [xsp+2Ch] [xbp-A4h] BYREF

  v13 = a1;
  result = sub_100004824(a1, new_protection, a2, a4);
  if ( (_DWORD)result )
  {
    if ( a5 )
      v15 = 2;
    else
      v15 = 1;
    v16 = new_protection[0];
    if ( (new_protection[0] & v15) != 0 )
    {
      while ( a5 )
      {
LABEL_7:
        v17 = mach_vm_write(*(_DWORD *)(v13 + 1544), a2, a3, a4);
        a3 = v17;
        if ( (v17 & 0xFFFFFFFD) != 0 )
        {
          a5 = *(_DWORD *)(v13 + 1544);
          mach_error_string(v17);
          sub_1000593FC(v13, "vm_write %d: ea=%a, size=%d => %s\n", v18, v19, v20, v21, v22, v23, a5);
LABEL_15:
          result = (_DWORD)a3 == 0;
          goto LABEL_16;
        }
        result = (_DWORD)v17 == 0;
        if ( !(_DWORD)a3 && a5 )
        {
          LODWORD(outsize) = 6;
          v42 = mach_vm_machine_attribute(*(_DWORD *)(v13 + 1544), a2, a4, 1u, (vm_machine_attribute_val_t *)&outsize);
          if ( v42 && (byte_1000A5918 & 1) == 0 )
          {
            byte_1000A5918 = 1;
            mach_error_string(v42);
            sub_100004BD4(
              v13,
              "Unable to flush data/instruction cache ea=%a size=%d: %s\n",
              v43,
              v44,
              v45,
              v46,
              v47,
              v48,
              a2);
          }
          result = 1;
        }
LABEL_16:
        if ( (new_protection[0] & v15) != 0 )
          return result;
        v40 = *(_DWORD *)(v13 + 1544);
        v13 = result;
        v41 = mach_vm_protect(v40, a2, a4, 0, new_protection[0]);
        result = v13;
        if ( !v41 )
          return result;
        if ( under_debugger != 1 )
        {
          interr(30085);
          return sub_100004BD4(v49, v50, v51, v52, v53, v54, v55, v56, a9);
        }
        __break(1u);
LABEL_20:
        v26 = a4;
LABEL_21:
        if ( mach_vm_protect(*(_DWORD *)(v13 + 1544), a2, v26, 0, v24) )
          goto LABEL_22;
      }
      outsize = 0;
      v33 = mach_vm_read_overwrite(*(_DWORD *)(v13 + 1544), a2, a4, a3, &outsize);
      a3 = v33;
      if ( (_DWORD)v33 )
      {
        a5 = *(_DWORD *)(v13 + 1544);
        mach_error_string(v33);
        sub_1000593FC(v13, "vm_read %d: ea=%a size=%d => (%s)\n", v34, v35, v36, v37, v38, v39, a5);
      }
      goto LABEL_15;
    }
    v24 = new_protection[0] | v15;
    if ( (a5 & 1) == 0 )
      goto LABEL_20;
    v25 = v24 & 0xFFFFFFFB;
    v26 = a4;
    if ( !mach_vm_protect(*(_DWORD *)(v13 + 1544), a2, a4, 0, v24 & 0xFFFFFFFB) )
      goto LABEL_7;
    if ( (v16 & 0x10) == 0 )
    {
      v24 = v25 | 0x10;
      goto LABEL_21;
    }
LABEL_22:
    sub_1000593FC(v13, "%d: could not set %s permission at %a\n", v27, v28, v29, v30, v31, v32, *(_DWORD *)(v13 + 1544));
    return 0;
  }
  return result;
}
// 1000049E4: variable 'v18' is possibly undefined
// 1000049E4: variable 'v19' is possibly undefined
// 1000049E4: variable 'v20' is possibly undefined
// 1000049E4: variable 'v21' is possibly undefined
// 1000049E4: variable 'v22' is possibly undefined
// 1000049E4: variable 'v23' is possibly undefined
// 100004A6C: variable 'v34' is possibly undefined
// 100004A6C: variable 'v35' is possibly undefined
// 100004A6C: variable 'v36' is possibly undefined
// 100004A6C: variable 'v37' is possibly undefined
// 100004A6C: variable 'v38' is possibly undefined
// 100004A6C: variable 'v39' is possibly undefined
// 100004ADC: variable 'v24' is possibly undefined
// 100004B14: variable 'v27' is possibly undefined
// 100004B14: variable 'v28' is possibly undefined
// 100004B14: variable 'v29' is possibly undefined
// 100004B14: variable 'v30' is possibly undefined
// 100004B14: variable 'v31' is possibly undefined
// 100004B14: variable 'v32' is possibly undefined
// 100004BBC: variable 'v43' is possibly undefined
// 100004BBC: variable 'v44' is possibly undefined
// 100004BBC: variable 'v45' is possibly undefined
// 100004BBC: variable 'v46' is possibly undefined
// 100004BBC: variable 'v47' is possibly undefined
// 100004BBC: variable 'v48' is possibly undefined
// 100004BD1: variable 'v49' is possibly undefined
// 100004BD1: variable 'v50' is possibly undefined
// 100004BD1: variable 'v51' is possibly undefined
// 100004BD1: variable 'v52' is possibly undefined
// 100004BD1: variable 'v53' is possibly undefined
// 100004BD1: variable 'v54' is possibly undefined
// 100004BD1: variable 'v55' is possibly undefined
// 100004BD1: variable 'v56' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
// 1000A5918: using guessed type char byte_1000A5918;
