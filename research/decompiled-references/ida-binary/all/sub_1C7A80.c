__int64 sub_1C7A80()
{
  __int64 result; // rax

  if ( qword_8CAF08 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_8CAF08 + 32LL))(qword_8CAF08);
  qword_8CAF08 = 0;
  if ( qword_8CAF18 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_8CAF18 + 32LL))(qword_8CAF18);
  qword_8CAF18 = 0;
  return result;
}
