void __fastcall sub_496A80(__m128i *a1, int a2, __int64 a3, unsigned __int64 *a4, char *a5, __int64 a6)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  signed __int64 v10; // rdi
  __int64 v11; // r10
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r12
  char *v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax

  v7 = (__int64)a5;
  v8 = a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] || *(int *)v8 > 1 )
    goto LABEL_3;
  if ( a3 )
  {
    if ( a2 == 1 )
    {
      a5 = (char *)a1->m128i_i64[1];
      v10 = 0xAAAAAAAAAAAAAAABLL * ((__int64)&a5[-((v8 + 31) & 0xFFFFFFFFFFFFFFF0LL)] >> 3);
      if ( a3 <= v10 )
        return;
      v18 = *(_QWORD *)(v8 + 8);
      a6 = v18 - a1[1].m128i_i64[0] - v10;
      if ( a3 <= a6 )
      {
        a6 = a1[1].m128i_i64[0];
        v11 = 2 * a6;
        if ( 3 * a6 < v18 )
        {
          v19 = (v18 - (a3 + a6)) / 2;
          if ( v19 < 0 )
            v19 = 0;
          v12 = a3 + v19;
          goto LABEL_12;
        }
      }
    }
    else if ( !a2 )
    {
      a5 = (char *)a1->m128i_i64[1];
      v10 = 0xAAAAAAAAAAAAAAABLL * ((__int64)&a5[-((v8 + 31) & 0xFFFFFFFFFFFFFFF0LL)] >> 3);
      if ( a3 <= *(_QWORD *)(v8 + 8) - a1[1].m128i_i64[0] - v10 )
        return;
      if ( a3 <= v10 )
      {
        a6 = a1[1].m128i_i64[0];
        v11 = 2 * a6;
        if ( 3 * a6 < 2LL * *(_QWORD *)(v8 + 8) )
        {
          v12 = 0;
LABEL_12:
          v13 = v12 - v10;
          v14 = 24 * v13;
          v15 = &a5[24 * v13];
          if ( a6 && a5 != v15 && a5 && v15 )
            v15 = (char *)memmove(&a5[24 * v13], a5, 8 * (v11 + a6));
          if ( a4 )
          {
            v16 = a1->m128i_u64[1];
            v17 = *a4;
            if ( *a4 >= v16 && v17 < v16 + 24 * a1[1].m128i_i64[0] )
              *a4 = v14 + v17;
          }
          a1->m128i_i64[1] = (__int64)v15;
          return;
        }
      }
    }
LABEL_3:
    sub_3FB980(a1, a2, a3, v7, (__int64)a5, a6);
  }
}
