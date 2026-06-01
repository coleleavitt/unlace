__int64 __fastcall sub_2A9B20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 func; // r12

  if ( !a2 )
    return 0;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, a3);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 128LL))(v4);
  func = 0;
  if ( (~(unsigned __int16)get_flags_ex(v5, 4) & 0x600) == 0 )
    func = get_func(v5);
  if ( v4 )
    qfree(v4, &byte_4);
  return func;
}
