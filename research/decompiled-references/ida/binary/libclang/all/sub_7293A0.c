unsigned __int64 __fastcall sub_7293A0(
        _QWORD *a1,
        const void *a2,
        __int64 a3,
        _QWORD *a4,
        unsigned int a5,
        const __m128i *a6)
{
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v12; // rax
  unsigned int v13; // [rsp+Ch] [rbp-3Ch]

  v9 = a1[274];
  a1[284] += 80LL;
  v10 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v10 + 80 && v9 )
  {
    a1[274] = v10 + 80;
  }
  else
  {
    v13 = a5;
    v12 = sub_722150((__int64)(a1 + 274), 80, 3);
    a5 = v13;
    v10 = v12;
  }
  sub_729210(v10, a1, a6, a2, a3, a4, a5);
  if ( (~*(_BYTE *)(v10 + 30) & 0xF0) == 0 && !*(_QWORD *)v10 )
    *(_BYTE *)(v10 + 30) &= 0xFu;
  return v10;
}

