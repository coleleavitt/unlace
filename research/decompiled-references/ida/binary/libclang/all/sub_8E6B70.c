__int64 __fastcall sub_8E6B70(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 v8; // rbp
  _QWORD *v9; // r14
  __int64 v10; // rbp
  __int64 v11; // r14
  __int64 v12; // r12
  _QWORD *v13; // rsi
  __int64 v14; // r14
  __int64 v15; // r12
  _QWORD *v16; // rsi
  __int64 v17; // r14
  __int64 v18; // r12
  _QWORD *v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rbp
  __int64 v26; // rax
  __int64 *v27; // rdi
  __int64 v29; // [rsp+20h] [rbp-238h]
  __int64 v30; // [rsp+20h] [rbp-238h]
  __int64 v31; // [rsp+30h] [rbp-228h]
  __int64 v32[4]; // [rsp+40h] [rbp-218h] BYREF
  __int64 v33[4]; // [rsp+60h] [rbp-1F8h] BYREF
  __int64 v34[4]; // [rsp+80h] [rbp-1D8h] BYREF
  __int64 v35[4]; // [rsp+A0h] [rbp-1B8h] BYREF
  __int64 v36[4]; // [rsp+C0h] [rbp-198h] BYREF
  __int64 v37[4]; // [rsp+E0h] [rbp-178h] BYREF
  __int64 v38[4]; // [rsp+100h] [rbp-158h] BYREF
  __int64 v39[4]; // [rsp+120h] [rbp-138h] BYREF
  __int64 v40[4]; // [rsp+140h] [rbp-118h] BYREF
  _BYTE v41[64]; // [rsp+160h] [rbp-F8h] BYREF
  _BYTE v42[64]; // [rsp+1A0h] [rbp-B8h] BYREF
  __int64 v43[3]; // [rsp+1E0h] [rbp-78h] BYREF
  __int64 v44; // [rsp+1F8h] [rbp-60h]
  unsigned int v45; // [rsp+200h] [rbp-58h]
  int v46; // [rsp+210h] [rbp-48h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 56);
  sub_A1C070(v42, v2);
  sub_A1A5E0(v1, 56);
  v3 = *(_QWORD *)(a1 + 184);
  v4 = sub_A1A5A0(v3, 56);
  sub_A1C070(v41, v4);
  sub_A1A5E0(v3, 56);
  v5 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  sub_8E6410((__int64)v43, (__int64)v41);
  v7 = v44;
  v8 = v43[0];
  if ( v46 || !*(_BYTE *)(sub_8E5480((__int64)v43) + 51) || (v9 = (_QWORD *)(v7 + v8 + 72), v8 != v45) )
    v9 = (_QWORD *)(v7 + v8 + 40);
  v10 = sub_2575D20(v43, v41, v6);
  if ( *v9 == v10 )
    sub_257CF50(v32, v9);
  else
    sub_25768A0(v32, v9);
  sub_A1C0C0(v43);
  sub_8E6310((__int64)v43, (__int64)v41);
  v11 = v44;
  v12 = v43[0];
  if ( v46 || !*(_BYTE *)(sub_8E5480((__int64)v43) + 51) || (v13 = (_QWORD *)(v11 + v45 + 72), v45 != v12) )
    v13 = (_QWORD *)(v11 + v12 + 40);
  if ( *v13 == v10 )
    sub_257CF50(v33, v13);
  else
    sub_25768A0(v33, v13);
  sub_A1C0C0(v43);
  sub_8E6410((__int64)v43, (__int64)v42);
  v14 = v44;
  v15 = v43[0];
  if ( v46 || !*(_BYTE *)(sub_8E5480((__int64)v43) + 51) || (v16 = (_QWORD *)(v14 + v45 + 72), v45 != v15) )
    v16 = (_QWORD *)(v14 + v15 + 40);
  if ( *v16 == v10 )
    sub_257CF50(v34, v16);
  else
    sub_25768A0(v34, v16);
  sub_A1C0C0(v43);
  sub_8E6310((__int64)v43, (__int64)v42);
  v17 = v44;
  v18 = v43[0];
  if ( v46 || !*(_BYTE *)(sub_8E5480((__int64)v43) + 51) || (v19 = (_QWORD *)(v17 + v18 + 72), v18 != v45) )
    v19 = (_QWORD *)(v17 + v18 + 40);
  if ( *v19 == v10 )
    sub_257CF50(v35, v19);
  else
    sub_25768A0(v35, v19);
  sub_A1C0C0(v43);
  if ( v32[0] == v10 )
    sub_257CDE0(v36, v10);
  else
    sub_2579610(v36);
  if ( v32[0] == v10 )
    sub_257CDE0(v37, v10);
  else
    sub_2579610(v37);
  if ( v35[0] == v10 )
    sub_257CF50(v43, v35);
  else
    sub_25768A0(v43, v35);
  if ( v34[0] == v10 )
    sub_257CF50(v40, v34);
  else
    sub_25768A0(v40, v34);
  if ( v33[0] == v10 )
    sub_257CF50(v39, v33);
  else
    sub_25768A0(v39, v33);
  if ( v32[0] == v10 )
    sub_257CF50(v38, v32);
  else
    sub_25768A0(v38, v32);
  sub_8464C0(v38, v39, v40, v43, v36, (__int64)v37);
  sub_5FF3B0(v38);
  sub_5FF3B0(v39);
  sub_5FF3B0(v40);
  sub_5FF3B0(v43);
  if ( v36[0] == v10 )
    sub_257CF50(v40, v36);
  else
    sub_25768A0(v40, v36);
  sub_8E6410((__int64)v43, v5);
  v20 = v44;
  v21 = v43[0];
  if ( v46
    || (v31 = v44, v29 = v43[0], v22 = sub_8E5480((__int64)v43), v21 = v29, v20 = v31, !*(_BYTE *)(v22 + 51))
    || (v23 = (__int64 *)(v31 + v29 + 72), v29 != v45) )
  {
    v23 = (__int64 *)(v20 + v21 + 40);
  }
  sub_8DBA70(v23, v40, v21);
  sub_A1C0C0(v43);
  sub_5FF3B0(v40);
  sub_8E6410((__int64)v43, v5);
  sub_A1DB00(v43);
  sub_A1C0C0(v43);
  if ( v37[0] == v10 )
    sub_257CF50(v40, v37);
  else
    sub_25768A0(v40, v37);
  sub_8E6310((__int64)v43, v5);
  v24 = v44;
  v25 = v43[0];
  if ( v46
    || (v30 = v44, v26 = sub_8E5480((__int64)v43), v24 = v30, !*(_BYTE *)(v26 + 51))
    || (v27 = (__int64 *)(v30 + v25 + 72), v25 != v45) )
  {
    v27 = (__int64 *)(v24 + v25 + 40);
  }
  sub_8DBA70(v27, v40, v24);
  sub_A1C0C0(v43);
  sub_5FF3B0(v40);
  sub_8E6310((__int64)v43, v5);
  sub_A1DB00(v43);
  sub_A1C0C0(v43);
  sub_A1DB00(v5);
  sub_5FF3B0(v37);
  sub_5FF3B0(v36);
  sub_5FF3B0(v35);
  sub_5FF3B0(v34);
  sub_5FF3B0(v33);
  sub_5FF3B0(v32);
  sub_A1C0C0(v41);
  return sub_A1C0C0(v42);
}

