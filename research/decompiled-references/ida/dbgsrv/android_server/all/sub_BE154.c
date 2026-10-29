/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BE154
// Address: 0x00000000000BE154

//----- (00000000000BE154) ----------------------------------------------------
void __fastcall sub_BE154(pthread_mutex_t *a1, __int64 a2)
{
  unsigned __int64 v3; // x8
  unsigned __int64 v4; // x21
  char *align; // x0
  void *v7; // x0
  char v8[4]; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v9; // [xsp+8h] [xbp-38h]

  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 )
  {
    v3 = *(&a1->__align + 1);
    v4 = a2 + 1;
    if ( v3 >= a2 + 1 )
    {
      if ( v3 != a2 + 1 )
      {
        v8[0] = 0;
        sub_5C6B0(a1, a2 + 1, v8);
      }
    }
    else
    {
      if ( *(&a1->__align + 2) >= v4 )
      {
        align = (char *)a1->__align;
      }
      else
      {
        align = (char *)qvector_reserve(a1, (void *)a1->__align, v4, 1u);
        v3 = *(&a1->__align + 1);
        a1->__align = (__int64)align;
      }
      memset(&align[v3], 0, v4 - v3);
      *(&a1->__align + 1) = v4;
    }
    *(_BYTE *)(a1->__align + a2) = 0;
  }
  else
  {
    v7 = (void *)a1->__align;
    if ( a1->__align )
    {
      *(&a1->__align + 1) = 0;
      qfree(v7);
      a1->__align = 0;
      *(&a1->__align + 2) = 0;
    }
  }
}
