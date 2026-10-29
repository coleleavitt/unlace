__int64 __fastcall sub_18953F0(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rdi

  result = *a1;
  v2 = *(_QWORD *)(*a1 + 552);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 264LL))(v2);
  return result;
}
