unsigned __int64 __fastcall sub_ED0610(_QWORD *a1, int a2, int a3, int a4, const void *a5, __int64 a6)
{
  size_t v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int16 v14; // ax
  void *v15; // rcx
  void *v16; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+8h] [rbp-40h]
  __int64 v20; // [rsp+8h] [rbp-40h]
  __int64 v21; // [rsp+8h] [rbp-40h]

  v10 = 8 * a6;
  v11 = 8 * a6 + 40;
  v12 = a1[294];
  a1[304] += v11;
  v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v11 + v13 && v12 )
  {
    a1[294] = v11 + v13;
  }
  else
  {
    v21 = a6;
    v18 = sub_962430((__int64)(a1 + 294), v11, 8 * a6 + 40, 3, (__int64)a5, a6);
    a6 = v21;
    v13 = v18;
  }
  v14 = *(_WORD *)v13 & 0xFE00;
  LOBYTE(v14) = -111;
  *(_WORD *)v13 = v14;
  if ( unk_2CAD564 )
  {
    v20 = a6;
    sub_EC5E10(145);
    a6 = v20;
  }
  *(_BYTE *)(v13 + 8) = 5;
  v15 = (void *)(v13 + 40);
  *(_DWORD *)(v13 + 12) = a2;
  *(_DWORD *)(v13 + 16) = a4;
  *(_DWORD *)(v13 + 20) = a3;
  *(_QWORD *)(v13 + 24) = 0;
  *(_QWORD *)(v13 + 32) = 0;
  if ( v10 )
  {
    v19 = a6;
    v16 = memmove((void *)(v13 + 40), a5, v10);
    a6 = v19;
    v15 = v16;
  }
  *(_QWORD *)(v13 + 24) = v15;
  *(_QWORD *)(v13 + 32) = a6;
  return v13;
}

