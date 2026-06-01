__int64 __fastcall sub_90E940(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r14
  _QWORD *v5; // rax
  __int64 v6; // r15
  __int64 v7; // rdx
  _QWORD *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // r14
  unsigned int v13; // r12d
  __int64 *v15; // rbp
  __int64 *v16; // rbx
  __int64 v17; // rsi
  __int64 *v18; // rax
  __int64 v19; // rdx
  __int64 v21; // [rsp+10h] [rbp-98h] BYREF
  __int64 *v22; // [rsp+18h] [rbp-90h]
  __int64 v23[15]; // [rsp+30h] [rbp-78h] BYREF

  v4 = *(_QWORD *)(a1 + 184);
  v5 = (_QWORD *)sub_A1A5A0(v4, 24);
  v6 = *v5;
  v8 = v5;
  v11 = sub_2575D20(v4, 24, v7);
  if ( v6 == v11 )
    sub_257D000(&v21, v8, v9, v10);
  else
    sub_2576960(&v21, v8);
  sub_A1A5E0(v4, 24);
  v12 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  if ( (unsigned __int8)sub_9D4FE0(a1, a2, v12, 2) && (unsigned __int8)sub_9D7120(a1, a2, v12, 2) )
  {
    sub_A1C030(v23, *(_QWORD *)(v12 + 24), (unsigned int)(*(_DWORD *)v12 + a3), (unsigned int)(*(_DWORD *)v12 + a3));
    v13 = sub_9E26A0(a1, a2, v23);
    if ( (_BYTE)v13 )
    {
      sub_A1DB00(v23);
      v18 = (__int64 *)sub_8F8D80(v23);
      sub_8DBB60(v18, &v21, v19);
    }
    sub_A1C0C0(v23);
    if ( v11 == v21 )
      goto LABEL_11;
LABEL_5:
    sub_25769A0(&v21);
    return v13;
  }
  v13 = 0;
  if ( v11 != v21 )
    goto LABEL_5;
LABEL_11:
  v15 = v22;
  if ( v22 )
  {
    v16 = &v22[3 * *(v22 - 1)];
    if ( v22 == v16 )
    {
      v17 = 0;
    }
    else
    {
      do
      {
        v16 -= 3;
        sub_5FF3B0(v16);
      }
      while ( v15 != v16 );
      v17 = 24 * *(v15 - 1);
    }
    operator delete[](v15 - 1, v17 + 8);
  }
  return v13;
}

