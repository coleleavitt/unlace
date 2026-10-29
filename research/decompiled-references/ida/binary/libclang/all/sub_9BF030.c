void __fastcall sub_9BF030(__int64 a1)
{
  __int64 v2; // r14
  _QWORD *v3; // rax
  __int64 v4; // r12
  __int64 v5; // rdx
  _QWORD *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // r14
  char v13; // r13
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 *v16; // rbp
  __int64 *v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // [rsp+8h] [rbp-60h]
  __int64 v20; // [rsp+10h] [rbp-58h] BYREF
  __int64 *v21; // [rsp+18h] [rbp-50h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = (_QWORD *)sub_A1A5A0(v2, 24);
  v4 = *v3;
  v6 = v3;
  v9 = sub_2575D20(v2, 24, v5);
  if ( v4 == v9 )
    sub_257D000(&v20, v6, v7, v8);
  else
    sub_2576960(&v20, v6);
  sub_A1A5E0(v2, 24);
  v19 = *(_QWORD *)(a1 + 184);
  v10 = sub_A1A5A0(v19, 24);
  v11 = *(_QWORD *)v10;
  v12 = *(_QWORD *)(v10 + 8);
  v13 = *(_BYTE *)(v10 + 16);
  sub_A1A5E0(v19, 24);
  v14 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  if ( v20 == v9 )
    sub_257CF50(v14, &v20);
  else
    sub_25768A0(v14, &v20);
  v15 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  *(_QWORD *)v15 = v11;
  *(_QWORD *)(v15 + 8) = v12;
  *(_BYTE *)(v15 + 16) = v13;
  if ( v20 == v9 )
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

