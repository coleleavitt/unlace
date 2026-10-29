unsigned __int64 __fastcall sub_16BAB0(
        const char *src,
        char a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  __int64 v20; // rcx
  char *v21; // r12
  __int64 v22; // rbp
  size_t v23; // rax
  size_t v24; // r14
  size_t v25; // r15
  size_t v26; // rdx
  const char *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  char v31; // [rsp+0h] [rbp-68h]
  char *v32; // [rsp+10h] [rbp-58h] BYREF
  __int128 v33; // [rsp+18h] [rbp-50h]
  unsigned __int64 v34; // [rsp+28h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  if ( (_BYTE)a3 )
  {
    sub_169700((int)"%s\n", (__int64)src, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, v31);
    if ( !a2 )
      return v34 - __readfsqword(0x28u);
  }
  else if ( !a2 )
  {
    return v34 - __readfsqword(0x28u);
  }
  v33 = 0;
  v32 = nullptr;
  v32 = (char *)qvector_reserve(&v32, 0, 15, 1);
  *(_QWORD *)&v33 = 15;
  strcpy(v32, "AUTOHIDE NONE\n");
  v20 = 0xA454E4F4E204544LL;
  v21 = v32;
  if ( src )
  {
    v22 = v33;
    v23 = strlen(src);
    v24 = v23;
    v25 = v23;
    if ( v22 )
    {
      --v22;
      v25 = v23 + v22;
    }
    v26 = v25 + 1;
    if ( *((_QWORD *)&v33 + 1) < v25 + 1 )
    {
      v32 = (char *)qvector_reserve(&v32, v21, v26, 1);
      v26 = v25 + 1;
      v21 = v32;
    }
    *(_QWORD *)&v33 = v26;
    v21[v25] = 0;
    memmove(&v32[v22], src, v24);
  }
  v27 = &s1;
  if ( (_QWORD)v33 )
    v27 = v32;
  sub_169630((int)"%s", (__int64)v27, v15, v20, v16, v17, (__m128)0LL, a8, a9, a10, v18, v19, a13, a14, v31);
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32, v27, v28, v29, v30);
  }
  return v34 - __readfsqword(0x28u);
}
