__int64 __fastcall sub_3E5CA0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(__int64, int); // rax
  __int64 v11; // rbp
  int dtype_size; // eax
  __int64 v13; // [rsp-28h] [rbp-28h]

  result = ((*(_DWORD *)(a1 + 52) & 0x18) - 8) & 0xFFFFFFF0;
  if ( (((*(_DWORD *)(a1 + 52) & 0x18) - 8) & 0xFFFFFFF0) == 0 )
  {
    sub_3E5520(a1, a2, a3, 1, a5);
    v8 = *(_QWORD *)(a1 + 832);
    v9 = *(unsigned __int16 *)(a2 + 6);
    v10 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v8 + 168LL);
    if ( v10 == sub_3E21C0 )
    {
      if ( (int)v9 <= 63 )
      {
        v11 = 4 * (int)v9 + 8;
      }
      else
      {
        v11 = (int)v9 - 64;
        if ( (int)v9 >= 68 )
          v11 = -1;
      }
    }
    else
    {
      v11 = (int)v10(v8, v9);
    }
    dtype_size = get_dtype_size(2);
    sub_1CF210(a1, 4u, dtype_size, a3, 0x3BEA45E214ADDC55LL, v11, 0);
    return v13;
  }
  return result;
}
