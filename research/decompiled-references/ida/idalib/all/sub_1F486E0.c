__int64 __fastcall sub_1F486E0(__int64 *a1, unsigned __int64 *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  __int64 v9; // [rsp+8h] [rbp-30h]

  sub_1F48240((__int64)&v8, a1, a2);
  result = v9;
  if ( a1[5] == v9 )
  {
    v4 = a1[2];
    v5 = a1[3];
    v6 = *(unsigned int *)(v4 + 24);
    *(_DWORD *)(v4 + 24) = v6 + 1;
    v7 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v6);
    if ( v7 )
      v7 = a1[4] - v7;
    return sub_1EE06E0(*a1, v5, v5 + 2704, v7, a2, 0);
  }
  return result;
}
