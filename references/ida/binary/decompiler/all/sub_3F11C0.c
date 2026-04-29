unsigned __int64 __fastcall sub_3F11C0(__int64 a1, int a2, int a3, unsigned __int8 a4)
{
  unsigned int v6; // r15d
  __int64 v7; // rax
  unsigned int v8; // r12d
  unsigned int v9; // r14d
  int *v10; // rax
  __int64 v11; // rsi
  unsigned int v12; // ebp
  int v13; // eax
  int v14; // r9d
  int v15; // r9d
  int v17; // ecx
  signed int v18; // edx
  __int64 v19; // rax
  int dtype_size; // [rsp+0h] [rbp-88h]
  int v22; // [rsp+Ch] [rbp-7Ch]
  _DWORD v23[4]; // [rsp+10h] [rbp-78h] BYREF
  _DWORD v24[4]; // [rsp+20h] [rbp-68h] BYREF
  _DWORD v25[6]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  if ( a4 != 2 && a4 != 7 )
  {
    if ( !under_debugger )
      sub_37EA20(52210);
    BUG();
  }
  v6 = a4;
  dtype_size = get_dtype_size();
  v7 = *(_QWORD *)(a1 + 832);
  v8 = *(_DWORD *)(v7 + 380);
  v9 = sub_3EF260(a1, 2, *(_DWORD *)(v7 + 460));
  v10 = *(int **)(a1 + 832);
  if ( v10[117] == v9 )
  {
    v17 = *(_DWORD *)(a1 + 52);
    v18 = 8;
    if ( (v17 & 0x1018) != 0x1010 )
    {
      if ( (v17 & 0x1008) == 0 || (v18 = 2, (v17 & 0x1018) == 0x1008) )
        v18 = 4;
    }
    sub_3ED260(a1, 2u, a4, v10[118], (int)v9, v10[115], v18);
    v19 = *(_QWORD *)(a1 + 832);
    v9 = *(_DWORD *)(v19 + 460);
    v22 = *(_DWORD *)(v19 + 464);
  }
  else
  {
    v22 = v10[116];
  }
  v11 = a4;
  v12 = (a4 != 2) + 7;
  sub_1D3CC0(a1, v11, v12, v8, v8, 0);
  sub_1D3CC0(a1, v6, v12, v9, v9, 0);
  v13 = get_dtype_size();
  sub_1D3790(a1, 14, v13, v8, v9, v22, 0);
  v23[2] = v22;
  v23[0] = 1;
  v23[1] = get_dtype_size();
  v24[0] = 1;
  v25[0] = 1;
  v24[1] = dtype_size;
  v24[2] = a2;
  v25[1] = dtype_size;
  v25[2] = a3;
  sub_1D38D0(a1, 11, (unsigned int)v23, 0, (unsigned int)v24, v14);
  if ( a2 != a3 )
    sub_1D38D0(a1, 10, (unsigned int)v23, 0, (unsigned int)v25, v15);
  sub_11A960((__int64)v25);
  sub_11A960((__int64)v24);
  sub_11A960((__int64)v23);
  return v26 - __readfsqword(0x28u);
}
