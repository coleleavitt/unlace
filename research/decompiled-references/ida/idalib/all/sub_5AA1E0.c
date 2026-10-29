__int64 __fastcall sub_5AA1E0(__int64 a1, int a2)
{
  __int64 v3; // rax
  const char *v4; // rdi
  __int64 v5; // r12
  __int64 v6; // rax
  int encoding_bpu_by_name; // eax
  __int64 v8; // rdx
  __int64 v9; // rax
  void **v10; // r12
  void *v11; // rbx
  void *v13; // r13
  void *v14; // rdi
  __int64 v15; // rax
  void *src; // [rsp+0h] [rbp-48h] BYREF
  __int128 v17; // [rsp+8h] [rbp-40h]
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  if ( a2 <= 0 || (unsigned __int64)a2 >= *(_QWORD *)(a1 + 16) )
    return 0;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = haystack;
  v5 = 24LL * a2;
  v6 = v5 + v3;
  if ( *(_QWORD *)(v6 + 8) )
    v4 = *(const char **)v6;
  encoding_bpu_by_name = get_encoding_bpu_by_name((__int64)v4);
  v8 = 0xFFFFFFFFLL;
  v9 = (unsigned int)(encoding_bpu_by_name - 1);
  if ( (unsigned int)v9 <= 3 )
    v8 = dword_23AF980[v9];
  if ( *(_DWORD *)(a1 + 4 * v8 + 32) == a2 )
    return 0;
  src = nullptr;
  v17 = 0;
  src = (void *)qvector_reserve(&src, 0, 1, 1);
  *(_QWORD *)&v17 = 1;
  *(_BYTE *)src = 0;
  sub_5A91E0(a2, v5 + *(_QWORD *)(a1 + 8), (__int64)&src, 0xB2u);
  v10 = (void **)(*(_QWORD *)(a1 + 8) + v5);
  if ( v10 != &src )
  {
    v11 = (void *)v17;
    if ( (unsigned __int64)v17 > 1 )
    {
      v13 = src;
      v14 = *v10;
      if ( (unsigned __int64)v10[2] < (unsigned __int64)v17 )
      {
        v15 = qvector_reserve(v10, *v10, v17, 1);
        *v10 = (void *)v15;
        v14 = (void *)v15;
      }
      v10[1] = v11;
      memmove(v14, v13, (size_t)v11 - 1);
      *((_BYTE *)v11 + (_QWORD)*v10 - 1) = 0;
    }
    else
    {
      v10[1] = nullptr;
    }
  }
  if ( src )
  {
    *(_QWORD *)&v17 = 0;
    qfree(src);
  }
  return 1;
}
