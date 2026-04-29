unsigned int *__fastcall sub_3EAF60(__int64 a1, __int64 a2, int a3, int a4, double a5)
{
  __int64 v7; // rdi
  unsigned int dtype_size; // eax
  __int64 v9; // rdx
  unsigned int v10; // r12d
  unsigned int v11; // r15d
  __int64 v12; // rax
  __int64 v13; // r13
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r10
  int v18; // r12d
  int v20; // [rsp+4h] [rbp-44h]
  __int64 v22; // [rsp+8h] [rbp-40h]

  v7 = *(unsigned __int8 *)(a1 + 109);
  v20 = a2;
  dtype_size = get_dtype_size(v7);
  v9 = *(_QWORD *)(a1 + 832);
  v10 = dtype_size;
  v11 = dtype_size;
  v12 = *(_QWORD *)(v9 + 712);
  if ( !v12 )
    goto LABEL_7;
  v13 = *(int *)(*(_QWORD *)(v9 + 704) + 4 * v12 - 4);
  *(_QWORD *)(v9 + 712) = v12 - 1;
  sub_3E8D60(a1, 4u, v10, a3, 0x3BEA45E214ADDC55LL, v13, 0);
  v14 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL);
  if ( v14 <= (int)v10 )
  {
    sub_3E8D60(a1, 0xEu, v14, v13, a4, v13, 0);
    return sub_3E8D60(
             a1,
             (unsigned int)((unsigned __int16)(*(_WORD *)(a1 + 48) - 500) > 2u) + 12,
             *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
             v20,
             v13,
             v20,
             0);
  }
  a2 = v10;
  v7 = a1;
  sub_3EA150(a1, v10, v14, v13, v13, 1u, a5);
  v15 = *(_QWORD *)(a1 + 832);
  v16 = *(_QWORD *)(v15 + 712);
  if ( !v16 )
LABEL_7:
    sub_3E4E50(a5, v7, a2);
  v17 = *(int *)(*(_QWORD *)(v15 + 704) + 4 * v16 - 4);
  *(_QWORD *)(v15 + 712) = v16 - 1;
  v18 = v17;
  v22 = v17;
  sub_3E8D60(a1, 4u, v11, a4, 0x3BEA45E214ADDC55LL, v17, 0);
  sub_3EA150(a1, v11, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), v18, v18, 1u, a5);
  sub_3E8D60(a1, 0xEu, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), v13, v22, v13, 0);
  sub_3E6F70(*(_QWORD *)(a1 + 832), v18);
  return sub_3E8D60(
           a1,
           (unsigned int)((unsigned __int16)(*(_WORD *)(a1 + 48) - 500) > 2u) + 12,
           *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
           v20,
           v13,
           v20,
           0);
}
