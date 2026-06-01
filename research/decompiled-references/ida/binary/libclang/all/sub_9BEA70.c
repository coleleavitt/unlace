void __fastcall sub_9BEA70(__int64 a1)
{
  __int64 v1; // rbp
  __int16 v2; // r14
  __int64 v3; // r13
  _QWORD *v4; // rax
  __int64 v5; // r15
  _QWORD *v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 *v12; // rbp
  __int64 *v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // [rsp+0h] [rbp-58h] BYREF
  __int64 *v16; // [rsp+8h] [rbp-50h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = *(_WORD *)sub_A1A5A0(v1, 8);
  sub_A1A5E0(v1, 8);
  v3 = *(_QWORD *)(a1 + 184);
  v4 = (_QWORD *)sub_A1A5A0(v3, 24);
  v5 = *v4;
  v6 = v4;
  v10 = sub_2575D20(v3, 24, v7);
  if ( v5 == v10 )
    sub_257D000(&v15, v6, v8, v9);
  else
    sub_2576960(&v15, v6);
  sub_A1A5E0(v3, 24);
  *(_WORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v2;
  v11 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  if ( v15 == v10 )
    sub_257CF50(v11, &v15);
  else
    sub_25768A0(v11, &v15);
  if ( v15 == v10 )
  {
    v12 = v16;
    if ( v16 )
    {
      v13 = &v16[3 * *(v16 - 1)];
      if ( v16 == v13 )
      {
        v14 = 0;
      }
      else
      {
        do
        {
          v13 -= 3;
          sub_5FF3B0(v13);
        }
        while ( v12 != v13 );
        v14 = 24 * *(v12 - 1);
      }
      operator delete[](v12 - 1, v14 + 8);
    }
  }
  else
  {
    sub_25769A0(&v15);
  }
}

