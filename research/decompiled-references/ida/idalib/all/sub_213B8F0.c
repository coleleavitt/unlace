__int64 __fastcall sub_213B8F0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 result; // rax
  __m128 v8; // [rsp+10h] [rbp-58h] BYREF
  const char *v9; // [rsp+20h] [rbp-48h] BYREF
  __int16 v10; // [rsp+40h] [rbp-28h]

  v6 = *(_QWORD *)(a1 + 184);
  v8 = 0u;
  if ( (unsigned __int8)sub_213B1B0(a1, &v8, a3, a4, a5, a6) )
  {
    v9 = "expected identifier";
    v10 = 259;
    return sub_21543E0(a1, &v9, 0, 0);
  }
  else
  {
    result = sub_21544B0(a1);
    if ( !(_BYTE)result )
    {
      (*(void (__fastcall **)(_QWORD, __int64, unsigned __int64, unsigned __int64))(**(_QWORD **)(a1 + 24) + 696LL))(
        *(_QWORD *)(a1 + 24),
        v6,
        v8.m128_u64[0],
        v8.m128_u64[1]);
      return 0;
    }
  }
  return result;
}
