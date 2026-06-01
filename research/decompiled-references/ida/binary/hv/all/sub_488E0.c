__int64 __fastcall sub_488E0(__int64 a1, const void **a2, __int64 a3)
{
  __int64 result; // rax
  char *v4; // rbx
  char *v5; // rdx
  const void *v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v6[1] = (const void *)__readfsqword(0x28u);
  v6[0] = *a2;
  if ( __CFADD__(a3, v6[0]) )
    return 0;
  v4 = (char *)v6[0] + a3;
  result = sub_480B0((__int64 *)(a1 + 16), v6, (unsigned __int64)v6[0] + a3);
  if ( !(_BYTE)result )
    return 0;
  if ( v6[0] >= v4 )
  {
    *(_BYTE *)(a1 + 40) = 0;
    return 0;
  }
  v5 = (char *)v6[0] + 1;
  *(_BYTE *)(a1 + 40) = *(_BYTE *)v6[0];
  *a2 = v5;
  return result;
}

