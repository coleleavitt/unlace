__int64 __fastcall sub_8C7A0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  unsigned int v13; // r12d
  __int64 v15; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  __int64 v24; // rdx
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __m128 v30; // xmm4
  __m128 v31; // xmm5

  v13 = *((_DWORD *)a1 + 2);
  if ( v13 || (v15 = *a1) == 0 )
    sub_80B80();
  v18 = sub_923E0(v15, a2, a3);
  v24 = v18;
  if ( v18 < 0 )
  {
    v26 = sub_8F840(v15, a2, v18);
    if ( v26 )
    {
      v13 = v26;
      v27 = sub_978C0(v26);
      sub_8C450(a6, a7, a8, a9, v30, v31, a12, a13, (__int64)"xdelta3: %s: %s: %s\n", a5, a1[2], v27, v28, v29);
      return v13;
    }
    v24 = *a4;
  }
  else
  {
    *a4 = v18;
  }
  if ( dword_165CE8 > 4 )
  {
    sub_8C450(a6, a7, a8, a9, v22, v23, a12, a13, (__int64)"xdelta3: read %s: %zu bytes\n", a1[2], v24, v19, v20, v21);
    v24 = *a4;
  }
  a1[7] += v24;
  return v13;
}

