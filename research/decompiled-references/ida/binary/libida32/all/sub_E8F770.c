unsigned __int64 __fastcall sub_E8F770(_QWORD *a1, int a2, int a3, const void *a4, __int64 a5, __int64 a6)
{
  size_t v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  __int64 v14; // rax
  int v15; // [rsp+0h] [rbp-38h]
  int v16; // [rsp+Ch] [rbp-2Ch]

  v9 = 8 * a5;
  v10 = 8 * a5 + 32;
  v11 = a1[294];
  a1[304] += v10;
  v12 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v10 + v12 && v11 )
  {
    a1[294] = v10 + v12;
  }
  else
  {
    v15 = a5;
    v16 = a6;
    v14 = sub_962430((__int64)(a1 + 294), v10, 8 * a5 + 32, 3, a5, a6);
    LODWORD(a6) = v16;
    LODWORD(a5) = v15;
    v12 = v14;
  }
  *(_BYTE *)(v12 + 8) = 42;
  *(_DWORD *)(v12 + 12) = a2;
  *(_DWORD *)(v12 + 16) = a6;
  *(_DWORD *)(v12 + 20) = a3;
  *(_QWORD *)v12 = off_2B21D20;
  *(_BYTE *)(v12 + 25) = 0;
  *(_DWORD *)(v12 + 28) = a5;
  if ( v9 )
    memmove((void *)(v12 + 32), a4, v9);
  return v12;
}

