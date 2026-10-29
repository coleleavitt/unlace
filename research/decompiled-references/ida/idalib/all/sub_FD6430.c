__int64 __fastcall sub_FD6430(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 80) = 0;
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  return result;
}
