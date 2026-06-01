/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_51470
// Address: 0x0000000000051470

//----- (0000000000051470) ----------------------------------------------------
void __fastcall sub_51470(_QWORD *a1, __int64 *a2)
{
  pthread_mutex_t *v2; // x21
  int v3; // w25
  __int64 v6; // x8
  unsigned __int64 v7; // x24
  char *v8; // x0
  __int64 v9; // x8
  char *v10; // x23
  __int64 v11; // x27
  char *align; // x22
  __int64 v13; // x28
  __int64 v14; // x29
  char *v15; // x24
  char *v16; // x9
  __int64 v17; // x8
  __int64 v18; // x8
  __int64 v19; // x8
  __int64 v20; // x8
  __int64 v21; // x8
  void *v22; // x0
  void *v23; // x0
  char *v24; // x0
  __int64 v25[2]; // [xsp+10h] [xbp-70h] BYREF

  v25[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (pthread_mutex_t *)(a1 + 1);
  v3 = *(unsigned __int8 *)(*a1 + 616LL);
  v25[0] = 0;
  if ( a2[1] )
  {
    while ( 1 )
    {
      v6 = a1[2];
      v7 = a1[3];
      if ( v7 >= v6 + 1 )
      {
        align = (char *)v2->__align;
      }
      else
      {
        v8 = (char *)qvector_reserve(v2, nullptr, v6 + 1, 0x38u);
        v10 = (char *)a1[1];
        v9 = a1[2];
        v11 = a1[3];
        align = v8;
        a1[3] = v7;
        v13 = v9 - 1;
        if ( v9 - 1 >= 0 )
        {
          v14 = 0;
          do
          {
            v15 = &v10[v14];
            v16 = &align[v14];
            *(_QWORD *)v16 = *(_QWORD *)&v10[v14];
            v17 = *(_QWORD *)&v10[v14 + 8];
            *(_QWORD *)v15 = 0;
            *((_QWORD *)v16 + 1) = v17;
            v18 = *(_QWORD *)&v10[v14 + 16];
            *((_QWORD *)v15 + 1) = 0;
            *((_QWORD *)v16 + 2) = v18;
            v19 = *(_QWORD *)&v10[v14 + 24];
            *((_QWORD *)v15 + 2) = 0;
            *((_QWORD *)v16 + 3) = v19;
            v20 = *(_QWORD *)&v10[v14 + 32];
            *((_QWORD *)v15 + 3) = 0;
            *((_QWORD *)v16 + 4) = v20;
            v21 = *(_QWORD *)&v10[v14 + 40];
            *((_QWORD *)v15 + 4) = 0;
            *((_QWORD *)v16 + 5) = v21;
            LODWORD(v21) = *(_DWORD *)&v10[v14 + 48];
            *((_QWORD *)v15 + 5) = 0;
            *((_DWORD *)v16 + 12) = v21;
            v22 = *(void **)&v10[v14 + 24];
            if ( v22 )
            {
              *((_QWORD *)v15 + 4) = 0;
              qfree(v22);
              *((_QWORD *)v15 + 3) = 0;
              *((_QWORD *)v15 + 5) = 0;
            }
            v23 = *(void **)&v10[v14];
            if ( v23 )
            {
              *((_QWORD *)v15 + 1) = 0;
              qfree(v23);
              *(_QWORD *)&v10[v14] = 0;
              *((_QWORD *)v15 + 2) = 0;
            }
            --v13;
            v14 += 56;
          }
          while ( v13 >= 0 );
          v10 = (char *)v2->__align;
        }
        qfree(v10);
        v6 = a1[2];
        a1[1] = align;
        a1[3] = v11;
      }
      v24 = &align[56 * v6];
      *((_OWORD *)v24 + 1) = 0u;
      *((_OWORD *)v24 + 2) = 0u;
      *(_OWORD *)v24 = 0u;
      ++a1[2];
      if ( (sub_56C9C((__int64)v24, v25, a2, v3 != 0) & 1) == 0 )
        break;
      if ( v25[0] >= (unsigned __int64)a2[1] )
        return;
    }
    sub_56FA8(&v2->__align);
  }
}
