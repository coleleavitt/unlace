__int64 __fastcall sub_651630(_QWORD *a1, unsigned int a2, unsigned __int8 a3)
{
  signed int v3; // ebx
  __int64 *v4; // r13
  unsigned int v6; // eax
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 *v13; // rbx
  unsigned __int64 v14; // rcx
  __int64 v15; // r14
  size_t v16; // r12
  const void *v17; // r13
  void *v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 *v23; // r9
  const char *v24; // r8
  size_t v25; // rax
  const char *v26; // r8
  size_t v27; // r12
  size_t v28; // r12
  size_t v29; // r12
  size_t v30; // r12
  size_t v31; // r12
  __int64 v32; // rsi
  _QWORD *v33; // rbx
  __int64 v34; // rax
  void *v35; // rdi
  __int64 v36; // rdx
  const char *v37; // rdx
  __int64 v38; // rax
  char v39; // cl
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 *v43; // rdi
  __int64 v44; // rax
  const char *v45; // [rsp+8h] [rbp-108h]
  __int64 *src; // [rsp+10h] [rbp-100h]
  char *srca; // [rsp+10h] [rbp-100h]
  char *srcb; // [rsp+10h] [rbp-100h]
  char *srcc; // [rsp+10h] [rbp-100h]
  char *srcd; // [rsp+10h] [rbp-100h]
  void *srce; // [rsp+10h] [rbp-100h]
  const char *v52; // [rsp+18h] [rbp-F8h]
  __int64 *v53; // [rsp+18h] [rbp-F8h]
  __int64 *v54; // [rsp+18h] [rbp-F8h]
  unsigned __int8 v56[4]; // [rsp+38h] [rbp-D8h] BYREF
  int v57; // [rsp+3Ch] [rbp-D4h] BYREF
  char *s; // [rsp+40h] [rbp-D0h] BYREF
  char *v59; // [rsp+48h] [rbp-C8h] BYREF
  char *v60; // [rsp+50h] [rbp-C0h] BYREF
  char *v61; // [rsp+58h] [rbp-B8h] BYREF
  void *v62; // [rsp+60h] [rbp-B0h] BYREF
  __int128 v63; // [rsp+68h] [rbp-A8h]
  void *v64; // [rsp+80h] [rbp-90h] BYREF
  __int128 v65; // [rsp+88h] [rbp-88h]
  void *v66; // [rsp+A0h] [rbp-70h] BYREF
  __int128 v67; // [rsp+A8h] [rbp-68h]
  void *ptr; // [rsp+C0h] [rbp-50h] BYREF
  __int128 v69; // [rsp+C8h] [rbp-48h]
  unsigned __int64 v70; // [rsp+D8h] [rbp-38h]

  v3 = a2;
  v4 = *(__int64 **)(a1[1] + 1672LL);
  v70 = __readfsqword(0x28u);
  if ( a2 )
  {
    v6 = sub_64BE30((__int64)v4, a1[2], a2);
    v7 = v6;
    if ( a2 != v6 )
    {
      if ( (unsigned __int8)sub_651630(a1, v6, a3) )
      {
        if ( 24 * v7 != 24LL * a2 )
        {
          v11 = a1[6];
          v12 = v11 + 24 * v7;
          v13 = (__int64 *)(v11 + 24LL * a2);
          v14 = *(_QWORD *)(v12 + 8);
          v15 = v14;
          if ( !v14 || (v16 = v14 - 1, v14 == 1) )
          {
            v13[1] = 0;
          }
          else
          {
            v17 = *(const void **)v12;
            v18 = (void *)*v13;
            if ( v13[2] < v14 )
            {
              v41 = qvector_reserve(v13, *v13, v14, 1);
              *v13 = v41;
              v18 = (void *)v41;
            }
            v13[1] = v15;
            memmove(v18, v17, v16);
            *(_BYTE *)(*v13 + v15 - 1) = 0;
          }
        }
        return 1;
      }
      return 0;
    }
  }
  v8 = a2;
  v9 = 24LL * a2;
  if ( *(_QWORD *)(a1[6] + v9 + 8) > 1u )
    return 1;
  v19 = a1[2];
  if ( !v19 )
    v19 = v4[1];
  v20 = sub_64DE20(v19, a2);
  if ( !v20 )
    return 0;
  sub_6474E0(
    v20,
    (const char **)&s,
    (unsigned __int64)&v59,
    (unsigned __int64)&v60,
    (unsigned __int64)&v61,
    (unsigned __int64)v56);
  v21 = a1[2];
  if ( !v21 )
    v21 = v4[1];
  v22 = sub_64DE20(v21, a2);
  if ( v22 )
  {
    v24 = (const char *)(v22 + 4);
    if ( *(_BYTE *)(v22 + 4) == 35 && !*(_BYTE *)(v22 + 5) )
      v24 = (const char *)(v22 + 5);
    v52 = v24;
    src = (__int64 *)(v9 + a1[6]);
    v25 = strlen(v24);
    v26 = v52;
    v23 = src;
    v27 = v25;
    if ( v25 )
    {
      v35 = (void *)*src;
      v36 = v25 + 1;
      if ( src[2] < v25 + 1 )
      {
        v42 = *src;
        v43 = src;
        v45 = v52;
        srce = (void *)(v25 + 1);
        v54 = v23;
        v44 = qvector_reserve(v43, v42, v36, 1);
        v23 = v54;
        v26 = v45;
        v36 = (__int64)srce;
        v35 = (void *)v44;
        *v54 = v44;
      }
      v23[1] = v36;
      v53 = v23;
      memmove(v35, v26, v27);
      LODWORD(v23) = (_DWORD)v53;
      *(_BYTE *)(*v53 + v27) = 0;
    }
    else
    {
      src[1] = 0;
    }
  }
  else if ( !a3 )
  {
    return 0;
  }
  v62 = nullptr;
  v63 = 0;
  if ( s )
  {
    srca = s;
    v28 = strlen(s);
    v62 = (void *)qvector_reserve(&v62, 0, v28 + 1, 1);
    *(_QWORD *)&v63 = v28 + 1;
    memmove(v62, srca, v28);
    *((_BYTE *)v62 + v28) = 0;
  }
  v64 = nullptr;
  v65 = 0;
  if ( v59 )
  {
    srcb = v59;
    v29 = strlen(v59);
    v64 = (void *)qvector_reserve(&v64, 0, v29 + 1, 1);
    *(_QWORD *)&v65 = v29 + 1;
    memmove(v64, srcb, v29);
    *((_BYTE *)v64 + v29) = 0;
  }
  v66 = nullptr;
  v67 = 0;
  if ( v60 )
  {
    srcc = v60;
    v30 = strlen(v60);
    v66 = (void *)qvector_reserve(&v66, 0, v30 + 1, 1);
    *(_QWORD *)&v67 = v30 + 1;
    memmove(v66, srcc, v30);
    *((_BYTE *)v66 + v30) = 0;
  }
  ptr = nullptr;
  v69 = 0;
  if ( v61 )
  {
    srcd = v61;
    v31 = strlen(v61);
    ptr = (void *)qvector_reserve(&ptr, 0, v31 + 1, 1);
    *(_QWORD *)&v69 = v31 + 1;
    memmove(ptr, srcd, v31);
    *((_BYTE *)ptr + v31) = 0;
  }
  if ( (int)sub_650CF0(a1[2], (__int64)a1, (__m128i *)&v62, (__m128i *)&v64, 0, (int)v23) >= 0 )
  {
    v32 = v9 + a1[6];
    if ( *(_QWORD *)(v32 + 8) > 1u )
      goto LABEL_33;
    sub_6B1A70(v4, v32, v62, v64);
    v37 = haystack;
    v38 = v9 + a1[6];
    if ( *(_QWORD *)(v38 + 8) )
      v37 = *(const char **)v38;
    if ( (unsigned int)sub_64F830((__int64)v4, a1[2], v37, 3, nullptr, 0, 0, 0, 0, nullptr) )
    {
      v39 = 0;
      if ( v3 < 0 )
      {
        v3 &= ~0x80000000;
        v39 = 1;
      }
      v40 = a1[2];
      if ( !v40 )
        v40 = v4[1];
      sub_651240(v4, v40, v3, v39);
    }
    else
    {
LABEL_33:
      v33 = *(_QWORD **)(a1[2] + 64LL);
      sub_6507E0(v4, v33, v33[4] + *(unsigned int *)(v33[5] + 4 * v8), 1);
      v34 = a1[6];
      v57 = 0;
      *(_DWORD *)(v33[5] + 4 * v8) = (unsigned int)sub_64DC80(
                                                     *(__int64 **)(a1[1] + 1672LL),
                                                     (__int64)v33,
                                                     *(char **)(v34 + v9),
                                                     (char *)v62,
                                                     (char *)v64,
                                                     (char *)v66,
                                                     (char *)ptr,
                                                     v56,
                                                     (__int64 *)&v57,
                                                     0)
                                   - *((_DWORD *)v33 + 8);
    }
    if ( ptr )
    {
      *(_QWORD *)&v69 = 0;
      qfree(ptr);
    }
    if ( v66 )
    {
      *(_QWORD *)&v67 = 0;
      qfree(v66);
    }
    if ( v64 )
    {
      *(_QWORD *)&v65 = 0;
      qfree(v64);
    }
    if ( v62 )
    {
      *(_QWORD *)&v63 = 0;
      qfree(v62);
    }
    return 1;
  }
  if ( ptr )
  {
    *(_QWORD *)&v69 = 0;
    qfree(ptr);
  }
  if ( v66 )
  {
    *(_QWORD *)&v67 = 0;
    qfree(v66);
  }
  if ( v64 )
  {
    *(_QWORD *)&v65 = 0;
    qfree(v64);
  }
  if ( !v62 )
    return 0;
  *(_QWORD *)&v63 = 0;
  qfree(v62);
  return 0;
}
