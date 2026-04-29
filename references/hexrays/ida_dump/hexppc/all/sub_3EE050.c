unsigned __int64 __fastcall sub_3EE050(__int64 a1, __int64 a2, int a3, int a4, char a5, double a6)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // ebp
  int v11; // r13d
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r15
  int dtype_size; // eax
  int v20; // eax
  unsigned __int8 v21; // [rsp+Ch] [rbp-3Ch]

  v7 = *(_QWORD *)(a1 + 832);
  v8 = *(_QWORD *)(v7 + 4464);
  if ( !v8
    || (v9 = a2,
        v11 = *(_DWORD *)(*(_QWORD *)(v7 + 4456) + 4 * v8 - 4),
        a2 = 7,
        v21 = a5 & 1,
        *(_QWORD *)(v7 + 4464) = v8 - 1,
        sub_1D2C40(a1, 7u, 8u, a3, v11, a5 & 1),
        v12 = *(_QWORD *)(a1 + 832),
        (v13 = *(_QWORD *)(v12 + 4464)) == 0)
    || (a2 = 7,
        v14 = *(_DWORD *)(*(_QWORD *)(v12 + 4456) + 4 * v13 - 4),
        *(_QWORD *)(v12 + 4464) = v13 - 1,
        sub_1D2C40(a1, 7u, 8u, a4, v14, v21),
        v15 = *(_QWORD *)(a1 + 832),
        (v16 = *(_QWORD *)(v15 + 4464)) == 0) )
  {
    sub_3E6800(a6, a1, a2);
  }
  v17 = *(int *)(*(_QWORD *)(v15 + 4456) + 4 * v16 - 4);
  *(_QWORD *)(v15 + 4464) = v16 - 1;
  dtype_size = get_dtype_size(8);
  sub_1D2710(a1, 0xEu, dtype_size, v11, v14, v17, 0);
  if ( (a5 & 2) != 0 )
  {
    sub_3EA390(a1, 11, v17, v9, 8u);
  }
  else
  {
    v20 = get_dtype_size(7);
    sub_1D2710(a1, 4u, v20, v17, 0x3BEA45E214ADDC55LL, v9, 0);
  }
  return sub_3EC840(a1, v9, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
}
