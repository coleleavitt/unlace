unsigned __int64 __fastcall hvui_get_idaexe_path(__int64 a1, const char *a2)
{
  char *v3; // rbp
  size_t v4; // r12
  __int64 v5; // r13
  int v6; // r9d
  const char *v7; // rcx
  size_t v8; // rax
  __int64 v9; // r13
  size_t v10; // rbp
  void *v11; // rdi
  void *v12; // rbp
  __m128i v13; // xmm1
  __m128i v14; // xmm1
  void *v15; // rdi
  __m128i v17; // [rsp+0h] [rbp-1088h] BYREF
  void *v18; // [rsp+10h] [rbp-1078h] BYREF
  __int128 v19; // [rsp+18h] [rbp-1070h]
  void *ptr; // [rsp+30h] [rbp-1058h] BYREF
  __m128i v21; // [rsp+38h] [rbp-1050h] BYREF
  char s[4104]; // [rsp+50h] [rbp-1038h] BYREF
  unsigned __int64 v23; // [rsp+1058h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  if ( a2 )
  {
    v3 = (char *)a2;
    v18 = nullptr;
    v19 = 0;
    v4 = strlen(a2);
    v5 = v4 + 1;
  }
  else
  {
    v5 = 4;
    v18 = nullptr;
    v4 = 3;
    v19 = 0;
    v3 = "ida";
  }
  v18 = (void *)qvector_reserve(&v18, 0, v5, 1);
  *(_QWORD *)&v19 = v5;
  memmove(v18, v3, v4);
  v7 = haystack;
  *((_BYTE *)v18 + v4) = 0;
  if ( (_QWORD)v19 )
    LODWORD(v7) = (_DWORD)v18;
  qmakepath((unsigned int)s, 4096, (unsigned int)"%I", (_DWORD)v7, 0, v6);
  ptr = nullptr;
  v21 = 0;
  v8 = strlen(s);
  v9 = v8 + 1;
  v10 = v8;
  ptr = (void *)qvector_reserve(&ptr, 0, v8 + 1, 1);
  v21.m128i_i64[0] = v9;
  memmove(ptr, s, v10);
  *((_BYTE *)ptr + v10) = 0;
  v11 = *(void **)a1;
  v12 = ptr;
  v13 = _mm_loadu_si128(&v21);
  v21 = 0;
  ptr = nullptr;
  if ( v11 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v17 = v13;
    qfree(v11);
    v14 = _mm_load_si128(&v17);
    v15 = ptr;
    *(_QWORD *)a1 = v12;
    *(__m128i *)(a1 + 8) = v14;
    if ( v15 )
    {
      v21.m128i_i64[0] = 0;
      qfree(v15);
    }
  }
  else
  {
    *(_QWORD *)a1 = v12;
    *(__m128i *)(a1 + 8) = v13;
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18);
  }
  return v23 - __readfsqword(0x28u);
}
