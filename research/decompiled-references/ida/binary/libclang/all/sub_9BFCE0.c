void __fastcall sub_9BFCE0(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // r14
  _QWORD *v6; // rax
  __int64 v7; // r13
  __int64 v8; // rdx
  _QWORD *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 *v15; // rbp
  __int64 *v16; // rbx
  __int64 v17; // rsi
  void *v18; // [rsp+0h] [rbp-58h]
  unsigned int v19; // [rsp+8h] [rbp-50h]
  __int64 v20; // [rsp+10h] [rbp-48h] BYREF
  __int64 *v21; // [rsp+18h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 16);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v19 = v4;
  v18 = *(void **)v3;
  sub_A1A5E0(v2, 16);
  v5 = *(_QWORD *)(a1 + 184);
  v6 = (_QWORD *)sub_A1A5A0(v5, 24);
  v7 = *v6;
  v9 = v6;
  v12 = sub_2575D20(v5, 24, v8);
  if ( v7 == v12 )
    sub_257D000(&v20, v9, v10, v11);
  else
    sub_2576960(&v20, v9);
  sub_A1A5E0(v5, 24);
  v13 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 16);
  *(_DWORD *)(v13 + 8) = v19;
  if ( v19 > 0x40 )
    sub_2585B30(v13);
  else
    *(_QWORD *)v13 = v18;
  v14 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  if ( v20 == v12 )
    sub_257CF50(v14, &v20);
  else
    sub_25768A0(v14, &v20);
  if ( v20 == v12 )
  {
    v15 = v21;
    if ( v21 )
    {
      v16 = &v21[3 * *(v21 - 1)];
      if ( v21 == v16 )
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
    v21 = nullptr;
  }
  else
  {
    sub_25769A0(&v20);
  }
  if ( v19 > 0x40 )
  {
    if ( v18 )
      operator delete[](v18);
  }
}

