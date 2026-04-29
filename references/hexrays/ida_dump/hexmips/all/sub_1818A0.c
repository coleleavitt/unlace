__int64 __fastcall sub_1818A0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  bool v3; // al
  bool v4; // [rsp+Fh] [rbp-51h]
  bool v5; // [rsp+Fh] [rbp-51h]
  __int64 v6[2]; // [rsp+10h] [rbp-50h] BYREF
  __int64 v7; // [rsp+20h] [rbp-40h]
  __int128 v8; // [rsp+28h] [rbp-38h]
  unsigned __int64 v9; // [rsp+38h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a2 + 64) != 5 )
    return 1;
  if ( *(_DWORD *)a2 == 1 )
    return 1;
  result = sub_1EB130(**(_QWORD **)(a2 + 72), *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8LL), *(unsigned int *)(a2 + 68));
  if ( (_BYTE)result )
    return 1;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 64) + 784LL) )
  {
    v6[0] = 0;
    v6[1] = 0;
    v7 = 0;
    v8 = 0;
    sub_123DE0(a1, v6, a2 + 64, 0);
    v3 = sub_1782E0(
           *(__int64 **)(*(_QWORD *)(a1 + 64) + 784LL),
           (__int64)v6,
           *(_DWORD *)(a1 + 72),
           0xFFFFFFFF,
           *(_QWORD *)(a2 + 8),
           0,
           2u,
           0);
    if ( v7 )
    {
      v4 = v3;
      *(_QWORD *)&v8 = 0;
      qfree(v7);
      v3 = v4;
    }
    v5 = v3;
    qfree(v6[0]);
    return v5;
  }
  return result;
}
