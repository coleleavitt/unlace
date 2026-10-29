__int64 __fastcall sub_4CF810(_DWORD *a1, __int64 a2)
{
  char *v2; // rax
  __m128i v3; // xmm0
  int v4; // eax
  __int64 v5; // rbp
  char *v6; // rdx
  __int64 v7; // r12
  __int64 v8; // rbx
  char *v9; // rax
  void *v10; // rdi
  void *ptr; // [rsp+0h] [rbp-88h] BYREF
  __int128 v13; // [rsp+8h] [rbp-80h]
  __m128i v14; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 v15; // [rsp+68h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  v13 = 0;
  ptr = nullptr;
  v14 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 1, 64);
  v2 = (char *)ptr + 64 * (_QWORD)v13;
  *(_OWORD *)(v2 + 8) = 0;
  v3 = _mm_load_si128(&v14);
  *(_QWORD *)v2 = 0;
  *((_WORD *)v2 + 12) = 123;
  *((_QWORD *)v2 + 4) = 0;
  v2[40] = 0;
  *((__m128i *)v2 + 3) = v3;
  *(_QWORD *)&v13 = v13 + 1;
  v4 = parse_json(a1, a2, &ptr);
  if ( v4 )
    v5 = qerrstr(v4);
  else
    v5 = 2LL * (*a1 != 3);
  v6 = (char *)ptr;
  if ( ptr )
  {
    v7 = v13;
    if ( (_QWORD)v13 )
    {
      v8 = 0;
      do
      {
        v9 = &v6[64 * v8];
        v10 = *(void **)v9;
        if ( *(_QWORD *)v9 )
        {
          *((_QWORD *)v9 + 1) = 0;
          qfree(v10);
          v6 = (char *)ptr;
        }
        ++v8;
      }
      while ( v7 != v8 );
    }
    *(_QWORD *)&v13 = 0;
    qfree(v6);
  }
  return v5;
}
