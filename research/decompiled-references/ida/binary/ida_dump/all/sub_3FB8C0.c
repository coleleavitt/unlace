void __fastcall sub_3FB8C0(__int64 a1, unsigned __int8 a2, int a3, int a4, unsigned __int8 a5)
{
  unsigned int v5; // r14d
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v9; // rbp
  char v10; // r15
  int v11; // eax
  __int64 v12; // r9
  int v13; // ebp
  int v14; // r13d
  int v15; // eax
  unsigned int v16; // r13d
  char v17; // r14
  int v18; // eax
  int v19; // ebp
  int dtype_size; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  int v25; // r12d
  __int64 v26; // r14
  int v27; // eax
  unsigned int v28; // [rsp+0h] [rbp-88h]
  __int64 v29; // [rsp+0h] [rbp-88h]
  int v30; // [rsp+10h] [rbp-78h] BYREF
  int v31; // [rsp+14h] [rbp-74h]
  int v32; // [rsp+18h] [rbp-70h]
  _DWORD v33[4]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v34[11]; // [rsp+30h] [rbp-58h] BYREF

  v5 = a5;
  v6 = a4;
  v7 = *(_QWORD *)(a1 + 832);
  v34[3] = __readfsqword(0x28u);
  if ( a5 )
  {
    v13 = *(_DWORD *)(v7 + 460);
    dtype_size = get_dtype_size();
    sub_1D6310(a1, 4u, dtype_size, a3, 0x3BEA45E214ADDC55LL, v13, 0);
    v29 = *(int *)(*(_QWORD *)(a1 + 832) + 464LL);
    v22 = get_dtype_size();
    sub_1D6310(a1, 4u, v22, v6, 0x3BEA45E214ADDC55LL, v29, 0);
    v14 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 464LL);
    if ( a5 == 1 )
    {
      v28 = 2;
      v10 = 2;
    }
    else if ( a5 == 2 )
    {
      v28 = 7;
      v10 = 7;
    }
    else
    {
      v28 = 8;
      v10 = 8;
    }
  }
  else
  {
    v9 = *(int *)(v7 + 464);
    v10 = 1;
    v11 = get_dtype_size();
    v12 = v9;
    v13 = a3;
    sub_1D6310(a1, 4u, v11, v6, 0x3BEA45E214ADDC55LL, v12, 0);
    v14 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 464LL);
    v28 = 1;
  }
  sub_1D6840(a1, v5, v28, v13, v13, a2);
  sub_1D6840(a1, v5, v28, v14, v14, a2);
  if ( *(_BYTE *)(a1 + 145) != 5 )
  {
    v15 = get_dtype_size();
    sub_1D6310(a1, 0xEu, v15, v14, v13, v13, 0);
    if ( v10 != 1 )
      goto LABEL_5;
LABEL_18:
    v16 = 0;
    v17 = 0;
    goto LABEL_8;
  }
  v32 = v14;
  v30 = 1;
  v33[0] = 1;
  v31 = get_dtype_size();
  v33[1] = v31;
  v34[0] = 0xFFFFFFFF00000000LL;
  v33[2] = v13;
  v34[1] = 0;
  v23 = get_dtype_size();
  v24 = sub_32ABC0(*(_QWORD *)(a1 + 152), v23, 1);
  sub_120A10((__int64)v34, *(_QWORD *)(a1 + 832), v24, v31, *(_QWORD *)(a1 + 40), 0);
  sub_1D6450(a1, 14, (unsigned __int8 *)v34, (unsigned __int8 *)&v30, (unsigned __int8 *)v33);
  sub_11CDA0((__int64)v34);
  sub_11CDA0((__int64)v33);
  sub_11CDA0((__int64)&v30);
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
    sub_1D6310(a1, 4u, v18, v13, 0x3BEA45E214ADDC55LL, a3, 0);
    if ( (*(_BYTE *)(a1 + 68) & 8) == 0 && !*(_BYTE *)(a1 + 145) && v17 )
    {
      v25 = get_dtype_size();
      v26 = *(int *)(*(_QWORD *)(a1 + 832) + 380LL);
      v27 = get_dtype_size();
      sub_1D6310(a1, 4u, v27, v13 + v25, 0x3BEA45E214ADDC55LL, v26, 0);
    }
  }
  v19 = get_dtype_size() + v13;
  sub_3FB720(a1, 32, v19, v16, 0);
  sub_3FB720(a1, 32, v19, v16, 3);
  sub_3FB370(a1, 22);
}
