__int64 __fastcall sub_8F9380(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // r12d
  __int64 v5; // r12
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rsi
  _QWORD *v10; // rax
  __int64 v11; // r13
  _QWORD *v12; // r15
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 v15; // rdi
  unsigned int v16; // r14d
  __int64 v17; // rdx
  unsigned int v18; // r12d
  __int64 *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // [rsp+8h] [rbp-110h]
  __int64 v22; // [rsp+10h] [rbp-108h]
  __int64 v23; // [rsp+18h] [rbp-100h]
  __int64 v24[4]; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v25[4]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v26[4]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v27[4]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v28[15]; // [rsp+A0h] [rbp-78h] BYREF

  v3 = 1;
  if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
  {
    v5 = *(_QWORD *)(a1 + 568);
    v7 = *(_QWORD *)(a1 + 792);
    *(_QWORD *)(a1 + 800) = *a3;
    v21 = a1 + 384;
    v22 = v7;
    v8 = sub_A1A5A0(v5, 56);
    sub_A1C070(v28, v8);
    sub_A1A5E0(v5, 56);
    v9 = v7;
    v3 = sub_9E4580(a1 + 384, v7, v28, 3);
    if ( (_BYTE)v3 )
    {
      v10 = (_QWORD *)sub_8F8D80(v28);
      v11 = *v10;
      v12 = v10;
      v14 = sub_2575D20(v28, v9, v13);
      if ( v11 == v14 )
        sub_257CF50(v24, v12);
      else
        sub_25768A0(v24, v12);
      v23 = sub_2575CF0();
      sub_2582F80(v27, 0.0);
      sub_257EDC0(v25, v27, v23);
      sub_25769A0(v27);
      v15 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
      if ( v24[0] == v14 )
        sub_257CF50(v15, v24);
      else
        sub_25768A0(v15, v24);
      v16 = (a2 >> 3) & 7;
      if ( ((a2 >> 3) & 7) == 7 )
        v16 = 1;
      if ( v14 == v24[0] )
        sub_257CEA0(v26, v14, 1);
      else
        sub_25785E0(v26, v24[0], 1);
      if ( v14 == v24[0] )
        sub_257CF50(v27, v24);
      else
        sub_25768A0(v27, v24);
      sub_8DBA70(v25, v27, v17);
      sub_5FF3B0(v27);
      if ( v14 == v25[0] )
        v18 = sub_257DC20(v25, v26, v16);
      else
        v18 = sub_257BF20(v25, v26, v16);
      sub_5FF3B0(v26);
      v19 = (__int64 *)sub_8F8D80(v28);
      sub_8DBB60(v19, v25, v20);
      v3 = sub_9DBAE0(v21, v22, v25, v18, a2);
      sub_5FF3B0(v25);
      sub_5FF3B0(v24);
      sub_A1C0C0(v28);
    }
    else
    {
      sub_A1C0C0(v28);
    }
  }
  return v3;
}

