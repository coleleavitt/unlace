__int64 __fastcall sub_72D770(__int64 *a1, __int64 a2, void *a3, const __m128i *a4, int a5)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  void (__fastcall *v11)(__m128i *, const __m128i *, __int64); // rax
  unsigned int v12; // r12d
  const char *errdesc; // rax
  const char *v15; // rbx
  size_t v16; // rax
  size_t v17; // rbp
  void *v18; // rdi
  size_t v19; // r13
  __int64 v20; // rax
  __m128i v21; // [rsp+10h] [rbp-68h] BYREF
  __m128i v22; // [rsp+20h] [rbp-58h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v9 = fopenWB(a3);
  if ( !v9 )
  {
    errdesc = (const char *)get_errdesc(a3);
    v15 = errdesc;
    if ( errdesc && (v16 = strlen(errdesc), (v17 = v16) != 0) )
    {
      v18 = (void *)*a1;
      v19 = v16 + 1;
      if ( a1[2] < v16 + 1 )
      {
        v20 = qvector_reserve(a1, *a1, v16 + 1, 1);
        *a1 = v20;
        v18 = (void *)v20;
      }
      a1[1] = v19;
      memmove(v18, v15, v17);
      *(_BYTE *)(*a1 + v17) = 0;
    }
    else
    {
      a1[1] = 0;
    }
    return 0;
  }
  v10 = v9;
  v11 = (void (__fastcall *)(__m128i *, const __m128i *, __int64))a4[1].m128i_i64[0];
  v22 = 0u;
  v21 = 0;
  if ( v11 )
  {
    v11(&v21, a4, 2);
    v22 = _mm_loadu_si128(a4 + 1);
  }
  v12 = sub_72CE30(a1, a2, v10, &v21, a5);
  if ( v22.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v22.m128i_i64[0])(&v21, &v21, 3);
  qfclose(v10);
  if ( !(_BYTE)v12 )
  {
    qunlink(a3);
    return 0;
  }
  return v12;
}
