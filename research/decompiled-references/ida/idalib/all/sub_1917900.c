unsigned __int64 __fastcall sub_1917900(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v14; // [rsp-10h] [rbp-28h]
  __int64 v15; // [rsp-8h] [rbp-20h]

  v9 = *(_QWORD *)(a2 + 8);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 > 1 )
  {
    v11 = a2;
  }
  else
  {
    v10 = sub_A70010(*(_QWORD *)(a1 + 248), v9);
    v11 = sub_160A600(a1, a2, v10, 0xCu, 0, 0, *(double *)a7.m128_u64, *(double *)a8.m128_u64, 0);
    a3 = v14;
    a4 = v15;
    if ( v11 == 1 )
      return 1;
  }
  v12 = sub_19146F0(a1, (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFELL), a3, a4, a5, a6, a7, a8);
  if ( v12 != 1 )
    return v12 & 0xFFFFFFFFFFFFFFFELL;
  return 1;
}
