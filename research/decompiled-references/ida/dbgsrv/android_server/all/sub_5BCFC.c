/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5BCFC
// Address: 0x000000000005BCFC

//----- (000000000005BCFC) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_5BCFC(pthread_mutex_t *a1, char *a2, __int128 *a3)
{
  __int128 v5; // q0
  __int128 v6; // q0
  int v7; // w0
  char *v8; // x8
  __int64 v9; // x21
  char *v10; // x24
  __int64 align; // x0
  _OWORD v13[2]; // [xsp+0h] [xbp-B0h] BYREF
  _OWORD v14[2]; // [xsp+20h] [xbp-90h] BYREF
  __int128 v15; // [xsp+40h] [xbp-70h]
  __int128 v16; // [xsp+50h] [xbp-60h]
  __int64 v17; // [xsp+68h] [xbp-48h]

  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = a3[1];
  v15 = *a3;
  v16 = v5;
  v6 = a3[1];
  v14[0] = *a3;
  v14[1] = v6;
  v7 = qvsnprintf(nullptr, 0, a2, v14);
  if ( v7 )
  {
    v8 = (char *)*(&a1->__align + 1);
    v9 = v7 + 1LL;
    if ( v8 )
      v10 = v8 - 1;
    else
      v10 = nullptr;
    if ( *(&a1->__align + 2) >= (unsigned __int64)&v10[v9] )
    {
      align = a1->__align;
    }
    else
    {
      align = (__int64)qvector_reserve(a1, (void *)a1->__align, (unsigned __int64)&v10[v9], 1u);
      a1->__align = align;
    }
    *(&a1->__align + 1) = (__int64)&v10[v9];
    v13[0] = v15;
    v13[1] = v16;
    qvsnprintf((pthread_mutex_t *)&v10[align], v9, a2, v13);
  }
  return a1;
}
