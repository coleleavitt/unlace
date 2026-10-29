void __fastcall sub_9BD840(__int64 a1)
{
  __int64 v2; // r14
  _QWORD *v3; // rax
  __int64 v4; // r13
  _QWORD *v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 v12; // rdi
  __int64 *v13; // rbp
  __int64 *v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // [rsp+0h] [rbp-48h] BYREF
  __int64 *v17; // [rsp+8h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = (_QWORD *)sub_A1A5A0(v2, 24);
  v4 = *v3;
  v5 = v3;
  v9 = sub_2575D20(v2, 24, v6);
  if ( v4 == v9 )
    sub_257D000(&v16, v5, v7, v8);
  else
    sub_2576960(&v16, v5);
  sub_A1A5E0(v2, 24);
  v10 = *(_QWORD *)(a1 + 184);
  v11 = *(_QWORD *)sub_A1A5A0(v10, 8);
  sub_A1A5E0(v10, 8);
  v12 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  if ( v16 == v9 )
    sub_257CF50(v12, &v16);
  else
    sub_25768A0(v12, &v16);
  *(_QWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v11;
  if ( v16 == v9 )
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

