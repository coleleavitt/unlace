__int64 __fastcall sub_8DE480(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rbp
  __int64 v4; // r15
  _QWORD *v5; // rax
  __int64 v6; // r14
  _QWORD *v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // r12
  __int64 v13; // rdi
  __int64 *v15; // rbp
  __int64 *v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // [rsp+0h] [rbp-A8h] BYREF
  __int64 *v19; // [rsp+8h] [rbp-A0h]
  _BYTE v20[56]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v21; // [rsp+58h] [rbp-50h]
  int v22; // [rsp+60h] [rbp-48h]

  *(_QWORD *)(a1 + 800) = a2;
  v2 = *(_QWORD *)(a1 + 568);
  v3 = sub_A1A5A0(v2, 72);
  sub_A1C070(v20, v3);
  v21 = *(_QWORD *)(v3 + 56);
  v22 = *(_DWORD *)(v3 + 64);
  sub_A1A5E0(v2, 72);
  v4 = *(_QWORD *)(a1 + 568);
  v5 = (_QWORD *)sub_A1A5A0(v4, 24);
  v6 = *v5;
  v7 = v5;
  v11 = sub_2575D20(v4, 24, v8);
  if ( v6 == v11 )
    sub_257D000(&v18, v7, v9, v10);
  else
    sub_2576960(&v18, v7);
  sub_A1A5E0(v4, 24);
  v12 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 72);
  sub_A1BFE0(v12, v20);
  *(_QWORD *)(v12 + 56) = v21;
  *(_DWORD *)(v12 + 64) = v22;
  v13 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  if ( v18 == v11 )
    sub_257CF50(v13, &v18);
  else
    sub_25768A0(v13, &v18);
  if ( v18 == v11 )
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
    v19 = nullptr;
  }
  else
  {
    sub_25769A0(&v18);
  }
  return sub_A1C0C0(v20);
}

