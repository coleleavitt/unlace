unsigned __int64 __fastcall sub_73CB80(_QWORD *a1, const void *a2, __int64 a3, void *a4, __int64 a5, const __m128i *a6)
{
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v12; // rax
  const __m128i *v13; // [rsp+8h] [rbp-40h]

  v9 = a1[274];
  a1[284] += 80LL;
  v10 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v10 + 80 && v9 )
  {
    a1[274] = v10 + 80;
  }
  else
  {
    v13 = a6;
    v12 = sub_722150((__int64)(a1 + 274), 80, 3);
    a6 = v13;
    v10 = v12;
  }
  sub_73CA30(v10, a1, a6, a2, a3, (__int64)a6, a4, a5);
  if ( (~*(_BYTE *)(v10 + 30) & 0xF0) == 0 && !*(_QWORD *)v10 )
    *(_BYTE *)(v10 + 30) &= 0xFu;
  return v10;
}

