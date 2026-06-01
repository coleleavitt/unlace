__int64 __fastcall sub_B04490(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // r14
  void *v5; // r12
  __int64 v6; // rsi
  void *v7; // rbp
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r14
  void *v11; // r12
  __int64 v12; // rsi
  void *v13; // rbp
  __int64 v14; // rdi

  sub_182F200(*(_QWORD *)(a1 + 96), a1 + 104);
  *(_DWORD *)(a1 + 120) = 0;
  sub_182F200(*(_QWORD *)(a1 + 128), a1 + 136);
  v2 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 208) = 0;
  if ( v2 )
  {
    v3 = *(unsigned int *)(v2 - 4);
    if ( (_DWORD)v3 )
    {
      v4 = v2 + 40 * v3;
      do
      {
        v5 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v2 + 8);
        v6 = v2 + 24;
        v2 += 40;
        sub_182CBA0(v5, v6);
      }
      while ( v2 != v4 );
      v2 = *(_QWORD *)(a1 + 16);
    }
    *(_DWORD *)(v2 - 4) = 0;
  }
  v7 = qword_1C7F2C0;
  sub_182CEF0(qword_1C7F2C0, a1 + 24);
  sub_182CBA0(v7, a1 + 40);
  v8 = *(_QWORD *)(a1 + 56);
  *(_BYTE *)(a1 + 44) &= ~1u;
  *(_DWORD *)(a1 + 40) = 1;
  if ( v8 )
  {
    v9 = *(unsigned int *)(v8 - 4);
    if ( (_DWORD)v9 )
    {
      v10 = v8 + 40 * v9;
      do
      {
        v11 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v8 + 8);
        v12 = v8 + 24;
        v8 += 40;
        sub_182CBA0(v11, v12);
      }
      while ( v10 != v8 );
      v8 = *(_QWORD *)(a1 + 56);
    }
    *(_DWORD *)(v8 - 4) = 0;
  }
  v13 = qword_1C7F2C0;
  sub_182CEF0(qword_1C7F2C0, a1 + 64);
  sub_182CBA0(v13, a1 + 80);
  *(_BYTE *)(a1 + 84) &= ~1u;
  v14 = *(_QWORD *)(a1 + 160);
  *(_DWORD *)(a1 + 80) = 1;
  *(_DWORD *)(a1 + 152) = 0;
  sub_182F200(v14, a1 + 168);
  return sub_182F200(*(_QWORD *)(a1 + 184), a1 + 192);
}

