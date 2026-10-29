/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85B84
// Address: 0x0000000000085B84

//----- (0000000000085B84) ----------------------------------------------------
__int64 __fastcall sub_85B84(pthread_mutex_t *a1, __int64 a2)
{
  __int64 v2; // x8
  __int64 result; // x0
  int v5; // w23
  __int64 v7; // x8
  __int64 v8; // x22
  _BYTE *align; // x0
  __int64 v10; // x8
  size_t v11; // x21
  __int64 v12; // x9
  __int64 v13; // x24
  __int64 v14; // x22
  _BYTE *v15; // x0
  __int64 v16; // x8
  __int64 v17; // x21
  _BYTE *v18; // x0

  v2 = *(unsigned __int16 *)(a2 + 24);
  result = 0;
  if ( (unsigned int)v2 <= 0x3E )
  {
    if ( ((1LL << v2) & 0x5400C00000000000LL) != 0 )
    {
      LOBYTE(v5) = *(_WORD *)(a2 + 24);
    }
    else
    {
      v5 = 0;
      if ( ((1LL << v2) & 0x44) == 0 )
      {
        if ( v2 != 4 )
          return result;
        v7 = *(&a1->__align + 1);
        if ( v7 )
          v8 = v7 - 1;
        else
          v8 = 0;
        if ( *(&a1->__align + 2) >= (unsigned __int64)(v8 + 2) )
        {
          align = (_BYTE *)a1->__align;
        }
        else
        {
          align = qvector_reserve(a1, (void *)a1->__align, v8 + 2, 1u);
          a1->__align = (__int64)align;
        }
        v5 = 34;
        *(&a1->__align + 1) = v8 + 2;
        align[v8] = 34;
        *(_BYTE *)(a1->__align + v8 + 1) = 0;
      }
      v10 = *(_QWORD *)(a2 + 8);
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v10 != 1 )
        {
          v12 = *(&a1->__align + 1);
          if ( v12 )
            v13 = v12 - 1;
          else
            v13 = 0;
          v14 = v13 + v10;
          if ( *(&a1->__align + 2) >= (unsigned __int64)(v13 + v10) )
          {
            v15 = (_BYTE *)a1->__align;
          }
          else
          {
            v15 = qvector_reserve(a1, (void *)a1->__align, v13 + v10, 1u);
            a1->__align = (__int64)v15;
          }
          *(&a1->__align + 1) = v14;
          v15[v13 + v11] = 0;
          memcpy((void *)(a1->__align + v13), *(const void **)a2, v11);
        }
      }
      if ( !v5 )
        return 1;
    }
    v16 = *(&a1->__align + 1);
    if ( v16 )
      v17 = v16 - 1;
    else
      v17 = 0;
    if ( *(&a1->__align + 2) >= (unsigned __int64)(v17 + 2) )
    {
      v18 = (_BYTE *)a1->__align;
    }
    else
    {
      v18 = qvector_reserve(a1, (void *)a1->__align, v17 + 2, 1u);
      a1->__align = (__int64)v18;
    }
    *(&a1->__align + 1) = v17 + 2;
    v18[v17] = v5;
    *(_BYTE *)(a1->__align + v17 + 1) = 0;
    return 1;
  }
  return result;
}
