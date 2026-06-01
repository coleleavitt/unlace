__int64 __fastcall sub_1572900(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __m128i a5, double a6)
{
  __int64 v9; // r12
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int16 v16; // ax
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int16 v22; // ax
  unsigned __int8 v23; // [rsp+7h] [rbp-51h]
  unsigned __int64 v24; // [rsp+8h] [rbp-50h]
  unsigned __int64 v25; // [rsp+8h] [rbp-50h]
  int v26[15]; // [rsp+1Ch] [rbp-3Ch] BYREF

  v9 = a1 + 16;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0x600000000LL;
  v10 = *(_QWORD *)(a2 + 96);
  *(_BYTE *)(a2 + 2153) = 1;
  v23 = a3;
  *(double *)a5.m128i_i64 = sub_1AA2580(*(_QWORD *)(v10 + 744), a3, a4);
  v11 = sub_14BDAD0(a2, 0, a5);
  if ( v11 <= 1 )
  {
LABEL_2:
    sub_1AA25A0(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 744LL));
    *(_BYTE *)(a2 + 2153) = 0;
    v26[0] = 29556759;
    sub_15680D0(a2, v26, (_WORD *)&dword_0 + 1, 2);
    return a1;
  }
  v13 = sub_1AA8160(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 744LL), a3, a4, v11 & 0xFFFFFFFFFFFFFFFELL);
  *(_BYTE *)(a2 + 2153) = 0;
  if ( v13 > 1 )
  {
    v14 = *(unsigned int *)(a1 + 8);
    v15 = v13 & 0xFFFFFFFFFFFFFFFELL;
    if ( v14 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
    {
      v24 = v15;
      sub_2237220(a1, v9, v14 + 1, 8);
      v14 = *(unsigned int *)(a1 + 8);
      v15 = v24;
    }
    *(_QWORD *)(*(_QWORD *)a1 + 8 * v14) = v15;
    ++*(_DWORD *)(a1 + 8);
  }
  v16 = *(_WORD *)(a2 + 32);
  if ( v16 != 23 && v16 != 451 )
  {
    while ( 1 )
    {
      sub_1569A00(a2, 0x42u, 14, &byte_22F0C30, 0, a5, a6);
      v17 = *(_QWORD *)(a2 + 96);
      *(_BYTE *)(a2 + 2153) = 1;
      *(double *)a5.m128i_i64 = sub_1AA2580(*(_QWORD *)(v17 + 744), v23, a4);
      v18 = sub_14BDAD0(a2, 0, a5);
      if ( v18 <= 1 )
        break;
      v19 = sub_1AA8160(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 744LL), v23, a4, v18 & 0xFFFFFFFFFFFFFFFELL);
      *(_BYTE *)(a2 + 2153) = 0;
      if ( v19 > 1 )
      {
        v20 = *(unsigned int *)(a1 + 8);
        v21 = v19 & 0xFFFFFFFFFFFFFFFELL;
        if ( v20 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
        {
          v25 = v21;
          sub_2237220(a1, v9, v20 + 1, 8);
          v20 = *(unsigned int *)(a1 + 8);
          v21 = v25;
        }
        *(_QWORD *)(*(_QWORD *)a1 + 8 * v20) = v21;
        ++*(_DWORD *)(a1 + 8);
      }
      v22 = *(_WORD *)(a2 + 32);
      if ( v22 == 451 || v22 == 23 )
        return a1;
    }
    goto LABEL_2;
  }
  return a1;
}
