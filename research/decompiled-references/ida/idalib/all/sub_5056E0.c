unsigned __int64 __fastcall sub_5056E0(__int64 *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  char v4; // r12
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdi
  size_t v11; // rbp
  void *v12; // r15
  size_t v13; // rax
  __int64 v14; // rdx
  void *v15; // rdi
  char **v16; // rax
  size_t v17; // rbp
  char **v18; // rbx
  void *v19; // r12
  char *v20; // rdi
  __m128i v21; // xmm0
  void *v22; // rdi
  __int64 v24; // rax
  __m128i v25; // [rsp+0h] [rbp-78h] BYREF
  void *src; // [rsp+10h] [rbp-68h] BYREF
  size_t n[3]; // [rsp+18h] [rbp-60h]
  _BYTE v28[5]; // [rsp+33h] [rbp-45h] BYREF
  unsigned __int64 v29[8]; // [rsp+38h] [rbp-40h] BYREF

  v4 = a2;
  v29[0] = __readfsqword(0x28u);
  if ( !*((_DWORD *)a1 + 29) && !(unsigned __int8)must_journal(a1, a2, a3) )
    return v29[0] - __readfsqword(0x28u);
  v8 = a1[1];
  v9 = *a1;
  a1[10] = v8;
  if ( a1[2] < (unsigned __int64)(v8 + 1) )
  {
    v24 = qvector_reserve(a1, v9, v8 + 1, 1);
    v8 = a1[1];
    *a1 = v24;
    v9 = v24;
  }
  *(_BYTE *)(v9 + v8) = v4;
  ++a1[1];
  v10 = a3;
  src = nullptr;
  *(_OWORD *)n = 0;
  sub_503B10(a3, (__int64 *)&src, a4);
  v11 = n[0];
  v12 = src;
  if ( HIDWORD(n[0]) )
    sub_503800(v10);
  v13 = pack_dd(v28, v29, LODWORD(n[0])) - (_QWORD)v28;
  if ( v13 )
    sub_5039B0(a1, v28, v13);
  if ( v11 )
    sub_5039B0(a1, v12, v11);
  if ( !*((_DWORD *)a1 + 29) )
  {
    v14 = a1[1];
    if ( v14 )
    {
      add_undo_record(*((unsigned int *)a1 + 28), *a1, v14);
      v15 = (void *)*a1;
      if ( *a1 )
      {
        a1[1] = 0;
        qfree(v15);
        *a1 = 0;
        a1[2] = 0;
      }
      a1[10] = -1;
    }
  }
  if ( v4 )
  {
    sub_503820(a1 + 3, *a4);
    v22 = src;
    if ( !src )
      return v29[0] - __readfsqword(0x28u);
LABEL_24:
    n[0] = 0;
    qfree(v22);
    return v29[0] - __readfsqword(0x28u);
  }
  v16 = sub_505460((char **)a1 + 3, a4);
  v17 = n[0];
  v18 = v16;
  v19 = nullptr;
  if ( n[0] )
  {
    v19 = (void *)qalloc_or_throw(n[0]);
    memcpy(v19, src, v17);
  }
  v20 = *v18;
  v21 = _mm_unpacklo_epi64((__m128i)v17, (__m128i)v17);
  if ( *v18 )
  {
    v18[1] = nullptr;
    v25 = v21;
    qfree(v20);
    v21 = _mm_load_si128(&v25);
  }
  *v18 = (char *)v19;
  v22 = src;
  *(__m128i *)(v18 + 1) = v21;
  if ( v22 )
    goto LABEL_24;
  return v29[0] - __readfsqword(0x28u);
}
