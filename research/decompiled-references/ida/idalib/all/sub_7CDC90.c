__int64 __fastcall sub_7CDC90(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbp
  bool v3; // zf
  const char *v4; // rax

  LODWORD(result) = (*(__int64 (__fastcall **)(_QWORD))(qword_2CD47A0 + 312))(*(_QWORD *)(a1 + 88));
  v2 = (int)result;
  if ( (int)result > 0 )
    return (int)result;
  v3 = (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(qword_2CD47A0 + 232))(
         *(_QWORD *)(a1 + 88),
         (unsigned int)result) == 5;
  v4 = "irs";
  if ( !v3 )
    v4 = "openssl";
  *(_QWORD *)(a1 + 64) = v4;
  return v2;
}
