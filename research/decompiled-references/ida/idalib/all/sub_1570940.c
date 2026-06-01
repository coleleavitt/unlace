__int64 __fastcall sub_1570940(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __m128i a6,
        double a7)
{
  unsigned __int64 v10; // rax
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  __int16 v14; // ax
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int16 v19; // ax
  unsigned __int64 v21; // [rsp+8h] [rbp-50h]
  int v22[15]; // [rsp+1Ch] [rbp-3Ch] BYREF

  v10 = sub_14BDAD0(a1, 0, a6);
  if ( v10 <= 1 )
  {
LABEL_2:
    v22[0] = 29556759;
    sub_15680D0(a1, v22, (_WORD *)&dword_0 + 1, 2);
    return 1;
  }
  v12 = sub_1AA2500(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 744LL), a2, a3, a4, v10 & 0xFFFFFFFFFFFFFFFELL)
      & 0xFFFFFFFFFFFFFFFELL;
  v13 = *(unsigned int *)(a5 + 8);
  if ( v13 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
  {
    sub_2237220(a5, a5 + 16, v13 + 1, 8);
    v13 = *(unsigned int *)(a5 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a5 + 8 * v13) = v12;
  v14 = *(_WORD *)(a1 + 32);
  ++*(_DWORD *)(a5 + 8);
  if ( v14 != 451 )
  {
LABEL_6:
    if ( v14 != 23 )
    {
      while ( 1 )
      {
        sub_1569A00(a1, 0x42u, 14, &byte_22F0C30, 0, a6, a7);
        v15 = sub_14BDAD0(a1, 0, a6);
        if ( v15 <= 1 )
          goto LABEL_2;
        v16 = sub_1AA2500(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 744LL), a2, a3, a4, v15 & 0xFFFFFFFFFFFFFFFELL);
        v17 = *(unsigned int *)(a5 + 8);
        v18 = v16 & 0xFFFFFFFFFFFFFFFELL;
        if ( v17 + 1 <= (unsigned __int64)*(unsigned int *)(a5 + 12) )
        {
          *(_QWORD *)(*(_QWORD *)a5 + 8 * v17) = v18;
          v14 = *(_WORD *)(a1 + 32);
          ++*(_DWORD *)(a5 + 8);
          if ( v14 != 451 )
            goto LABEL_6;
          return 0;
        }
        v21 = v18;
        sub_2237220(a5, a5 + 16, v17 + 1, 8);
        *(_QWORD *)(*(_QWORD *)a5 + 8LL * *(unsigned int *)(a5 + 8)) = v21;
        v19 = *(_WORD *)(a1 + 32);
        ++*(_DWORD *)(a5 + 8);
        if ( v19 == 23 )
          return 0;
        if ( v19 == 451 )
          return 0;
      }
    }
  }
  return 0;
}
