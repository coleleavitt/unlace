unsigned __int64 __fastcall sub_4D500(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        __int64 a5,
        int a6,
        double a7,
        double a8,
        __int64 a9,
        int a10)
{
  __m128i v10; // xmm0
  __int128 *v13; // rdx
  __int128 *v14; // rax
  int v15; // r14d
  __int64 v16; // rax
  const __m128i *v17; // roff
  __int64 *v18; // rdx
  char v19; // al
  __int64 v20; // rcx
  unsigned __int64 *v21; // rdx
  const __m128i *v22; // rdx
  __int64 *v23; // rsi
  int v24; // ebx
  unsigned __int64 *v25; // rdx
  const __m128i *v31; // [rsp+24h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+2Ch] [rbp-A8h] BYREF
  char v33; // [rsp+34h] [rbp-A0h] BYREF
  __int128 v34; // [rsp+7Ch] [rbp-58h] BYREF
  __int64 v35; // [rsp+8Ch] [rbp-48h]
  unsigned __int64 v36; // [rsp+94h] [rbp-40h]

  v10.m128i_i64[0] = 0;
  v13 = &v34;
  v36 = __readfsqword(0x28u);
  v32 = a2;
  v14 = (__int128 *)&v33;
  do
  {
    *((_QWORD *)v14 + 2) = 0;
    v14 = (__int128 *)((char *)v14 + 24);
    *(__int128 *)((char *)v14 - 24) = 0;
  }
  while ( &v34 != v14 );
  v15 = 0;
  v35 = 0;
  v34 = 0;
  while ( 1 )
  {
    v19 = (*(__int64 (__fastcall **)(__int64, const __m128i **, __int128 *, double))(*(_QWORD *)a3 + 16LL))(
            a3,
            &v31,
            v13,
            *(double *)v10.m128i_i64);
    v20 = v34;
    if ( !v19 )
      break;
    if ( (_QWORD)v34 == 3 )
    {
      v15 += sub_42620(&v32) + 1;
      if ( !(_QWORD)v34 )
      {
        if ( !under_debugger )
        {
          interr(20131);
LABEL_17:
          if ( !under_debugger )
            interr(20130);
        }
        BUG();
      }
      *(_QWORD *)&v34 = v34 - 1;
      v21 = (unsigned __int64 *)(&v32 + 3 * *((_QWORD *)&v34 + 1) + 1);
      *((_QWORD *)&v34 + 1) = *((_QWORD *)&v34 + 1)
                            + 1LL
                            - ((*((_QWORD *)&v34 + 1) + 1LL) / 3uLL
                             + ((((unsigned __int64)(*((_QWORD *)&v34 + 1) + 1LL)
                                * (unsigned __int128)0xAAAAAAAAAAAAAAABLL) >> 64)
                              & 0xFFFFFFFFFFFFFFFELL));
      sub_4C590(a1, a2, v21, a4, v15, a6, *(double *)v10.m128i_i64, a8, a10, a5, a9);
      v20 = v34;
      v22 = v31;
      if ( (_QWORD)v34 == 3 )
        goto LABEL_17;
      v16 = v35;
      v10 = _mm_loadu_si128(v31);
      v23 = &v32 + 3 * v35;
      *(__m128i *)(v23 + 1) = v10;
      v23[3] = v22[1].m128i_i64[0];
    }
    else
    {
      v16 = v35;
      v17 = v31;
      v10 = _mm_loadu_si128(v31);
      v18 = &v32 + 3 * v35;
      *(__m128i *)(v18 + 1) = v10;
      v18[3] = v17[1].m128i_i64[0];
    }
    *(_QWORD *)&v34 = v20 + 1;
    v13 = (__int128 *)((v16 + 1) / 3uLL
                     + ((((unsigned __int64)(v16 + 1) * (unsigned __int128)0xAAAAAAAAAAAAAAABLL) >> 64)
                      & 0xFFFFFFFFFFFFFFFELL));
    v35 = v16 + 1 - (_QWORD)v13;
  }
  if ( (_QWORD)v34 )
  {
    v24 = v15;
    do
    {
      ++v24;
      *(_QWORD *)&v34 = v20 - 1;
      v25 = (unsigned __int64 *)(&v32 + 3 * *((_QWORD *)&v34 + 1) + 1);
      *((_QWORD *)&v34 + 1) = *((_QWORD *)&v34 + 1)
                            + 1LL
                            - ((*((_QWORD *)&v34 + 1) + 1LL) / 3uLL
                             + ((((unsigned __int64)(*((_QWORD *)&v34 + 1) + 1LL)
                                * (unsigned __int128)0xAAAAAAAAAAAAAAABLL) >> 64)
                              & 0xFFFFFFFFFFFFFFFELL));
      sub_4C590(a1, a2, v25, a4, v24, a6, *(double *)v10.m128i_i64, a8, a10, a5, a9);
      v20 = v34;
    }
    while ( (_QWORD)v34 );
  }
  return v36 - __readfsqword(0x28u);
}

