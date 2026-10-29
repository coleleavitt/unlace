/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_56A0C
// Address: 0x0000000000056A0C

//----- (0000000000056A0C) ----------------------------------------------------
__int64 __fastcall sub_56A0C(pthread_mutex_t *a1, char *a2, _QWORD *a3, char a4)
{
  unsigned __int64 v4; // x8
  struct __pthread_internal_list *prev; // x8
  struct __pthread_internal_list *v6; // x9
  struct __pthread_internal_list *next; // x10
  unsigned __int64 v8; // x8
  unsigned __int64 v9; // x9
  struct __pthread_internal_list *v10; // x10
  int v11; // w11
  unsigned int v12; // w11
  unsigned __int64 v13; // x10
  __int64 v15; // x9
  __int64 v16; // x8
  __int64 v17; // x8
  unsigned int v18; // w9

  if ( a1[1].__size[32] )
  {
    v4 = 0;
    if ( *(_DWORD *)a2 > 6u || ((1 << *(_DWORD *)a2) & 0x5A) == 0 )
      return v4;
    prev = a1[1].__list.__prev;
    v6 = prev[30].__prev;
    next = prev[30].__next;
    v8 = *((_QWORD *)a2 + 1);
    v9 = (char *)next - (char *)v6;
    if ( v8 < v9 )
    {
      v10 = a1->__list.__next;
      v11 = -1227133513 * ((unsigned __int64)(a2 - (char *)v10) >> 3);
      if ( (v11 & 0x80000000) == 0 )
      {
        v12 = v11 + 1;
        if ( a1[1].__align > (unsigned __int64)(int)v12 )
        {
          v13 = *((_QWORD *)&v10->__next + 7 * v12);
          if ( v13 >= v8 )
            v9 = v13;
        }
      }
      v4 = v9 - v8;
      if ( *((_QWORD *)a2 + 4) < v4 )
        return *((_QWORD *)a2 + 4);
      return v4;
    }
    return 0;
  }
  else
  {
    if ( !under_debugger )
      a1 = interr(20100);
    __break(1u);
    v15 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 > 0xFFFFFFFFFFFFFFFBLL )
    {
      return 0;
    }
    else
    {
      v16 = v15 + 4;
      if ( (unsigned __int64)(v15 + 4) <= a3[1] )
      {
        if ( a1 )
        {
          LODWORD(v17) = *(_DWORD *)(*a3 + v15);
          v18 = bswap32(v17);
          if ( (a4 & 1) != 0 )
            v17 = v18;
          else
            v17 = (unsigned int)v17;
          a1->__align = v17;
          v16 = *(_QWORD *)a2 + 4LL;
        }
        *(_QWORD *)a2 = v16;
        return 1;
      }
      else
      {
        return 0;
      }
    }
  }
}
// 56AD0: variable 'a2' is possibly undefined
// 56ADC: variable 'a3' is possibly undefined
// 56B04: variable 'a4' is possibly undefined
// 168DF0: using guessed type char under_debugger;
