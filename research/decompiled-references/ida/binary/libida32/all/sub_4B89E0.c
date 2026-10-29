__int64 __fastcall sub_4B89E0(_DWORD *a1, __int64 a2)
{
  char *v2; // rax
  __m128i v3; // xmm0
  int v4; // eax
  __int64 v5; // r12
  char *v6; // rdx
  __int64 v7; // r13
  __int64 v8; // rbp
  __int64 v9; // rbx
  void *v10; // rdi
  void *ptr; // [rsp+0h] [rbp-88h] BYREF
  __int128 v13; // [rsp+8h] [rbp-80h]
  __m128i v14; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v13 = 0;
  ptr = nullptr;
  v14 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 1, 56);
  v2 = (char *)ptr + 56 * v13;
  *(_OWORD *)(v2 + 8) = 0;
  v3 = _mm_loadu_si128(&v14);
  *(_QWORD *)v2 = 0;
  *((_QWORD *)v2 + 3) = 123;
  *((_QWORD *)v2 + 4) = 0;
  *(__m128i *)(v2 + 40) = v3;
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
      v9 = 0;
      do
      {
        v10 = *(void **)&v6[v8];
        if ( v10 )
        {
          *(_QWORD *)&v6[v8 + 8] = 0;
          qfree(v10);
          v6 = (char *)ptr;
        }
        ++v9;
        v8 += 56;
      }
      while ( v7 != v9 );
    }
    *(_QWORD *)&v13 = 0;
    qfree(v6);
  }
  return v5;
}

