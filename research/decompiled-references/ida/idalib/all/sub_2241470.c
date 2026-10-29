void __fastcall sub_2241470(__int64 a1)
{
  pthread_mutex_t *v1; // r12
  __int64 v2; // r13
  int v3; // eax
  __int64 *v4; // rsi
  __int64 v5[6]; // [rsp+0h] [rbp-30h] BYREF

  if ( !*(_BYTE *)(a1 + 32) )
  {
    if ( !qword_2D0AB70 )
      sub_2230020((__int64 *)&qword_2D0AB70, (__int64 (*)(void))sub_20C09B0, (__int64)sub_20C0990);
    v1 = qword_2D0AB70;
    if ( !qword_2D0AB90 )
      sub_2230020(&qword_2D0AB90, sub_2240340, (__int64)sub_22411F0);
    v2 = qword_2D0AB90;
    if ( &_pthread_key_create )
    {
      v3 = pthread_mutex_lock(v1);
      if ( v3 )
        std::__throw_system_error(v3);
    }
    if ( !*(_BYTE *)(a1 + 32) )
    {
      if ( byte_2D0ABAA || byte_2D0ABA9 )
      {
        v5[0] = a1;
        v4 = *(__int64 **)(v2 + 8);
        if ( v4 == *(__int64 **)(v2 + 16) )
        {
          sub_2241320(v2, v4, v5);
        }
        else
        {
          *v4 = a1;
          *(_QWORD *)(v2 + 8) = v4 + 1;
        }
      }
      *(_BYTE *)(a1 + 32) = 1;
    }
    if ( &_pthread_key_create )
      pthread_mutex_unlock(v1);
  }
}
