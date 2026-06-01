/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C7D8
// Address: 0x000000000006C7D8

//----- (000000000006C7D8) ----------------------------------------------------
char *__fastcall sub_6C7D8(pthread_mutex_t *a1)
{
  char *v1; // x8
  unsigned __int64 v2; // x23
  char *align; // x20
  char *v5; // x0
  char *v6; // x8
  char *v7; // x21
  __int64 v8; // x22
  char *v9; // x23
  char *v10; // x24
  __int64 v11; // x8
  __int64 v12; // x8
  void *v13; // x0
  char *result; // x0

  v1 = (char *)*(&a1->__align + 1);
  v2 = *(&a1->__align + 2);
  if ( v2 >= (unsigned __int64)(v1 + 1) )
  {
    align = (char *)a1->__align;
  }
  else
  {
    align = (char *)qvector_reserve(a1, nullptr, (unsigned __int64)(v1 + 1), 0x20u);
    v5 = (char *)a1->__align;
    v6 = (char *)*(&a1->__align + 1);
    v7 = (char *)*(&a1->__align + 2);
    *(&a1->__align + 2) = v2;
    v8 = (__int64)(v6 - 1);
    if ( (__int64)(v6 - 1) >= 0 )
    {
      v9 = v5 + 16;
      v10 = align;
      do
      {
        *(_QWORD *)v10 = *((_QWORD *)v9 - 2);
        v11 = *((_QWORD *)v9 - 1);
        *((_QWORD *)v9 - 2) = 0;
        *((_QWORD *)v10 + 1) = v11;
        v12 = *(_QWORD *)v9;
        *((_QWORD *)v9 - 1) = 0;
        *((_QWORD *)v10 + 2) = v12;
        LODWORD(v12) = *((_DWORD *)v9 + 2);
        *(_QWORD *)v9 = 0;
        *((_DWORD *)v10 + 6) = v12;
        v13 = *((void **)v9 - 2);
        if ( v13 )
        {
          *((_QWORD *)v9 - 1) = 0;
          qfree(v13);
          *((_QWORD *)v9 - 2) = 0;
          *(_QWORD *)v9 = 0;
        }
        --v8;
        v9 += 32;
        v10 += 32;
      }
      while ( v8 >= 0 );
      v5 = (char *)a1->__align;
    }
    qfree(v5);
    v1 = (char *)*(&a1->__align + 1);
    a1->__align = (__int64)align;
    *(&a1->__align + 2) = (__int64)v7;
  }
  result = &align[32 * (_QWORD)v1];
  *((_QWORD *)result + 1) = 0;
  *((_QWORD *)result + 2) = 0;
  *(_QWORD *)result = 0;
  ++*(&a1->__align + 1);
  return result;
}
