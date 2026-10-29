/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49D8A0
// Address: 0x000000000049D8A0

//----- (000000000049D8A0) ----------------------------------------------------
__int64 __fastcall sub_49D8A0(__int64 a1)
{
  unsigned __int64 v2; // x19
  unsigned __int64 *v3; // x2
  unsigned __int64 v4; // x1
  unsigned __int64 v5; // x3
  __int64 v6; // x19
  __int64 v8; // x19
  __int64 v9; // x5
  unsigned __int64 *v10; // x0
  __int64 *v11; // x2
  _QWORD *v12; // x0

  if ( &_pthread_key_create )
  {
    if ( pthread_mutex_lock((pthread_mutex_t *)&qword_524540) )
      sub_49D6E8();
    v2 = a1 + 16;
    v3 = (unsigned __int64 *)qword_524570;
    if ( v2 < 0x10 )
      v2 = 16;
    v4 = (v2 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( !qword_524570 )
    {
      v6 = 0;
LABEL_13:
      if ( pthread_mutex_unlock((pthread_mutex_t *)&qword_524540) )
      {
        v12 = sub_49DA58(8);
        *v12 = &off_51E4C8;
        sub_49DCD8(
          (__int64)v12,
          (__int64)&`typeinfo for'__gnu_cxx::__concurrence_unlock_error,
          (__int64)__gnu_cxx::__concurrence_unlock_error::~__concurrence_unlock_error);
      }
      return v6;
    }
  }
  else
  {
    v8 = a1 + 16;
    v3 = (unsigned __int64 *)qword_524570;
    if ( (unsigned __int64)(a1 + 16) < 0x10 )
      v8 = 16;
    v4 = (v8 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( !qword_524570 )
      return 0;
  }
  v5 = *v3;
  if ( *v3 < v4 )
  {
    while ( 1 )
    {
      v10 = (unsigned __int64 *)v3[1];
      if ( !v10 )
      {
        v6 = 0;
        goto LABEL_12;
      }
      v5 = *v10;
      if ( *v10 >= v4 )
        break;
      v3 = (unsigned __int64 *)v3[1];
    }
    v11 = (__int64 *)(v3 + 1);
  }
  else
  {
    v10 = v3;
    v11 = &qword_524570;
  }
  v9 = v10[1];
  if ( v5 - v4 <= 0xF )
  {
    *v10 = v5;
    v6 = (__int64)(v10 + 2);
    *v11 = v9;
  }
  else
  {
    *(unsigned __int64 *)((char *)v10 + v4 + 8) = v9;
    *(unsigned __int64 *)((char *)v10 + v4) = v5 - v4;
    v6 = *v11 + 16;
    *(_QWORD *)*v11 = v4;
    *v11 = (__int64)v10 + v4;
  }
LABEL_12:
  if ( &_pthread_key_create )
    goto LABEL_13;
  return v6;
}
// 51E478: using guessed type __int64 *`typeinfo for'__gnu_cxx::__concurrence_unlock_error;
// 51E4C8: using guessed type void (__fastcall *off_51E4C8)(__gnu_cxx::__concurrence_unlock_error *__hidden this);
// 523500: using guessed type __int64 qword_523500[512];
// 524540: using guessed type __int64 qword_524540;
// 524570: using guessed type __int64 qword_524570;
