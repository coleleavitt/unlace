void __fastcall sub_8DE620(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  _QWORD *v4; // rax
  __int64 v5; // r12
  __int64 v6; // rdx
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // r13
  __int64 v12; // rax
  unsigned int v13; // edx
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
  v4 = (_QWORD *)sub_A1A5A0(v3, 24);
  v5 = *v4;
  v7 = v4;
  v10 = sub_2575D20(v3, 24, v6);
  if ( v5 == v10 )
    sub_257D000(&v21, v7, v8, v9);
  else
    sub_2576960(&v21, v7);
  sub_A1A5E0(v3, 24);
  v11 = *(_QWORD *)(a1 + 568);
  v12 = sub_A1A5A0(v11, 16);
  v13 = *(_DWORD *)(v12 + 8);
  *(_DWORD *)(v12 + 8) = 0;
  v20 = v13;
  v19 = *(void **)v12;
  sub_A1A5E0(v11, 16);
  v14 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  if ( v21 == v10 )
    sub_257CF50(v14, &v21);
  else
    sub_25768A0(v14, &v21);
  v15 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 16);
  *(_DWORD *)(v15 + 8) = v20;
  if ( v20 > 0x40 )
    sub_2585B30(v15);
  else
    *(_QWORD *)v15 = v19;
  if ( v20 > 0x40 && v19 )
    operator delete[](v19);
  if ( v10 == v21 )
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
  }
  else
  {
    sub_25769A0(&v21);
  }
}

