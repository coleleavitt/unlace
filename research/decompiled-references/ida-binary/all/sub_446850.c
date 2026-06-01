__int64 __fastcall worklists_dirspec_t__::vfunc_2(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  const char *p_dest; // rsi
  unsigned int v8; // eax
  unsigned int v9; // ebp
  void *v10; // rdi
  __int64 v11; // rax
  void *v12; // rdx
  __m128i v13; // xmm0
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r12
  unsigned __int64 v18; // r13
  __int64 v19; // rdx
  unsigned __int64 v20; // r12
  size_t v21; // r14
  __int64 v22; // r13
  size_t v23; // r8
  _BYTE *v24; // rsi
  const void *v25; // r8
  size_t v26; // [rsp+0h] [rbp-90h]
  const void *v27; // [rsp+0h] [rbp-90h]
  __int64 v28; // [rsp+10h] [rbp-80h] BYREF
  void *dest; // [rsp+18h] [rbp-78h] BYREF
  __m128i v30; // [rsp+20h] [rbp-70h] BYREF
  void *src; // [rsp+38h] [rbp-58h] BYREF
  __int128 v32; // [rsp+40h] [rbp-50h]
  unsigned __int64 v33; // [rsp+50h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  v30 = 0;
  dest = nullptr;
  p_dest = (const char *)&dest;
  v8 = vault_files_dirspec_t__::vfunc_2(a1, (__int64 *)&dest, a3);
  v9 = v8;
  if ( a2 && (_BYTE)v8 )
  {
    if ( (a4 & 1) != 0 )
    {
      v15 = *(_QWORD *)(a1 + 40);
      if ( a3 < *(_QWORD *)(v15 + 336) )
      {
        v28 = 0;
        v16 = *(_QWORD *)(*(_QWORD *)(v15 + 328) + 8 * a3);
        if ( v16 )
        {
          p_dest = (const char *)&v28;
          if ( (unsigned __int8)sub_4463F0(v15, &v28, v16, 0) )
          {
            v17 = v28;
            if ( v28 )
            {
              if ( &dest != (void **)(v28 + 48) )
              {
                v18 = *(_QWORD *)(v28 + 56);
                if ( v18 > 1 )
                {
                  v25 = *(const void **)(v28 + 48);
                  if ( v30.m128i_i64[1] < v18 )
                  {
                    v27 = *(const void **)(v28 + 48);
                    dest = (void *)qvector_reserve(&dest, dest, *(_QWORD *)(v28 + 56), 1);
                    v25 = v27;
                  }
                  v30.m128i_i64[0] = v18;
                  memmove(dest, v25, v18 - 1);
                  *((char *)dest + v18 - 1) = 0;
                }
                else
                {
                  v30.m128i_i64[0] = 0;
                }
              }
              v19 = *(unsigned int *)(v17 + 76);
              p_dest = (const char *)*(unsigned int *)(v17 + 72);
              src = nullptr;
              v32 = 0;
              vault_get_revision_postfix(&src, p_dest, v19);
              v20 = v32;
              if ( (_QWORD)v32 )
              {
                v21 = v32 - 1;
                if ( (_QWORD)v32 != 1 )
                {
                  v22 = v30.m128i_i64[0];
                  v23 = v32 - 1;
                  if ( v30.m128i_i64[0] )
                  {
                    v22 = v30.m128i_i64[0] - 1;
                    v23 = v21 + v30.m128i_i64[0] - 1;
                    v20 = v32 + v30.m128i_i64[0] - 1;
                  }
                  v24 = dest;
                  if ( v30.m128i_i64[1] < v20 )
                  {
                    v26 = v23;
                    dest = (void *)qvector_reserve(&dest, dest, v20, 1);
                    v23 = v26;
                    v24 = dest;
                  }
                  v30.m128i_i64[0] = v20;
                  v24[v23] = 0;
                  p_dest = (const char *)src;
                  memcpy((char *)dest + v22, src, v21);
                }
              }
              if ( src )
              {
                *(_QWORD *)&v32 = 0;
                qfree(src, p_dest);
              }
            }
          }
        }
      }
    }
    v10 = *(void **)a2;
    v11 = *(_QWORD *)(a2 + 16);
    v12 = dest;
    v13 = _mm_loadu_si128(&v30);
    dest = *(void **)a2;
    *(_QWORD *)a2 = v12;
    v30.m128i_i64[1] = v11;
    *(__m128i *)(a2 + 8) = v13;
  }
  else
  {
    v10 = dest;
  }
  if ( v10 )
  {
    v30.m128i_i64[0] = 0;
    qfree(v10, p_dest);
  }
  return v9;
}
