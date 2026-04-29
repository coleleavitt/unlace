unsigned __int64 __fastcall sub_3F6940(__int64 a1, int a2, int a3, __int64 a4, double a5)
{
  __int64 v7; // rbp
  unsigned __int8 v8; // al
  unsigned __int64 dtype_size; // r12
  unsigned __int64 result; // rax
  int v11; // r12d
  int *v12; // rdi
  __int64 (__fastcall *v13)(__int64, int); // rdx
  __int64 v14; // rsi
  int v15; // r13d
  int v16; // r15d
  __int64 v17; // r9
  int v18; // eax
  int i; // [rsp+8h] [rbp-50h]
  int v20; // [rsp+Ch] [rbp-4Ch]
  int v23; // [rsp+18h] [rbp-40h]
  unsigned __int8 dtype_by_size; // [rsp+1Fh] [rbp-39h]

  v20 = 163;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) != 8 )
    v20 = 61;
  v23 = *(unsigned __int16 *)(a4 + 6) - v20;
  v7 = (int)sub_3EE210(a1, a4, a5);
  dtype_by_size = get_dtype_by_size(v7);
  v8 = sub_3EE110(a1, a4, a5);
  dtype_size = get_dtype_size(v8);
  result = dtype_size / (unsigned int)sub_3EE210(a1, a4, a5);
  v11 = result;
  if ( a2 == 1 )
  {
    v11 = *(_DWORD *)(a4 + 8) * result;
    if ( v11 > 16 / (int)v7 )
    {
      if ( !under_debugger )
        sub_3835A0(0xC8E4u, a4, a5);
      BUG();
    }
  }
  else if ( a2 <= 0 )
  {
    return result;
  }
  for ( i = 0; i < a2; result = (unsigned int)i )
  {
    v12 = *(int **)(a1 + 832);
    v13 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v12 + 168LL);
    v14 = (unsigned int)(v20 + (i + v23) % 32);
    if ( v13 == sub_3EA010 )
    {
      v15 = sub_3EA010((__int64)v12, v14);
    }
    else
    {
      v18 = v13((__int64)v12, v14);
      v12 = *(int **)(a1 + 832);
      v15 = v18;
    }
    v16 = 0;
    if ( v11 > 0 )
    {
      do
      {
        v17 = v15;
        ++v16;
        v15 += v7;
        sub_3F56D0(
          a1,
          2u,
          dtype_by_size,
          v12[16],
          a3,
          v17,
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 84LL));
        v12 = *(int **)(a1 + 832);
      }
      while ( v11 != v16 );
    }
    sub_3F68B0(a1, a3, v7, v12[158]);
    ++i;
  }
  return result;
}
