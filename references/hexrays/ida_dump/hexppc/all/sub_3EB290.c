unsigned __int64 __fastcall sub_3EB290(__int64 a1, __int64 a2, int a3)
{
  char v3; // al
  unsigned __int16 v5; // ax
  _DWORD *v6; // rdi
  __int64 v7; // r12
  __int64 (__fastcall *v8)(_DWORD *, unsigned int); // rdx
  int v9; // eax
  __int64 v10; // rbp
  unsigned int v11; // eax
  int dtype_size; // eax
  unsigned __int8 v14; // al
  __int64 v15; // [rsp-10h] [rbp-28h]

  v3 = *(_BYTE *)(a2 + 1);
  if ( v3 != 1 && ((*(_BYTE *)(a1 + 53) & 0x20) != 0 || ((v3 - 2) & 0xFD) != 0) )
  {
    if ( v3 == 5 && !*(_QWORD *)(a2 + 8) )
      goto LABEL_13;
    v5 = *(_WORD *)(a2 + 6);
LABEL_6:
    v6 = *(_DWORD **)(a1 + 832);
    v7 = a3;
    v8 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v6 + 168LL);
    if ( v8 == sub_3E59C0 )
    {
      v9 = sub_3E59C0(v6, v5);
    }
    else
    {
      v9 = v8(v6, v5);
      v6 = *(_DWORD **)(a1 + 832);
    }
    v10 = v9;
    v11 = 2;
    if ( v6[20] == 8 )
      v11 = 7;
    dtype_size = get_dtype_size(v11);
    sub_1D2710(a1, 4u, dtype_size, v10, 0x3BEA45E214ADDC55LL, v7, 0);
    return v15;
  }
  v5 = *(_WORD *)(a2 + 6);
  if ( v5 )
    goto LABEL_6;
LABEL_13:
  v14 = 2;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
    v14 = 7;
  return sub_3E9DD0(a1, (unsigned __int8 *)a2, v14, 0, a3);
}
