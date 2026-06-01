__int64 __fastcall sub_12EB810(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 result; // rax

  if ( (a1[6] & 1) == 0 )
    return sub_228DAE0();
  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
