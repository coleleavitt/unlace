__int64 __fastcall sub_2146570(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rdx
  unsigned int v6; // ecx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // eax
  __int64 v10; // rdi
  unsigned int v11; // ebp
  __int64 v13; // r14
  unsigned __int64 v14; // rax
  __m128i *v15; // r15
  __m128i *v16; // r12
  size_t v17; // rcx
  __m128i *v18; // rbx
  const void *v19; // rdi
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // r10
  __int64 v24; // rdi
  __int64 v25; // rax
  _QWORD *v26; // rdx
  _QWORD *v27; // r10
  size_t v28; // rcx
  size_t v29; // r8
  size_t v30; // rdx
  const void *v31; // rsi
  const void *v32; // rdi
  int v33; // eax
  __m128i si128; // xmm0
  __m128i v35; // [rsp+0h] [rbp-A8h] BYREF
  void *s2; // [rsp+18h] [rbp-90h]
  unsigned __int64 v37; // [rsp+20h] [rbp-88h]
  size_t v38; // [rsp+28h] [rbp-80h]
  size_t n[2]; // [rsp+30h] [rbp-78h] BYREF
  const char *v40; // [rsp+40h] [rbp-68h] BYREF
  __int16 v41; // [rsp+60h] [rbp-48h]

  v2 = *a1;
  n[0] = 0;
  n[1] = 0;
  v3 = sub_2153C00(v2);
  v4 = sub_2124B50(v3);
  v9 = sub_213B1B0(*a1, (__m128 *)n, v5, v6, v7, v8);
  if ( (_BYTE)v9 )
  {
    v10 = *a1;
    v40 = "expected identifier";
    v41 = 259;
    return (unsigned int)sub_2153E90(v10, v4, &v40, 0, 0);
  }
  v13 = *a1;
  v11 = v9;
  if ( *(_QWORD *)(*a1 + 848) )
  {
    sub_102B060(v13 + 808, (__int64)n);
    return v11;
  }
  v14 = *(unsigned int *)(v13 + 768);
  v15 = *(__m128i **)(v13 + 760);
  v37 = v14;
  v16 = &v15[v14];
  if ( v15 == v16 )
  {
    if ( v37 <= 1 )
    {
LABEL_29:
      si128 = _mm_load_si128((const __m128i *)n);
      if ( v37 + 1 > *(unsigned int *)(v13 + 772) )
      {
        v35 = si128;
        sub_2237220(v13 + 760, v13 + 776, v37 + 1, 16);
        si128 = _mm_load_si128(&v35);
        v16 = (__m128i *)(*(_QWORD *)(v13 + 760) + 16LL * *(unsigned int *)(v13 + 768));
      }
      *v16 = si128;
      ++*(_DWORD *)(v13 + 768);
      return v11;
    }
    v35.m128i_i64[0] = v13 + 808;
LABEL_34:
    *(_DWORD *)(v13 + 768) = 0;
    sub_102B060(v35.m128i_i64[0], (__int64)n);
  }
  else
  {
    v17 = n[1];
    v18 = v15;
    s2 = (void *)n[0];
    while ( 1 )
    {
      if ( v18->m128i_i64[1] == v17 )
      {
        if ( !v17 )
          break;
        v19 = (const void *)v18->m128i_i64[0];
        v35.m128i_i64[0] = v17;
        v20 = memcmp(v19, s2, v17);
        v17 = v35.m128i_i64[0];
        if ( !v20 )
          break;
      }
      if ( v16 == ++v18 )
        goto LABEL_12;
    }
    if ( v18 == v16 )
    {
LABEL_12:
      if ( v37 > 1 )
      {
        v35.m128i_i64[0] = v13 + 808;
        while ( 1 )
        {
          v25 = sub_9F5F30(v35.m128i_i64[0], (_QWORD *)(v13 + 816), (const void **)v15);
          v27 = v26;
          if ( !v26 )
            goto LABEL_16;
          if ( !v25 && v26 != (_QWORD *)(v13 + 816) )
          {
            v28 = v15->m128i_u64[1];
            v30 = v26[5];
            v29 = v30;
            if ( v28 <= v30 )
              v30 = v15->m128i_u64[1];
            if ( v30
              && (v31 = (const void *)v27[4],
                  v32 = (const void *)v15->m128i_i64[0],
                  v38 = v29,
                  v37 = v28,
                  s2 = v27,
                  v33 = memcmp(v32, v31, v30),
                  v27 = s2,
                  v28 = v37,
                  v29 = v38,
                  v33) )
            {
              if ( v33 >= 0 )
                goto LABEL_26;
            }
            else if ( v28 == v29 || v28 >= v29 )
            {
LABEL_26:
              LODWORD(s2) = 0;
              goto LABEL_15;
            }
          }
          LODWORD(s2) = 1;
LABEL_15:
          v37 = (unsigned __int64)v27;
          v21 = operator new(0x30u);
          v22 = v15->m128i_i64[1];
          v23 = v37;
          v24 = (unsigned int)s2;
          *(_QWORD *)(v21 + 32) = v15->m128i_i64[0];
          *(_QWORD *)(v21 + 40) = v22;
          std::_Rb_tree_insert_and_rebalance(v24, v21, v23, v13 + 816);
          ++*(_QWORD *)(v13 + 848);
LABEL_16:
          if ( v16 == ++v15 )
            goto LABEL_34;
        }
      }
      goto LABEL_29;
    }
  }
  return v11;
}
