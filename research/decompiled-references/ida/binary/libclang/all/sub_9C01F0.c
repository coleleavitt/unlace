void __fastcall sub_9C01F0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned int v3; // edx
  __int64 v4; // r14
  _QWORD *v5; // rax
  __int64 v6; // r13
  _QWORD *v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r12
  __int64 v12; // rbp
  unsigned int v13; // eax
  __int64 v14; // rdi
  __int64 *v15; // rbp
  __int64 *v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // [rsp+0h] [rbp-68h] BYREF
  __int64 *v19; // [rsp+8h] [rbp-60h]
  void *v20; // [rsp+20h] [rbp-48h]
  unsigned int v21; // [rsp+28h] [rbp-40h]
  char v22; // [rsp+2Ch] [rbp-3Ch]
  int v23; // [rsp+30h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 24);
  v3 = *(_DWORD *)(v2 + 8);
  *(_DWORD *)(v2 + 8) = 0;
  v21 = v3;
  v20 = *(void **)v2;
  LOBYTE(v3) = *(_BYTE *)(v2 + 12);
  LODWORD(v2) = *(_DWORD *)(v2 + 16);
  v22 = v3;
  v23 = v2;
  sub_A1A5E0(v1, 24);
  v4 = *(_QWORD *)(a1 + 184);
  v5 = (_QWORD *)sub_A1A5A0(v4, 24);
  v6 = *v5;
  v7 = v5;
  v11 = sub_2575D20(v4, 24, v8);
  if ( v6 == v11 )
    sub_257D000(&v18, v7, v9, v10);
  else
    sub_2576960(&v18, v7);
  sub_A1A5E0(v4, 24);
  v12 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  v13 = v21;
  *(_DWORD *)(v12 + 8) = v21;
  if ( v13 > 0x40 )
    sub_2585B30(v12);
  else
    *(_QWORD *)v12 = v20;
  *(_BYTE *)(v12 + 12) = v22;
  *(_DWORD *)(v12 + 16) = v23;
  v14 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  if ( v18 == v11 )
    sub_257CF50(v14, &v18);
  else
    sub_25768A0(v14, &v18);
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
  if ( v21 > 0x40 )
  {
    if ( v20 )
      operator delete[](v20);
  }
}

