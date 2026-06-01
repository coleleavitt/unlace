__int64 __fastcall sub_9D6F20(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  _QWORD *v3; // rax
  __int64 v4; // r14
  _QWORD *v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // r15
  __int64 v11; // rax
  unsigned int v12; // r13d
  unsigned int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 *v17; // rbp
  __int64 *v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // [rsp+0h] [rbp-98h] BYREF
  __int64 *v21; // [rsp+8h] [rbp-90h]
  _QWORD v22[3]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v23; // [rsp+38h] [rbp-60h]
  unsigned int v24; // [rsp+40h] [rbp-58h]
  int v25; // [rsp+50h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = (_QWORD *)sub_A1A5A0(v2, 24);
  v4 = *v3;
  v5 = v3;
  v9 = sub_2575D20(v2, 24, v6);
  if ( v4 == v9 )
    sub_257D000(&v20, v5, v7, v8);
  else
    sub_2576960(&v20, v5);
  sub_A1A5E0(v2, 24);
  v10 = *(_QWORD *)(a1 + 184);
  v11 = sub_A1A5A0(v10, 56);
  sub_A1C070(v22, v11);
  sub_A1A5E0(v10, 56);
  if ( !(unsigned __int8)sub_9D4CF0(a1, a2, (__int64)v22, 2)
    || (LOBYTE(v14) = sub_9D52F0(a1, a2, (__int64)v22, 2), v12 = v14, !(_BYTE)v14) )
  {
    v12 = 0;
    goto LABEL_5;
  }
  sub_A1C490(v22);
  sub_A1DB00(v22);
  if ( v25 )
    goto LABEL_14;
  v15 = *(_QWORD *)(v23 + 32);
  if ( *(_DWORD *)(v15 + 16) != v24 && v24 )
    v15 = *(_QWORD *)(v23 + v24 + 32);
  if ( !*(_BYTE *)(v15 + 51) || (v16 = v23 + v22[0] + 72, v22[0] != v24) )
LABEL_14:
    v16 = v23 + v22[0] + 40;
  if ( v9 == v20 )
  {
    sub_257CF50(v16, &v20);
LABEL_5:
    sub_A1C0C0(v22);
    if ( v9 == v20 )
      goto LABEL_17;
LABEL_6:
    sub_25769A0(&v20);
    return v12;
  }
  sub_25768A0(v16, &v20);
  sub_A1C0C0(v22);
  if ( v9 != v20 )
    goto LABEL_6;
LABEL_17:
  v17 = v21;
  if ( v21 )
  {
    v18 = &v21[3 * *(v21 - 1)];
    if ( v21 == v18 )
    {
      v19 = 0;
    }
    else
    {
      do
      {
        v18 -= 3;
        sub_5FF3B0(v18);
      }
      while ( v17 != v18 );
      v19 = 24 * *(v17 - 1);
    }
    operator delete[](v17 - 1, v19 + 8);
  }
  return v12;
}

