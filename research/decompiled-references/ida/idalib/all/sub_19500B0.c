__int64 __fastcall sub_19500B0(
        __int64 a1,
        __int64 **a2,
        unsigned __int8 **a3,
        unsigned __int16 **a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  unsigned __int16 **v7; // r12
  unsigned __int16 **v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v15; // [rsp+8h] [rbp-40h]

  v7 = &a4[a5];
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0x600000000LL;
  if ( a4 != v7 )
  {
    v9 = a4;
    do
    {
      while ( 1 )
      {
        v10 = sub_1944E10(*a2, *v9, a6, a7);
        if ( v10 > 1 )
        {
          v11 = sub_1AA8160(*(_QWORD *)(**a2 + 744), **a3, (*a3)[1], v10 & 0xFFFFFFFFFFFFFFFELL);
          if ( v11 > 1 )
            break;
        }
        if ( v7 == ++v9 )
          return a1;
      }
      v12 = *(unsigned int *)(a1 + 8);
      v13 = v11 & 0xFFFFFFFFFFFFFFFELL;
      if ( v12 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
      {
        v15 = v13;
        sub_2237220(a1, a1 + 16, v12 + 1, 8);
        v12 = *(unsigned int *)(a1 + 8);
        v13 = v15;
      }
      ++v9;
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v12) = v13;
      ++*(_DWORD *)(a1 + 8);
    }
    while ( v7 != v9 );
  }
  return a1;
}
