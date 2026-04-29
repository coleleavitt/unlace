unsigned __int64 __fastcall sub_3EEB70(
        __int64 a1,
        unsigned int a2,
        signed int a3,
        unsigned __int16 a4,
        char a5,
        char a6,
        double a7)
{
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rbx
  signed int v12; // r12d
  __int64 v13; // rdx
  signed int v15; // r14d
  char v16; // r13
  _QWORD *v17; // r8
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v21; // rdi
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rdi
  int dtype_size; // eax
  signed int v26; // [rsp+8h] [rbp-50h]
  _QWORD *v27; // [rsp+8h] [rbp-50h]
  signed int v28; // [rsp+8h] [rbp-50h]

  v9 = *(_QWORD *)(a1 + 832);
  v10 = *(_QWORD *)(v9 + 4464);
  if ( !v10
    || (v11 = a1,
        a1 = *(_QWORD *)(v9 + 4456),
        v12 = *(_DWORD *)(a1 + 4 * v10 - 4),
        *(_QWORD *)(v9 + 4464) = v10 - 1,
        v9 = *(_QWORD *)(v11 + 832),
        (v13 = *(_QWORD *)(v9 + 4464)) == 0) )
  {
    sub_3E6800(a7, a1, v9);
  }
  v15 = *(_DWORD *)(*(_QWORD *)(v9 + 4456) + 4 * v13 - 4);
  *(_QWORD *)(v9 + 4464) = v13 - 1;
  if ( a4 > 0xFu && 32 - a4 <= a5 && a5 < a6 )
  {
    v28 = a3;
    sub_3E9CF0(v11, 32 - a4, 0, v15);
    v24 = 2;
    if ( *(_DWORD *)(*(_QWORD *)(v11 + 832) + 80LL) == 8 )
      v24 = 7;
    dtype_size = get_dtype_size(v24);
    sub_1D2710(v11, 0x17u, dtype_size, v28, v15, v12, 0);
    v16 = a6;
  }
  else
  {
    v16 = a6;
    if ( a5 <= a6 && 32 - a6 > a4 )
    {
      v26 = a3;
      sub_3E9CF0(v11, a4, 0, v15);
      v21 = 2;
      if ( *(_DWORD *)(*(_QWORD *)(v11 + 832) + 80LL) == 8 )
        v21 = 7;
      v22 = get_dtype_size(v21);
      sub_1D2710(v11, 0x16u, v22, v26, v15, v12, 0);
    }
    else
    {
      sub_3EE810(v11, a3, a4, v12, a7);
    }
  }
  v17 = *(_QWORD **)(v11 + 832);
  v18 = v17[558];
  v19 = v17[557];
  if ( v17[559] < (unsigned __int64)(v18 + 1) )
  {
    v27 = *(_QWORD **)(v11 + 832);
    v23 = qvector_reserve(v17 + 557, v19, v18 + 1, 4);
    v17 = v27;
    v19 = v23;
    v27[557] = v23;
    v18 = v27[558];
  }
  *(_DWORD *)(v19 + 4 * v18) = v15;
  ++v17[558];
  sub_3EE990(v11, a2, v12, a5, v16, a7);
  return sub_3EC840(v11, a2, *(_DWORD *)(*(_QWORD *)(v11 + 832) + 80LL));
}
