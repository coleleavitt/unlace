/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38A40
// Address: 0x0000000000038A40

//----- (0000000000038A40) ----------------------------------------------------
void __fastcall sub_38A40(pthread_mutex_t *a1, int *a2)
{
  size_t v2; // x21
  int v3; // w25
  void *v6; // x19
  size_t v7; // x22
  int v8; // w26
  void *v9; // x23
  char *v10; // x8
  unsigned __int64 v11; // x24
  char *align; // x27
  _QWORD *v13; // x0
  char *v14; // x8
  char *v15; // x29
  __int64 v16; // x28
  _QWORD *v17; // x29
  char *v18; // x24
  __int64 v19; // x8
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // x8
  void *v23; // x0
  void *v24; // x0
  char *v25; // x8
  char *v26; // [xsp+8h] [xbp-68h]

  v2 = *((_QWORD *)a2 + 2);
  v3 = *a2;
  if ( v2 )
  {
    v6 = qalloc_or_throw(*((_QWORD *)a2 + 2));
    memcpy(v6, *((const void **)a2 + 1), v2);
  }
  else
  {
    v6 = nullptr;
  }
  v7 = *((_QWORD *)a2 + 6);
  v8 = a2[8];
  if ( v7 )
  {
    v9 = qalloc_or_throw(*((_QWORD *)a2 + 6));
    memcpy(v9, *((const void **)a2 + 5), v7);
  }
  else
  {
    v9 = nullptr;
  }
  v10 = (char *)*(&a1->__align + 1);
  v11 = *(&a1->__align + 2);
  if ( v11 >= (unsigned __int64)(v10 + 1) )
  {
    align = (char *)a1->__align;
  }
  else
  {
    align = (char *)qvector_reserve(a1, nullptr, (unsigned __int64)(v10 + 1), 0x40u);
    v13 = (_QWORD *)a1->__align;
    v14 = (char *)*(&a1->__align + 1);
    v15 = (char *)*(&a1->__align + 2);
    *(&a1->__align + 2) = v11;
    v16 = (__int64)(v14 - 1);
    if ( (__int64)(v14 - 1) >= 0 )
    {
      v26 = v15;
      v17 = v13 + 7;
      v18 = align;
      do
      {
        *(_DWORD *)v18 = *((_DWORD *)v17 - 14);
        *((_QWORD *)v18 + 1) = *(v17 - 6);
        v19 = *(v17 - 5);
        *(v17 - 6) = 0;
        *((_QWORD *)v18 + 2) = v19;
        v20 = *(v17 - 4);
        *(v17 - 5) = 0;
        *((_QWORD *)v18 + 3) = v20;
        LODWORD(v20) = *((_DWORD *)v17 - 6);
        *(v17 - 4) = 0;
        *((_DWORD *)v18 + 8) = v20;
        *((_QWORD *)v18 + 5) = *(v17 - 2);
        v21 = *(v17 - 1);
        *(v17 - 2) = 0;
        *((_QWORD *)v18 + 6) = v21;
        v22 = *v17;
        *(v17 - 1) = 0;
        *((_QWORD *)v18 + 7) = v22;
        v23 = (void *)*(v17 - 2);
        *v17 = 0;
        if ( v23 )
        {
          *(v17 - 1) = 0;
          qfree(v23);
          *(v17 - 2) = 0;
          *v17 = 0;
        }
        v24 = (void *)*(v17 - 6);
        if ( v24 )
        {
          *(v17 - 5) = 0;
          qfree(v24);
          *(v17 - 6) = 0;
          *(v17 - 4) = 0;
        }
        --v16;
        v17 += 8;
        v18 += 64;
      }
      while ( v16 >= 0 );
      v13 = (_QWORD *)a1->__align;
      v15 = v26;
    }
    qfree(v13);
    v10 = (char *)*(&a1->__align + 1);
    a1->__align = (__int64)align;
    *(&a1->__align + 2) = (__int64)v15;
  }
  v25 = &align[64 * (_QWORD)v10];
  *(_DWORD *)v25 = v3;
  *((_QWORD *)v25 + 1) = v6;
  *((_QWORD *)v25 + 2) = v2;
  *((_QWORD *)v25 + 3) = v2;
  *((_DWORD *)v25 + 8) = v8;
  *((_QWORD *)v25 + 5) = v9;
  *((_QWORD *)v25 + 6) = v7;
  *((_QWORD *)v25 + 7) = v7;
  ++*(&a1->__align + 1);
}
