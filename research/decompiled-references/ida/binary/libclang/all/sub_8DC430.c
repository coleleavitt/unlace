void __fastcall sub_8DC430(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  _QWORD *v4; // rax
  __int64 v5; // r13
  _QWORD *v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // r14
  int v12; // r12d
  __int64 v13; // rdi
  __int64 *v14; // rbp
  __int64 *v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // [rsp+0h] [rbp-48h] BYREF
  __int64 *v18; // [rsp+8h] [rbp-40h]

  *(_QWORD *)(a1 + 800) = a2;
  v3 = *(_QWORD *)(a1 + 568);
  v4 = (_QWORD *)sub_A1A5A0(v3, 24);
  v5 = *v4;
  v6 = v4;
  v10 = sub_2575D20(v3, 24, v7);
  if ( v5 == v10 )
    sub_257D000(&v17, v6, v8, v9);
  else
    sub_2576960(&v17, v6);
  sub_A1A5E0(v3, 24);
  v11 = *(_QWORD *)(a1 + 568);
  v12 = *(_DWORD *)sub_A1A5A0(v11, 8);
  sub_A1A5E0(v11, 8);
  v13 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  if ( v17 == v10 )
    sub_257CF50(v13, &v17);
  else
    sub_25768A0(v13, &v17);
  *(_DWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v12;
  if ( v17 == v10 )
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

