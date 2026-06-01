__int64 __fastcall sub_CBB5A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r15
  __int64 (__fastcall *v10)(__int64); // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 (__fastcall *v16)(__int64); // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rsi
  __int64 v20; // r8
  unsigned __int64 v21; // r12
  __int64 result; // rax
  __int64 i; // rbx
  __int64 v24; // r14
  __int64 v25; // r14
  __int64 j; // rbx
  __int64 v27; // [rsp+8h] [rbp-50h]
  unsigned __int64 v28; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v29[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(sub_B68470(a2 + 72) + 16);
  if ( (v3 & 4) != 0 )
    v4 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v4 = v3 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v4 )
    v4 -= 64LL;
  v9 = sub_C90D90(a1, v4);
  if ( !v9 )
    return 0;
  if ( *(char *)(a2 + 82) >= 0 )
  {
    v10 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL);
    if ( v10 == sub_6CEBD0 ? sub_B5BA10((_QWORD *)a2, v29, v5, v6, v7, v8) : v10(a2) )
    {
      v16 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL);
      v19 = v16 == sub_6CEBD0 ? sub_B5BA10((_QWORD *)a2, v29, v12, v13, v14, v15) : v16(a2);
      if ( !(unsigned __int8)sub_CB8E80(a1, v19, v17, v18, v20) )
        return 0;
    }
  }
  v21 = a2 & 0xFFFFFFFFFFFFFFFBLL;
  v29[0] = v21;
  if ( !(unsigned __int8)sub_CE4700(a1, v29) )
    return 0;
  v29[0] = v21;
  if ( !(unsigned __int8)sub_CDC440(a1, v29) )
    return 0;
  if ( !*(_BYTE *)(v9 + 648) )
  {
    v27 = *(_QWORD *)(v9 + 280);
    for ( i = v27 + 24LL * *(unsigned int *)(v9 + 288); v27 != i; i -= 24 )
    {
      v24 = *(_QWORD *)(i - 8);
      if ( *(_BYTE *)(v24 + 60) )
      {
        if ( !*(_QWORD *)(v24 + 40) )
          continue;
      }
      else if ( !*(_QWORD *)(v24 + 32) && *(_BYTE *)(v24 + 52) )
      {
        continue;
      }
      v29[0] = 0;
      if ( !(unsigned __int8)sub_CE2540(a1, *(unsigned int *)(i - 16), v29) )
        return 0;
      if ( !(unsigned __int8)sub_C92050(a1, v24, 0) )
        return 0;
      v29[0] = 0;
      if ( !(unsigned __int8)sub_CE3FA0(a1, v29) )
        return 0;
    }
  }
  v25 = *(_QWORD *)(v9 + 8);
  for ( j = v25 + 32LL * *(unsigned int *)(v9 + 16); v25 != j; j -= 32 )
  {
    if ( !*(_BYTE *)(*(_QWORD *)(j - 8) + 649LL) )
    {
      v29[0] = 0;
      if ( !(unsigned __int8)sub_CE2180(a1, *(unsigned int *)(j - 24), v29) )
        return 0;
      if ( !(unsigned __int8)sub_C91FB0(a1, *(__int64 **)(j - 8), 0) )
        return 0;
      v29[0] = 0;
      if ( !(unsigned __int8)sub_CE3FA0(a1, v29) )
        return 0;
    }
  }
  v28 = v21;
  result = sub_CE3FA0(a1, &v28);
  if ( (_BYTE)result )
  {
    v29[0] = v21;
    return sub_CDB9D0(a1, v29);
  }
  return result;
}

