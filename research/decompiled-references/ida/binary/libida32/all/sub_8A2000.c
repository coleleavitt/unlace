__int64 __fastcall sub_8A2000(__int64 a1, const char *a2, int a3, _QWORD *a4, _QWORD *a5, _QWORD *a6, int a7)
{
  char *v7; // r12
  __int64 v9; // r13
  __int64 v11; // r13
  __int64 v12; // r14
  _QWORD *v13; // rbx
  int v14; // r8d
  int v15; // r9d
  unsigned int v16; // r13d
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v20; // r15
  __int64 v21; // r13
  __int64 v22; // r15
  __int64 v23; // rbx
  void *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r14
  __int64 v27; // rcx
  __int64 v28; // r15
  void *v29; // rax
  __int64 v30; // r14
  __int64 v31; // rax
  _QWORD *v32; // rcx
  __int128 v33; // xmm0
  __int64 i; // r10
  __int64 v35; // r10
  __int64 v36; // r15
  void *v37; // rax
  bool v38; // [rsp+7h] [rbp-C9h]
  size_t n; // [rsp+10h] [rbp-C0h]
  size_t na; // [rsp+10h] [rbp-C0h]
  size_t nc; // [rsp+10h] [rbp-C0h]
  _QWORD *v43; // [rsp+18h] [rbp-B8h]
  _QWORD *v44; // [rsp+18h] [rbp-B8h]
  _QWORD *v45; // [rsp+20h] [rbp-B0h]
  __int64 (__fastcall **v46)(); // [rsp+28h] [rbp-A8h] BYREF
  char v47; // [rsp+30h] [rbp-A0h]
  int v48; // [rsp+34h] [rbp-9Ch]
  __int64 v49; // [rsp+38h] [rbp-98h]
  __int128 v50; // [rsp+40h] [rbp-90h]
  __int64 v51; // [rsp+50h] [rbp-80h]
  __int128 v52; // [rsp+58h] [rbp-78h]
  __int64 v53; // [rsp+68h] [rbp-68h]
  __int128 v54; // [rsp+70h] [rbp-60h]
  int v55; // [rsp+80h] [rbp-50h]
  bool v56; // [rsp+84h] [rbp-4Ch]
  unsigned __int64 v57; // [rsp+90h] [rbp-40h]

  v7 = (char *)a2;
  v9 = a4[1];
  v57 = __readfsqword(0x28u);
  v38 = a2 != nullptr;
  v47 = 84;
  v46 = &off_2B14F08;
  v48 = a3;
  v49 = 0;
  v50 = 0;
  if ( v9 )
  {
    v30 = 0;
    v31 = qalloc_or_throw(24 * v9, a2);
    *((_QWORD *)&v50 + 1) = v9;
    v32 = a4;
    v33 = 0;
    v49 = v31;
    for ( i = v31; ; i = v49 )
    {
      v35 = 24 * v30 + i;
      v36 = *v32 + 24 * v30;
      *(_QWORD *)v35 = 0;
      *(_OWORD *)(v35 + 8) = v33;
      if ( *(_QWORD *)(v36 + 8) )
      {
        v45 = v32;
        ++v30;
        v44 = (_QWORD *)v35;
        nc = *(_QWORD *)(v36 + 8);
        v37 = (void *)qalloc_or_throw(nc, a2);
        v44[2] = nc;
        *v44 = v37;
        a2 = *(const char **)v36;
        memcpy(v37, *(const void **)v36, nc);
        v33 = 0;
        v32 = v45;
        v44[1] = nc;
        if ( v9 == v30 )
        {
LABEL_27:
          *(_QWORD *)&v50 = v9;
          break;
        }
      }
      else if ( v9 == ++v30 )
      {
        goto LABEL_27;
      }
    }
  }
  v11 = a5[1];
  v51 = 0;
  v52 = 0;
  if ( !v11 )
    goto LABEL_3;
  v51 = qalloc_or_throw(24 * v11, a2);
  v25 = v51;
  v26 = 0;
  *((_QWORD *)&v52 + 1) = v11;
  while ( 1 )
  {
    v27 = 24 * v26 + v25;
    v28 = *a5 + 24 * v26;
    *(_QWORD *)v27 = 0;
    *(_OWORD *)(v27 + 8) = 0;
    if ( *(_QWORD *)(v28 + 8) )
      break;
    if ( v11 == ++v26 )
      goto LABEL_21;
LABEL_18:
    v25 = v51;
  }
  v43 = (_QWORD *)v27;
  na = *(_QWORD *)(v28 + 8);
  v29 = (void *)qalloc_or_throw(na, a2);
  ++v26;
  v43[2] = na;
  *v43 = v29;
  a2 = *(const char **)v28;
  memcpy(v29, *(const void **)v28, na);
  v43[1] = na;
  if ( v11 != v26 )
    goto LABEL_18;
LABEL_21:
  *(_QWORD *)&v52 = v11;
LABEL_3:
  v12 = a6[1];
  v53 = 0;
  v54 = 0;
  if ( v12 )
  {
    v53 = qalloc_or_throw(24 * v12, a2);
    v20 = v53;
    v21 = 0;
    *((_QWORD *)&v54 + 1) = v12;
    while ( 1 )
    {
      v22 = 24 * v21 + v20;
      v23 = 24 * v21 + *a6;
      *(_QWORD *)v22 = 0;
      *(_OWORD *)(v22 + 8) = 0;
      if ( *(_QWORD *)(v23 + 8) )
      {
        n = *(_QWORD *)(v23 + 8);
        v24 = (void *)qalloc_or_throw(n, a2);
        *(_QWORD *)v22 = v24;
        ++v21;
        *(_QWORD *)(v22 + 16) = n;
        a2 = *(const char **)v23;
        memcpy(v24, *(const void **)v23, n);
        *(_QWORD *)(v22 + 8) = n;
        if ( v12 == v21 )
        {
LABEL_15:
          *(_QWORD *)&v54 = v12;
          break;
        }
      }
      else if ( v12 == ++v21 )
      {
        goto LABEL_15;
      }
      v20 = v53;
    }
  }
  v55 = a7;
  v56 = v38;
  v13 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)(a1 + 40) + 80LL))(
                    a1 + 40,
                    &v46);
  v16 = sub_89A5C0((_QWORD *)(a1 + 40), (__int64)v13, 85, nullptr, v14, v15);
  if ( !v16 && v38 )
  {
    v17 = *(_QWORD *)v7;
    v18 = _mm_loadu_si128((const __m128i *)(v7 + 8));
    *(_QWORD *)v7 = v13[2];
    *((_QWORD *)v7 + 1) = v13[3];
    *((_QWORD *)v7 + 2) = v13[4];
    v13[2] = v17;
    *(__m128i *)(v13 + 3) = v18;
  }
  if ( v13 )
    (*(void (__fastcall **)(_QWORD *))(*v13 + 8LL))(v13);
  sub_8B6C90(&v46);
  return v16;
}

