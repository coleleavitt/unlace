unsigned __int64 __fastcall sub_489640(_QWORD *a1, const char **a2, __int64 a3)
{
  const char *v5; // rsi
  const void *v7; // r13
  __int64 *v8; // r12
  _QWORD *v9; // rax
  _QWORD *v10; // r14
  _QWORD *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rsi
  _QWORD *v14; // rbp
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rax
  char v17; // cl
  _BOOL4 v18; // r15d
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // r8d
  int v22; // r9d
  _QWORD *v23; // r15
  __int64 (__fastcall *v24)(__int64); // rax
  __int64 v25; // rax
  const char *v26; // rsi
  const void *v27; // rbp
  __int64 v28; // rcx
  __m128 v29; // xmm0
  __int64 v30; // rbx
  void *v31; // r12
  __int64 v32; // rdx
  char *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // [rsp+0h] [rbp-78h]
  __int64 v37; // [rsp+8h] [rbp-70h]
  int v38; // [rsp+10h] [rbp-68h]
  __int64 v39; // [rsp+18h] [rbp-60h]
  const void *n[3]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v41; // [rsp+38h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  if ( a1[3] )
  {
    v5 = *a2;
    LOBYTE(n[1]) = 0;
    n[0] = (const void *)-1LL;
    dirtree_resolve_cursor(n, v5, a3);
    v7 = n[0];
    HIBYTE(v39) = n[1];
    if ( n[0] != (const void *)-1LL )
    {
      if ( !LOBYTE(n[1]) )
      {
        v8 = (__int64 *)a1[1];
        if ( !v8 )
          goto LABEL_27;
        v9 = (_QWORD *)v8[5];
        v10 = v8 + 4;
        if ( v9 )
        {
          v11 = v8 + 4;
          do
          {
            if ( (const void *)v9[4] < n[0] )
            {
              v9 = (_QWORD *)v9[3];
            }
            else
            {
              v11 = v9;
              v9 = (_QWORD *)v9[2];
            }
          }
          while ( v9 );
          if ( v10 != v11 && n[0] >= (const void *)v11[4] )
            goto LABEL_27;
        }
        v12 = v8[1];
        v13 = *v8;
        if ( v8[2] < (unsigned __int64)(v12 + 1) )
        {
          v35 = qvector_reserve(a1[1], v13, v12 + 1, 8);
          *v8 = v35;
          v13 = v35;
          v12 = v8[1];
        }
        *(_QWORD *)(v13 + 8 * v12) = v7;
        v14 = (_QWORD *)v8[5];
        ++v8[1];
        if ( v14 )
        {
          while ( 1 )
          {
            v15 = v14[4];
            v16 = (_QWORD *)v14[2];
            v17 = 1;
            if ( (unsigned __int64)v7 >= v15 )
            {
              v16 = (_QWORD *)v14[3];
              v17 = 0;
            }
            if ( !v16 )
              break;
            v14 = v16;
          }
          if ( !v17 )
            goto LABEL_23;
        }
        else
        {
          v14 = v8 + 4;
        }
        if ( v14 == (_QWORD *)v8[6] )
          goto LABEL_24;
        v15 = *(_QWORD *)(std::_Rb_tree_decrement(v14) + 32);
LABEL_23:
        if ( v15 >= (unsigned __int64)v7 )
        {
LABEL_27:
          --a1[3];
          return v41 - __readfsqword(0x28u);
        }
LABEL_24:
        v18 = 1;
        if ( v10 != v14 )
          v18 = (unsigned __int64)v7 < v14[4];
        v19 = operator new(0x28u);
        *(_QWORD *)(v19 + 32) = v7;
        std::_Rb_tree_insert_and_rebalance(v18, v19, v14, v8 + 4);
        ++v8[8];
        goto LABEL_27;
      }
      v20 = sub_4E07A0(*a1, n[0]);
      v23 = (_QWORD *)v20;
      if ( v20 )
      {
        v24 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 24LL);
        v25 = v24 == folder_data_t__::vfunc_3 ? v23[2] : v24((__int64)v23);
        if ( v25 == v23[5] && v25 )
        {
          v28 = 0;
          do
          {
            v29 = _mm_loadh_ps((const double *)(v23[4] + 8 * v28));
            sub_489640(
              (_DWORD)a1,
              (_DWORD)a2,
              (unsigned int)n,
              v28,
              v21,
              v22,
              v28,
              v25,
              v38,
              v39,
              v29.m128_i64[0],
              v29.m128_i32[2],
              (__int64)n[2]);
            LODWORD(v25) = v37;
            v28 = v36 + 1;
          }
          while ( v37 != v36 + 1 );
        }
      }
      if ( a1[2] )
      {
        v26 = *a2;
        memset(n, 0, sizeof(n));
        dirtree_get_abspath_by_cursor(n, v26, a3, 0);
        v27 = n[1];
        if ( n[1] > (char *)&dword_0 + 1 )
        {
          v30 = a1[2];
          v31 = (void *)qalloc_or_throw(n[1]);
          memcpy(v31, n[0], (size_t)v27);
          v32 = *(_QWORD *)(v30 + 8);
          v26 = *(const char **)v30;
          if ( *(_QWORD *)(v30 + 16) < (unsigned __int64)(v32 + 1) )
          {
            v34 = qvector_reserve(v30, v26, v32 + 1, 24);
            *(_QWORD *)v30 = v34;
            v32 = *(_QWORD *)(v30 + 8);
            v26 = (const char *)v34;
          }
          v33 = (char *)&v26[24 * v32];
          *(_QWORD *)v33 = v31;
          *(__m128i *)(v33 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v27, (__m128i)(unsigned __int64)v27);
          ++*(_QWORD *)(v30 + 8);
        }
        if ( n[0] )
        {
          n[1] = nullptr;
          qfree(n[0], v26);
        }
      }
    }
  }
  return v41 - __readfsqword(0x28u);
}
