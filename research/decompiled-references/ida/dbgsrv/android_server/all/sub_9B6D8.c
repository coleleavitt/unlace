/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9B6D8
// Address: 0x000000000009B6D8

//----- (000000000009B6D8) ----------------------------------------------------
char *__fastcall sub_9B6D8(pthread_mutex_t *a1)
{
  char *v1; // x8
  unsigned __int64 v2; // x24
  char *v4; // x0
  char *v5; // x8
  char *v6; // x21
  char *v7; // x22
  char *align; // x20
  __int64 v9; // x23
  char *v10; // x24
  __int64 v11; // x8
  __int64 v12; // x8
  __int128 v13; // q0
  char *result; // x0

  v1 = (char *)*(&a1->__align + 1);
  v2 = *(&a1->__align + 2);
  if ( v2 >= (unsigned __int64)(v1 + 1) )
  {
    align = (char *)a1->__align;
  }
  else
  {
    v4 = (char *)qvector_reserve(a1, nullptr, (unsigned __int64)(v1 + 1), 0x30u);
    v6 = (char *)a1->__align;
    v5 = (char *)*(&a1->__align + 1);
    v7 = (char *)*(&a1->__align + 2);
    align = v4;
    *(&a1->__align + 2) = v2;
    v9 = (__int64)(v5 - 1);
    if ( (__int64)(v5 - 1) >= 0 )
    {
      v10 = v4;
      do
      {
        *(_QWORD *)v10 = *(_QWORD *)v6;
        v11 = *((_QWORD *)v6 + 1);
        *(_QWORD *)v6 = 0;
        *((_QWORD *)v10 + 1) = v11;
        v12 = *((_QWORD *)v6 + 2);
        *((_QWORD *)v6 + 1) = 0;
        *((_QWORD *)v10 + 2) = v12;
        LOBYTE(v12) = v6[40];
        v13 = *(_OWORD *)(v6 + 24);
        *((_QWORD *)v6 + 2) = 0;
        v10[40] = v12;
        *(_OWORD *)(v10 + 24) = v13;
        sub_931CC((char **)v6);
        --v9;
        v6 += 48;
        v10 += 48;
      }
      while ( v9 >= 0 );
      v6 = (char *)a1->__align;
    }
    qfree(v6);
    v1 = (char *)*(&a1->__align + 1);
    a1->__align = (__int64)align;
    *(&a1->__align + 2) = (__int64)v7;
  }
  result = &align[48 * (_QWORD)v1];
  *(_QWORD *)result = 0;
  *((_QWORD *)result + 1) = 0;
  *((_QWORD *)result + 3) = -1;
  *((_QWORD *)result + 4) = -1;
  *((_QWORD *)result + 2) = 0;
  result[40] = 0;
  ++*(&a1->__align + 1);
  return result;
}
