__int64 __fastcall _pthread_exit_if_canceled(__int64 result)
{
  int v1; // w19
  unsigned __int64 StatusReg; // x8
  unsigned __int64 v3; // x8
  __int64 v4; // t1
  __int64 v5; // x0

  if ( (unsigned __int8)result == 4 )
  {
    v1 = result;
    result = __pthread_canceled(0);
    if ( !(_DWORD)result )
    {
      StatusReg = _ReadStatusReg(TPIDRRO_EL0);
      v4 = *(_QWORD *)(StatusReg - 224);
      v3 = StatusReg - 224;
      if ( (_pthread_ptr_munge_token ^ v4) == v3 )
      {
        *(_DWORD *)(v3 + 168) = v1;
        *(_BYTE *)(v3 + 165) = 1;
        pthread_exit((char *)&dword_0 + 1);
      }
      v5 = _pthread_exit_if_canceled_cold_1();
      return _pthread_joiner_prepost_wake(v5);
    }
  }
  return result;
}
