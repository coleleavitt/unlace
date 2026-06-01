unsigned __int64 __fastcall sub_1E666F0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 result; // rax
  int v6; // ebx
  unsigned __int64 v7; // rbx
  __int64 v8; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v9[184]; // [rsp+10h] [rbp-B8h] BYREF

  result = 0;
  v8 = a2;
  if ( a3 )
  {
    v6 = a3;
    if ( (*(_BYTE *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1) == 0 )
    {
      sub_168B9F0((__int64)v9, (__int64 *)(a1 + 8), a4, 0xEA5u, 0);
      sub_1605D30((__int64)v9, &v8);
      sub_15F7200(v9);
    }
    v7 = sub_1E666D0(a1, v8, v6, 0);
    if ( (v7 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      sub_168B9F0(
        (__int64)v9,
        (__int64 *)(a1 + 8),
        a4,
        (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 2LL) & 2) == 0 ? 5645 : 6756,
        0);
      sub_15F7200(v9);
    }
    return v7;
  }
  return result;
}
