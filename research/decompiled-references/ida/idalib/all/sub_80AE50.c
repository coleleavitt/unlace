__int64 __fastcall sub_80AE50(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  bool v4; // cf
  unsigned __int64 v5; // rdx
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  _QWORD v9[7]; // [rsp+0h] [rbp-38h] BYREF

  v9[1] = __readfsqword(0x28u);
  v3 = *a2;
  v4 = __CFADD__(*a2, a3);
  v5 = *a2 + a3;
  if ( v4 )
    return 0;
  v9[0] = *a2;
  v7 = v5;
  *(_QWORD *)(a1 + 16) = unpack_dq(v9);
  v8 = v9[0];
  if ( v3 >= v9[0] )
    return 0;
  if ( v9[0] >= v7 )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return 0;
  }
  *(_BYTE *)(a1 + 24) = *(_BYTE *)v9[0];
  *a2 = v8 + 1;
  return 1;
}
