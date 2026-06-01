__int64 __fastcall sub_175D740(__int64 a1, __int64 **a2, unsigned __int8 **a3, unsigned __int16 **a4, __int64 a5)
{
  unsigned __int16 **v5; // r12
  unsigned __int16 **v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v13; // [rsp+8h] [rbp-40h]

  v5 = &a4[a5];
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0x600000000LL;
  if ( a4 != v5 )
  {
    v7 = a4;
    do
    {
      while ( 1 )
      {
        v8 = sub_175B800(*a2, *v7);
        if ( v8 > 1 )
        {
          v9 = sub_1AA8160(*(_QWORD *)(**a2 + 744), **a3, (*a3)[1], v8 & 0xFFFFFFFFFFFFFFFELL);
          if ( v9 > 1 )
            break;
        }
        if ( v5 == ++v7 )
          return a1;
      }
      v10 = *(unsigned int *)(a1 + 8);
      v11 = v9 & 0xFFFFFFFFFFFFFFFELL;
      if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
      {
        v13 = v11;
        sub_2237220(a1, a1 + 16, v10 + 1, 8);
        v10 = *(unsigned int *)(a1 + 8);
        v11 = v13;
      }
      ++v7;
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v10) = v11;
      ++*(_DWORD *)(a1 + 8);
    }
    while ( v5 != v7 );
  }
  return a1;
}
