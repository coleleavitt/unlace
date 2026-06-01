void __fastcall sub_8DED00(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  _QWORD *v4; // rax
  __int64 v5; // r12
  _QWORD *v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // r13
  __int64 v12; // rax
  unsigned int v13; // edx
  __int64 v14; // rdi
  __int64 v15; // rbx
  unsigned int v16; // eax
  bool v17; // cc
  __int64 *v18; // rbp
  __int64 *v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // [rsp+0h] [rbp-68h] BYREF
  __int64 *v22; // [rsp+8h] [rbp-60h]
  void *v23; // [rsp+20h] [rbp-48h]
  unsigned int v24; // [rsp+28h] [rbp-40h]
  char v25; // [rsp+2Ch] [rbp-3Ch]
  int v26; // [rsp+30h] [rbp-38h]

  *(_QWORD *)(a1 + 800) = a2;
  v3 = *(_QWORD *)(a1 + 568);
  v4 = (_QWORD *)sub_A1A5A0(v3, 24);
  v5 = *v4;
  v6 = v4;
  v10 = sub_2575D20(v3, 24, v7);
  if ( v5 == v10 )
    sub_257D000(&v21, v6, v8, v9);
  else
    sub_2576960(&v21, v6);
  sub_A1A5E0(v3, 24);
  v11 = *(_QWORD *)(a1 + 568);
  v12 = sub_A1A5A0(v11, 24);
  v13 = *(_DWORD *)(v12 + 8);
  *(_DWORD *)(v12 + 8) = 0;
  v24 = v13;
  v23 = *(void **)v12;
  LOBYTE(v13) = *(_BYTE *)(v12 + 12);
  LODWORD(v12) = *(_DWORD *)(v12 + 16);
  v25 = v13;
  v26 = v12;
  sub_A1A5E0(v11, 24);
  v14 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  if ( v21 == v10 )
    sub_257CF50(v14, &v21);
  else
    sub_25768A0(v14, &v21);
  v15 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  v16 = v24;
  *(_DWORD *)(v15 + 8) = v24;
  if ( v16 > 0x40 )
    sub_2585B30(v15);
  else
    *(_QWORD *)v15 = v23;
  v17 = v24 <= 0x40;
  *(_BYTE *)(v15 + 12) = v25;
  *(_DWORD *)(v15 + 16) = v26;
  if ( !v17 && v23 )
    operator delete[](v23);
  if ( v10 == v21 )
  {
    v18 = v22;
    if ( v22 )
    {
      v19 = &v22[3 * *(v22 - 1)];
      if ( v22 == v19 )
      {
        v20 = 0;
      }
      else
      {
        do
        {
          v19 -= 3;
          sub_5FF3B0(v19);
        }
        while ( v18 != v19 );
        v20 = 24 * *(v18 - 1);
      }
      operator delete[](v18 - 1, v20 + 8);
    }
  }
  else
  {
    sub_25769A0(&v21);
  }
}

