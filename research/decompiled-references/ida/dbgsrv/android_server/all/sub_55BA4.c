/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_55BA4
// Address: 0x0000000000055BA4

//----- (0000000000055BA4) ----------------------------------------------------
struct __pthread_internal_list *__fastcall sub_55BA4(pthread_mutex_t *a1, __int128 *a2, bool *a3)
{
  __int64 v3; // x8
  struct __pthread_internal_list *result; // x0
  int prev_high; // w9
  pthread_mutex_t *v6; // x19
  __int64 align; // x8
  unsigned __int64 v8; // x9
  pthread_mutex_t *v9; // x0
  struct __pthread_internal_list *v10; // x0
  char *v11; // x8
  __int64 v12; // x8
  __int128 v13; // [xsp+0h] [xbp-80h]
  __int128 v14; // [xsp+10h] [xbp-70h]
  __int128 v15; // [xsp+20h] [xbp-60h]
  __int128 v16; // [xsp+30h] [xbp-50h]

  if ( !a1[4].__size[8] )
  {
    if ( under_debugger )
    {
LABEL_19:
      __break(1u);
      v6 = a1;
      _ReadStatusReg(TPIDR_EL0);
      v15 = a2[2];
      v16 = a2[3];
      v13 = *a2;
      v14 = a2[1];
      align = a1[1].__align;
      v8 = *(&a1[1].__align + 1);
      v9 = (pthread_mutex_t *)(&a1->__align + 4);
      if ( v8 >= align + 1 )
      {
        v10 = (struct __pthread_internal_list *)v9->__align;
      }
      else
      {
        v10 = (struct __pthread_internal_list *)qvector_reserve(v9, v6->__list.__next, align + 1, 0x40u);
        align = v6[1].__align;
        v6->__list.__next = v10;
      }
      v11 = (char *)&v10[4 * align];
      *((_OWORD *)v11 + 2) = v15;
      *((_OWORD *)v11 + 3) = v16;
      *(_OWORD *)v11 = v13;
      *((_OWORD *)v11 + 1) = v14;
      v12 = v6[1].__align + 1;
      v6[1].__align = v12;
      return (struct __pthread_internal_list *)(unsigned int)(v12 - 1);
    }
    a1 = interr(20099);
LABEL_17:
    if ( !under_debugger )
      a1 = interr(20056);
    goto LABEL_19;
  }
  if ( a3 )
    *a3 = 0;
  if ( !(_DWORD)a2 )
    goto LABEL_17;
  v3 = a1[1].__align << 6;
  if ( !v3 )
    return nullptr;
  for ( result = a1->__list.__next; ; result += 4 )
  {
    if ( HIDWORD(result[2].__next) == (_DWORD)a2 )
    {
      prev_high = HIDWORD(result->__prev);
      if ( prev_high == 9 || prev_high == 4 )
        break;
    }
    v3 -= 64;
    if ( !v3 )
      return nullptr;
  }
  if ( a3 )
    *a3 = prev_high == 4;
  return result;
}
// 55C6C: variable 'a2' is possibly undefined
// 168DF0: using guessed type char under_debugger;
