/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49D720
// Address: 0x000000000049D720

//----- (000000000049D720) ----------------------------------------------------
__int64 __fastcall sub_49D720(__int64 a1)
{
  __int64 v2; // x5
  __int64 result; // x0
  __int64 v4; // x6
  __int64 *v5; // x4
  unsigned __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 *v10; // x1
  __int64 *v11; // x3
  _QWORD *v12; // x0

  if ( &_pthread_key_create && pthread_mutex_lock((pthread_mutex_t *)&qword_524540) )
    sub_49D6E8();
  v2 = a1 - 16;
  result = qword_524570;
  if ( qword_524570
    && (v4 = *(_QWORD *)(a1 - 16), v5 = (__int64 *)(v2 + v4), qword_524570 <= (unsigned __int64)(v2 + v4)) )
  {
    if ( qword_524570 == v2 + v4 )
    {
      *(_QWORD *)(a1 - 16) = *(_QWORD *)qword_524570 + v4;
      result = *(_QWORD *)(qword_524570 + 8);
      *(_QWORD *)(a1 - 8) = result;
      qword_524570 = a1 - 16;
    }
    else
    {
      v6 = *(_QWORD *)(qword_524570 + 8);
      if ( v6 )
      {
        if ( (unsigned __int64)v5 < v6 )
        {
          while ( 1 )
          {
            v10 = *(__int64 **)(v6 + 8);
            v11 = (__int64 *)(result + 8);
            if ( !v10 )
              break;
            result = v6;
            if ( v5 >= v10 )
              break;
            v6 = *(_QWORD *)(v6 + 8);
          }
        }
        else
        {
          v10 = *(__int64 **)(qword_524570 + 8);
          v11 = &qword_524570;
          v6 = qword_524570;
        }
      }
      else
      {
        v10 = nullptr;
        v6 = qword_524570;
        v11 = &qword_524570;
      }
      if ( v5 == v10 )
      {
        v9 = *v5;
        *(_QWORD *)(v6 + 8) = v5[1];
        v4 += v9;
      }
      result = *v11;
      v7 = *(_QWORD *)*v11;
      if ( v2 == *v11 + v7 )
      {
        *(_QWORD *)result = v7 + v4;
      }
      else
      {
        v8 = *(_QWORD *)(result + 8);
        *(_QWORD *)(a1 - 16) = v4;
        *(_QWORD *)(a1 - 8) = v8;
        result = *v11;
        *(_QWORD *)(*v11 + 8) = v2;
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 - 8) = qword_524570;
    qword_524570 = a1 - 16;
  }
  if ( &_pthread_key_create )
  {
    result = pthread_mutex_unlock((pthread_mutex_t *)&qword_524540);
    if ( (_DWORD)result )
    {
      v12 = sub_49DA58(8);
      *v12 = &off_51E4C8;
      sub_49DCD8(
        (__int64)v12,
        (__int64)&`typeinfo for'__gnu_cxx::__concurrence_unlock_error,
        (__int64)__gnu_cxx::__concurrence_unlock_error::~__concurrence_unlock_error);
    }
  }
  return result;
}
// 51E478: using guessed type __int64 *`typeinfo for'__gnu_cxx::__concurrence_unlock_error;
// 51E4C8: using guessed type void (__fastcall *off_51E4C8)(__gnu_cxx::__concurrence_unlock_error *__hidden this);
// 523500: using guessed type __int64 qword_523500[512];
// 524540: using guessed type __int64 qword_524540;
// 524570: using guessed type __int64 qword_524570;
