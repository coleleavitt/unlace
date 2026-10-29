__int64 __fastcall sub_34E130(
        __int64 a1,
        const char *a2,
        unsigned __int64 a3,
        char *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14,
        char a15)
{
  char *v15; // rbp
  __int64 v16; // rdi
  unsigned __int64 v17; // r12
  __int64 v18; // r15
  const char *v19; // r14
  char *v20; // rax
  signed __int64 v21; // rax
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // r15
  char *v24; // rax
  signed __int64 v25; // rax
  char *v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r10
  size_t v29; // r15
  const char *v30; // r13
  __int64 v31; // rcx
  int v32; // r14d
  const char *v33; // rdx
  __int64 v34; // r15
  __int64 v36; // rdx
  const char *v37; // rax
  const char *v38; // rdx
  void *v39; // rdi
  __int64 v40; // rax
  __int64 v41; // [rsp+0h] [rbp-68h]
  unsigned __int64 v42; // [rsp+8h] [rbp-60h]
  __int64 v43; // [rsp+10h] [rbp-58h] BYREF
  __int128 v44; // [rsp+18h] [rbp-50h]
  unsigned __int64 v45; // [rsp+28h] [rbp-40h]

  v15 = (char *)a2;
  v41 = a1;
  v16 = *(_QWORD *)a2;
  v45 = __readfsqword(0x28u);
  v17 = a3;
  if ( v16 )
  {
    *((_QWORD *)a2 + 1) = 0;
    *(double *)a7.m128_u64 = qfree(v16, a2);
    *(_QWORD *)a2 = 0;
    *((_QWORD *)a2 + 2) = 0;
  }
  v18 = *(_QWORD *)(v17 + 8);
  if ( v18 )
  {
    v19 = *(const char **)v17;
    a2 = (_BYTE *)(&qword_28 + 5);
    v20 = strchr(*(const char **)v17, 45);
    if ( v20 )
    {
      v21 = v20 - v19;
      if ( v21 != -1 )
      {
        v22 = v21 + 1;
        if ( v21 != -2 )
        {
          v23 = v18 - 1;
          do
          {
            if ( v23 >= v22 && (v26 = strchr(&v19[v22], 45)) != nullptr && (v27 = v26 - v19, v23 >= v27) )
            {
              v28 = v22;
              if ( v27 <= v22 )
                v28 = v27;
              v29 = v27 - v28;
            }
            else
            {
              v28 = v22;
              if ( v23 <= v22 )
                v28 = v23;
              v29 = v23 - v28;
            }
            a7 = 0;
            v30 = &s1;
            v43 = 0;
            v44 = 0;
            if ( v29 )
            {
              v39 = nullptr;
              if ( v29 != -1 )
              {
                v42 = v28;
                v43 = qvector_reserve(&v43, 0, v29 + 1, 1);
                v28 = v42;
                v39 = (void *)v43;
              }
              *(_QWORD *)&v44 = v29 + 1;
              memmove(v39, &v19[v28], v29);
              *(_BYTE *)(v43 + v29) = 0;
              v29 = v44;
              if ( (_QWORD)v44 )
                v30 = (const char *)v43;
              else
                v30 = &s1;
            }
            v32 = sub_34DB80(v41, v30);
            if ( v32 == -1 )
            {
              v33 = &s1;
              if ( *(_QWORD *)(v17 + 8) )
                v33 = *(const char **)v17;
              a2 = v30;
              sub_169700(
                (int)"unknown option '%s' in abi desc '%s'\n",
                (__int64)v30,
                (__int64)v33,
                v31,
                a5,
                a6,
                (__m128)0LL,
                a8,
                a9,
                a10,
                a11,
                a12,
                a13,
                a14,
                v41);
            }
            else
            {
              a2 = *(const char **)v15;
              v36 = *((_QWORD *)v15 + 1);
              a4 = (char *)(*(_QWORD *)v15 + 4 * v36);
              if ( *(char **)v15 == a4 )
                goto LABEL_45;
              v37 = *(const char **)v15;
              while ( v32 != *(_DWORD *)v37 )
              {
                v37 += 4;
                if ( a4 == v37 )
                  goto LABEL_45;
              }
              if ( v37 == a4 )
              {
LABEL_45:
                a3 = v36 + 1;
                if ( *((_QWORD *)v15 + 2) < a3 )
                {
                  v40 = qvector_reserve(v15, a2, a3, 4);
                  a3 = *((_QWORD *)v15 + 1);
                  *(_QWORD *)v15 = v40;
                  a4 = (char *)(v40 + 4 * a3);
                }
                *(_DWORD *)a4 = v32;
                ++*((_QWORD *)v15 + 1);
              }
              else
              {
                v38 = &s1;
                if ( *(_QWORD *)(v17 + 8) )
                  v38 = *(const char **)v17;
                a2 = &s1;
                if ( v29 )
                  a2 = (const char *)v43;
                sub_169700(
                  (int)"duplicate option '%s' in abi desc '%s'\n",
                  (__int64)a2,
                  (__int64)v38,
                  (__int64)a4,
                  a5,
                  a6,
                  (__m128)0LL,
                  a8,
                  a9,
                  a10,
                  a11,
                  a12,
                  a13,
                  a14,
                  v41);
              }
            }
            if ( v43 )
            {
              *(_QWORD *)&v44 = 0;
              *(double *)a7.m128_u64 = qfree(v43, a2);
            }
            v34 = *(_QWORD *)(v17 + 8);
            if ( !v34 )
              break;
            v23 = v34 - 1;
            if ( v23 < v22 )
              break;
            v19 = *(const char **)v17;
            a2 = (_BYTE *)(&qword_28 + 5);
            v24 = strchr((const char *)(*(_QWORD *)v17 + v22), 45);
            if ( !v24 )
              break;
            v25 = v24 - v19;
            if ( v25 == -1 )
              break;
            v22 = v25 + 1;
          }
          while ( v25 != -2 );
        }
      }
    }
  }
  if ( *((_QWORD *)v15 + 1) > 0x10u )
    return sub_169700(
             (int)"too many abi options (max 16)\n",
             (__int64)a2,
             a3,
             (__int64)a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15);
  else
    return v45 - __readfsqword(0x28u);
}
