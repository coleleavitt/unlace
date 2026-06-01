__int64 __fastcall sub_CE3470(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  int v4; // r8d
  int v5; // r9d
  unsigned int v6; // r12d
  __int64 v7; // rcx
  char v9; // r14
  int v10; // [rsp+0h] [rbp-78h]
  unsigned int v11; // [rsp+8h] [rbp-70h]
  int v12[26]; // [rsp+10h] [rbp-68h] BYREF

  v2 = sub_CE6180(*(_QWORD *)(a1 + 1264), a2[1]);
  if ( !BYTE4(v2) )
    return (unsigned int)sub_CDF950(a1, a2[2]);
  v6 = HIDWORD(v2);
  v7 = *a2 >> 16;
  if ( (v7 & 0x1E0) == 0 )
    return (unsigned int)sub_CDF950(a1, a2[2]);
  if ( !*(_BYTE *)(a1 + 1360) )
  {
    sub_BF7B00((__int64)v12, (__int64)a2, v3, v7, v4, v5, v10, v2, v12[0]);
    v9 = sub_CD9290(a1, (__int64)v12, v11, (__int64)a2);
    if ( v12[0] > 1u )
      sub_A4F8E0(v12);
    if ( !v9 )
      return (unsigned int)sub_CDF950(a1, a2[2]);
  }
  return v6;
}
