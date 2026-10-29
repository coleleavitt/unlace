unsigned __int64 __fastcall sub_E90990(
        _QWORD *a1,
        char a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        void *src,
        __int64 a8)
{
  __int64 v11; // rax
  const void *v12; // r10
  size_t v13; // rbp
  unsigned __int64 v14; // rbx
  __int64 v15; // rsi
  void *v16; // rcx
  __int64 v18; // rax
  char v19; // [rsp+0h] [rbp-48h]
  int v20; // [rsp+4h] [rbp-44h]

  v11 = a1[294];
  v12 = src;
  v13 = 8 * a8;
  v14 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v15 = 8 * a8 + 48;
  a1[304] += v15;
  if ( a1[295] >= v15 + v14 && v11 )
  {
    a1[294] = v15 + v14;
  }
  else
  {
    v20 = a6;
    v19 = a5;
    v18 = sub_962430((__int64)(a1 + 294), v15, v15, 3, a5, a6);
    v12 = src;
    LODWORD(a6) = v20;
    v14 = v18;
    LOBYTE(a5) = v19;
  }
  *(_BYTE *)(v14 + 8) = a2;
  v16 = (void *)(v14 + 48);
  *(_DWORD *)(v14 + 12) = a3;
  *(_DWORD *)(v14 + 16) = a6;
  *(_DWORD *)(v14 + 20) = a4;
  *(_QWORD *)(v14 + 24) = 0;
  *(_QWORD *)(v14 + 32) = 0;
  *(_QWORD *)v14 = off_2B22060;
  *(_BYTE *)(v14 + 40) = a5;
  if ( v13 )
    v16 = memmove((void *)(v14 + 48), v12, v13);
  *(_QWORD *)(v14 + 24) = v16;
  *(_QWORD *)(v14 + 32) = a8;
  return v14;
}

