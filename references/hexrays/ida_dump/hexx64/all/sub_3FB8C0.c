void __fastcall sub_3FB8C0(__int64 a1, unsigned __int8 a2, int a3, int a4, unsigned __int8 a5)
{
  unsigned int v5; // r14d
  __int64 v6; // r13
  __int64 v8; // rax
  __int64 v10; // rbp
  char v11; // r15
  int v12; // eax
  __int64 v13; // r9
  int v14; // ebp
  int v15; // r13d
  int v16; // eax
  unsigned int v17; // r13d
  char v18; // r14
  int v19; // eax
  int v20; // ebp
  int dtype_size; // eax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdi
  int v26; // eax
  __int64 v27; // rax
  int v28; // r12d
  __int64 v29; // r14
  int v30; // eax
  unsigned int v31; // [rsp+0h] [rbp-88h]
  __int64 v32; // [rsp+0h] [rbp-88h]
  int v33; // [rsp+10h] [rbp-78h] BYREF
  int v34; // [rsp+14h] [rbp-74h]
  int v35; // [rsp+18h] [rbp-70h]
  _DWORD v36[4]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v37[11]; // [rsp+30h] [rbp-58h] BYREF

  v5 = a5;
  v6 = a4;
  v8 = *(_QWORD *)(a1 + 832);
  v37[3] = __readfsqword(0x28u);
  if ( a5 )
  {
    v14 = *(_DWORD *)(v8 + 460);
    dtype_size = get_dtype_size(a5);
    sub_1D6310(a1, 4u, dtype_size, a3, 0x3BEA45E214ADDC55LL, v14, 0);
    v32 = *(int *)(*(_QWORD *)(a1 + 832) + 464LL);
    v23 = get_dtype_size(v5);
    sub_1D6310(a1, 4u, v23, v6, 0x3BEA45E214ADDC55LL, v32, 0);
    v15 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 464LL);
    if ( a5 == 1 )
    {
      v31 = 2;
      v11 = 2;
    }
    else if ( a5 == 2 )
    {
      v31 = 7;
      v11 = 7;
    }
    else
    {
      v31 = 8;
      v11 = 8;
    }
  }
  else
  {
    v10 = *(int *)(v8 + 464);
    v11 = 1;
    v12 = get_dtype_size(0);
    v13 = v10;
    v14 = a3;
    sub_1D6310(a1, 4u, v12, v6, 0x3BEA45E214ADDC55LL, v13, 0);
    v15 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 464LL);
    v31 = 1;
  }
  sub_1D6840(a1, v5, v31, v14, v14, a2);
  sub_1D6840(a1, v5, v31, v15, v15, a2);
  if ( *(_BYTE *)(a1 + 145) != 5 )
  {
    v16 = get_dtype_size(v31);
    sub_1D6310(a1, 0xEu, v16, v15, v14, v14, 0);
    if ( v11 != 1 )
      goto LABEL_5;
LABEL_18:
    v17 = 0;
    v18 = 0;
    goto LABEL_8;
  }
  v24 = get_dtype_size(v31);
  v25 = *(unsigned __int8 *)(a1 + 149);
  v35 = v15;
  v33 = 1;
  v36[0] = 1;
  v34 = v24;
  v36[1] = v24;
  v37[0] = 0xFFFFFFFF00000000LL;
  v36[2] = v14;
  v37[1] = 0;
  v26 = get_dtype_size(v25);
  v27 = sub_32ABC0(*(_QWORD *)(a1 + 152), v26, 1);
  sub_120A10((__int64)v37, *(_QWORD *)(a1 + 832), v27, v34, *(_QWORD *)(a1 + 40), 0);
  sub_1D6450(a1, 14, (unsigned __int8 *)v37, (unsigned __int8 *)&v33, (unsigned __int8 *)v36);
  sub_11CDA0((__int64)v37);
  sub_11CDA0((__int64)v36);
  sub_11CDA0((__int64)&v33);
  if ( v11 == 1 )
    goto LABEL_18;
LABEL_5:
  if ( v11 == 2 )
  {
    v17 = 1;
    v18 = 1;
  }
  else if ( v11 == 7 )
  {
    v17 = 2;
    v18 = 2;
  }
  else
  {
    v17 = 7;
    v18 = 7;
  }
LABEL_8:
  if ( a3 != v14 )
  {
    v19 = get_dtype_size(v17);
    sub_1D6310(a1, 4u, v19, v14, 0x3BEA45E214ADDC55LL, a3, 0);
    if ( (*(_BYTE *)(a1 + 68) & 8) == 0 && !*(_BYTE *)(a1 + 145) && v18 )
    {
      v28 = get_dtype_size(v17);
      v29 = *(int *)(*(_QWORD *)(a1 + 832) + 380LL);
      v30 = get_dtype_size(v17);
      sub_1D6310(a1, 4u, v30, v14 + v28, 0x3BEA45E214ADDC55LL, v29, 0);
    }
  }
  v20 = get_dtype_size(v17) + v14;
  sub_3FB720(a1, 32, v20, v17, 0);
  sub_3FB720(a1, 32, v20, v17, 3);
  sub_3FB370(a1, 22);
}
