unsigned __int64 __fastcall sub_3EFAA0(__int64 a1, __int64 a2, int a3, char a4, char a5, double a6)
{
  int v7; // r12d
  __int64 v8; // rbp
  __int64 v10; // rcx
  __int64 v11; // rdx
  signed int v12; // r13d
  unsigned __int8 v13; // dl
  __int64 v14; // rsi
  __int64 v15; // rdi
  int v16; // eax
  _QWORD *v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned __int8 dtype_by_size; // al
  int dtype_size; // eax
  __int64 v23; // rsi
  char v24; // r8
  __int64 v25; // rax

  v7 = a2;
  v8 = a3;
  v10 = *(_QWORD *)(a1 + 832);
  if ( (!a4 || *(_DWORD *)(v10 + 80) == 4 && a4 == 32) && a5 == 63 )
  {
    dtype_by_size = get_dtype_by_size(*(int *)(v10 + 80));
    dtype_size = get_dtype_size(dtype_by_size);
    sub_1D2710(a1, 4u, dtype_size, (int)v8, 0x3BEA45E214ADDC55LL, (int)a2, 0);
  }
  else
  {
    v11 = *(_QWORD *)(v10 + 4464);
    if ( !v11 )
      sub_3E6800(a6, a1, a2);
    v12 = *(_DWORD *)(*(_QWORD *)(v10 + 4456) + 4 * v11 - 4);
    *(_QWORD *)(v10 + 4464) = v11 - 1;
    v13 = 2;
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
      v13 = 7;
    if ( a4 > a5 )
    {
      v23 = -(__int64)(0x8000000000000000LL >> (a4 - 1));
      v24 = a5 + 1;
      if ( v24 )
        v23 &= ~(-1LL << (64 - v24));
      v14 = ~v23;
    }
    else
    {
      v14 = -(__int64)(0x8000000000000000LL >> a5);
      if ( a4 )
        v14 &= ~(-1LL << (64 - a4));
    }
    sub_3E9CF0(a1, v14, v13, v12);
    v15 = 2;
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
      v15 = 7;
    v16 = get_dtype_size(v15);
    sub_1D2710(a1, 0x14u, v16, v8, v12, v7, 0);
    v17 = *(_QWORD **)(a1 + 832);
    v18 = v17[558];
    v19 = v17[557];
    if ( v17[559] < (unsigned __int64)(v18 + 1) )
    {
      v25 = qvector_reserve(v17 + 557, v19, v18 + 1, 4);
      v17[557] = v25;
      v19 = v25;
      v18 = v17[558];
    }
    *(_DWORD *)(v19 + 4 * v18) = v12;
    ++v17[558];
  }
  return sub_3EC840(a1, v7, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
}
