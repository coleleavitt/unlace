void __fastcall sub_3F0D60(__int64 a1, unsigned __int8 a2, unsigned int a3, int a4, unsigned __int8 a5)
{
  unsigned int v5; // r14d
  __int64 v7; // rax
  int v9; // ebp
  char v10; // r15
  int v11; // eax
  int v12; // r9d
  unsigned int v13; // ebp
  unsigned int v14; // r13d
  int v15; // eax
  unsigned int v16; // r13d
  char v17; // r14
  int v18; // eax
  int v19; // ebp
  int dtype_size; // eax
  int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rax
  int v25; // r9d
  int v26; // r12d
  int v27; // r14d
  int v28; // eax
  unsigned int v29; // [rsp+0h] [rbp-88h]
  int v30; // [rsp+0h] [rbp-88h]
  int v31; // [rsp+10h] [rbp-78h] BYREF
  int v32; // [rsp+14h] [rbp-74h]
  unsigned int v33; // [rsp+18h] [rbp-70h]
  _DWORD v34[4]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v35[11]; // [rsp+30h] [rbp-58h] BYREF

  v5 = a5;
  v7 = *(_QWORD *)(a1 + 832);
  v35[3] = __readfsqword(0x28u);
  if ( a5 )
  {
    v13 = *(_DWORD *)(v7 + 460);
    dtype_size = get_dtype_size();
    sub_1D3790(a1, 4, dtype_size, a3, 346938453, v13, 0);
    v30 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 464LL);
    v22 = get_dtype_size();
    sub_1D3790(a1, 4, v22, a4, 346938453, v30, 0);
    v14 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 464LL);
    if ( a5 == 1 )
    {
      v29 = 2;
      v10 = 2;
    }
    else if ( a5 == 2 )
    {
      v29 = 7;
      v10 = 7;
    }
    else
    {
      v29 = 8;
      v10 = 8;
    }
  }
  else
  {
    v9 = *(_DWORD *)(v7 + 464);
    v10 = 1;
    v11 = get_dtype_size();
    v12 = v9;
    v13 = a3;
    sub_1D3790(a1, 4, v11, a4, 346938453, v12, 0);
    v14 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 464LL);
    v29 = 1;
  }
  sub_1D3CC0(a1, v5, v29, v13, v13, a2);
  sub_1D3CC0(a1, v5, v29, v14, v14, a2);
  if ( *(_BYTE *)(a1 + 145) != 5 )
  {
    v15 = get_dtype_size();
    sub_1D3790(a1, 14, v15, v14, v13, v13, 0);
    if ( v10 != 1 )
      goto LABEL_5;
LABEL_18:
    v16 = 0;
    v17 = 0;
    goto LABEL_8;
  }
  v33 = v14;
  v31 = 1;
  v34[0] = 1;
  v32 = get_dtype_size();
  v34[1] = v32;
  v35[0] = 0xFFFFFFFF00000000LL;
  v34[2] = v13;
  v35[1] = 0;
  v23 = get_dtype_size();
  v24 = sub_327770(*(_QWORD *)(a1 + 152), v23, 1);
  sub_11E5D0((__int64)v35, *(_QWORD *)(a1 + 832), v24, v32, *(_QWORD *)(a1 + 40), 0);
  sub_1D38D0(a1, 14, (unsigned int)v35, (unsigned int)&v31, (unsigned int)v34, v25);
  sub_11A960((__int64)v35);
  sub_11A960((__int64)v34);
  sub_11A960((__int64)&v31);
  if ( v10 == 1 )
    goto LABEL_18;
LABEL_5:
  if ( v10 == 2 )
  {
    v16 = 1;
    v17 = 1;
  }
  else if ( v10 == 7 )
  {
    v16 = 2;
    v17 = 2;
  }
  else
  {
    v16 = 7;
    v17 = 7;
  }
LABEL_8:
  if ( a3 != v13 )
  {
    v18 = get_dtype_size();
    sub_1D3790(a1, 4, v18, v13, 346938453, a3, 0);
    if ( (*(_BYTE *)(a1 + 68) & 8) == 0 && !*(_BYTE *)(a1 + 145) && v17 )
    {
      v26 = get_dtype_size();
      v27 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 380LL);
      v28 = get_dtype_size();
      sub_1D3790(a1, 4, v28, v13 + v26, 346938453, v27, 0);
    }
  }
  v19 = get_dtype_size() + v13;
  sub_3F0BC0(a1, 32, v19, v16, 0);
  sub_3F0BC0(a1, 32, v19, v16, 3);
  sub_3F0810(a1, 22);
}
