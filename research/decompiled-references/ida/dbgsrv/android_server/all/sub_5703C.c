/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5703C
// Address: 0x000000000005703C

//----- (000000000005703C) ----------------------------------------------------
char *__fastcall sub_5703C(pthread_mutex_t *a1, __int64 a2)
{
  __int64 v2; // x8
  __int64 v4; // x23
  __int64 i; // x21
  const char *v6; // x0
  __int64 v8; // x8
  int v9; // w20
  unsigned __int64 v10; // x2
  __int64 j; // x22
  unsigned __int8 *v12; // x8

  if ( a1->__size[32] )
  {
    v2 = *(&a1->__align + 2);
    if ( 56 * v2 )
    {
      v4 = 56 * v2;
      for ( i = *(&a1->__align + 1) + 24; ; i += 56 )
      {
        v6 = *(_QWORD *)(i - 16) ? *(const char **)(i - 24) : &byte_F154B;
        if ( !strcmp(v6, "GNU") && *(_DWORD *)(i + 24) == 3 )
          break;
        v4 -= 56;
        if ( !v4 )
          return nullptr;
      }
      v8 = *(_QWORD *)(i + 8);
      *(_QWORD *)(a2 + 8) = 0;
      if ( v8 )
        v9 = v8 - 1;
      else
        v9 = 0;
      v10 = 2 * v9;
      if ( *(_QWORD *)(a2 + 16) < v10 )
        *(_QWORD *)a2 = qvector_reserve((pthread_mutex_t *)a2, *(void **)a2, v10, 1u);
      if ( v9 >= 1 )
      {
        for ( j = 0; j != v9; ++j )
        {
          if ( *(_QWORD *)(i + 8) | j )
            v12 = (unsigned __int8 *)(*(_QWORD *)i + j);
          else
            v12 = (unsigned __int8 *)&byte_1028F3;
          sub_4C730((pthread_mutex_t *)a2, "%02x", *v12);
        }
      }
      return (_BYTE *)(&dword_0 + 1);
    }
    else
    {
      return nullptr;
    }
  }
  else
  {
    if ( !under_debugger )
      a1 = interr(20082);
    __break(1u);
    if ( (unsigned __int64)&a1[-1].__align + 39 > 4 )
      return nullptr;
    else
      return off_15CB20[(_QWORD)a1 - 1];
  }
}
// 0: using guessed type int dword_0;
// F154B: using guessed type char byte_F154B;
// 1028F3: using guessed type char byte_1028F3;
// 15CB20: using guessed type char *off_15CB20[5];
// 168DF0: using guessed type char under_debugger;
