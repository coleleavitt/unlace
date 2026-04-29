__int64 __fastcall sub_3ED510(__int64 a1, __int64 a2, int a3, int a4, double a5)
{
  int v6; // r12d
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  signed int v13; // r14d
  unsigned __int16 v14; // ax
  __int64 v15; // r13
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rbx
  int v21; // eax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r13
  int v26; // r14d
  int v27; // eax
  int v28; // eax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rax
  int v32; // r13d
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // eax
  int v37; // eax
  __int64 v38; // r14
  int v39; // eax
  int v40; // eax
  __int64 v41; // r13
  int dtype_size; // eax
  int v43; // eax
  __int64 v44; // [rsp-8h] [rbp-50h]
  __int64 v45; // [rsp+0h] [rbp-48h]
  int v46; // [rsp+8h] [rbp-40h]
  int v47; // [rsp+Ch] [rbp-3Ch]

  v6 = a2;
  v8 = 7;
  v9 = *(_QWORD *)(a1 + 832);
  if ( *(_DWORD *)(v9 + 84) != 8 )
    v8 = 2;
  v10 = *(_QWORD *)(v9 + 4464);
  if ( !v10 )
    goto LABEL_32;
  a2 = *(unsigned int *)(*(_QWORD *)(v9 + 4456) + 4 * v10 - 4);
  *(_QWORD *)(v9 + 4464) = v10 - 1;
  v11 = *(_QWORD *)(a1 + 832);
  v46 = a2;
  v12 = *(_QWORD *)(v11 + 4464);
  if ( !v12 )
    goto LABEL_32;
  a2 = -1;
  v13 = *(_DWORD *)(*(_QWORD *)(v11 + 4456) + 4 * v12 - 4);
  *(_QWORD *)(v11 + 4464) = v12 - 1;
  sub_3E9CF0(a1, -1, v8, v13);
  v14 = *(_WORD *)(a1 + 48);
  if ( v14 == 214 )
  {
    v35 = *(_QWORD *)(a1 + 832);
    if ( a3 == a4 )
    {
      sub_1D2C40(a1, 0, v8, *(_DWORD *)(v35 + 488), v46, 0);
      v41 = *(int *)(*(_QWORD *)(a1 + 832) + 488LL);
      dtype_size = get_dtype_size(v8);
      sub_1D2710(a1, 0x19u, dtype_size, v13, v46, v41, 0);
      if ( (*(_BYTE *)(a1 + 52) & 1) != 0 )
        sub_3E8330(a1, v13, v46, 1);
      v43 = get_dtype_size(v8);
      sub_1D2710(a1, 0xCu, v43, v13, v46, v6, 0);
    }
    else
    {
      v47 = *(_DWORD *)(v35 + 488);
      v36 = get_dtype_size(0);
      sub_1D2710(a1, 6u, v36, v47, 0x3BEA45E214ADDC55LL, v46, 0);
      sub_1D2C40(a1, 0, v8, v46, v46, 0);
      v37 = get_dtype_size(v8);
      sub_1D2710(a1, 0xCu, v37, a3, v46, v46, 0);
      v38 = *(int *)(*(_QWORD *)(a1 + 832) + 488LL);
      v39 = get_dtype_size(v8);
      sub_1D2710(a1, 0x22u, v39, a4, v46, v38, 0);
      if ( (*(_BYTE *)(a1 + 52) & 1) != 0 )
        sub_3E8330(a1, a4, v46, 0);
      v40 = get_dtype_size(v8);
      sub_1D2710(a1, 0xDu, v40, a4, v46, v6, 0);
    }
    goto LABEL_13;
  }
  if ( v14 > 0xD6u )
  {
    if ( v14 == 216 )
    {
      v30 = *(_QWORD *)(a1 + 832);
      v31 = *(_QWORD *)(v30 + 4464);
      if ( !v31 )
        goto LABEL_32;
      v32 = *(_DWORD *)(*(_QWORD *)(v30 + 4456) + 4 * v31 - 4);
      *(_QWORD *)(v30 + 4464) = v31 - 1;
      v33 = get_dtype_size(v8);
      v34 = a3;
      a3 = v32;
      sub_1D2710(a1, 7u, v33, v34, 0x3BEA45E214ADDC55LL, v32, 0);
      goto LABEL_10;
    }
    if ( v14 != 217 )
      return 0;
    v23 = *(_QWORD *)(a1 + 832);
    v24 = *(_QWORD *)(v23 + 4464);
    if ( !v24 )
      goto LABEL_32;
    v25 = *(int *)(*(_QWORD *)(v23 + 4456) + 4 * v24 - 4);
    *(_QWORD *)(v23 + 4464) = v24 - 1;
    v26 = v25;
    v27 = get_dtype_size(v8);
    sub_1D2710(a1, 7u, v27, a3, 0x3BEA45E214ADDC55LL, v25, 0);
LABEL_18:
    sub_1D2C40(a1, 0, v8, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 488LL), v46, 0);
    v45 = *(int *)(*(_QWORD *)(a1 + 832) + 488LL);
    v28 = get_dtype_size(v8);
    sub_1D2710(a1, 0x19u, v28, v25, v46, v45, 0);
    if ( (*(_BYTE *)(a1 + 52) & 1) != 0 )
      sub_3E8330(a1, v26, v46, 1);
    v29 = get_dtype_size(v8);
    sub_1D2710(a1, 0xCu, v29, v25, v46, v6, 0);
    goto LABEL_13;
  }
  if ( v14 == 7 )
    goto LABEL_10;
  if ( v14 == 8 )
  {
    v25 = a3;
    v26 = a3;
    goto LABEL_18;
  }
  v13 = a4;
  if ( v14 == 3 )
  {
LABEL_10:
    v15 = *(int *)(*(_QWORD *)(a1 + 832) + 488LL);
    v16 = get_dtype_size(0);
    sub_1D2710(a1, 4u, v16, v15, 0x3BEA45E214ADDC55LL, 0, 0);
    v17 = *(_QWORD *)(a1 + 832);
    a2 = v44;
    v18 = *(_QWORD *)(v17 + 4464);
    if ( v18 )
    {
      v19 = *(_DWORD *)(*(_QWORD *)(v17 + 4456) + 4 * v18 - 4);
      *(_QWORD *)(v17 + 4464) = v18 - 1;
      sub_1D2D10(a1, v8, a3, v13, v6, v46, v19);
      v20 = *(int *)(*(_QWORD *)(a1 + 832) + 488LL);
      v21 = get_dtype_size(0);
      sub_1D2710(a1, 4u, v21, 0, 0x3BEA45E214ADDC55LL, v20, 0);
      if ( (*(_BYTE *)(a1 + 52) & 1) != 0 )
        sub_3E8330(a1, 3, -1, 1);
LABEL_13:
      sub_3EC840(a1, v6, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
      return 1;
    }
LABEL_32:
    sub_3E6800(a5, a1, a2);
  }
  return 0;
}
