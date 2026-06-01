__int64 __fastcall sub_213A950(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  __int64 result; // rax
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // rax
  const char *v7; // rax
  __int64 v8; // rax
  unsigned __int8 v9; // [rsp+17h] [rbp-71h] BYREF
  __int64 v10; // [rsp+18h] [rbp-70h] BYREF
  __m128 v11; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v12[4]; // [rsp+30h] [rbp-58h] BYREF
  __int16 v13; // [rsp+50h] [rbp-38h]

  v1 = sub_2153C00(a1);
  v2 = sub_2124B50(v1);
  if ( (unsigned __int8)sub_2129090(a1, &v10) || (unsigned __int8)sub_212C760(a1, &v11, (__int64)".cv_loc", 7) )
    return 1;
  LODWORD(v4) = 0;
  LODWORD(v5) = 0;
  if ( **(_DWORD **)(a1 + 48) == 4 )
  {
    v6 = sub_2153C00(a1);
    if ( *(_DWORD *)(v6 + 32) <= 0x40u )
      v4 = *(_QWORD *)(v6 + 24);
    else
      v4 = **(_QWORD **)(v6 + 24);
    v7 = "line number less than zero in '.cv_loc' directive";
    if ( v4 >= 0 )
    {
      sub_2132C70(a1, &v11);
      if ( **(_DWORD **)(a1 + 48) != 4 )
      {
        LODWORD(v5) = 0;
        goto LABEL_6;
      }
      v8 = sub_2153C00(a1);
      if ( *(_DWORD *)(v8 + 32) <= 0x40u )
        v5 = *(_QWORD *)(v8 + 24);
      else
        v5 = **(_QWORD **)(v8 + 24);
      if ( v5 >= 0 )
      {
        sub_2132C70(a1, &v11);
        goto LABEL_6;
      }
      v7 = "column position less than zero in '.cv_loc' directive";
    }
    v12[0] = v7;
    v13 = 259;
    return sub_21543E0(a1, v12, 0, 0);
  }
LABEL_6:
  v12[1] = &v9;
  v9 = 0;
  v11.m128_u64[1] = 0;
  v12[0] = a1;
  v12[2] = &v11.m128_u64[1];
  result = sub_2154570(a1, sub_213B990, v12, 0);
  if ( !(_BYTE)result )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, bool, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 24) + 728LL))(
      *(_QWORD *)(a1 + 24),
      (unsigned int)v10,
      v11.m128_u32[0],
      (unsigned int)v4,
      (unsigned int)v5,
      v9,
      v11.m128_u64[1] != 0,
      0,
      0,
      v2);
    return 0;
  }
  return result;
}
