bool __fastcall sub_8E4A10(__int64 a1, const void **a2, __int64 a3)
{
  bool result; // al
  char *v4; // rbx
  const void *v5; // rdx
  int v6; // [rsp+Ch] [rbp-3Ch] BYREF
  const void *v7[7]; // [rsp+10h] [rbp-38h] BYREF

  v7[1] = (const void *)__readfsqword(0x28u);
  v7[0] = *a2;
  if ( __CFADD__(a3, v7[0]) )
    return 0;
  v4 = (char *)v7[0] + a3;
  if ( !(unsigned __int8)sub_7E1CF0((__int64 *)(a1 + 16), v7, (unsigned __int64)v7[0] + a3) )
    return 0;
  if ( !(unsigned __int8)sub_7E1CF0((__int64 *)(a1 + 40), v7, (unsigned __int64)v4) )
    return 0;
  if ( !sub_7E30F0((_DWORD *)(a1 + 64), (unsigned __int64 *)v7) )
    return 0;
  if ( !(unsigned __int8)sub_7E1CF0((__int64 *)(a1 + 72), v7, (unsigned __int64)v4) )
    return 0;
  result = sub_7E30F0(&v6, (unsigned __int64 *)v7);
  if ( !result )
    return 0;
  v5 = v7[0];
  *(_BYTE *)(a1 + 96) = v6 != 0;
  *a2 = v5;
  return result;
}
