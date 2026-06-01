/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AF940
// Address: 0x00000000000AF940

//----- (00000000000AF940) ----------------------------------------------------
char *__fastcall sub_AF940(pthread_mutex_t *a1)
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
  __int64 v13; // x9
  void *v14; // x0
  char *result; // x0

  v1 = (char *)*(&a1->__align + 1);
  v2 = *(&a1->__align + 2);
  if ( v2 >= (unsigned __int64)(v1 + 1) )
  {
    align = (char *)a1->__align;
  }
  else
  {
    align = (char *)qvector_reserve(a1, nullptr, (unsigned __int64)(v1 + 1), 0x30u);
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
        *(_DWORD *)v10 = *((_DWORD *)v9 - 4);
        *((_QWORD *)v10 + 1) = *((_QWORD *)v9 - 1);
        v11 = *(_QWORD *)v9;
        *((_QWORD *)v9 - 1) = 0;
        *((_QWORD *)v10 + 2) = v11;
        v12 = *((_QWORD *)v9 + 1);
        *(_QWORD *)v9 = 0;
        *((_QWORD *)v10 + 3) = v12;
        LODWORD(v12) = *((_DWORD *)v9 + 6);
        v13 = *((_QWORD *)v9 + 2);
        *((_QWORD *)v9 + 1) = 0;
        *((_DWORD *)v10 + 10) = v12;
        *((_QWORD *)v10 + 4) = v13;
        v14 = *((void **)v9 - 1);
        if ( v14 )
        {
          *(_QWORD *)v9 = 0;
          qfree(v14);
          *((_QWORD *)v9 - 1) = 0;
          *((_QWORD *)v9 + 1) = 0;
        }
        --v8;
        v9 += 48;
        v10 += 48;
      }
      while ( v8 >= 0 );
      v5 = (char *)a1->__align;
    }
    qfree(v5);
    v1 = (char *)*(&a1->__align + 1);
    a1->__align = (__int64)align;
    *(&a1->__align + 2) = (__int64)v7;
  }
  result = &align[48 * (_QWORD)v1];
  *((_QWORD *)result + 2) = 0;
  *((_QWORD *)result + 3) = 0;
  *((_QWORD *)result + 1) = 0;
  ++*(&a1->__align + 1);
  return result;
}
