/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100004DC0
// Address: 0x0000000100004DC0

//----- (0000000100004DC0) ----------------------------------------------------
__int64 __fastcall sub_100004DC0(
        __int64 a1,
        mach_vm_address_t a2,
        vm_offset_t a3,
        signed int a4,
        unsigned __int8 a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  char v12; // r13
  char *v13; // rbx
  mach_error_t v14; // eax
  unsigned int v15; // r13d
  unsigned int v16; // r12d
  char *v17; // rax
  vm_prot_t v18; // ebx
  vm_prot_t v19; // ebx
  mach_vm_size_t v20; // rdx
  mach_error_t v21; // eax
  unsigned int v22; // r12d
  char *v23; // rax
  const char *v24; // rcx
  mach_error_t v26; // eax
  vm_offset_t data; // [rsp+10h] [rbp-A0h]
  int v28; // [rsp+1Ch] [rbp-94h]
  mach_vm_size_t outsize; // [rsp+28h] [rbp-88h] BYREF
  vm_prot_t new_protection[19]; // [rsp+34h] [rbp-7Ch] BYREF

  if ( !(unsigned __int8)sub_100004C80(a1, new_protection, a2, a4, a6, a7, a8, a9) )
    return 0;
  data = a3;
  v12 = new_protection[0];
  v28 = a5 + 1;
  if ( (v28 & new_protection[0]) == 0 )
  {
    v18 = v28 | new_protection[0];
    if ( a5 )
    {
      v19 = v18 & 0xFFFFFFFB;
      if ( !mach_vm_protect(*(_DWORD *)(a1 + 848), a2, a4, 0, v19) )
        goto LABEL_4;
      if ( (v12 & 0x10) != 0 )
        goto LABEL_20;
      v18 = v19 | 0x10;
      v20 = a4;
    }
    else
    {
      v20 = a4;
    }
    if ( !mach_vm_protect(*(_DWORD *)(a1 + 848), a2, v20, 0, v18) )
      goto LABEL_3;
LABEL_20:
    v24 = "read";
    if ( a5 )
      v24 = "write";
    v15 = 0;
    sub_100060FA0(a1, "%d: could not set %s permission at %a\n", *(_DWORD *)(a1 + 848), v24, a6);
    return v15;
  }
LABEL_3:
  if ( !a5 )
  {
    outsize = 0;
    v13 = (char *)a2;
    v21 = mach_vm_read_overwrite(*(_DWORD *)(a1 + 848), a2, a4, data, &outsize);
    v15 = v21;
    if ( v21 )
    {
      v22 = *(_DWORD *)(a1 + 848);
      v23 = mach_error_string(v21);
      sub_100060FA0(a1, "vm_read %d: ea=%a size=%d => (%s)\n", v22, a2, (unsigned int)a4, v23);
    }
    goto LABEL_13;
  }
LABEL_4:
  v13 = (char *)a2;
  v14 = mach_vm_write(*(_DWORD *)(a1 + 848), a2, data, a4);
  v15 = v14;
  if ( (v14 & 0xFFFFFFFD) != 0 )
  {
    v16 = *(_DWORD *)(a1 + 848);
    v17 = mach_error_string(v14);
    sub_100060FA0(a1, "vm_write %d: ea=%a, size=%d => %s\n", v16, a2, (unsigned int)a4, v17);
LABEL_13:
    LOBYTE(v15) = v15 == 0;
    goto LABEL_14;
  }
  LOBYTE(v15) = v14 == 0;
  if ( ((v14 == 0) & a5) == 1 )
  {
    LODWORD(outsize) = 6;
    v26 = mach_vm_machine_attribute(*(_DWORD *)(a1 + 848), a2, a4, 1u, (vm_machine_attribute_val_t *)&outsize);
    if ( v26 && !byte_1000AE248 )
    {
      byte_1000AE248 = 1;
      mach_error_string(v26);
      sub_100005090(
        a1,
        "Unable to flush data/instruction cache ea=%a size=%d: %s\n",
        a6,
        a2,
        (const char *)(unsigned int)a4);
    }
    LOBYTE(v15) = 1;
  }
LABEL_14:
  if ( (new_protection[0] & v28) != 0
    || !mach_vm_protect(*(_DWORD *)(a1 + 848), (mach_vm_address_t)v13, a4, 0, new_protection[0]) )
  {
    return v15;
  }
  if ( under_debugger == 1 )
    BUG();
  interr(0x7585u);
  return sub_100005090(30085, v13);
}
// 1000AE23D: using guessed type char under_debugger;
// 1000AE248: using guessed type char byte_1000AE248;
