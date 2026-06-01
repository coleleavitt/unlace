void __fastcall sub_8DE2D0(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  _QWORD *v4; // rax
  __int64 v5; // r13
  _QWORD *v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 *v15; // rbp
  __int64 *v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // [rsp+0h] [rbp-A8h] BYREF
  __int64 *v19; // [rsp+8h] [rbp-A0h]
  _BYTE v20[56]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v21; // [rsp+58h] [rbp-50h]
  int v22; // [rsp+60h] [rbp-48h]

  *(_QWORD *)(a1 + 800) = a2;
  v3 = *(_QWORD *)(a1 + 568);
  v4 = (_QWORD *)sub_A1A5A0(v3, 24);
  v5 = *v4;
  v6 = v4;
  v10 = sub_2575D20(v3, 24, v7);
  if ( v5 == v10 )
    sub_257D000(&v18, v6, v8, v9);
  else
    sub_2576960(&v18, v6);
  sub_A1A5E0(v3, 24);
  v11 = *(_QWORD *)(a1 + 568);
  v12 = sub_A1A5A0(v11, 72);
  sub_A1C070(v20, v12);
  v21 = *(_QWORD *)(v12 + 56);
  v22 = *(_DWORD *)(v12 + 64);
  sub_A1A5E0(v11, 72);
  v13 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  if ( v18 == v10 )
    sub_257CF50(v13, &v18);
  else
    sub_25768A0(v13, &v18);
  v14 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 72);
  sub_A1BFE0(v14, v20);
  *(_QWORD *)(v14 + 56) = v21;
  *(_DWORD *)(v14 + 64) = v22;
  sub_A1C0C0(v20);
  if ( v18 == v10 )
  {
    v15 = v19;
    if ( v19 )
    {
      v16 = &v19[3 * *(v19 - 1)];
      if ( v19 == v16 )
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
    sub_25769A0(&v18);
  }
}

