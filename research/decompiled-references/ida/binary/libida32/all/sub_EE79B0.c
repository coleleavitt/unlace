__int64 __fastcall sub_EE79B0(__int64 *a1, __int64 a2, double a3)
{
  const char *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char *v10; // rsi
  unsigned int v11; // ecx
  unsigned int v12; // eax
  __int64 v13; // rdi
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char *v19; // rsi
  __int64 *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  char *v25; // rsi
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  char *v31; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  char *v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // eax
  char *v43; // rsi

  switch ( *(_DWORD *)(a2 + 84) )
  {
    case 0:
      v5 = "__atomic_add_fetch(";
      break;
    case 1:
      v5 = "__atomic_and_fetch(";
      break;
    case 2:
      v5 = "__atomic_clear(";
      break;
    case 3:
      v5 = "__atomic_compare_exchange(";
      break;
    case 4:
      v5 = "__atomic_compare_exchange_n(";
      break;
    case 5:
      v5 = "__atomic_exchange(";
      break;
    case 6:
      v5 = "__atomic_exchange_n(";
      break;
    case 7:
      v5 = "__atomic_fetch_add(";
      break;
    case 8:
      v5 = "__atomic_fetch_and(";
      break;
    case 9:
      v5 = "__atomic_fetch_max(";
      break;
    case 0xA:
      v5 = "__atomic_fetch_min(";
      break;
    case 0xB:
      v5 = "__atomic_fetch_nand(";
      break;
    case 0xC:
      v5 = "__atomic_fetch_or(";
      break;
    case 0xD:
      v5 = "__atomic_fetch_sub(";
      break;
    case 0xE:
      v5 = "__atomic_fetch_xor(";
      break;
    case 0xF:
      v5 = "__atomic_load(";
      break;
    case 0x10:
      v5 = "__atomic_load_n(";
      break;
    case 0x11:
      v5 = "__atomic_max_fetch(";
      break;
    case 0x12:
      v5 = "__atomic_min_fetch(";
      break;
    case 0x13:
      v5 = "__atomic_nand_fetch(";
      break;
    case 0x14:
      v5 = "__atomic_or_fetch(";
      break;
    case 0x15:
      v5 = "__atomic_store(";
      break;
    case 0x16:
      v5 = "__atomic_store_n(";
      break;
    case 0x17:
      v5 = "__atomic_sub_fetch(";
      break;
    case 0x18:
      v5 = "__atomic_test_and_set(";
      break;
    case 0x19:
      v5 = "__atomic_xor_fetch(";
      break;
    case 0x1A:
      v5 = "__c11_atomic_compare_exchange_strong(";
      break;
    case 0x1B:
      v5 = "__c11_atomic_compare_exchange_weak(";
      break;
    case 0x1C:
      v5 = "__c11_atomic_exchange(";
      break;
    case 0x1D:
      v5 = "__c11_atomic_fetch_add(";
      break;
    case 0x1E:
      v5 = "__c11_atomic_fetch_and(";
      break;
    case 0x1F:
      v5 = "__c11_atomic_fetch_max(";
      break;
    case 0x20:
      v5 = "__c11_atomic_fetch_min(";
      break;
    case 0x21:
      v5 = "__c11_atomic_fetch_nand(";
      break;
    case 0x22:
      v5 = "__c11_atomic_fetch_or(";
      break;
    case 0x23:
      v5 = "__c11_atomic_fetch_sub(";
      break;
    case 0x24:
      v5 = "__c11_atomic_fetch_xor(";
      break;
    case 0x25:
      v5 = "__c11_atomic_init(";
      break;
    case 0x26:
      v5 = "__c11_atomic_load(";
      break;
    case 0x27:
      v5 = "__c11_atomic_store(";
      break;
    case 0x28:
      v5 = "__hip_atomic_compare_exchange_strong(";
      break;
    case 0x29:
      v5 = "__hip_atomic_compare_exchange_weak(";
      break;
    case 0x2A:
      v5 = "__hip_atomic_exchange(";
      break;
    case 0x2B:
      v5 = "__hip_atomic_fetch_add(";
      break;
    case 0x2C:
      v5 = "__hip_atomic_fetch_and(";
      break;
    case 0x2D:
      v5 = "__hip_atomic_fetch_max(";
      break;
    case 0x2E:
      v5 = "__hip_atomic_fetch_min(";
      break;
    case 0x2F:
      v5 = "__hip_atomic_fetch_or(";
      break;
    case 0x30:
      v5 = "__hip_atomic_fetch_sub(";
      break;
    case 0x31:
      v5 = "__hip_atomic_fetch_xor(";
      break;
    case 0x32:
      v5 = "__hip_atomic_load(";
      break;
    case 0x33:
      v5 = "__hip_atomic_store(";
      break;
    case 0x34:
      v5 = "__opencl_atomic_compare_exchange_strong(";
      break;
    case 0x35:
      v5 = "__opencl_atomic_compare_exchange_weak(";
      break;
    case 0x36:
      v5 = "__opencl_atomic_exchange(";
      break;
    case 0x37:
      v5 = "__opencl_atomic_fetch_add(";
      break;
    case 0x38:
      v5 = "__opencl_atomic_fetch_and(";
      break;
    case 0x39:
      v5 = "__opencl_atomic_fetch_max(";
      break;
    case 0x3A:
      v5 = "__opencl_atomic_fetch_min(";
      break;
    case 0x3B:
      v5 = "__opencl_atomic_fetch_or(";
      break;
    case 0x3C:
      v5 = "__opencl_atomic_fetch_sub(";
      break;
    case 0x3D:
      v5 = "__opencl_atomic_fetch_xor(";
      break;
    case 0x3E:
      v5 = "__opencl_atomic_init(";
      break;
    case 0x3F:
      v5 = "__opencl_atomic_load(";
      break;
    case 0x40:
      v5 = "__opencl_atomic_store(";
      break;
    case 0x41:
      v5 = "__scoped_atomic_add_fetch(";
      break;
    case 0x42:
      v5 = "__scoped_atomic_and_fetch(";
      break;
    case 0x43:
      v5 = "__scoped_atomic_compare_exchange(";
      break;
    case 0x44:
      v5 = "__scoped_atomic_compare_exchange_n(";
      break;
    case 0x45:
      v5 = "__scoped_atomic_exchange(";
      break;
    case 0x46:
      v5 = "__scoped_atomic_exchange_n(";
      break;
    case 0x47:
      v5 = "__scoped_atomic_fetch_add(";
      break;
    case 0x48:
      v5 = "__scoped_atomic_fetch_and(";
      break;
    case 0x49:
      v5 = "__scoped_atomic_fetch_max(";
      break;
    case 0x4A:
      v5 = "__scoped_atomic_fetch_min(";
      break;
    case 0x4B:
      v5 = "__scoped_atomic_fetch_nand(";
      break;
    case 0x4C:
      v5 = "__scoped_atomic_fetch_or(";
      break;
    case 0x4D:
      v5 = "__scoped_atomic_fetch_sub(";
      break;
    case 0x4E:
      v5 = "__scoped_atomic_fetch_xor(";
      break;
    case 0x4F:
      v5 = "__scoped_atomic_load(";
      break;
    case 0x50:
      v5 = "__scoped_atomic_load_n(";
      break;
    case 0x51:
      v5 = "__scoped_atomic_max_fetch(";
      break;
    case 0x52:
      v5 = "__scoped_atomic_min_fetch(";
      break;
    case 0x53:
      v5 = "__scoped_atomic_nand_fetch(";
      break;
    case 0x54:
      v5 = "__scoped_atomic_or_fetch(";
      break;
    case 0x55:
      v5 = "__scoped_atomic_store(";
      break;
    case 0x56:
      v5 = "__scoped_atomic_store_n(";
      break;
    case 0x57:
      v5 = "__scoped_atomic_sub_fetch(";
      break;
    case 0x58:
      v5 = "__scoped_atomic_xor_fetch(";
      break;
    default:
      v5 = nullptr;
      break;
  }
  sub_971800(*a1, v5);
  v10 = *(char **)(a2 + 16);
  if ( v10 )
    sub_EE16F0(a1, v10, v6, v7, v8, v9, a3);
  else
    sub_EE0C80(a1);
  v11 = *(_DWORD *)(a2 + 84);
  v12 = v11 & 0xFFFFFFBF;
  LOBYTE(v12) = (v11 & 0xFFFFFFBF) != 16;
  if ( v11 <= 0x3F )
    v12 &= ~(unsigned int)(0x8004004000000000LL >> v11);
  v13 = *a1;
  if ( (_BYTE)v12 )
  {
    sub_971800(v13, ", ");
    v42 = *(_DWORD *)(a2 + 84);
    if ( v42 == 62 || v42 == 37 )
      v43 = *(char **)(a2 + 24);
    else
      v43 = *(char **)(a2 + 32);
    if ( v43 )
      sub_EE16F0(a1, v43, v38, v39, v40, v41, a3);
    else
      sub_EE0C80(a1);
    v13 = *a1;
    v11 = *(_DWORD *)(a2 + 84);
  }
  LOBYTE(v14) = 0;
  if ( v11 <= 0x35 )
    v14 = (0x3003000C000038uLL >> v11) & 1;
  if ( v11 - 67 <= 1 || (_BYTE)v14 )
  {
    sub_971800(v13, ", ");
    if ( (*(_DWORD *)(a2 + 84) & 0xFFFFFFBF) == 5 )
    {
      v19 = *(char **)(a2 + 40);
      v20 = a1;
      if ( v19 )
      {
LABEL_14:
        sub_EE16F0(v20, v19, v15, v16, v17, v18, a3);
        v13 = *a1;
        v11 = *(_DWORD *)(a2 + 84);
        goto LABEL_15;
      }
    }
    else
    {
      v19 = *(char **)(a2 + 48);
      v20 = a1;
      if ( v19 )
        goto LABEL_14;
    }
    sub_EE0C80(v20);
    v13 = *a1;
    v11 = *(_DWORD *)(a2 + 84);
  }
LABEL_15:
  if ( v11 - 3 <= 1 )
  {
    sub_971800(v13, ", ");
    v37 = *(char **)(a2 + 56);
    if ( v37 )
      sub_EE16F0(a1, v37, v33, v34, v35, v36, a3);
    else
      sub_EE0C80(a1);
    v13 = *a1;
    v11 = *(_DWORD *)(a2 + 84);
  }
  if ( v11 != 37 && v11 != 62 )
  {
    sub_971800(v13, ", ");
    v25 = *(char **)(a2 + 24);
    if ( v25 )
      sub_EE16F0(a1, v25, v21, v22, v23, v24, a3);
    else
      sub_EE0C80(a1);
    v13 = *a1;
    v11 = *(_DWORD *)(a2 + 84);
  }
  LOBYTE(v26) = 0;
  if ( v11 <= 0x35 )
    v26 = (0x3003000C000000uLL >> v11) & 1;
  if ( (v11 & 0xFFFFFFBF) - 3 <= 1 || (_BYTE)v26 )
  {
    sub_971800(v13, ", ");
    v31 = *(char **)(a2 + 40);
    if ( v31 )
      sub_EE16F0(a1, v31, v27, v28, v29, v30, a3);
    else
      sub_EE0C80(a1);
    v13 = *a1;
  }
  return sub_971800(v13, ")");
}

