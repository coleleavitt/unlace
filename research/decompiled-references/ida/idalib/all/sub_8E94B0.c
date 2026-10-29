__int64 __fastcall sub_8E94B0(__int64 a1, char **a2, __int64 a3)
{
  __int64 result; // rax
  char *v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v4[1] = (char *)__readfsqword(0x28u);
  v4[0] = *a2;
  if ( __CFADD__(a3, v4[0]) )
    return 0;
  result = sub_8E9310((__int64 *)(a1 + 16), v4, a3);
  if ( !(_BYTE)result )
    return 0;
  *a2 = v4[0];
  return result;
}
