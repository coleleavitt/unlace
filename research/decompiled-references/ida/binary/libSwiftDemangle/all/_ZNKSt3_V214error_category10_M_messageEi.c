std::_V2::error_category *__fastcall std::_V2::error_category::_M_message(std::_V2::error_category *this, __int64 a2)
{
  __int64 v3; // rdi
  int v5; // edx
  char v6; // [rsp+Fh] [rbp-29h] BYREF
  _QWORD v7[5]; // [rsp+10h] [rbp-28h] BYREF

  v7[1] = __readfsqword(0x28u);
  (*(void (__fastcall **)(_QWORD *))(*(_QWORD *)a2 + 24LL))(v7);
  sub_34320(this, v7[0], *(_QWORD *)(v7[0] - 24LL));
  v3 = v7[0] - 24LL;
  if ( (_QWORD *)(v7[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v5 = _InterlockedExchangeAdd((volatile signed __int32 *)(v7[0] - 8LL), 0xFFFFFFFF);
    }
    else
    {
      v5 = *(_DWORD *)(v7[0] - 8LL);
      *(_DWORD *)(v7[0] - 8LL) = v5 - 1;
    }
    if ( v5 <= 0 )
      std::string::_Rep::_M_destroy(v3, &v6);
  }
  return this;
}

