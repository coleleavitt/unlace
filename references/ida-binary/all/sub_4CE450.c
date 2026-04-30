__int64 __fastcall sub_4CE450(__int64 a1)
{
  unsigned int i; // ebp
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 result; // rax

  for ( i = 0; ; ++i )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 464LL))(a1);
    if ( i >= (unsigned int)result )
      break;
    v2 = i;
    v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 456LL))(a1, v2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 432LL))(v3);
  }
  return result;
}
