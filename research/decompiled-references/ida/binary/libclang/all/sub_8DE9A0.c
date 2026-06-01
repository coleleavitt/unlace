void __fastcall sub_8DE9A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // r14
  _QWORD *v7; // rax
  __int64 v8; // r13
  __int64 v9; // rdx
  _QWORD *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 *v16; // rbp
  __int64 *v17; // rbx
  __int64 v18; // rsi
  void *v19; // [rsp+0h] [rbp-58h]
  unsigned int v20; // [rsp+8h] [rbp-50h]
  __int64 v21; // [rsp+10h] [rbp-48h] BYREF
  __int64 *v22; // [rsp+18h] [rbp-40h]

  *(_QWORD *)(a1 + 800) = a2;
  v3 = *(_QWORD *)(a1 + 568);
  v4 = sub_A1A5A0(v3, 16);
  v5 = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  v20 = v5;
  v19 = *(void **)v4;
  sub_A1A5E0(v3, 16);
  v6 = *(_QWORD *)(a1 + 568);
  v7 = (_QWORD *)sub_A1A5A0(v6, 24);
  v8 = *v7;
  v10 = v7;
  v13 = sub_2575D20(v6, 24, v9);
  if ( v8 == v13 )
    sub_257D000(&v21, v10, v11, v12);
  else
    sub_2576960(&v21, v10);
  sub_A1A5E0(v6, 24);
  v14 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 16);
  *(_DWORD *)(v14 + 8) = v20;
  if ( v20 > 0x40 )
    sub_2585B30(v14);
  else
    *(_QWORD *)v14 = v19;
  v15 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  if ( v21 == v13 )
    sub_257CF50(v15, &v21);
  else
    sub_25768A0(v15, &v21);
  if ( v21 == v13 )
  {
    v16 = v22;
    if ( v22 )
    {
      v17 = &v22[3 * *(v22 - 1)];
      if ( v22 == v17 )
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
    v22 = nullptr;
  }
  else
  {
    sub_25769A0(&v21);
  }
  if ( v20 > 0x40 )
  {
    if ( v19 )
      operator delete[](v19);
  }
}

