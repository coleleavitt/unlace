unsigned __int64 __fastcall sub_E90100(_QWORD *a1, int a2, int a3, const void *a4, __int64 a5, __int64 a6)
{
  size_t v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  void *v14; // rcx
  __int64 v16; // rax
  int v17; // [rsp+Ch] [rbp-3Ch]

  v10 = 8 * a5;
  v11 = 8 * a5 + 40;
  v12 = a1[294];
  a1[304] += v11;
  v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v11 + v13 && v12 )
  {
    a1[294] = v11 + v13;
  }
  else
  {
    v17 = a6;
    v16 = sub_962430((__int64)(a1 + 294), v11, 8 * a5 + 40, 3, a5, a6);
    LODWORD(a6) = v17;
    v13 = v16;
  }
  *(_BYTE *)(v13 + 8) = 24;
  v14 = (void *)(v13 + 40);
  *(_DWORD *)(v13 + 12) = a2;
  *(_DWORD *)(v13 + 16) = a6;
  *(_DWORD *)(v13 + 20) = a3;
  *(_QWORD *)(v13 + 24) = 0;
  *(_QWORD *)(v13 + 32) = 0;
  *(_QWORD *)v13 = off_2B22100;
  if ( v10 )
    v14 = memmove((void *)(v13 + 40), a4, v10);
  *(_QWORD *)(v13 + 24) = v14;
  *(_QWORD *)(v13 + 32) = a5;
  return v13;
}

