__int64 __fastcall sub_213B2F0(__int64 a1, int a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  unsigned __int8 v6; // al
  __int64 result; // rax
  __m128 v8; // [rsp+0h] [rbp-88h] BYREF
  const char *v9; // [rsp+10h] [rbp-78h] BYREF
  __int16 v10; // [rsp+30h] [rbp-58h]
  const char *v11; // [rsp+40h] [rbp-48h] BYREF
  __int16 v12; // [rsp+60h] [rbp-28h]

  v12 = 259;
  v8 = 0u;
  v11 = "expected identifier";
  v6 = sub_213B1B0(a1, &v8, 259, a4, a5, a6);
  if ( (unsigned __int8)sub_2154470(a1, v6, &v11) )
    return 1;
  v9 = "expected comma";
  v10 = 259;
  if ( (unsigned __int8)sub_2154510(a1, 26, &v9) )
    return 1;
  result = sub_2130260(a1, (void *)v8.m128_u64[0], v8.m128_u64[1], a2);
  if ( (_BYTE)result )
    return 1;
  return result;
}
