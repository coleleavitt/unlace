__int64 __fastcall sub_7C5E40(__int64 a1, char **a2, __int64 a3)
{
  __int64 result; // rax
  char *v4; // rbx
  char *v5[7]; // [rsp+0h] [rbp-38h] BYREF

  v5[1] = (char *)__readfsqword(0x28u);
  v5[0] = *a2;
  if ( __CFADD__(a3, v5[0]) )
    return 0;
  v4 = &v5[0][a3];
  if ( !(unsigned __int8)sub_7C3380(a1, v5, a3) )
    return 0;
  result = sub_7C5CC0((__int64 *)(a1 + 160), v5, v4 - v5[0]);
  if ( !(_BYTE)result )
    return 0;
  *a2 = v5[0];
  return result;
}

