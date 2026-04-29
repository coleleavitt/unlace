__int64 __fastcall sub_3F6F80(__int64 a1, unsigned int a2, __int64 a3, char a4, double a5)
{
  __int64 v8; // rdi
  unsigned __int8 v9; // r14
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(__int64, int); // rax
  __int64 v12; // rsi
  __int64 result; // rax
  int dtype_size; // eax
  __int64 v15; // rdi
  signed int v16; // r13d
  __int64 v17; // rsi
  __int64 (__fastcall *v18)(__int64, int); // rax
  __int64 v19; // rsi
  int v20; // eax

  v8 = *(_QWORD *)(a1 + 832);
  v9 = *(_BYTE *)(a3 + 5);
  v10 = *(unsigned __int16 *)(a3 + 6);
  v11 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v8 + 168LL);
  if ( v11 == sub_3EA010 )
    v12 = (unsigned int)sub_3EA010(v8, v10);
  else
    v12 = (unsigned int)v11(v8, v10);
  result = sub_3F6740(a1, v12, v9, a2, 1, a5);
  if ( a4 )
  {
    if ( a2 != (_DWORD)result )
      sub_3F6E70(a1, 4u, v9, (int)result, 0x3BEA45E214ADDC55LL, (int)a2, a5, 0, 1);
    dtype_size = get_dtype_size(v9);
    v15 = *(_QWORD *)(a1 + 832);
    v16 = a2 + dtype_size;
    v17 = (unsigned int)*(unsigned __int16 *)(a3 + 6) + 1;
    v18 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v15 + 168LL);
    if ( v18 == sub_3EA010 )
      v19 = (unsigned int)sub_3EA010(v15, v17);
    else
      v19 = (unsigned int)v18(v15, v17);
    v20 = sub_3F6740(a1, v19, v9, v16, 1, a5);
    if ( v16 == v20 )
    {
      return a2;
    }
    else
    {
      sub_3F6E70(a1, 4u, v9, v20, 0x3BEA45E214ADDC55LL, v16, a5, 0, 1);
      return a2;
    }
  }
  return result;
}
