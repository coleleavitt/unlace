/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BEDF0
// Address: 0x00000000000BEDF0

//----- (00000000000BEDF0) ----------------------------------------------------
__int64 __fastcall sub_BEDF0(__int64 a1, unsigned __int64 a2, __int64 a3, void *a4)
{
  void *v7; // rsi
  __int64 v8; // r12
  signed __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rdi
  _QWORD *exception; // rax
  void *ptr[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v17; // [rsp+20h] [rbp-58h]
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v19[8]; // [rsp+38h] [rbp-40h] BYREF

  v19[1] = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  v17 = 0;
  if ( a4 )
  {
    v7 = qvector_reserve((__int64)ptr, nullptr, (unsigned __int64)a4, 1u);
    ptr[0] = v7;
  }
  else
  {
    v7 = nullptr;
  }
  ptr[1] = a4;
  v8 = 0;
  if ( a2 )
  {
    while ( 1 )
    {
      v9 = (signed __int64)a4;
      if ( a2 < (unsigned __int64)a4 )
        v9 = a2;
      if ( a1 )
      {
        if ( *(int *)a1 < 2 )
          v10 = qfread(*(FILE **)(a1 + 8), v7, v9);
        else
          v10 = sub_BE3E0(a1, v7, v9);
        v11 = v10;
        if ( v10 > 0 )
        {
          v19[0] = ptr[0];
          v18 = v10;
          v12 = *(_QWORD *)(a3 + 32);
          if ( !v12 )
          {
            exception = _cxa_allocate_exception(8u);
            *exception = &off_1506C8;
            _cxa_throw(exception, (struct type_info *)&`typeinfo for'std::bad_function_call, std::exception::~exception);
          }
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD *, __int64 *))(*(_QWORD *)v12 + 48LL))(
                  v12,
                  v19,
                  &v18) )
          {
            v8 = -1;
            goto LABEL_24;
          }
        }
      }
      else
      {
        v11 = -1;
      }
      v8 += v11;
      if ( v11 != v9 )
        break;
      a2 -= v9;
      if ( !a2 )
        goto LABEL_24;
      v7 = ptr[0];
    }
    if ( v11 < 0 )
      v8 = -1;
  }
LABEL_24:
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v17 = 0;
  }
  return v8;
}
// 1506A0: using guessed type void (__fastcall *`typeinfo for'std::bad_function_call)(std::type_info *__hidden this);
// 1506C8: using guessed type void (__fastcall *)(std::exception *__hidden this);
