/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40E10
// Address: 0x0000000000040E10

//----- (0000000000040E10) ----------------------------------------------------
__int64 __fastcall sub_40E10(pthread_mutex_t *a1, __int64 a2)
{
  struct __pthread_internal_list *prev; // x9
  int v3; // w2
  __int64 *p_list; // x8
  unsigned int v7; // w9
  int v8; // w9
  int v9; // w1

  if ( !a2 )
    return 0xFFFFFFFFLL;
  prev = a1[43].__list.__prev;
  v3 = *(_DWORD *)(a2 + 4);
  if ( !prev )
    goto LABEL_28;
  p_list = (__int64 *)&a1[43].__list;
  do
  {
    if ( SLODWORD(prev[2].__prev) >= v3 )
      p_list = (__int64 *)prev;
    prev = *(&prev->__prev + (SLODWORD(prev[2].__prev) < v3));
  }
  while ( prev );
  if ( p_list != &a1[43].__align + 3 && *((_DWORD *)p_list + 8) <= v3 )
  {
    v7 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
    if ( v7 > 9 || ((1 << *(_BYTE *)(a2 + 20)) & 0x318) == 0 && (v7 != 7 || *(_BYTE *)(a2 + 16)) )
      *((_DWORD *)p_list + 13) = 0;
    v8 = *((_DWORD *)p_list + 15);
    if ( v8 == 3 )
    {
      sub_3D1F0(a1, (__int64 *)*(unsigned int *)(a2 + 4));
    }
    else if ( v8 == 2 )
    {
      v9 = *((_DWORD *)p_list + 10);
      *((_DWORD *)p_list + 11) = 0;
      *((_DWORD *)p_list + 12) = 0;
      sub_409C0((__int64)a1, v9, 0);
    }
  }
  else
  {
LABEL_28:
    if ( v3 && (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 4 && !a1[46].__size[13] )
    {
      sub_40F34((__int64)a1, "could not find thread %d!\n", v3);
      return 0xFFFFFFFFLL;
    }
  }
  a1[48].__size[14] = 0;
  if ( sub_404F0((__int64)a1, 0) )
    return 1;
  else
    return 0xFFFFFFFFLL;
}
