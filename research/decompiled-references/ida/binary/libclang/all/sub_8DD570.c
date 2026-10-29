void __fastcall sub_8DD570(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  char v3; // r14
  __int64 v4; // r13
  _QWORD *v5; // rax
  __int64 v6; // r15
  _QWORD *v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rdi
  __int64 *v13; // rbp
  __int64 *v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // [rsp+0h] [rbp-58h] BYREF
  __int64 *v17; // [rsp+8h] [rbp-50h]

  *(_QWORD *)(a1 + 800) = a2;
  v2 = *(_QWORD *)(a1 + 568);
  v3 = *(_BYTE *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v4 = *(_QWORD *)(a1 + 568);
  v5 = (_QWORD *)sub_A1A5A0(v4, 24);
  v6 = *v5;
  v7 = v5;
  v11 = sub_2575D20(v4, 24, v8);
  if ( v6 == v11 )
    sub_257D000(&v16, v7, v9, v10);
  else
    sub_2576960(&v16, v7);
  sub_A1A5E0(v4, 24);
  *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v3;
  v12 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  if ( v16 == v11 )
    sub_257CF50(v12, &v16);
  else
    sub_25768A0(v12, &v16);
  if ( v16 == v11 )
  {
    v13 = v17;
    if ( v17 )
    {
      v14 = &v17[3 * *(v17 - 1)];
      if ( v17 == v14 )
      {
        v15 = 0;
      }
      else
      {
        do
        {
          v14 -= 3;
          sub_5FF3B0(v14);
        }
        while ( v13 != v14 );
        v15 = 24 * *(v13 - 1);
      }
      operator delete[](v13 - 1, v15 + 8);
    }
  }
  else
  {
    sub_25769A0(&v16);
  }
}

