bool __fastcall sub_7E8330(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  bool result; // al
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v6[7]; // [rsp+10h] [rbp-38h] BYREF

  v6[1] = __readfsqword(0x28u);
  v5 = *a2;
  if ( __CFADD__(a3, v5) )
    return 0;
  if ( !(unsigned __int8)sub_7E8250((__int64 *)a1, &v5, a3) )
    return 0;
  v4 = v5;
  v6[0] = v5;
  *(_QWORD *)(a1 + 64) = unpack_dq(v6);
  v5 = v6[0];
  if ( v4 >= v6[0] )
    return 0;
  if ( !sub_7E30F0((_DWORD *)(a1 + 72), &v5) )
    return 0;
  result = sub_7E30F0((_DWORD *)(a1 + 76), &v5);
  if ( !result )
    return 0;
  *a2 = v5;
  return result;
}
