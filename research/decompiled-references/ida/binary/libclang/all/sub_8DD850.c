void __fastcall sub_8DD850(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  _QWORD *v4; // rax
  __int64 v5; // r12
  __int64 v6; // rdx
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // r14
  char v14; // r13
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 *v17; // rbp
  __int64 *v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // [rsp+8h] [rbp-60h]
  __int64 v21; // [rsp+10h] [rbp-58h] BYREF
  __int64 *v22; // [rsp+18h] [rbp-50h]

  *(_QWORD *)(a1 + 800) = a2;
  v3 = *(_QWORD *)(a1 + 568);
  v4 = (_QWORD *)sub_A1A5A0(v3, 24);
  v5 = *v4;
  v7 = v4;
  v10 = sub_2575D20(v3, 24, v6);
  if ( v5 == v10 )
    sub_257D000(&v21, v7, v8, v9);
  else
    sub_2576960(&v21, v7);
  sub_A1A5E0(v3, 24);
  v20 = *(_QWORD *)(a1 + 568);
  v11 = sub_A1A5A0(v20, 24);
  v12 = *(_QWORD *)v11;
  v13 = *(_QWORD *)(v11 + 8);
  v14 = *(_BYTE *)(v11 + 16);
  sub_A1A5E0(v20, 24);
  v15 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  if ( v21 == v10 )
    sub_257CF50(v15, &v21);
  else
    sub_25768A0(v15, &v21);
  v16 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  *(_QWORD *)v16 = v12;
  *(_QWORD *)(v16 + 8) = v13;
  *(_BYTE *)(v16 + 16) = v14;
  if ( v21 == v10 )
  {
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
  }
  else
  {
    sub_25769A0(&v21);
  }
}

