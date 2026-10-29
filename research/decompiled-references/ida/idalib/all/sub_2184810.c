__int64 __fastcall sub_2184810(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( (a1[23] & 1) == 0 )
    return (*(__int64 (**)(void))result)();
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(*a1);
  return result;
}
