unsigned __int64 __fastcall sub_3EFCB0(__int64 a1, __int64 a2, int a3, char a4, char a5, double a6)
{
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v10; // r13
  signed int v12; // r15d
  __int64 v13; // rax
  __int64 v14; // rdi
  int dtype_size; // eax
  _QWORD *v16; // r12
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  char v20; // bl
  signed int v21; // r12d
  char v22; // cl
  unsigned __int8 v23; // dl
  __int64 v24; // rsi
  __int64 v25; // rdi
  int v26; // eax
  _QWORD *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // [rsp+4h] [rbp-44h]

  v6 = a3;
  v7 = *(_QWORD *)(a1 + 832);
  v34 = a2;
  v8 = *(_QWORD *)(v7 + 4464);
  if ( !v8 )
    goto LABEL_20;
  v10 = a1;
  v12 = *(_DWORD *)(*(_QWORD *)(v7 + 4456) + 4 * v8 - 4);
  *(_QWORD *)(v7 + 4464) = v8 - 1;
  sub_3E9CF0(a1, a5, 0, v12);
  v13 = *(_QWORD *)(a1 + 832);
  v14 = 2;
  if ( *(_DWORD *)(v13 + 80) == 8 )
    v14 = 7;
  dtype_size = get_dtype_size(v14);
  a1 = v10;
  sub_1D2710(v10, 0x16u, dtype_size, v6, v12, (int)a2, 0);
  v16 = *(_QWORD **)(v10 + 832);
  v17 = v16[558];
  a2 = v16[557];
  if ( v16[559] < (unsigned __int64)(v17 + 1) )
  {
    a1 = (__int64)(v16 + 557);
    v33 = qvector_reserve(v16 + 557, a2, v17 + 1, 4);
    v16[557] = v33;
    a2 = v33;
    v17 = v16[558];
  }
  *(_DWORD *)(a2 + 4 * v17) = v12;
  ++v16[558];
  v18 = *(_QWORD *)(v10 + 832);
  v19 = *(_QWORD *)(v18 + 4464);
  if ( !v19 )
LABEL_20:
    sub_3E6800(a6, a1, a2);
  v20 = a4 - a5;
  v21 = *(_DWORD *)(*(_QWORD *)(v18 + 4456) + 4 * v19 - 4);
  *(_QWORD *)(v18 + 4464) = v19 - 1;
  v22 = 63 - a5;
  v23 = 2;
  if ( *(_DWORD *)(*(_QWORD *)(v10 + 832) + 80LL) == 8 )
    v23 = 7;
  if ( v22 < v20 )
  {
    v31 = -(__int64)(0x8000000000000000LL >> (v20 - 1));
    if ( a5 != 64 )
      v31 &= ~(-1LL << a5);
    v24 = ~v31;
  }
  else
  {
    v24 = -(__int64)(0x8000000000000000LL >> v22);
    if ( v20 )
      v24 &= ~(-1LL << (64 - v20));
  }
  sub_3E9CF0(v10, v24, v23, v21);
  v25 = 2;
  if ( *(_DWORD *)(*(_QWORD *)(v10 + 832) + 80LL) == 8 )
    v25 = 7;
  v26 = get_dtype_size(v25);
  sub_1D2710(v10, 0x14u, v26, v34, v21, v34, 0);
  v27 = *(_QWORD **)(v10 + 832);
  v28 = v27[558];
  v29 = v27[557];
  if ( v27[559] < (unsigned __int64)(v28 + 1) )
  {
    v32 = qvector_reserve(v27 + 557, v29, v28 + 1, 4);
    v27[557] = v32;
    v29 = v32;
    v28 = v27[558];
  }
  *(_DWORD *)(v29 + 4 * v28) = v21;
  ++v27[558];
  return sub_3EC840(v10, v34, *(_DWORD *)(*(_QWORD *)(v10 + 832) + 80LL));
}
