void __fastcall sub_9BD5C0(__int64 a1)
{
  __int64 v1; // r14
  _QWORD *v2; // rax
  __int64 v3; // r13
  _QWORD *v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 *v10; // rax
  bool v11; // bp
  __int64 *v12; // rbp
  __int64 *v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // [rsp+0h] [rbp-48h] BYREF
  __int64 *v16; // [rsp+8h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = (_QWORD *)sub_A1A5A0(v1, 24);
  v3 = *v2;
  v4 = v2;
  v8 = sub_2575D20(v1, 24, v5);
  if ( v3 == v8 )
    sub_257D000(&v15, v4, v6, v7);
  else
    sub_2576960(&v15, v4);
  sub_A1A5E0(v1, 24);
  v9 = *(_QWORD *)(a1 + 184);
  v10 = &v15;
  if ( v15 == v8 )
    v10 = v16;
  v11 = (*((_BYTE *)v10 + 20) & 7) != 3;
  *(_BYTE *)sub_A1A4E0(v9, 8) = v11;
  if ( v8 == v15 )
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

