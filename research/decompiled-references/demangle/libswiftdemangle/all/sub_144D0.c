unsigned __int64 __fastcall sub_144D0(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  unsigned __int64 v5; // rax
  __int64 v6; // r13
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // [rsp+8h] [rbp-50h]
  __int64 v13; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+28h] [rbp-30h]
  unsigned __int64 v17; // [rsp+38h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  v1 = a1[1];
  v15 = 0;
  v16 = 0;
  v2 = (v1 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  a1[1] = v2;
  if ( !v2 || (v3 = v2 + 32, v2 + 32 > a1[2]) )
  {
    v8 = 2LL * a1[4];
    if ( v8 < 0x28 )
      v8 = 40;
    a1[4] = v8;
    v9 = v8 + 8;
    v10 = malloc(v8 + 8);
    v11 = a1[3];
    a1[3] = v10;
    *v10 = v11;
    v2 = ((unsigned __int64)v10 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    a1[2] = (char *)v10 + v9;
    v3 = v2 + 32;
  }
  a1[1] = v3;
  v15 = v2;
  HIDWORD(v16) = 4;
  if ( !(unsigned __int8)sub_F1A0((__int64)a1, (__int64)&v15, (unsigned __int64 *)&v13) )
    return 0;
  v4 = sub_E100((__int64)a1);
  if ( !v4 )
    return 0;
  v5 = sub_140B0(a1, v4, (__int64)&v15, 0);
  v6 = v5;
  if ( !v5 )
    return 0;
  if ( v13 )
    sub_C080(v5, v13, a1);
  result = sub_CD20(a1, 221, v6);
  v14 = result;
  if ( result )
  {
    v12 = result;
    sub_11EC0((__int64)(a1 + 13), (__int64 *)&v14, a1);
    return v12;
  }
  return result;
}
