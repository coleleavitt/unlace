__int64 __fastcall sub_179FE0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(QT::QCoreApplication::self[2] + 40LL))(
             QT::QCoreApplication::self + 2,
             a1,
             a2);
  if ( (int)result <= 3 )
  {
    v3 = *(_QWORD *)(a2 + 208);
    result = 3;
    if ( !*(_QWORD *)(v3 + 296) && *(_QWORD *)(v3 + 16) != -2 )
      return 7;
  }
  return result;
}
