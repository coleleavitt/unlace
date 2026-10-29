__int64 __fastcall sub_F4B360(char a1, unsigned __int16 *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax

  result = *a2;
  if ( !a1 )
  {
    switch ( result & 0x3F )
    {
      case 1LL:
        sub_971800(a3, " __attribute__((stdcall))");
        result = *a2;
        break;
      case 2LL:
        sub_971800(a3, " __attribute__((fastcall))");
        result = *a2;
        break;
      case 3LL:
        sub_971800(a3, " __attribute__((thiscall))");
        result = *a2;
        break;
      case 4LL:
        sub_971800(a3, " __attribute__((vectorcall))");
        result = *a2;
        break;
      case 5LL:
        sub_971800(a3, " __attribute__((pascal))");
        result = *a2;
        break;
      case 6LL:
        sub_971800(a3, " __attribute__((ms_abi))");
        result = *a2;
        break;
      case 7LL:
        sub_971800(a3, " __attribute__((sysv_abi))");
        result = *a2;
        break;
      case 8LL:
        sub_971800(a3, " __attribute__((regcall))");
        result = *a2;
        break;
      case 9LL:
        sub_971800(a3, " __attribute__((pcs(\"aapcs\")))");
        result = *a2;
        break;
      case 0xALL:
        sub_971800(a3, " __attribute__((pcs(\"aapcs-vfp\")))");
        result = *a2;
        break;
      case 0xBLL:
        sub_971800(a3, " __attribute__((intel_ocl_bicc))");
        result = *a2;
        break;
      case 0xDLL:
        sub_971800(a3, " __attribute__((device_kernel))");
        result = *a2;
        break;
      case 0xELL:
        sub_971800(a3, " __attribute__((swiftcall))");
        result = *a2;
        break;
      case 0xFLL:
        sub_971800(a3, "__attribute__((swiftasynccall))");
        result = *a2;
        break;
      case 0x10LL:
        sub_971800(a3, " __attribute__((preserve_most))");
        result = *a2;
        break;
      case 0x11LL:
        sub_971800(a3, " __attribute__((preserve_all))");
        result = *a2;
        break;
      case 0x12LL:
        sub_971800(a3, " __attribute__((aarch64_vector_pcs))");
        result = *a2;
        break;
      case 0x13LL:
        sub_971800(a3, " __attribute__((aarch64_sve_pcs))");
        result = *a2;
        break;
      case 0x14LL:
        sub_971800(a3, " __attribute__((m68k_rtd))");
        result = *a2;
        break;
      case 0x15LL:
        sub_971800(a3, " __attribute__((preserve_none))");
        result = *a2;
        break;
      case 0x16LL:
        sub_971800(a3, "__attribute__((riscv_vector_cc))");
        result = *a2;
        break;
      case 0x17LL:
        sub_971800(a3, "__attribute__((riscv_vls_cc32))");
        result = *a2;
        break;
      case 0x18LL:
        sub_971800(a3, "__attribute__((riscv_vls_cc64))");
        result = *a2;
        break;
      case 0x19LL:
        sub_971800(a3, "__attribute__((riscv_vls_cc128))");
        result = *a2;
        break;
      case 0x1ALL:
        sub_971800(a3, "__attribute__((riscv_vls_cc256))");
        result = *a2;
        break;
      case 0x1BLL:
        sub_971800(a3, "__attribute__((riscv_vls_cc512))");
        result = *a2;
        break;
      case 0x1CLL:
        sub_971800(a3, "__attribute__((riscv_vls_cc1024))");
        result = *a2;
        break;
      case 0x1DLL:
        sub_971800(a3, "__attribute__((riscv_vls_cc2048))");
        result = *a2;
        break;
      case 0x1ELL:
        sub_971800(a3, "__attribute__((riscv_vls_cc4096))");
        result = *a2;
        break;
      case 0x1FLL:
        sub_971800(a3, "__attribute__((riscv_vls_cc8192))");
        result = *a2;
        break;
      case 0x20LL:
        sub_971800(a3, "__attribute__((riscv_vls_cc16384))");
        result = *a2;
        break;
      case 0x21LL:
        sub_971800(a3, "__attribute__((riscv_vls_cc32768))");
        result = *a2;
        break;
      case 0x22LL:
        sub_971800(a3, "__attribute__((riscv_vls_cc65536))");
        result = *a2;
        break;
      default:
        break;
    }
  }
  if ( (result & 0x40) == 0 )
  {
    if ( (result & 0x2000) == 0 )
      goto LABEL_6;
LABEL_17:
    sub_971800(a3, " __attribute__((cmse_nonsecure_call))");
    result = *a2;
    if ( (result & 0x80u) == 0LL )
      goto LABEL_7;
    goto LABEL_18;
  }
  sub_971800(a3, " __attribute__((noreturn))");
  result = *a2;
  if ( (result & 0x2000) != 0 )
    goto LABEL_17;
LABEL_6:
  if ( (result & 0x80u) == 0LL )
    goto LABEL_7;
LABEL_18:
  sub_971800(a3, " __attribute__((ns_returns_retained))");
  result = *a2;
LABEL_7:
  if ( (((unsigned int)result >> 9) & 6) != 0 )
  {
    v6 = sub_971800(a3, " __attribute__((regparm (");
    v7 = (((int)*a2 >> 9) & 7u) - 1;
    if ( (((int)*a2 >> 9) & 7) == 0 )
      v7 = 0;
    v8 = sub_2257BD0(v6, v7);
    sub_971800(v8, ")))");
    result = *a2;
    if ( (result & 0x100) == 0 )
    {
LABEL_9:
      if ( (result & 0x1000) == 0 )
        return result;
      return sub_971800(a3, " __attribute__((nocf_check))");
    }
  }
  else if ( (result & 0x100) == 0 )
  {
    goto LABEL_9;
  }
  sub_971800(a3, " __attribute__((no_caller_saved_registers))");
  result = *a2;
  if ( (result & 0x1000) != 0 )
    return sub_971800(a3, " __attribute__((nocf_check))");
  return result;
}

