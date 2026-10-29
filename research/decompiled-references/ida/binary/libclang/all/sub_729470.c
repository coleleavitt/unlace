unsigned __int64 __fastcall sub_729470(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // r12
  char v5; // al
  char v6; // al
  __int64 v7; // rsi
  _QWORD *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rsi
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  size_t v13; // rdx

  v3 = (__int64)(a2 + 274);
  v4 = sub_7222F0((__int64)(a2 + 274), 80, 3);
  sub_729210(
    v4,
    a2,
    (const __m128i *)a1,
    *(const void **)(a1 + 40),
    *(unsigned int *)(a1 + 36),
    *(_QWORD **)(a1 + 56),
    *(_DWORD *)(a1 + 48));
  v5 = *(_BYTE *)(a1 + 34) & 1 | *(_BYTE *)(v4 + 34) & 0xFE;
  *(_BYTE *)(v4 + 34) = v5;
  v6 = *(_BYTE *)(a1 + 34) & 2 | v5 & 0xFD;
  *(_BYTE *)(v4 + 34) = v6;
  *(_BYTE *)(v4 + 34) = *(_BYTE *)(a1 + 34) & 4 | v6 & 0xFB;
  v7 = *(unsigned int *)(a1 + 64);
  v8 = *(_QWORD **)(a1 + 72);
  *(_DWORD *)(v4 + 64) = v7;
  v9 = a2[274];
  v10 = v7;
  a2[284] += v10 * 8;
  v11 = (_QWORD *)((v9 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  if ( a2[275] >= (unsigned __int64)&v11[v10] && v9 )
    a2[274] = &v11[v10];
  else
    v11 = (_QWORD *)sub_722150(v3, v10 * 8, 4);
  v12 = *(unsigned int *)(v4 + 64);
  *(_QWORD *)(v4 + 72) = v11;
  v13 = 8 * v12;
  if ( v13 <= 8 )
  {
    if ( v13 == 8 )
      *v11 = *v8;
  }
  else
  {
    memmove(v11, v8, v13);
  }
  return v4;
}

