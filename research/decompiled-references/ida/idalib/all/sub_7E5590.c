__int64 __fastcall sub_7E5590(__int64 a1, const void **a2, __int64 a3)
{
  __int64 result; // rax
  char *v4; // rbx
  const void *v5[7]; // [rsp+0h] [rbp-38h] BYREF

  v5[1] = (const void *)__readfsqword(0x28u);
  v5[0] = *a2;
  if ( __CFADD__(a3, v5[0]) )
    return 0;
  v4 = (char *)v5[0] + a3;
  if ( !(unsigned __int8)sub_7E1CF0((__int64 *)a1, v5, (unsigned __int64)v5[0] + a3) )
    return 0;
  if ( !sub_7E30F0((_DWORD *)(a1 + 24), (unsigned __int64 *)v5) )
    return 0;
  result = sub_7E1980((__int64 *)(a1 + 32), (size_t *)v5, (size_t)v4);
  if ( !(_BYTE)result )
    return 0;
  *a2 = v5[0];
  return result;
}
