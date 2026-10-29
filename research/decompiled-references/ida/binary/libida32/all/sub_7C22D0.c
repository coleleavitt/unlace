bool __fastcall sub_7C22D0(__int64 a1, const void **a2, __int64 a3)
{
  bool result; // al
  const void *v4[7]; // [rsp+0h] [rbp-38h] BYREF

  v4[1] = (const void *)__readfsqword(0x28u);
  v4[0] = *a2;
  if ( __CFADD__(v4[0], a3) )
    return 0;
  if ( !(unsigned __int8)sub_7BE9B0((__int64 *)a1, v4, (unsigned __int64)v4[0] + a3) )
    return 0;
  result = sub_7BFDB0((_DWORD *)(a1 + 24), (unsigned __int64 *)v4);
  if ( !result )
    return 0;
  *a2 = v4[0];
  return result;
}

