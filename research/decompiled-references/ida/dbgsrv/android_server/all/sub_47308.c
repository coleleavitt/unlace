/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47308
// Address: 0x0000000000047308

//----- (0000000000047308) ----------------------------------------------------
__int64 __fastcall sub_47308(__int64 a1, int a2, char *a3, __int64 a4)
{
  const char *v5; // x20
  void *v6; // x0
  void **v7; // x22
  size_t v8; // x0
  __int64 v9; // x8
  size_t v10; // x21
  __int64 v11; // x25
  size_t v12; // x26
  unsigned __int64 v13; // x23
  void *v14; // x0
  const void *v16[3]; // [xsp+8h] [xbp-68h] BYREF

  v16[2] = *(const void **)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 != 1 )
    return 0;
  v16[0] = a3;
  v16[1] = &a3[a4];
  v5 = unpack_ds(v16, (unsigned __int64)&a3[a4], 0);
  if ( *(_QWORD *)(a1 + 1808) )
  {
    v6 = *(void **)(a1 + 1808);
    *(_QWORD *)(a1 + 1816) = 0;
    qfree(v6);
    *(_QWORD *)(a1 + 1808) = 0;
    *(_QWORD *)(a1 + 1824) = 0;
  }
  if ( v5 )
  {
    v7 = (void **)(a1 + 1808);
    v8 = strlen(v5);
    v9 = *(_QWORD *)(a1 + 1816);
    v10 = v8;
    if ( v9 )
      v11 = v9 - 1;
    else
      v11 = 0;
    v12 = v11 + v8;
    v13 = v11 + v8 + 1;
    if ( *(_QWORD *)(a1 + 1824) >= v13 )
    {
      v14 = *v7;
    }
    else
    {
      v14 = qvector_reserve((pthread_mutex_t *)(a1 + 1808), *v7, v13, 1u);
      *v7 = v14;
    }
    *(_QWORD *)(a1 + 1816) = v13;
    *((_BYTE *)v14 + v12) = 0;
    memmove((void *)(*(_QWORD *)(a1 + 1808) + v11), v5, v10);
  }
  return 1;
}
