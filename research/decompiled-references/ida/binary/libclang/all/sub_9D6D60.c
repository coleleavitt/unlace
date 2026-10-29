__int64 __fastcall sub_9D6D60(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  _QWORD *v3; // rax
  __int64 v4; // r14
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r12
  __int64 v10; // rbx
  unsigned int v11; // r13d
  unsigned int v13; // eax
  __int64 v14; // r15
  __int64 v15; // rbp
  __int64 v16; // rdi
  __int64 *v17; // rbp
  __int64 *v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // [rsp+0h] [rbp-58h] BYREF
  __int64 *v22; // [rsp+8h] [rbp-50h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = (_QWORD *)sub_A1A5A0(v2, 24);
  v4 = *v3;
  v5 = v3;
  v9 = sub_2575D20(v2, 24, v6);
  if ( v4 == v9 )
    sub_257D000(&v21, v5, v7, v8);
  else
    sub_2576960(&v21, v5);
  sub_A1A5E0(v2, 24);
  v10 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  if ( !(unsigned __int8)sub_9D4CF0(a1, a2, v10, 2)
    || (LOBYTE(v13) = sub_9D52F0(a1, a2, v10, 2), v11 = v13, !(_BYTE)v13) )
  {
    v11 = 0;
    goto LABEL_5;
  }
  sub_A1C490(v10);
  sub_A1DB00(v10);
  v14 = *(_QWORD *)(v10 + 24);
  v15 = *(_QWORD *)v10;
  if ( *(_DWORD *)(v10 + 48)
    || !*(_BYTE *)(sub_8E5480(v10) + 51)
    || (v20 = *(unsigned int *)(v10 + 32), v16 = v14 + v20 + 72, v20 != v15) )
  {
    v16 = v14 + v15 + 40;
  }
  if ( v9 == v21 )
  {
    sub_257CF50(v16, &v21);
LABEL_5:
    if ( v9 == v21 )
      goto LABEL_14;
LABEL_6:
    sub_25769A0(&v21);
    return v11;
  }
  sub_25768A0(v16, &v21);
  if ( v9 != v21 )
    goto LABEL_6;
LABEL_14:
  v17 = v22;
  if ( v22 )
  {
    v18 = &v22[3 * *(v22 - 1)];
    if ( v22 == v18 )
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
  return v11;
}

