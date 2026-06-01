__int64 __fastcall sub_1B7DF60(
        __int64 a1,
        __int64 **a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  unsigned __int16 **v7; // r12
  unsigned __int8 **v8; // r14
  unsigned __int16 **v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v14; // [rsp+8h] [rbp-40h]

  v7 = (unsigned __int16 **)(a4 + 8 * a5);
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0x600000000LL;
  if ( (unsigned __int16 **)a4 != v7 )
  {
    v8 = (unsigned __int8 **)a3;
    v9 = (unsigned __int16 **)a4;
    do
    {
      while ( 1 )
      {
        v10 = sub_1B7CAD0(*a2, *v9, a6, a7, a3, a4, a5);
        if ( v10 > 1 )
        {
          v11 = sub_1AA8160(*(__int64 **)(**a2 + 744), **v8, (*v8)[1], v10 & 0xFFFFFFFFFFFFFFFELL);
          if ( v11 > 1 )
            break;
        }
        if ( v7 == ++v9 )
          return a1;
      }
      a4 = *(unsigned int *)(a1 + 8);
      v12 = v11 & 0xFFFFFFFFFFFFFFFELL;
      if ( a4 + 1 > *(unsigned int *)(a1 + 12) )
      {
        v14 = v12;
        sub_2237220(a1, a1 + 16, a4 + 1, 8);
        a4 = *(unsigned int *)(a1 + 8);
        v12 = v14;
      }
      a3 = *(_QWORD *)a1;
      ++v9;
      *(_QWORD *)(*(_QWORD *)a1 + 8 * a4) = v12;
      ++*(_DWORD *)(a1 + 8);
    }
    while ( v7 != v9 );
  }
  return a1;
}
