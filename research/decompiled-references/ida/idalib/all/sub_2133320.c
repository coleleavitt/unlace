char __fastcall sub_2133320(__int64 a1, unsigned __int64 *a2)
{
  char result; // al
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdx
  const char *v19; // rax
  __m128 *v20; // rsi
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __m128i v23; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+10h] [rbp-98h]
  __int64 v25; // [rsp+18h] [rbp-90h]
  __int16 v26; // [rsp+20h] [rbp-88h]
  __m128i v27[2]; // [rsp+30h] [rbp-78h] BYREF
  __int16 v28; // [rsp+50h] [rbp-58h]
  __m128i v29[2]; // [rsp+60h] [rbp-48h] BYREF
  __int16 v30; // [rsp+80h] [rbp-28h]

  if ( !*(_BYTE *)(a1 + 193) || !(unsigned __int8)sub_2154640(a1, 46) )
    goto LABEL_3;
  if ( **(_DWORD **)(a1 + 48) != 2 )
  {
    v29[0].m128i_i64[0] = (__int64)"unexpected symbol modifier following '@'";
    v30 = 259;
    return sub_21543E0(a1, v29, 0, 0);
  }
  v6 = *(_QWORD *)(a1 + 40);
  v7 = sub_2153C00(a1);
  if ( *(_DWORD *)v7 == 2 )
  {
    v8 = *(_QWORD *)(v7 + 8);
    v9 = *(_QWORD *)(v7 + 16);
  }
  else
  {
    v8 = sub_212C8F0(v7);
  }
  v10 = sub_20FE3B0(v6, v8, v9);
  if ( !BYTE4(v10) )
  {
    v28 = 259;
    v27[0].m128i_i64[0] = (__int64)"'";
    v14 = sub_2153C00(a1);
    if ( *(_DWORD *)v14 == 2 )
    {
      v17 = *(_QWORD *)(v14 + 8);
      v18 = *(_QWORD *)(v14 + 16);
    }
    else
    {
      v17 = sub_212C8F0(v14);
    }
    v19 = "invalid variant '";
    v26 = 1283;
LABEL_14:
    v25 = v18;
    v24 = v17;
    v23.m128i_i64[0] = (__int64)v19;
    sub_A41580(v29, &v23, v27, v17, v15, v16);
    return sub_21543E0(a1, v29, 0, 0);
  }
  v20 = (__m128 *)*a2;
  v21 = sub_212D610(a1, *a2, v10, v11, v12, v13);
  if ( !v21 )
  {
    v27[0].m128i_i64[0] = (__int64)"' (no symbols present)";
    v28 = 259;
    v22 = sub_2153C00(a1);
    if ( *(_DWORD *)v22 == 2 )
    {
      v17 = *(_QWORD *)(v22 + 8);
      v18 = *(_QWORD *)(v22 + 16);
    }
    else
    {
      v17 = sub_212C8F0(v22);
    }
    v26 = 1283;
    v19 = "invalid modifier '";
    goto LABEL_14;
  }
  *a2 = v21;
  sub_2132C70(a1, v20);
LABEL_3:
  result = sub_210E200(*a2, v29);
  if ( result )
  {
    *a2 = sub_210EBA0(v29[0].m128i_i64[0], *(_QWORD **)(a1 + 16), 0, 0, v4, v5);
    return 0;
  }
  return result;
}
