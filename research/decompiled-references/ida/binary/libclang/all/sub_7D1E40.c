unsigned __int64 __fastcall sub_7D1E40(_QWORD *a1, int a2, int a3, __int64 a4, __int64 a5, int a6, __int64 a7)
{
  int v10; // r12d
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rbp
  __int64 v16; // rax
  int v17; // [rsp+Ch] [rbp-3Ch]

  v10 = a5;
  v11 = a7;
  v12 = 8 * (a5 - ((a7 == 0) - 1LL)) + 24;
  v13 = a1[274];
  a1[284] += v12;
  v14 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v12 + v14 && v13 )
  {
    a1[274] = v12 + v14;
  }
  else
  {
    v17 = a6;
    v16 = sub_7CF9B0((__int64)(a1 + 274), v12, 3);
    v11 = a7;
    a6 = v17;
    v14 = v16;
  }
  sub_7D1960(v14, (__int64)a1, a2, a3, a4, v10, a6, v11);
  return v14;
}

