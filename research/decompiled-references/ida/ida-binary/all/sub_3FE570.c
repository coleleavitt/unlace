void __fastcall sub_3FE570(__m128i *a1, int a2, __int64 a3, unsigned __int64 *a4, char *a5, __int64 a6)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // r12
  char *v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // r12

  v7 = (__int64)a5;
  v8 = a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] || *(int *)v8 > 1 )
    goto LABEL_3;
  if ( a3 )
  {
    if ( a2 == 1 )
    {
      a5 = (char *)a1->m128i_i64[1];
      v10 = (__int64)&a5[-((v8 + 31) & 0xFFFFFFFFFFFFFFF0LL)] >> 3;
      if ( a3 <= v10 )
        return;
      a6 = *(_QWORD *)(v8 + 8);
      if ( a3 <= a6 - a1[1].m128i_i64[0] - v10 )
      {
        v11 = a1[1].m128i_i64[0];
        if ( 3 * v11 < a6 )
        {
          v17 = (a6 - (a3 + v11)) / 2;
          if ( v17 < 0 )
            v17 = 0;
          v12 = a3 + v17;
          goto LABEL_12;
        }
      }
    }
    else if ( !a2 )
    {
      a5 = (char *)a1->m128i_i64[1];
      a6 = *(_QWORD *)(v8 + 8);
      v10 = (__int64)&a5[-((v8 + 31) & 0xFFFFFFFFFFFFFFF0LL)] >> 3;
      if ( a3 <= a6 - a1[1].m128i_i64[0] - v10 )
        return;
      if ( a3 <= v10 )
      {
        v11 = a1[1].m128i_i64[0];
        a6 *= 2;
        if ( 3 * v11 < a6 )
        {
          v12 = 0;
LABEL_12:
          v13 = 8 * (v12 - v10);
          v14 = &a5[v13];
          if ( v11 && a5 != v14 && a5 && v14 )
            v14 = (char *)memmove(&a5[v13], a5, 8 * v11);
          if ( a4 )
          {
            v15 = a1->m128i_u64[1];
            v16 = *a4;
            if ( *a4 >= v15 && v16 < v15 + 8 * a1[1].m128i_i64[0] )
              *a4 = v13 + v16;
          }
          a1->m128i_i64[1] = (__int64)v14;
          return;
        }
      }
    }
LABEL_3:
    sub_3FD800(a1, a2, a3, v7, (__int64)a5, a6);
  }
}
