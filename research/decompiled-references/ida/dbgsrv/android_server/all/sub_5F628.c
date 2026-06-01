/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5F628
// Address: 0x000000000005F628

//----- (000000000005F628) ----------------------------------------------------
void __fastcall sub_5F628(char **a1, unsigned __int64 a2)
{
  char *v4; // x8
  unsigned __int64 v5; // x10
  __int128 v6; // q0
  char *v7; // x8
  _QWORD *v8; // x23
  char *v9; // x0
  char *v10; // x9
  char *v11; // x0
  char *v12; // x19
  __int64 v13; // x8
  __int64 v14; // x8
  char *v15; // x21
  void *ptr[2]; // [xsp+0h] [xbp-80h]
  __int64 v17; // [xsp+10h] [xbp-70h]
  __int64 v18[2]; // [xsp+18h] [xbp-68h] BYREF
  __int128 v19; // [xsp+28h] [xbp-58h]
  __int64 v20; // [xsp+38h] [xbp-48h]

  v20 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *a1;
  v5 = (unsigned __int64)a1[2];
  if ( (unsigned __int64)*a1 > a2 || (unsigned __int64)&v4[56 * v5] <= a2 )
  {
    v8 = a1 + 1;
    v10 = a1[1];
    if ( v5 < (unsigned __int64)(v10 + 1) )
    {
      v11 = (char *)qvector_reserve((pthread_mutex_t *)a1, *a1, (unsigned __int64)(v10 + 1), 0x38u);
      v10 = a1[1];
      v4 = v11;
      *a1 = v11;
    }
    v12 = &v4[56 * (_QWORD)v10];
    *(_QWORD *)v12 = *(_QWORD *)a2;
    v13 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)a2 = 0;
    *((_QWORD *)v12 + 1) = v13;
    v14 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 8) = 0;
    *((_QWORD *)v12 + 2) = v14;
    *(_QWORD *)(a2 + 16) = 0;
    v12[24] = 2;
    *((_QWORD *)v12 + 5) = 0;
    *((_QWORD *)v12 + 6) = 0;
    *((_QWORD *)v12 + 4) = 0;
    copy_idcv((unsigned __int8 *)v12 + 24, (unsigned __int8 *)(a2 + 24));
  }
  else
  {
    v6 = *(_OWORD *)a2;
    *(_QWORD *)a2 = 0;
    *(_OWORD *)ptr = v6;
    v17 = *(_QWORD *)(a2 + 16);
    *(_OWORD *)(a2 + 8) = 0u;
    LOBYTE(v18[0]) = 2;
    v19 = 0u;
    v18[1] = 0;
    copy_idcv((unsigned __int8 *)v18, (unsigned __int8 *)(a2 + 24));
    v8 = a1 + 1;
    v7 = a1[1];
    if ( a1[2] >= v7 + 1 )
    {
      v9 = *a1;
    }
    else
    {
      v9 = (char *)qvector_reserve((pthread_mutex_t *)a1, *a1, (unsigned __int64)(v7 + 1), 0x38u);
      v7 = a1[1];
      *a1 = v9;
    }
    v15 = &v9[56 * (_QWORD)v7];
    *(_OWORD *)v15 = *(_OWORD *)ptr;
    *((_QWORD *)v15 + 2) = v17;
    v15[24] = 2;
    *((_QWORD *)v15 + 5) = 0;
    *((_QWORD *)v15 + 6) = 0;
    *((_QWORD *)v15 + 4) = 0;
    copy_idcv((unsigned __int8 *)v15 + 24, (unsigned __int8 *)v18);
    free_idcv(v18);
  }
  ++*v8;
}
// 5F7C8: conditional instruction was optimized away because %ptr.8==0
