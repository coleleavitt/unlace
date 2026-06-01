__int64 *__fastcall sub_18F7A0(__int64 a1)
{
  __int64 *result; // rax
  __int64 *v2; // rbx

  for ( result = *(__int64 **)(a1 + 2536); (__int64 *)(a1 + 2536) != result; result = v2 )
  {
    v2 = (__int64 *)*result;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)result[2] + 24LL))(result[2]);
  }
  return result;
}

