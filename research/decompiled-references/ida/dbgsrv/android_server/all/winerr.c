/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: winerr
// Address: 0x00000000000BEC34

//----- (00000000000BEC34) ----------------------------------------------------
__int64 __fastcall winerr(int a1)
{
  pthread_mutex_t *v2; // x19
  char *v3; // x0
  char *v4; // x20
  size_t v5; // x0
  unsigned __int64 v6; // x22
  size_t v7; // x21
  void *align; // x0

  v2 = (pthread_mutex_t *)sub_B25F0();
  v3 = strerror(a1);
  if ( v3 )
  {
    v4 = v3;
    v5 = strlen(v3);
    if ( v5 )
    {
      v6 = v5 + 1;
      v7 = v5;
      if ( *(&v2->__align + 2) >= v5 + 1 )
      {
        align = (void *)v2->__align;
      }
      else
      {
        align = qvector_reserve(v2, (void *)v2->__align, v6, 1u);
        v2->__align = (__int64)align;
      }
      *(&v2->__align + 1) = v6;
      memmove(align, v4, v7);
      *(_BYTE *)(v2->__align + v7) = 0;
    }
    else
    {
      *(&v2->__align + 1) = 0;
    }
  }
  else
  {
    sub_3C748((__int64)v2, "Unknown error, code: 0x%08X", a1);
  }
  return v2->__align;
}
