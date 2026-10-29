void __fastcall sub_9BF330(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r13
  _QWORD *v6; // rax
  __int64 v7; // r12
  __int64 v8; // rdx
  _QWORD *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 *v15; // rbp
  __int64 *v16; // rbx
  __int64 v17; // rsi
  char v18; // [rsp+7h] [rbp-61h]
  __int64 v19; // [rsp+10h] [rbp-58h] BYREF
  __int64 *v20; // [rsp+18h] [rbp-50h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 24);
  v3 = *(_QWORD *)v2;
  v4 = *(_QWORD *)(v2 + 8);
  v18 = *(_BYTE *)(v2 + 16);
  sub_A1A5E0(v1, 24);
  v5 = *(_QWORD *)(a1 + 184);
  v6 = (_QWORD *)sub_A1A5A0(v5, 24);
  v7 = *v6;
  v9 = v6;
  v12 = sub_2575D20(v5, 24, v8);
  if ( v7 == v12 )
    sub_257D000(&v19, v9, v10, v11);
  else
    sub_2576960(&v19, v9);
  sub_A1A5E0(v5, 24);
  v13 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  *(_QWORD *)v13 = v3;
  *(_QWORD *)(v13 + 8) = v4;
  *(_BYTE *)(v13 + 16) = v18;
  v14 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  if ( v19 == v12 )
    sub_257CF50(v14, &v19);
  else
    sub_25768A0(v14, &v19);
  if ( v19 == v12 )
  {
    v15 = v20;
    if ( v20 )
    {
      v16 = &v20[3 * *(v20 - 1)];
      if ( v20 == v16 )
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
  }
  else
  {
    sub_25769A0(&v19);
  }
}

