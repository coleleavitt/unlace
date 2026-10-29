/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D1F0
// Address: 0x000000000003D1F0

//----- (000000000003D1F0) ----------------------------------------------------
__int64 *__fastcall sub_3D1F0(pthread_mutex_t *a1, __int64 *a2)
{
  struct __pthread_internal_list *prev; // x8
  pthread_mutex_t *v3; // x19
  int v4; // w20
  unsigned __int64 v5; // x8
  pthread_mutex_t *v6; // x0
  __int64 *result; // x0

  prev = a1[43].__list.__prev;
  if ( !prev )
    goto LABEL_16;
  v3 = a1;
  v4 = (int)a2;
  a2 = (__int64 *)&a1[43].__list;
  do
  {
    if ( SLODWORD(prev[2].__prev) >= v4 )
      a2 = (__int64 *)prev;
    prev = *(&prev->__prev + (SLODWORD(prev[2].__prev) < v4));
  }
  while ( prev );
  if ( a2 == &a1[43].__align + 3 || *((_DWORD *)a2 + 8) > v4 )
  {
LABEL_16:
    if ( !under_debugger )
      a1 = interr(30064);
    __break(1u);
    return sub_3D2F8((__int64)a1, (int)a2);
  }
  else
  {
    if ( *((_BYTE *)a2 + 65) )
      --a1[48].__owner;
    sub_4B184((__int64 **)&a1[43].__align + 2, a2);
    v5 = *(&v3[44].__align + 1);
    if ( v5 >= 0xA )
    {
      memmove((void *)v3[44].__align, (const void *)(v3[44].__align + 4), (4 * v5 - 4) & 0xFFFFFFFFFFFFFFFCLL);
      v5 = *(&v3[44].__align + 1) - 1;
      *(&v3[44].__align + 1) = v5;
    }
    v6 = v3 + 44;
    if ( *(&v3[44].__align + 2) >= v5 + 1 )
    {
      result = (__int64 *)v6->__align;
    }
    else
    {
      result = (__int64 *)qvector_reserve(v6, (void *)v3[44].__align, v5 + 1, 4u);
      v5 = *(&v3[44].__align + 1);
      v3[44].__align = (__int64)result;
    }
    *((_DWORD *)result + v5) = v4;
    ++*(&v3[44].__align + 1);
  }
  return result;
}
// 3D2F5: variable 'a2' is possibly undefined
// 168DF0: using guessed type char under_debugger;
