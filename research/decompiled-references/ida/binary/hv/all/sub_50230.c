bool __fastcall sub_50230(__int64 a1, const void **a2, __int64 a3)
{
  bool result; // al
  char *v4; // rbx
  char *v5; // rdx
  const void *v6[7]; // [rsp+0h] [rbp-38h] BYREF

  v6[1] = (const void *)__readfsqword(0x28u);
  v6[0] = *a2;
  if ( __CFADD__(a3, v6[0]) )
    return 0;
  v4 = (char *)v6[0] + a3;
  if ( !(unsigned __int8)sub_480B0((__int64 *)a1, v6, (unsigned __int64)v6[0] + a3) )
    return 0;
  if ( !(unsigned __int8)sub_480B0((__int64 *)(a1 + 24), v6, (unsigned __int64)v4) )
    return 0;
  if ( !(unsigned __int8)sub_480B0((__int64 *)(a1 + 48), v6, (unsigned __int64)v4) )
    return 0;
  if ( !sub_4A460((_DWORD *)(a1 + 72), (unsigned __int64 *)v6, (__int64)v4) )
    return 0;
  if ( !sub_4A460((_DWORD *)(a1 + 76), (unsigned __int64 *)v6, (__int64)v4) )
    return 0;
  result = sub_4A460((_DWORD *)(a1 + 80), (unsigned __int64 *)v6, (__int64)v4);
  if ( !result )
    return 0;
  if ( v6[0] >= v4 )
  {
    *(_BYTE *)(a1 + 84) = 0;
    return 0;
  }
  v5 = (char *)v6[0] + 1;
  *(_BYTE *)(a1 + 84) = *(_BYTE *)v6[0];
  *a2 = v5;
  return result;
}

