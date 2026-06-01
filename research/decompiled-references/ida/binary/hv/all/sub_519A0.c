__int64 __fastcall sub_519A0(__int64 a1, char **a2, __int64 a3)
{
  char *v3; // r13
  __int64 result; // rax
  char *v5; // [rsp+8h] [rbp-40h] BYREF
  char *v6[7]; // [rsp+10h] [rbp-38h] BYREF

  v6[1] = (char *)__readfsqword(0x28u);
  v5 = *a2;
  v3 = &v5[a3];
  if ( __CFADD__(a3, v5) )
    return 0;
  v6[0] = v5;
  if ( !sub_513E0(a1, v6, a3) )
    return 0;
  if ( !(unsigned __int8)sub_480B0((__int64 *)(a1 + 96), (const void **)v6, (unsigned __int64)v3) )
    return 0;
  v5 = v6[0];
  result = sub_51880((__int64 *)(a1 + 120), &v5, v3 - v6[0]);
  if ( !(_BYTE)result )
    return 0;
  *a2 = v5;
  return result;
}

