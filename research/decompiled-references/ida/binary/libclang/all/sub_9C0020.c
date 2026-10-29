void __fastcall sub_9C0020(__int64 a1)
{
  __int64 v2; // r14
  _QWORD *v3; // rax
  __int64 v4; // r12
  __int64 v5; // rdx
  _QWORD *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // r13
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 *v15; // rbp
  __int64 *v16; // rbx
  __int64 v17; // rsi
  void *v18; // [rsp+0h] [rbp-68h]
  unsigned int v19; // [rsp+8h] [rbp-60h]
  char v20; // [rsp+Ch] [rbp-5Ch]
  int v21; // [rsp+10h] [rbp-58h]
  __int64 v22; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v23; // [rsp+28h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = (_QWORD *)sub_A1A5A0(v2, 24);
  v4 = *v3;
  v6 = v3;
  v9 = sub_2575D20(v2, 24, v5);
  if ( v4 == v9 )
    sub_257D000(&v22, v6, v7, v8);
  else
    sub_2576960(&v22, v6);
  sub_A1A5E0(v2, 24);
  v10 = *(_QWORD *)(a1 + 184);
  v11 = sub_A1A5A0(v10, 24);
  v12 = *(_DWORD *)(v11 + 8);
  *(_DWORD *)(v11 + 8) = 0;
  v19 = v12;
  v18 = *(void **)v11;
  v20 = *(_BYTE *)(v11 + 12);
  v21 = *(_DWORD *)(v11 + 16);
  sub_A1A5E0(v10, 24);
  v13 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  if ( v22 == v9 )
    sub_257CF50(v13, &v22);
  else
    sub_25768A0(v13, &v22);
  v14 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  *(_DWORD *)(v14 + 8) = v19;
  if ( v19 > 0x40 )
    sub_2585B30(v14);
  else
    *(_QWORD *)v14 = v18;
  *(_BYTE *)(v14 + 12) = v20;
  *(_DWORD *)(v14 + 16) = v21;
  if ( v19 > 0x40 && v18 )
    operator delete[](v18);
  if ( v9 == v22 )
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
  }
  else
  {
    sub_25769A0(&v22);
  }
}

