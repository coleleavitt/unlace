__int64 __fastcall sub_80CED0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rax
  bool v4; // cf
  unsigned __int64 v5; // rdx
  unsigned __int64 v7; // r12
  __int16 v8; // ax
  _QWORD v9[5]; // [rsp+0h] [rbp-28h] BYREF

  v9[1] = __readfsqword(0x28u);
  v3 = *a2;
  v4 = __CFADD__(*a2, a3);
  v5 = *a2 + a3;
  if ( v4 )
    return 0;
  v7 = v3 + 6;
  if ( v5 < v3 + 6 )
    return 0;
  *(_DWORD *)(a1 + 9) = *(_DWORD *)v3;
  v8 = *(_WORD *)(v3 + 4);
  v9[0] = v7;
  *(_WORD *)(a1 + 13) = v8;
  *(_QWORD *)(a1 + 16) = unpack_dq(v9);
  if ( v7 >= v9[0] )
    return 0;
  *a2 = v9[0];
  return 1;
}
