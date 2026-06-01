__int64 __fastcall sub_9504D0(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // r15d
  __int64 v5; // r14
  _QWORD *v7; // rax
  __int64 v8; // r13
  _QWORD *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r12
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rsi
  int v18; // edx
  unsigned int v19; // r15d
  __int64 v20; // rdi
  __int64 v21; // [rsp+0h] [rbp-D8h]
  __int64 v22; // [rsp+8h] [rbp-D0h]
  __int64 v23; // [rsp+18h] [rbp-C0h]
  unsigned __int8 v24; // [rsp+18h] [rbp-C0h]
  __int64 v25[4]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v26[4]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v27[4]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v28[11]; // [rsp+80h] [rbp-58h] BYREF

  v3 = 1;
  if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
  {
    v5 = *(_QWORD *)(a1 + 568);
    *(_QWORD *)(a1 + 800) = *a3;
    v21 = a1 + 384;
    v22 = *(_QWORD *)(a1 + 792);
    v7 = (_QWORD *)sub_A1A5A0(v5, 24);
    v8 = *v7;
    v9 = v7;
    v13 = sub_2575D20(v5, 24, v10);
    if ( v8 == v13 )
      sub_257D000(v27, v9, v11, v12);
    else
      sub_2576960(v27, v9);
    sub_A1A5E0(v5, 24);
    v14 = *(_QWORD *)(a1 + 568);
    v17 = (_QWORD *)sub_A1A5A0(v14, 24);
    if ( v13 == *v17 )
      sub_257D000(v26, v17, v15, v16);
    else
      sub_2576960(v26, v17);
    sub_A1A5E0(v14, 24);
    v3 = sub_9501C0(v21, v22, v26, v27);
    if ( (_BYTE)v3 )
    {
      v23 = sub_2575CF0();
      sub_2582F80(v28, 0.0);
      sub_257EDC0(v25, v28, v23);
      sub_25769A0(v28);
      v18 = (a2 >> 3) & 7;
      if ( ((a2 >> 3) & 7) == 7 )
        LOBYTE(v18) = 1;
      v24 = v18;
      if ( v13 == v26[0] )
        sub_257CF50(v28, v26);
      else
        sub_25768A0(v28, v26);
      sub_8DBA70(v25, v28, v24);
      sub_5FF3B0(v28);
      if ( v13 == v25[0] )
        v19 = sub_2581790(v25, v27, v24);
      else
        v19 = sub_257C2B0(v25, v27, v24);
      v20 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
      if ( v13 == v25[0] )
        sub_257CF50(v20, v25);
      else
        sub_25768A0(v20, v25);
      v3 = sub_9DBAE0(v21, v22, v25, v19, a2);
      sub_5FF3B0(v25);
      sub_5FF3B0(v26);
      sub_5FF3B0(v27);
    }
    else
    {
      sub_5FF3B0(v26);
      sub_5FF3B0(v27);
    }
  }
  return v3;
}

