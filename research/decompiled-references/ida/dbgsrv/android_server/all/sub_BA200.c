/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BA200
// Address: 0x00000000000BA200

//----- (00000000000BA200) ----------------------------------------------------
__int64 __fastcall sub_BA200(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  void *v8; // x1
  __int64 v9; // x23
  size_t v10; // x24
  struct __pthread_internal_list *v11; // x0
  __int64 v12; // x25
  __int64 v13; // x0
  void *align; // x0
  _QWORD *exception; // x0
  pthread_mutex_t ptr; // [xsp+0h] [xbp-80h] BYREF
  __int64 v18; // [xsp+28h] [xbp-58h]

  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  memset(&ptr, 0, 24);
  if ( a4 )
  {
    v8 = qvector_reserve(&ptr, nullptr, a4, 1u);
    ptr.__align = (__int64)v8;
  }
  else
  {
    v8 = nullptr;
  }
  v9 = 0;
  *(&ptr.__align + 1) = a4;
  if ( a2 )
  {
    while ( 1 )
    {
      v10 = a2 >= a4 ? a4 : a2;
      if ( a1 )
      {
        if ( *(int *)a1 < 2 )
          v11 = (struct __pthread_internal_list *)qfread(*(FILE **)(a1 + 8), v8, v10);
        else
          v11 = (struct __pthread_internal_list *)sub_B9818((pthread_mutex_t *)a1, v8, v10);
        v12 = (__int64)v11;
        if ( (__int64)v11 >= 1 )
        {
          ptr.__list.__prev = v11;
          ptr.__list.__next = (struct __pthread_internal_list *)ptr.__align;
          v13 = *(_QWORD *)(a3 + 32);
          if ( !v13 )
          {
            exception = _cxa_allocate_exception(8u);
            *exception = &off_1603F8;
            _cxa_throw(
              exception,
              (struct type_info *)&`typeinfo for'std::bad_function_call,
              (void (*)(void *))std::bad_alloc::~bad_alloc);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, struct __pthread_internal_list **, __pthread_list_t *))(*(_QWORD *)v13 + 48LL))(
                  v13,
                  &ptr.__list.__next,
                  &ptr.__list)
              & 1) == 0 )
          {
            v9 = -1;
            align = (void *)ptr.__align;
            if ( !ptr.__align )
              return v9;
            goto LABEL_27;
          }
        }
      }
      else
      {
        v12 = -1;
      }
      v9 += v12;
      if ( v12 != v10 )
        break;
      a2 -= v10;
      if ( !a2 )
        goto LABEL_20;
      v8 = (void *)ptr.__align;
    }
    if ( v12 < 0 )
      v9 = -1;
    align = (void *)ptr.__align;
    if ( ptr.__align )
      goto LABEL_27;
  }
  else
  {
LABEL_20:
    align = (void *)ptr.__align;
    if ( ptr.__align )
    {
LABEL_27:
      *(&ptr.__align + 1) = 0;
      qfree(align);
      ptr.__align = 0;
      *(&ptr.__align + 2) = 0;
    }
  }
  return v9;
}
// 1603D0: using guessed type __int64 *`typeinfo for'std::bad_function_call;
// 1603F8: using guessed type void (__fastcall *)(std::bad_alloc *__hidden this);
