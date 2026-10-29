/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_983C8
// Address: 0x00000000000983C8

//----- (00000000000983C8) ----------------------------------------------------
void __fastcall sub_983C8(char **a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // x22
  char *v7; // x0
  char *v8; // x24
  char *v9; // x8
  unsigned __int64 *v10; // x23
  char *v11; // x22
  __int64 v12; // x25
  char *v13; // x26
  char *v14; // x27
  __int64 v15; // x8
  __int64 v16; // x8
  __int64 v17; // x8
  __int64 v18; // x8
  void *v19; // x0
  void *v20; // x0
  unsigned __int64 v21; // x8
  __int64 v22; // x22
  unsigned __int64 v23; // x24

  v3 = (unsigned __int64)a1[2];
  if ( v3 >= a2 )
  {
    v10 = (unsigned __int64 *)(a1 + 1);
  }
  else
  {
    v7 = (char *)qvector_reserve((pthread_mutex_t *)a1, nullptr, a2, 0x1B0u);
    v8 = a1[2];
    a1[2] = (char *)v3;
    v9 = *a1;
    v10 = (unsigned __int64 *)(a1 + 1);
    v11 = v7;
    v12 = (__int64)(a1[1] - 1);
    if ( v12 >= 0 )
    {
      v13 = v9 + 32;
      v14 = v7;
      do
      {
        *(_QWORD *)v14 = *((_QWORD *)v13 - 4);
        *((_QWORD *)v14 + 1) = *((_QWORD *)v13 - 3);
        v15 = *((_QWORD *)v13 - 2);
        *((_QWORD *)v13 - 3) = 0;
        *((_QWORD *)v14 + 2) = v15;
        v16 = *((_QWORD *)v13 - 1);
        *((_QWORD *)v13 - 2) = 0;
        *((_QWORD *)v14 + 3) = v16;
        LODWORD(v16) = *(_DWORD *)v13;
        *((_QWORD *)v13 - 1) = 0;
        *((_DWORD *)v14 + 8) = v16;
        *((_QWORD *)v14 + 5) = *((_QWORD *)v13 + 1);
        v17 = *((_QWORD *)v13 + 2);
        *((_QWORD *)v13 + 1) = 0;
        *((_QWORD *)v14 + 6) = v17;
        v18 = *((_QWORD *)v13 + 3);
        *((_QWORD *)v13 + 2) = 0;
        *((_QWORD *)v14 + 7) = v18;
        *((_QWORD *)v13 + 3) = 0;
        memcpy(v14 + 64, v13 + 32, 0x170u);
        v19 = *((void **)v13 + 1);
        if ( v19 )
        {
          *((_QWORD *)v13 + 2) = 0;
          qfree(v19);
          *((_QWORD *)v13 + 1) = 0;
          *((_QWORD *)v13 + 3) = 0;
        }
        v20 = *((void **)v13 - 3);
        if ( v20 )
        {
          *((_QWORD *)v13 - 2) = 0;
          qfree(v20);
          *((_QWORD *)v13 - 3) = 0;
          *((_QWORD *)v13 - 1) = 0;
        }
        --v12;
        v13 += 432;
        v14 += 432;
      }
      while ( v12 >= 0 );
      v9 = *a1;
    }
    qfree(v9);
    *a1 = v11;
    a1[2] = v8;
  }
  v21 = *v10;
  if ( *v10 < a2 )
  {
    v22 = 432 * v21;
    v23 = a2 - v21;
    do
    {
      sub_9854C((__int64)&(*a1)[v22], a3);
      --v23;
      v22 += 432;
    }
    while ( v23 );
  }
  *v10 = a2;
}
