/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C5A18
// Address: 0x00000000000C5A18

//----- (00000000000C5A18) ----------------------------------------------------
void __fastcall sub_C5A18(char **a1, unsigned __int64 a2)
{
  char *v4; // x20
  unsigned __int64 v5; // x24
  char *v6; // x8
  _QWORD *v7; // x23
  _QWORD *v8; // x0
  char *v9; // x8
  char *v10; // x21
  __int64 v11; // x8
  char *v12; // x9
  __int64 v13; // x10
  __int128 v14; // t1
  __int64 v15; // x9
  __int128 v16; // q0
  _QWORD *v17; // x0
  char *v18; // x8
  char *v19; // x25
  __int64 v20; // x8
  char *v21; // x9
  __int64 v22; // x10
  __int128 v23; // t1
  char *v24; // x8
  __int128 v25; // [xsp+0h] [xbp-60h]
  __int64 v26; // [xsp+10h] [xbp-50h]

  _ReadStatusReg(TPIDR_EL0);
  v4 = *a1;
  v5 = (unsigned __int64)a1[2];
  if ( (unsigned __int64)*a1 > a2 || (unsigned __int64)&v4[24 * v5] <= a2 )
  {
    v7 = a1 + 1;
    v6 = a1[1];
    if ( v5 < (unsigned __int64)(v6 + 1) )
    {
      v4 = (char *)qvector_reserve((pthread_mutex_t *)a1, nullptr, (unsigned __int64)(v6 + 1), 0x18u);
      v17 = *a1;
      v18 = a1[1];
      v19 = a1[2];
      a1[2] = (char *)v5;
      v20 = (__int64)(v18 - 1);
      if ( v20 >= 0 )
      {
        v21 = v4;
        do
        {
          v22 = v17[2];
          v23 = *(_OWORD *)v17;
          v17 += 3;
          --v20;
          *((_QWORD *)v21 + 2) = v22;
          *(_OWORD *)v21 = v23;
          v21 += 24;
        }
        while ( v20 >= 0 );
        v17 = *a1;
      }
      qfree(v17);
      v6 = a1[1];
      *a1 = v4;
      a1[2] = v19;
    }
    v15 = *(_QWORD *)(a2 + 16);
    v16 = *(_OWORD *)a2;
  }
  else
  {
    v26 = *(_QWORD *)(a2 + 16);
    v25 = *(_OWORD *)a2;
    v7 = a1 + 1;
    v6 = a1[1];
    if ( v5 < (unsigned __int64)(v6 + 1) )
    {
      v4 = (char *)qvector_reserve((pthread_mutex_t *)a1, nullptr, (unsigned __int64)(v6 + 1), 0x18u);
      v8 = *a1;
      v9 = a1[1];
      v10 = a1[2];
      a1[2] = (char *)v5;
      v11 = (__int64)(v9 - 1);
      if ( v11 >= 0 )
      {
        v12 = v4;
        do
        {
          v13 = v8[2];
          v14 = *(_OWORD *)v8;
          v8 += 3;
          --v11;
          *((_QWORD *)v12 + 2) = v13;
          *(_OWORD *)v12 = v14;
          v12 += 24;
        }
        while ( v11 >= 0 );
        v8 = *a1;
      }
      qfree(v8);
      v6 = a1[1];
      *a1 = v4;
      a1[2] = v10;
    }
    v15 = v26;
    v16 = v25;
  }
  v24 = &v4[24 * (_QWORD)v6];
  *((_QWORD *)v24 + 2) = v15;
  *(_OWORD *)v24 = v16;
  ++*v7;
}
