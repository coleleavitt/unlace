void __fastcall sub_9BF630(__int64 a1)
{
  __int64 v2; // r14
  _QWORD *v3; // rax
  __int64 v4; // r13
  _QWORD *v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 *v14; // rbp
  __int64 *v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // [rsp+0h] [rbp-A8h] BYREF
  __int64 *v18; // [rsp+8h] [rbp-A0h]
  _BYTE v19[56]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v20; // [rsp+58h] [rbp-50h]
  int v21; // [rsp+60h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = (_QWORD *)sub_A1A5A0(v2, 24);
  v4 = *v3;
  v5 = v3;
  v9 = sub_2575D20(v2, 24, v6);
  if ( v4 == v9 )
    sub_257D000(&v17, v5, v7, v8);
  else
    sub_2576960(&v17, v5);
  sub_A1A5E0(v2, 24);
  v10 = *(_QWORD *)(a1 + 184);
  v11 = sub_A1A5A0(v10, 72);
  sub_A1C070(v19, v11);
  v20 = *(_QWORD *)(v11 + 56);
  v21 = *(_DWORD *)(v11 + 64);
  sub_A1A5E0(v10, 72);
  v12 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  if ( v17 == v9 )
    sub_257CF50(v12, &v17);
  else
    sub_25768A0(v12, &v17);
  v13 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 72);
  sub_A1BFE0(v13, v19);
  *(_QWORD *)(v13 + 56) = v20;
  *(_DWORD *)(v13 + 64) = v21;
  sub_A1C0C0(v19);
  if ( v17 == v9 )
  {
    v14 = v18;
    if ( v18 )
    {
      v15 = &v18[3 * *(v18 - 1)];
      if ( v18 == v15 )
      {
        v16 = 0;
      }
      else
      {
        do
        {
          v15 -= 3;
          sub_5FF3B0(v15);
        }
        while ( v14 != v15 );
        v16 = 24 * *(v14 - 1);
      }
      operator delete[](v14 - 1, v16 + 8);
    }
  }
  else
  {
    sub_25769A0(&v17);
  }
}

