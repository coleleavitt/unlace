__int64 __fastcall sub_13B2FE0(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = 0;
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  return result;
}
