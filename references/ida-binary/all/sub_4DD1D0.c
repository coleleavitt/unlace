void __fastcall sub_4DD1D0(char *a1, const __m128i *a2, __int64 a3)
{
  const __m128i *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r15
  __int64 v8; // rbp
  signed __int64 v9; // rax
  __int64 v10; // rbp
  const __m128i *v11; // rdi
  __int64 v12; // [rsp+0h] [rbp-40h]

  if ( a1 != (char *)a2 )
  {
    v5 = (const __m128i *)(a1 + 24);
    if ( a1 + 24 != (char *)a2 )
    {
      do
      {
        while ( 1 )
        {
          v10 = (*(__int64 (__fastcall **)(__int64, const __m128i *))(*(_QWORD *)a3 + 480LL))(a3, v5) >> 32;
          v11 = v5;
          v5 = (const __m128i *)((char *)v5 + 24);
          if ( (int)v10 < (int)((unsigned __int64)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a3 + 480LL))(
                                                    a3,
                                                    a1) >> 32) )
            break;
          sub_4DCF10(v11, a3);
          if ( a2 == v5 )
            return;
        }
        v6 = v5[-2].m128i_i64[1];
        v7 = v5[-1].m128i_i64[0];
        v8 = v5[-1].m128i_i64[1];
        if ( (char *)v11 - a1 > 0 )
        {
          v9 = 0xAAAAAAAAAAAAAAABLL * (((char *)v11 - a1) >> 3) - 1;
          if ( v9 < 0 )
            v9 = 0;
          v12 = v5[-2].m128i_i64[1];
          memmove((char *)&v5[-1] - 24 * v9 - 8, (char *)&v11[-1] - 24 * v9 - 8, 8 * (3 * v9 + 3));
          v6 = v12;
        }
        *(_QWORD *)a1 = v6;
        *((_QWORD *)a1 + 1) = v7;
        *((_QWORD *)a1 + 2) = v8;
      }
      while ( a2 != v5 );
    }
  }
}
