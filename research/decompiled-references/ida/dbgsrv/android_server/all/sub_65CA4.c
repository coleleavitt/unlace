/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65CA4
// Address: 0x0000000000065CA4

//----- (0000000000065CA4) ----------------------------------------------------
void __fastcall sub_65CA4(pthread_mutex_t *a1, unsigned __int8 *a2)
{
  __int64 v3; // x8
  __int64 align; // x0
  __int64 v5; // x0
  unsigned __int8 v6[8]; // [xsp+8h] [xbp-48h] BYREF
  __int64 v7; // [xsp+10h] [xbp-40h]
  __int64 v8; // [xsp+18h] [xbp-38h]
  __int64 v9; // [xsp+20h] [xbp-30h]
  __int64 v10; // [xsp+28h] [xbp-28h]

  v10 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6[0] = 2;
  v8 = 0;
  v9 = 0;
  v7 = 0;
  copy_idcv(v6, a2);
  v3 = *(&a1->__align + 1);
  if ( *(&a1->__align + 2) >= (unsigned __int64)(v3 + 1) )
  {
    align = a1->__align;
  }
  else
  {
    align = (__int64)qvector_reserve(a1, (void *)a1->__align, v3 + 1, 0x20u);
    v3 = *(&a1->__align + 1);
    a1->__align = align;
  }
  v5 = align + 32 * v3;
  *(_BYTE *)v5 = 2;
  *(_QWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 24) = 0;
  *(_QWORD *)(v5 + 8) = 0;
  copy_idcv((unsigned __int8 *)v5, v6);
  ++*(&a1->__align + 1);
  free_idcv((__int64 *)v6);
}
