__int64 __fastcall sub_4108F0(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // r12d
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  _QWORD v10[7]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *((unsigned __int8 *)a1 + 2321);
  v10[1] = __readfsqword(0x28u);
  if ( (_BYTE)v3 )
    return sub_40F640(a2, (__int64)(a1 + 237), a3, 1, nullptr, nullptr);
  v6 = sub_3BDD60(a1, a3);
  v7 = *a1;
  v10[0] = v6;
  v8 = sub_7BEB80(v10, v7, 68);
  v9 = v8;
  if ( v8 != -1 )
  {
    v3 = 1;
    *(_BYTE *)(a2 + 8) = sub_7BE710(v10, *a1, v8, 4164);
    v9 = sub_3BDE50(a1, v9);
  }
  *(_QWORD *)a2 = v9;
  return v3;
}
