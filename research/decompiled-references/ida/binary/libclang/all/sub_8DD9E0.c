void __fastcall sub_8DD9E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // r13
  _QWORD *v7; // rax
  __int64 v8; // r12
  __int64 v9; // rdx
  _QWORD *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 *v16; // rbp
  __int64 *v17; // rbx
  __int64 v18; // rsi
  char v19; // [rsp+7h] [rbp-61h]
  __int64 v20; // [rsp+10h] [rbp-58h] BYREF
  __int64 *v21; // [rsp+18h] [rbp-50h]

  *(_QWORD *)(a1 + 800) = a2;
  v2 = *(_QWORD *)(a1 + 568);
  v3 = sub_A1A5A0(v2, 24);
  v4 = *(_QWORD *)v3;
  v5 = *(_QWORD *)(v3 + 8);
  v19 = *(_BYTE *)(v3 + 16);
  sub_A1A5E0(v2, 24);
  v6 = *(_QWORD *)(a1 + 568);
  v7 = (_QWORD *)sub_A1A5A0(v6, 24);
  v8 = *v7;
  v10 = v7;
  v13 = sub_2575D20(v6, 24, v9);
  if ( v8 == v13 )
    sub_257D000(&v20, v10, v11, v12);
  else
    sub_2576960(&v20, v10);
  sub_A1A5E0(v6, 24);
  v14 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  *(_QWORD *)v14 = v4;
  *(_QWORD *)(v14 + 8) = v5;
  *(_BYTE *)(v14 + 16) = v19;
  v15 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  if ( v20 == v13 )
    sub_257CF50(v15, &v20);
  else
    sub_25768A0(v15, &v20);
  if ( v20 == v13 )
  {
    v16 = v21;
    if ( v21 )
    {
      v17 = &v21[3 * *(v21 - 1)];
      if ( v21 == v17 )
      {
        v18 = 0;
      }
      else
      {
        do
        {
          v17 -= 3;
          sub_5FF3B0(v17);
        }
        while ( v16 != v17 );
        v18 = 24 * *(v16 - 1);
      }
      operator delete[](v16 - 1, v18 + 8);
    }
  }
  else
  {
    sub_25769A0(&v20);
  }
}

