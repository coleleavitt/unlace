/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_69004
// Address: 0x0000000000069004

//----- (0000000000069004) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_69004(pthread_mutex_t *result, _QWORD *a2)
{
  __int64 v2; // x30
  unsigned __int64 v3; // x9
  unsigned __int64 v4; // x8
  unsigned __int64 v5; // x9
  bool v6; // cf
  struct __pthread_internal_list *v7; // x8
  pthread_mutex_t *v8; // x19
  unsigned __int64 v9; // x2
  _QWORD *v10; // x20
  size_t v11; // x21
  unsigned __int64 v12; // x24
  unsigned __int64 v13; // x22
  __int64 align; // x0
  __int64 v15; // x8
  __int64 v16; // x9
  int v17; // w8
  int v18; // w22
  int v19; // w25
  int *v20; // x26
  pthread_mutex_t *v21; // x0
  pthread_mutex_t *v22; // x0
  pthread_mutex_t *v23; // x0
  pthread_mutex_t *v24; // x0
  size_t v25; // x22
  __int64 v26; // x28
  __int64 v28; // x20
  char v29[4]; // [xsp+0h] [xbp-90h] BYREF
  pthread_mutex_t src; // [xsp+4h] [xbp-8Ch] BYREF
  __int64 v31; // [xsp+78h] [xbp-18h]

  v3 = *(&result->__align + 1);
  v4 = v3 - 2;
  if ( v3 <= 2 )
  {
LABEL_7:
    if ( !under_debugger )
      result = interr(278);
    goto LABEL_9;
  }
  v5 = *(__int16 *)(result->__align + v3 - 2);
  v6 = v4 >= v5;
  v7 = (struct __pthread_internal_list *)(v4 - v5);
  result->__list.__prev = v7;
  if ( v6 && v7 )
    return result;
  if ( !under_debugger )
  {
    result = interr(279);
    goto LABEL_7;
  }
LABEL_9:
  __break(1u);
  v31 = v2;
  v8 = result;
  *(__int64 *)((char *)&src.__align + 20) = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result->__list.__prev = (struct __pthread_internal_list *)*(&result->__align + 1);
  v9 = a2[1];
  if ( v9 )
  {
    v10 = a2;
    v11 = (char *)pack_dd(&src, (unsigned __int64)&src.__align + 5, v9) - (char *)&src;
    if ( v11 )
    {
      v12 = *(&v8->__align + 1);
      if ( __CFADD__(v12, v11) )
        v13 = 0x7FFFFFFFFFFFFFFFLL;
      else
        v13 = v12 + v11;
      if ( v12 >= v13 )
      {
        if ( v12 != v13 )
        {
          v29[0] = 0;
          sub_5BBF4(v8, v13, v29);
        }
      }
      else
      {
        if ( *(&v8->__align + 2) >= v13 )
        {
          align = v8->__align;
          v15 = *(&v8->__align + 1);
        }
        else
        {
          align = (__int64)qvector_reserve(v8, (void *)v8->__align, v13, 1u);
          v15 = *(&v8->__align + 1);
          v8->__align = align;
        }
        memset((void *)(align + v15), 0, v13 - v15);
        *(&v8->__align + 1) = v13;
      }
      memcpy((void *)(v8->__align + v12), &src, v11);
    }
    if ( v10[1] )
    {
      v16 = 0;
      v17 = 0;
      v18 = 0;
      v19 = 1;
      do
      {
        v20 = (int *)(*v10 + 16 * v16);
        v21 = pack_dd(&src, (unsigned __int64)&src.__align + 20, (unsigned int)(*v20 - v17));
        v22 = pack_dd(v21, (unsigned __int64)&src.__align + 20, (unsigned int)(v20[1] - v18));
        v23 = pack_dd(v22, (unsigned __int64)&src.__align + 20, (unsigned int)v20[2]);
        v24 = pack_dd(v23, (unsigned __int64)&src.__align + 20, (unsigned int)v20[3]);
        v25 = (char *)v24 - (char *)&src;
        if ( v24 != &src )
        {
          v26 = *(&v8->__align + 1);
          v29[0] = 0;
          sub_5BBF4(v8, v26 + v25, v29);
          memcpy((void *)(v8->__align + v26), &src, v25);
        }
        v17 = *v20;
        v18 = v20[1];
        v16 = v19;
      }
      while ( v10[1] > (unsigned __int64)v19++ );
    }
  }
  v28 = *(&v8->__align + 1);
  LOWORD(src.__lock) = v28 - *((_WORD *)&v8->__align + 12);
  v29[0] = 0;
  result = sub_5BBF4(v8, v28 + 2, v29);
  *(_WORD *)(v8->__align + v28) = src.__lock;
  return result;
}
// 69084: variable 'v2' is possibly undefined
// 690A0: variable 'a2' is possibly undefined
// 168DF0: using guessed type char under_debugger;
