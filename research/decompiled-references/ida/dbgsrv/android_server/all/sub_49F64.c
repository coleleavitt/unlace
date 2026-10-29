/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49F64
// Address: 0x0000000000049F64

//----- (0000000000049F64) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_49F64(pthread_mutex_t *result, __int64 a2, __int64 a3)
{
  int lock; // w8
  unsigned __int8 *v5; // x20
  __int64 v6; // x8
  struct __pthread_internal_list *prev; // x21
  void **v8; // x22
  void *v9; // x0
  struct __pthread_internal_list *v10; // x21
  void **v11; // x22
  void *v12; // x0
  struct __pthread_internal_list *next; // x9

  lock = result->__lock;
  if ( result->__lock == 3 )
    return (*((pthread_mutex_t *(__fastcall **)(__int64, __int64, struct __pthread_internal_list *))&result->__align + 2))(
             a3,
             a2,
             result->__list.__next);
  v5 = (unsigned __int8 *)(a3 + *(&result->__align + 2));
  switch ( lock )
  {
    case 2:
      prev = result->__list.__prev;
      v8 = (void **)(a2 + 8);
      if ( *(int *)a2 >= -1 )
      {
        v9 = *v8;
        if ( *v8 )
        {
          *(_QWORD *)(a2 + 16) = 0;
          qfree(v9);
          *(_QWORD *)(a2 + 8) = 0;
          *(_QWORD *)(a2 + 24) = 0;
        }
        *(_DWORD *)a2 = -2;
      }
      result = sub_4A0EC((pthread_mutex_t *)(a2 + 8), v5, (unsigned __int64)prev);
      *(_DWORD *)a2 = 0;
      break;
    case 1:
      v10 = result->__list.__prev;
      v11 = (void **)(a2 + 8);
      if ( *(int *)a2 >= -1 )
      {
        v12 = *v11;
        if ( *v11 )
        {
          *(_QWORD *)(a2 + 16) = 0;
          qfree(v12);
          *(_QWORD *)(a2 + 8) = 0;
          *(_QWORD *)(a2 + 24) = 0;
        }
        *(_DWORD *)a2 = -2;
      }
      result = sub_4A0EC((pthread_mutex_t *)(a2 + 8), v5, (unsigned __int64)v10);
      *(_DWORD *)a2 = -1;
      break;
    case 0:
      v6 = 0;
      switch ( (unsigned __int64)result->__list.__prev )
      {
        case 1uLL:
          v6 = *v5;
          break;
        case 2uLL:
          v6 = *(unsigned __int16 *)v5;
          break;
        case 4uLL:
          v6 = *(unsigned int *)v5;
          break;
        case 8uLL:
          v6 = *(_QWORD *)v5;
          break;
        default:
          break;
      }
      next = result->__list.__next;
      if ( next == (struct __pthread_internal_list *)byte_4 )
      {
        v6 = (unsigned int)v6;
      }
      else if ( next == (struct __pthread_internal_list *)((char *)&dword_0 + 2) )
      {
        v6 = (unsigned __int16)v6;
      }
      else if ( next == (struct __pthread_internal_list *)((char *)&dword_0 + 1) )
      {
        v6 = (unsigned __int8)v6;
      }
      *(_QWORD *)(a2 + 8) = v6;
      break;
  }
  return result;
}
// 0: using guessed type int dword_0;
