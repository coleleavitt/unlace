unsigned __int64 __fastcall sub_EB2700(_QWORD *a1, int a2, int a3, char a4, const void *a5, __int64 a6, int a7)
{
  size_t v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  void *v15; // rcx
  __int64 v17; // rax
  const void *v18; // [rsp+8h] [rbp-40h]

  v11 = 8 * a6;
  v12 = 8 * a6 + 48;
  v13 = a1[294];
  a1[304] += v12;
  v14 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v12 + v14 && v13 )
  {
    a1[294] = v12 + v14;
  }
  else
  {
    v18 = a5;
    v17 = sub_986170((__int64)(a1 + 294), v12, 8 * a6 + 48, 3, (__int64)a5, a6);
    a5 = v18;
    v14 = v17;
  }
  *(_BYTE *)(v14 + 8) = 41;
  v15 = (void *)(v14 + 48);
  *(_DWORD *)(v14 + 12) = a2;
  *(_DWORD *)(v14 + 16) = a7;
  *(_DWORD *)(v14 + 20) = a3;
  *(_QWORD *)(v14 + 24) = 0;
  *(_QWORD *)(v14 + 32) = 0;
  *(_QWORD *)v14 = off_2B4C060;
  *(_BYTE *)(v14 + 40) = a4;
  if ( v11 )
    v15 = memmove((void *)(v14 + 48), a5, v11);
  *(_QWORD *)(v14 + 24) = v15;
  *(_QWORD *)(v14 + 32) = a6;
  return v14;
}
