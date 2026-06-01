__int64 __fastcall sub_7C5DB0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 result; // rax
  char *v5[7]; // [rsp+0h] [rbp-38h] BYREF

  v5[1] = (char *)__readfsqword(0x28u);
  v3 = a3 + *a2;
  if ( __CFADD__(a3, *a2) )
    return 0;
  v5[0] = *(char **)a2;
  if ( !(unsigned __int8)sub_7C3380(a1 + 16, v5, a3) )
    return 0;
  result = sub_7C5CC0((__int64 *)(a1 + 176), v5, v3 - (unsigned __int64)v5[0]);
  if ( !(_BYTE)result )
    return 0;
  *a2 = v5[0];
  return result;
}

