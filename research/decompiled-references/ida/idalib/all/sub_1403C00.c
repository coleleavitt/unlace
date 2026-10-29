__int64 __fastcall sub_1403C00(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax
  __int64 result; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // [rsp+8h] [rbp-10h] BYREF

  v5 = (__int64)a2;
  v2 = sub_1403A00(a1, a2);
  if ( v2 != *(_QWORD *)(a1 + 368) + 32LL * *(unsigned int *)(a1 + 384) )
    return *(_QWORD *)(v2 + 8);
  v4 = sub_13FFDB0(a1, v5);
  result = 0;
  if ( (v4 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    return *(_QWORD *)(sub_13F4300((__int64 *)(a1 + 368), (unsigned __int64 *)&v5) + 8);
  return result;
}
