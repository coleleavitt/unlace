/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C7BEC
// Address: 0x00000000000C7BEC

//----- (00000000000C7BEC) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_C7BEC(pthread_mutex_t *result, char *a2, __int128 *a3)
{
  unsigned __int64 v3; // x24
  pthread_mutex_t *v6; // x20
  void *align; // x1
  __int128 v8; // q0
  __int128 v9[2]; // [xsp+0h] [xbp-70h] BYREF
  __int64 v10; // [xsp+28h] [xbp-48h]

  v10 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( result )
  {
    v3 = *(&result->__align + 1);
    v6 = result;
    if ( v3 >= 2 )
    {
      align = (void *)result->__align;
      if ( *(_BYTE *)(result->__align + v3 - 2) != 10 )
      {
        if ( *(&result->__align + 2) < v3 + 1 )
        {
          align = qvector_reserve(result, align, v3 + 1, 1u);
          v6->__align = (__int64)align;
        }
        *(&v6->__align + 1) = v3 + 1;
        *((_BYTE *)align + v3 - 1) = 10;
        *(_BYTE *)(v6->__align + v3) = 0;
      }
    }
    v8 = a3[1];
    v9[0] = *a3;
    v9[1] = v8;
    return sub_5BCFC(v6, a2, v9);
  }
  return result;
}
