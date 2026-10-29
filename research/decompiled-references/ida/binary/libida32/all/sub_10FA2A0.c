__int64 __fastcall sub_10FA2A0(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  __int64 v3; // rdi

  if ( (a1[5] & 1) != 0 )
  {
    v3 = *a1;
    if ( v3 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  else
  {
    v1 = a1[1];
    if ( v1 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return result;
}

