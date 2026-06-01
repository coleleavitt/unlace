unsigned __int64 __fastcall sub_ED0AE0(_QWORD *a1, char a2, int a3, int a4, int a5, __int64 a6, void *src, __int64 a8)
{
  int v8; // r10d
  __int64 v12; // rax
  const void *v13; // r8
  size_t v14; // rbp
  unsigned __int64 v15; // rbx
  __int64 v16; // rsi
  __int16 v17; // ax
  void *v18; // rcx
  __int64 v20; // rax
  int v21; // [rsp+Ch] [rbp-4Ch]
  __int64 v23; // [rsp+10h] [rbp-48h]
  __int64 v24; // [rsp+10h] [rbp-48h]
  const void *v25; // [rsp+18h] [rbp-40h]

  v8 = a3;
  v12 = a1[294];
  v13 = src;
  v14 = 8 * a8;
  v15 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v16 = 8 * a8 + 56;
  a1[304] += v16;
  if ( a1[295] >= v16 + v15 && v12 )
  {
    a1[294] = v16 + v15;
  }
  else
  {
    v24 = a6;
    v20 = sub_962430((__int64)(a1 + 294), v16, v16, 3, (__int64)src, a6);
    v13 = src;
    a6 = v24;
    v15 = v20;
    v8 = a3;
  }
  v17 = *(_WORD *)v15 & 0xFE00;
  LOBYTE(v17) = -108;
  *(_WORD *)v15 = v17;
  if ( unk_2CAD564 )
  {
    v25 = v13;
    v23 = a6;
    v21 = v8;
    sub_EC5E10(148);
    v13 = v25;
    a6 = v23;
    v8 = v21;
  }
  *(_BYTE *)(v15 + 8) = 7;
  v18 = (void *)(v15 + 56);
  *(_DWORD *)(v15 + 12) = v8;
  *(_DWORD *)(v15 + 16) = a5;
  *(_DWORD *)(v15 + 20) = a4;
  *(_QWORD *)(v15 + 24) = 0;
  *(_QWORD *)(v15 + 32) = 0;
  *(_QWORD *)(v15 + 40) = a6;
  *(_BYTE *)(v15 + 48) = a2;
  if ( v14 )
    v18 = memmove((void *)(v15 + 56), v13, v14);
  *(_QWORD *)(v15 + 24) = v18;
  *(_QWORD *)(v15 + 32) = a8;
  return v15;
}

