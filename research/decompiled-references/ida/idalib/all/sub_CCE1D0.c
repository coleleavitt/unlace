__int64 __fastcall sub_CCE1D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v6[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( *(char *)(sub_CE6170(*(_QWORD *)(a1 + 488)) + 1) < 0 )
    return sub_CCC8E0(a1, a2, v2, v3, v4);
  v6[0] = a2 | 4;
  result = sub_CA9CC0(a1, 2, 0, v6);
  if ( (_BYTE)result )
    return sub_CCC8E0(a1, a2, v2, v3, v4);
  return result;
}
