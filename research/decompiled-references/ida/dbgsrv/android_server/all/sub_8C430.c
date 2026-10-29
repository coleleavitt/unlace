/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C430
// Address: 0x000000000008C430

//----- (000000000008C430) ----------------------------------------------------
__int64 __fastcall sub_8C430(pthread_mutex_t *a1, __int64 a2, char **a3)
{
  pthread_mutex_t *v3; // x19
  unsigned __int64 v4; // x21
  const void *v5; // x22
  void *align; // x0
  int v7; // w8

  v3 = a1;
  if ( *(_BYTE *)(a2 + 29) )
  {
    if ( a1 && (pthread_mutex_t *)a2 != a1 )
    {
      v4 = *(_QWORD *)(a2 + 8);
      if ( v4 < 2 )
      {
        *(&a1->__align + 1) = 0;
      }
      else
      {
        v5 = *(const void **)a2;
        if ( *(&a1->__align + 2) >= v4 )
        {
          align = (void *)a1->__align;
        }
        else
        {
          align = qvector_reserve(a1, (void *)a1->__align, v4, 1u);
          v3->__align = (__int64)align;
        }
        *(&v3->__align + 1) = v4;
        memmove(align, v5, v4 - 1);
        *(_BYTE *)(v3->__align + v4 - 1) = 0;
      }
    }
    return 0;
  }
  else
  {
    v7 = *(_DWORD *)(a2 + 24);
    if ( (unsigned int)(v7 - 10) < 2 || v7 == 18 )
    {
      return sub_8AB98((__int64)a1, a2, a3);
    }
    else
    {
      if ( !under_debugger )
        a1 = interr(30222);
      __break(1u);
      return sub_8C510((__int64)a1, (const char *)a2, (int)a3);
    }
  }
}
// 8C50D: variable 'a2' is possibly undefined
// 8C50D: variable 'a3' is possibly undefined
// 168DF0: using guessed type char under_debugger;
