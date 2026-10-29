__int64 __fastcall sub_7EEB50(__int64 a1, void **a2, __int64 a3, int a4)
{
  __int64 result; // rax
  void *v5[3]; // [rsp+0h] [rbp-18h] BYREF

  v5[1] = (void *)__readfsqword(0x28u);
  v5[0] = *a2;
  if ( __CFADD__(a3, v5[0]) )
    return 0;
  result = sub_7EE9B0((__int64 *)(a1 + 16), v5, a3, a4);
  if ( !(_BYTE)result )
    return 0;
  *a2 = v5[0];
  return result;
}

