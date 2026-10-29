__int64 *__fastcall sub_18F680(__int64 a1, __int64 a2)
{
  __int64 *result; // rax
  __int64 *v3; // rbx

  for ( result = *(__int64 **)(a1 + 2672); (__int64 *)(a1 + 2672) != result; result = v3 )
  {
    v3 = (__int64 *)*result;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)result[2] + 24LL))(result[2], a2);
  }
  return result;
}

