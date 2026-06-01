void __fastcall sub_8DEEE0(__int64 a1, __int64 a2)
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
  __int64 v12; // r12
  __int64 v13; // rbp
  __int64 v14; // rdi
  __int64 *v15; // rbp
  __int64 *v16; // rbx
  __int64 v17; // rsi
  void *v18; // [rsp+0h] [rbp-68h]
  unsigned int v19; // [rsp+8h] [rbp-60h]
  char v20; // [rsp+Ch] [rbp-5Ch]
  int v21; // [rsp+10h] [rbp-58h]
  __int64 v22; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v23; // [rsp+28h] [rbp-40h]

  *(_QWORD *)(a1 + 800) = a2;
  v2 = *(_QWORD *)(a1 + 568);
  v3 = sub_A1A5A0(v2, 24);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v19 = v4;
  v18 = *(void **)v3;
  v20 = *(_BYTE *)(v3 + 12);
  v21 = *(_DWORD *)(v3 + 16);
  sub_A1A5E0(v2, 24);
  v5 = *(_QWORD *)(a1 + 568);
  v6 = (_QWORD *)sub_A1A5A0(v5, 24);
  v7 = *v6;
  v9 = v6;
  v12 = sub_2575D20(v5, 24, v8);
  if ( v7 == v12 )
    sub_257D000(&v22, v9, v10, v11);
  else
    sub_2576960(&v22, v9);
  sub_A1A5E0(v5, 24);
  v13 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  *(_DWORD *)(v13 + 8) = v19;
  if ( v19 > 0x40 )
    sub_2585B30(v13);
  else
    *(_QWORD *)v13 = v18;
  *(_BYTE *)(v13 + 12) = v20;
  *(_DWORD *)(v13 + 16) = v21;
  v14 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  if ( v22 == v12 )
    sub_257CF50(v14, &v22);
  else
    sub_25768A0(v14, &v22);
  if ( v22 == v12 )
  {
    v15 = v23;
    if ( v23 )
    {
      v16 = &v23[3 * *(v23 - 1)];
      if ( v23 == v16 )
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
    v23 = nullptr;
  }
  else
  {
    sub_25769A0(&v22);
  }
  if ( v19 > 0x40 )
  {
    if ( v18 )
      operator delete[](v18);
  }
}

