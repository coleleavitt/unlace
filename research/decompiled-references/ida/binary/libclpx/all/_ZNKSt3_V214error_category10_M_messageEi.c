std::_V2::error_category *__fastcall std::_V2::error_category::_M_message(std::_V2::error_category *this, __int64 a2)
{
  int v3; // edx
  _QWORD v4[3]; // [rsp+10h] [rbp-18h] BYREF

  v4[1] = __readfsqword(0x28u);
  (*(void (__fastcall **)(_QWORD *))(*(_QWORD *)a2 + 24LL))(v4);
  sub_286850(this, v4[0], *(_QWORD *)(v4[0] - 24LL));
  if ( (_UNKNOWN *)(v4[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4[0] - 8LL), 0xFFFFFFFF);
    }
    else
    {
      v3 = *(_DWORD *)(v4[0] - 8LL);
      *(_DWORD *)(v4[0] - 8LL) = v3 - 1;
    }
    if ( v3 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  return this;
}

