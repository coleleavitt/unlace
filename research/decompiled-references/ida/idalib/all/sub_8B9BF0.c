__int64 __fastcall sub_8B9BF0(__int64 **a1, char *a2, char *a3, const __m128i *a4)
{
  char *v6; // rdx
  unsigned __int64 v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdx

  v6 = (char *)a1[11];
  if ( v6 == a2 )
  {
    v8 = a1[2];
    if ( v6 == a3 || a4->m128i_i64[1] < *(_QWORD *)a3 )
    {
      v9 = **a1;
      goto LABEL_6;
    }
  }
  else
  {
    v7 = *((_QWORD *)a2 + 1);
    v8 = (__int64 *)(a2 + 24);
    if ( v7 >= a4->m128i_i64[0] )
    {
      v12 = a4->m128i_u64[1];
      *((_QWORD *)a2 + 1) = v12;
      if ( a1[11] != (__int64 *)a3 && v12 >= *(_QWORD *)a3 )
      {
        v13 = *((_QWORD *)a3 + 1);
        a3 += 24;
        *((_QWORD *)a2 + 1) = v13;
      }
      goto LABEL_10;
    }
    if ( v6 == a3 || a4->m128i_i64[1] < *(_QWORD *)a3 )
    {
      v9 = *((_QWORD *)a2 + 2) + 4 * (v7 - *(_QWORD *)a2);
LABEL_6:
      a4[1].m128i_i64[0] = v9;
      v10 = (unsigned __int64)a1[3]
          + 0x5555555555555555LL * ((a3 - (_BYTE *)memmove(v8, a3, (char *)&a1[2][3 * (_QWORD)a1[3]] - a3)) >> 3);
      a1[3] = (__int64 *)v10;
      a1[11] = &a1[2][3 * v10];
      sub_8B8CE0(a1, a4);
      return 0;
    }
  }
  v15 = a4->m128i_i64[0];
  *(_QWORD *)a3 = a4->m128i_i64[0];
  *((_QWORD *)a3 + 2) -= 4 * (a4->m128i_i64[1] - v15);
LABEL_10:
  v14 = (unsigned __int64)a1[3]
      + 0x5555555555555555LL * ((a3 - (_BYTE *)memmove(v8, a3, (char *)&a1[2][3 * (_QWORD)a1[3]] - a3)) >> 3);
  a1[3] = (__int64 *)v14;
  a1[11] = &a1[2][3 * v14];
  return 0;
}
