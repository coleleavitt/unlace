unsigned __int64 __fastcall sub_EF45A0(_QWORD *a1, int a2, int a3, int a4, const void *a5, __int64 a6, __int64 a7)
{
  size_t v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  __int16 v15; // ax
  void *v16; // rcx
  void *v17; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+8h] [rbp-40h]
  __int64 v21; // [rsp+8h] [rbp-40h]
  __int64 v22; // [rsp+8h] [rbp-40h]

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
    v22 = a6;
    v19 = sub_986170((__int64)(a1 + 294), v12, 8 * a6 + 48, 3, (__int64)a5, a6);
    a6 = v22;
    v14 = v19;
  }
  v15 = *(_WORD *)v14 & 0xFE00;
  LOBYTE(v15) = -106;
  *(_WORD *)v14 = v15;
  if ( unk_2CD7484 )
  {
    v21 = a6;
    sub_EE9B50(150);
    a6 = v21;
  }
  *(_BYTE *)(v14 + 8) = 3;
  v16 = (void *)(v14 + 48);
  *(_DWORD *)(v14 + 12) = a2;
  *(_DWORD *)(v14 + 16) = a4;
  *(_DWORD *)(v14 + 20) = a3;
  *(_QWORD *)(v14 + 24) = 0;
  *(_QWORD *)(v14 + 32) = 0;
  *(_QWORD *)(v14 + 40) = a7;
  if ( v11 )
  {
    v20 = a6;
    v17 = memmove((void *)(v14 + 48), a5, v11);
    a6 = v20;
    v16 = v17;
  }
  *(_QWORD *)(v14 + 24) = v16;
  *(_QWORD *)(v14 + 32) = a6;
  return v14;
}
