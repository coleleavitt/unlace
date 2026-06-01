__int64 __fastcall sub_8EA840(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // r12d
  __int64 v5; // r13
  __int64 *v7; // r15
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rsi
  __int64 v17; // r15
  unsigned int v18; // r15d
  __int64 v19; // rdx
  unsigned int v20; // r14d
  __int64 v21; // rdi
  __int64 v22; // [rsp+10h] [rbp-C8h]
  __int64 v23; // [rsp+18h] [rbp-C0h]
  __int64 v24[4]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v25[4]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v26[4]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v27[11]; // [rsp+80h] [rbp-58h] BYREF

  v3 = 1;
  if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
  {
    v5 = *(_QWORD *)(a1 + 568);
    *(_QWORD *)(a1 + 800) = *a3;
    v22 = a1 + 384;
    v23 = *(_QWORD *)(a1 + 792);
    v7 = (__int64 *)sub_A1A5A0(v5, 24);
    v8 = *v7;
    v12 = sub_2575D20(v5, 24, v9);
    if ( v8 == v12 )
      sub_257D000(v26, v7, v10, v11);
    else
      sub_2576960(v26, v7);
    sub_A1A5E0(v5, 24);
    v13 = *(_QWORD *)(a1 + 568);
    v16 = (_QWORD *)sub_A1A5A0(v13, 24);
    if ( v12 == *v16 )
      sub_257D000(v25, v16, v14, v15);
    else
      sub_2576960(v25, v16);
    sub_A1A5E0(v13, 24);
    v17 = sub_2575CF0();
    sub_2582F80(v27, 0.0);
    sub_257EDC0(v24, v27, v17);
    sub_25769A0(v27);
    v18 = (a2 >> 3) & 7;
    if ( ((a2 >> 3) & 7) == 7 )
      v18 = 1;
    if ( v12 == v25[0] )
      sub_257CF50(v27, v25);
    else
      sub_25768A0(v27, v25);
    sub_8DBA70(v24, v27, v19);
    sub_5FF3B0(v27);
    if ( v12 == v24[0] )
      v20 = sub_257DC20(v24, v26, v18);
    else
      v20 = sub_257BF20(v24, v26, v18);
    v21 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
    if ( v12 == v24[0] )
      sub_257CF50(v21, v24);
    else
      sub_25768A0(v21, v24);
    v3 = sub_9DBAE0(v22, v23, v24, v20, a2);
    sub_5FF3B0(v24);
    sub_5FF3B0(v25);
    sub_5FF3B0(v26);
  }
  return v3;
}

