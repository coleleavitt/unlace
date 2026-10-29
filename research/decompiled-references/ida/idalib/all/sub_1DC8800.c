__int64 __fastcall sub_1DC8800(
        __int64 a1,
        __int64 **a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 *v8; // r12
  unsigned __int8 **v9; // r14
  unsigned __int64 *v10; // rbx
  unsigned __int16 *v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v15; // [rsp+8h] [rbp-40h]

  v8 = (unsigned __int64 *)(a4 + 8 * a5);
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0x600000000LL;
  if ( (unsigned __int64 *)a4 != v8 )
  {
    v9 = (unsigned __int8 **)a3;
    v10 = (unsigned __int64 *)a4;
    do
    {
      while ( 1 )
      {
        v11 = sub_1DC71F0(*a2, *v10, a3, a4, a5, a6, a7, a8);
        if ( (unsigned __int64)v11 > 1 )
        {
          v12 = sub_1AA8160(*(__int64 **)(**a2 + 744), **v9, (*v9)[1], (unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFELL);
          if ( v12 > 1 )
            break;
        }
        if ( v8 == ++v10 )
          return a1;
      }
      a4 = *(unsigned int *)(a1 + 8);
      v13 = v12 & 0xFFFFFFFFFFFFFFFELL;
      if ( a4 + 1 > *(unsigned int *)(a1 + 12) )
      {
        v15 = v13;
        sub_2237220(a1, a1 + 16, a4 + 1, 8);
        a4 = *(unsigned int *)(a1 + 8);
        v13 = v15;
      }
      a3 = *(_QWORD *)a1;
      ++v10;
      *(_QWORD *)(*(_QWORD *)a1 + 8 * a4) = v13;
      ++*(_DWORD *)(a1 + 8);
    }
    while ( v8 != v10 );
  }
  return a1;
}
