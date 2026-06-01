__int64 __fastcall sub_5D7200(__m128i *a1, __int64 *a2, double a3, double a4)
{
  unsigned __int64 v4; // r12
  __int64 v6; // r14
  unsigned __int64 v7; // rdi
  __int64 v9; // rbx
  __int64 v10; // r9
  unsigned __int64 *v11; // rax
  __int64 v12; // rdx
  unsigned __int64 *v13; // rbx
  __int64 v14; // r15
  const char *v15; // rdx
  __int64 v16; // r15
  const char *v17; // rdx
  unsigned __int64 v18; // rsi
  __int64 v19; // rdi
  char *v20; // r8
  __int64 v21; // rax
  char *v22; // r10
  char *v23; // r9
  __int64 i; // rax
  unsigned __int64 *v25; // rdx
  __int64 v26; // r10
  __int64 v27; // r10
  char *v28; // r8
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // rax
  unsigned __int64 v48; // [rsp+18h] [rbp-80h] BYREF
  void *v49; // [rsp+20h] [rbp-78h] BYREF
  __int128 v50; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+38h] [rbp-60h] BYREF
  __int128 v52; // [rsp+40h] [rbp-58h]
  unsigned __int64 v53; // [rsp+58h] [rbp-40h]

  v4 = 0;
  v6 = (__int64)&a1[106].m128i_i64[1];
  v7 = a1->m128i_i64[0];
  v53 = __readfsqword(0x28u);
  v9 = *(_QWORD *)(v7 + 1616);
  sub_5D6D80(v7, a3, a4);
  sub_5C9E40(a1->m128i_i64[0], nullptr);
  v49 = (void *)netnode_altval(*(_QWORD *)(v9 + 8), 0, 65);
  netnode_supset(*(_QWORD *)(v9 + 8), 0, &v49, 8, 65, v10);
  while ( 1 )
  {
    if ( v4 >= (unsigned int)sub_503DD0(v6) )
      return 1;
    v11 = sub_505DE0(v6, v4);
    v13 = v11;
    if ( !v11 )
    {
      v40 = a2[1];
      v41 = *a2;
      if ( a2[2] < (unsigned __int64)(v40 + 1) )
      {
        v43 = qvector_reserve(a2, v41, v40 + 1, 24);
        v40 = a2[1];
        *a2 = v43;
        v41 = v43;
      }
      v42 = v41 + 24 * v40;
      *(_QWORD *)v42 = 0;
      *(_OWORD *)(v42 + 8) = 0;
      ++a2[1];
      sub_35A790((char **)v42);
      return 0;
    }
    if ( *((char *)v11 + 17) < 0 )
    {
      if ( (unsigned __int8)sub_5C7D50(a1->m128i_i64, (__int64)v11, v12) )
      {
        sub_5C85A0(a1->m128i_i64, (__int64)v13, 0);
      }
      else
      {
        v34 = a2[1];
        v35 = *a2;
        if ( a2[2] < (unsigned __int64)(v34 + 1) )
        {
          v38 = qvector_reserve(a2, v35, v34 + 1, 24);
          v34 = a2[1];
          *a2 = v38;
          v35 = v38;
        }
        v36 = v35 + 24 * v34;
        *(_QWORD *)v36 = 0;
        *(_OWORD *)(v36 + 8) = 0;
        ++a2[1];
        sub_35A790((char **)v36);
      }
      goto LABEL_4;
    }
    v49 = nullptr;
    v14 = qword_2CCB598;
    v50 = 0;
    ptr = nullptr;
    v52 = 0;
    sub_504090((__int64)&v49, (_QWORD *)(*(_QWORD *)(qword_2CCB598 + 1672) + 1704LL), v11, 0);
    sub_504090((__int64)&ptr, (_QWORD *)(*(_QWORD *)(v14 + 1672) + 1704LL), v13, 1);
    sub_3F3C10((__int64)&v49);
    v15 = haystack;
    v16 = qword_2CCB598;
    if ( (_QWORD)v50 )
      v15 = (const char *)v49;
    sub_5083D0((__int64 *)(*(_QWORD *)(qword_2CCB598 + 1672) + 1704LL), v13, v15, 0);
    v17 = haystack;
    if ( (_QWORD)v52 )
      v17 = (const char *)ptr;
    sub_5083D0((__int64 *)(*(_QWORD *)(v16 + 1672) + 1704LL), v13, v17, 1u);
    if ( (unsigned __int8)sub_5C7820(a1, (__int64)v13, 0) )
      break;
    v31 = a2[1];
    v32 = *a2;
    if ( a2[2] < (unsigned __int64)(v31 + 1) )
    {
      v37 = qvector_reserve(a2, v32, v31 + 1, 24);
      *a2 = v37;
      v31 = a2[1];
      v32 = v37;
    }
    v33 = v32 + 24 * v31;
    *(_QWORD *)v33 = 0;
    *(_OWORD *)(v33 + 8) = 0;
    ++a2[1];
    sub_35A790((char **)v33);
LABEL_14:
    sub_5B8DA0(a1, (__int64)v13);
    v18 = *v13;
    v19 = *(_QWORD *)(a1->m128i_i64[0] + 1616);
    v20 = *(char **)(v19 + 24);
    v21 = 16LL * *(_QWORD *)(v19 + 32);
    v22 = v20;
    v23 = &v20[v21];
    for ( i = v21 >> 4; i > 0; i >>= 1 )
    {
      while ( 1 )
      {
        v25 = (unsigned __int64 *)&v22[16 * (i >> 1)];
        if ( *v25 >= v18 )
          break;
        v22 = (char *)(v25 + 2);
        i = i - 1 - (i >> 1);
        if ( i <= 0 )
          goto LABEL_18;
      }
    }
LABEL_18:
    if ( v23 != v22 && v18 == *(_QWORD *)v22 )
    {
      v26 = (v22 - v20) >> 4;
      if ( (_DWORD)v26 != -1 )
      {
        v27 = 16LL * (int)v26;
        v28 = &v20[v27];
        v29 = *((unsigned int *)v28 + 2);
        *((_DWORD *)v28 + 2) |= 1u;
        sub_5D0480(v19, v18, v29, *(_DWORD *)(*(_QWORD *)(v19 + 24) + v27 + 8));
      }
    }
    sub_5B9D80(a1, (__int64)v13);
    sub_674A10(a1, v13);
    sub_674600(a1, v13, 0);
    sub_63F420(a1, v13);
    sub_63F270(a1, v13, 0);
    sub_673D30(a1, v13);
    sub_673A70(a1, v13, 0);
    v48 = 0;
    v30 = sub_3BDD60(a1, *v13);
    if ( v30 != -1 && (unsigned __int8)sub_54BE00(a1->m128i_i64, &v48, v30) )
      sub_5B6F10((__int64)a1, &v48, nullptr, 1);
    clear_tinfo_t(&v48);
    if ( ptr )
    {
      *(_QWORD *)&v52 = 0;
      qfree(ptr);
    }
    if ( v49 )
    {
      *(_QWORD *)&v50 = 0;
      qfree(v49);
    }
LABEL_4:
    ++v4;
  }
  if ( (unsigned __int8)sub_5C7BB0(a1->m128i_i64, (__int64)v13, 1) )
    goto LABEL_14;
  v44 = a2[1];
  v45 = *a2;
  if ( a2[2] < (unsigned __int64)(v44 + 1) )
  {
    v47 = qvector_reserve(a2, v45, v44 + 1, 24);
    *a2 = v47;
    v45 = v47;
    v44 = a2[1];
  }
  v46 = v45 + 24 * v44;
  *(_QWORD *)v46 = 0;
  *(_OWORD *)(v46 + 8) = 0;
  ++a2[1];
  sub_35A790((char **)v46);
  if ( ptr )
  {
    *(_QWORD *)&v52 = 0;
    qfree(ptr);
  }
  if ( !v49 )
    return 0;
  *(_QWORD *)&v50 = 0;
  qfree(v49);
  return 0;
}
