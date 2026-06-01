__int64 __fastcall sub_2178F0(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 *a10)
{
  unsigned int v10; // eax
  unsigned int v11; // edx
  __int64 v13; // rbp
  size_t v14; // rax
  size_t v15; // r13
  size_t v16; // rbx
  _BYTE *v17; // rax
  _BYTE *v18; // r13
  const char *v19; // rdi
  int v20; // ebx
  size_t v21; // rax
  size_t v22; // r13
  size_t v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  const char *v29; // rdx
  _BYTE *v30; // [rsp+0h] [rbp-78h] BYREF
  __int128 v31; // [rsp+8h] [rbp-70h]
  char s2[16]; // [rsp+20h] [rbp-58h] BYREF
  char s[24]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v34; // [rsp+48h] [rbp-30h]

  v34 = __readfsqword(0x28u);
  v10 = sub_217810(a10);
  v11 = 0;
  if ( v10 <= 0xF )
  {
    v13 = v10;
    if ( v10 )
      qlread(*a10, s2, v10);
    s2[v13] = 0;
    if ( !getinf_buf(1, s, 16) )
      s[0] = 0;
    v30 = nullptr;
    v31 = 0;
    v14 = strlen(s);
    v15 = v14 + 1;
    v16 = v14;
    v17 = (_BYTE *)qvector_reserve(&v30, 0, v14 + 1, 1);
    *(_QWORD *)&v31 = v15;
    v30 = v17;
    memmove(v17, s, v16);
    v30[v16] = 0;
    v18 = v30;
    v19 = v30;
    if ( !(_QWORD)v31 )
      v19 = &s1;
    v20 = strcmp(v19, s2);
    if ( v18 )
    {
      *(_QWORD *)&v31 = 0;
      qfree(v18, s2);
    }
    if ( v20 )
    {
      if ( !getinf_buf(1, s, 16) )
        s[0] = 0;
      v30 = nullptr;
      v31 = 0;
      v21 = strlen(s);
      v22 = v21 + 1;
      v23 = v21;
      v30 = (_BYTE *)qvector_reserve(&v30, 0, v21 + 1, 1);
      *(_QWORD *)&v31 = v22;
      memmove(v30, s, v23);
      v29 = &s1;
      v30[v23] = 0;
      if ( (_QWORD)v31 )
        v29 = v30;
      sub_169700(
        (int)"Warning: the trace was created for processor '%s' but the current processor is '%s'.",
        (__int64)s2,
        (__int64)v29,
        v24,
        v25,
        v26,
        (__m128)0LL,
        a2,
        a3,
        a4,
        v27,
        v28,
        a7,
        a8,
        (char)v30);
      if ( v30 )
      {
        *(_QWORD *)&v31 = 0;
        qfree(v30, s2);
      }
    }
    return 1;
  }
  return v11;
}
