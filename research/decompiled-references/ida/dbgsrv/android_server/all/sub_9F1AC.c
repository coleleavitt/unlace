/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9F1AC
// Address: 0x000000000009F1AC

//----- (000000000009F1AC) ----------------------------------------------------
size_t __fastcall sub_9F1AC(__int64 a1, unsigned __int64 *a2)
{
  size_t result; // x0
  __int64 v5; // x25
  __int64 v6; // x26
  __int64 v7; // x27
  _QWORD *v8; // x0
  _QWORD *v9; // x22
  char *v10; // x23
  pthread_mutex_t *v11; // x21
  const char *v12; // x23
  _BYTE *v13; // x9
  char *v15; // x27
  void *align; // x1
  unsigned __int64 v17; // x22
  size_t v18; // x24

  result = unpack_dd(a2, a2[1]);
  if ( (_DWORD)result )
  {
    v5 = 0;
    v6 = (unsigned int)result;
    do
    {
      v7 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v7 + 1) )
      {
        v9 = *(_QWORD **)a1;
      }
      else
      {
        v8 = qvector_reserve((pthread_mutex_t *)a1, *(void **)a1, v7 + 1, 0x20u);
        v7 = *(_QWORD *)(a1 + 8);
        v9 = v8;
        *(_QWORD *)a1 = v8;
      }
      v10 = (char *)&v9[4 * v7];
      *((_QWORD *)v10 + 1) = 0;
      v11 = (pthread_mutex_t *)(v10 + 8);
      *((_QWORD *)v10 + 2) = 0;
      *((_QWORD *)v10 + 3) = 0;
      ++*(_QWORD *)(a1 + 8);
      result = unpack_dd(a2, a2[1]);
      *(_DWORD *)v10 = result;
      v12 = (const char *)*a2;
      v13 = (_BYTE *)*a2;
      do
      {
        if ( (unsigned __int64)v13 >= a2[1] )
          goto LABEL_14;
      }
      while ( *v13++ );
      *a2 = (unsigned __int64)v13;
      if ( !v12 || (result = strlen(v12)) == 0 )
      {
LABEL_14:
        v9[4 * v7 + 2] = 0;
        goto LABEL_15;
      }
      v15 = (char *)&v9[4 * v7];
      align = (void *)v11->__align;
      v17 = result + 1;
      v18 = result;
      if ( *((_QWORD *)v15 + 3) < result + 1 )
      {
        align = qvector_reserve(v11, align, v17, 1u);
        v11->__align = (__int64)align;
      }
      *((_QWORD *)v15 + 2) = v17;
      result = (size_t)memmove(align, v12, v18);
      *(_BYTE *)(v11->__align + v18) = 0;
LABEL_15:
      ++v5;
    }
    while ( v5 != v6 );
  }
  return result;
}
