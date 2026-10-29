__int64 __fastcall sub_48360(__int64 a1, const void **a2, __int64 a3)
{
  bool v3; // cf
  char *v4; // rdx
  __int64 result; // rax
  const void *v6[3]; // [rsp+0h] [rbp-18h] BYREF

  v6[1] = (const void *)__readfsqword(0x28u);
  v6[0] = *a2;
  v3 = __CFADD__(a3, v6[0]);
  v4 = (char *)v6[0] + a3;
  if ( v3 )
    return 0;
  result = sub_480B0((__int64 *)(a1 + 16), v6, (unsigned __int64)v4);
  if ( !(_BYTE)result )
    return 0;
  *a2 = v6[0];
  return result;
}

