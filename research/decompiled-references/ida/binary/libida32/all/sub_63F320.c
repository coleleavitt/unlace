__int64 __fastcall sub_63F320(
        __int64 *a1,
        __int64 *a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  unsigned int v10; // r15d
  __int64 v11; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  char *v17; // rcx
  __int64 v18; // rax
  char *v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // ebx
  const char *i; // rbx
  int v23; // r9d
  size_t v24; // rax
  double v25; // xmm4_8
  double v26; // xmm5_8
  size_t v27; // r8
  __int64 v28; // r12
  int v29; // ebx
  unsigned int v30; // edx
  char v31; // cl
  __int64 v32; // rsi
  __int64 v33; // rax
  char *v34; // rdx
  __int64 v35; // rbx
  __int64 v36; // r14
  char *v37; // rax
  void *v38; // rdi
  void *v40; // rdi
  size_t v41; // rdx
  __int64 v42; // [rsp+0h] [rbp-160h]
  char *src; // [rsp+8h] [rbp-158h]
  char *srca; // [rsp+8h] [rbp-158h]
  char *srcb; // [rsp+8h] [rbp-158h]
  char *srcc; // [rsp+8h] [rbp-158h]
  void *srcd; // [rsp+8h] [rbp-158h]
  size_t v48; // [rsp+10h] [rbp-150h]
  size_t v49; // [rsp+10h] [rbp-150h]
  size_t n; // [rsp+28h] [rbp-138h]
  size_t na; // [rsp+28h] [rbp-138h]
  size_t nb; // [rsp+28h] [rbp-138h]
  size_t nc; // [rsp+28h] [rbp-138h]
  unsigned __int8 v55[4]; // [rsp+34h] [rbp-12Ch] BYREF
  char *s; // [rsp+38h] [rbp-128h] BYREF
  char *v57; // [rsp+40h] [rbp-120h] BYREF
  char *v58; // [rsp+48h] [rbp-118h] BYREF
  char *v59; // [rsp+50h] [rbp-110h] BYREF
  __int64 v60; // [rsp+58h] [rbp-108h] BYREF
  void *v61; // [rsp+60h] [rbp-100h] BYREF
  __int128 v62; // [rsp+68h] [rbp-F8h]
  void *ptr; // [rsp+80h] [rbp-E0h] BYREF
  __int128 v64; // [rsp+88h] [rbp-D8h]
  void *v65; // [rsp+A0h] [rbp-C0h] BYREF
  __int128 v66; // [rsp+A8h] [rbp-B8h]
  void *v67; // [rsp+C0h] [rbp-A0h] BYREF
  __int128 v68; // [rsp+C8h] [rbp-98h]
  _QWORD v69[2]; // [rsp+E0h] [rbp-80h] BYREF
  __int64 *v70; // [rsp+F0h] [rbp-70h]
  void *dest; // [rsp+F8h] [rbp-68h] BYREF
  __int128 v72; // [rsp+100h] [rbp-60h]
  void *v73; // [rsp+110h] [rbp-50h] BYREF
  __int128 v74; // [rsp+118h] [rbp-48h]
  unsigned __int64 v75; // [rsp+128h] [rbp-38h]

  v10 = 0;
  v11 = *a1;
  v75 = __readfsqword(0x28u);
  v69[1] = v11;
  v73 = nullptr;
  v74 = 0;
  v69[0] = off_2B0D1D8;
  dest = nullptr;
  v72 = 0;
  v13 = a2[8];
  v70 = a2;
  v14 = *(unsigned int *)(v13 + 48);
  v42 = v13;
  if ( *(_DWORD *)(v13 + 48) )
  {
    v73 = (void *)qvector_reserve(&v73, 0, v14, 24);
    if ( (unsigned __int64)v74 < v14 )
    {
      v15 = v74 + 1;
      v16 = 24 * v74;
      v17 = (char *)v73 + 24 * v74;
      *(_QWORD *)v17 = 0;
      *(_OWORD *)(v17 + 8) = 0;
      if ( v15 < v14 )
      {
        v18 = v16 + 24;
        do
        {
          ++v15;
          v19 = (char *)v73 + v18;
          v18 += 24;
          *(_QWORD *)v19 = 0;
          *(_OWORD *)(v19 + 8) = 0;
        }
        while ( v14 != v15 );
      }
    }
    v20 = a2[8];
    *(_QWORD *)&v74 = v14;
    v21 = 1;
    v10 = *(_DWORD *)(v20 + 48);
    v42 = v20;
    if ( v10 > 1 )
    {
      do
        sub_634030(v69, v21++, 0);
      while ( v21 != v10 );
    }
  }
  for ( i = (const char *)sub_6301E0((__int64)a1, (__int64)a2, 0);
        i;
        i = (const char *)sub_632130((__int64)a1, (__int64)a2, i, 0) )
  {
    if ( !(unsigned int)get_named_type(
                          (int)v70,
                          (int)i,
                          64,
                          (int)&s,
                          (int)&v57,
                          (int)&v58,
                          (__int64)&v59,
                          (__int64)v55,
                          (__int64)&v60) )
    {
      if ( !under_debugger )
        interr(1123);
LABEL_58:
      BUG();
    }
    v61 = nullptr;
    v62 = 0;
    if ( s )
    {
      src = s;
      n = strlen(s);
      v61 = (void *)qvector_reserve(&v61, 0, n + 1, 1);
      *(_QWORD *)&v62 = n + 1;
      memmove(v61, src, n);
      *((_BYTE *)v61 + n) = 0;
    }
    ptr = nullptr;
    v64 = 0;
    if ( v57 )
    {
      srca = v57;
      na = strlen(v57);
      ptr = (void *)qvector_reserve(&ptr, 0, na + 1, 1);
      *(_QWORD *)&v64 = na + 1;
      memmove(ptr, srca, na);
      *((_BYTE *)ptr + na) = 0;
    }
    v65 = nullptr;
    v66 = 0;
    if ( v58 )
    {
      srcb = v58;
      nb = strlen(v58);
      v65 = (void *)qvector_reserve(&v65, 0, nb + 1, 1);
      *(_QWORD *)&v66 = nb + 1;
      memmove(v65, srcb, nb);
      *((_BYTE *)v65 + nb) = 0;
    }
    v67 = nullptr;
    v68 = 0;
    if ( v59 )
    {
      srcc = v59;
      nc = strlen(v59);
      v67 = (void *)qvector_reserve(&v67, 0, nc + 1, 1);
      *(_QWORD *)&v68 = nc + 1;
      memmove(v67, srcc, nc);
      *((_BYTE *)v67 + nc) = 0;
    }
    if ( (int)sub_6336F0((int)v70, (__int64)v69, (__m128i *)&v61, (__m128i *)&ptr, 0, v23) > 0 )
    {
      v24 = strlen(i);
      v27 = v24;
      if ( v24 )
      {
        v40 = dest;
        v41 = v24 + 1;
        if ( *((_QWORD *)&v72 + 1) < v24 + 1 )
        {
          srcd = (void *)v24;
          v49 = v24 + 1;
          dest = (void *)qvector_reserve(&dest, dest, v41, 1);
          v27 = (size_t)srcd;
          v40 = dest;
          v41 = v49;
        }
        *(_QWORD *)&v72 = v41;
        v48 = v27;
        memmove(v40, i, v27);
        *((_BYTE *)dest + v48) = 0;
      }
      else
      {
        *(_QWORD *)&v72 = 0;
      }
      i = (const char *)dest;
      if ( (unsigned int)sub_63DDA0(
                           *(__int64 **)(qword_2CA1698 + 1480),
                           v70,
                           (char *)dest,
                           68,
                           (char *)v61,
                           (char *)ptr,
                           0.0,
                           a4,
                           a5,
                           a6,
                           v25,
                           v26,
                           a9,
                           a10,
                           (char *)v65,
                           (char *)v67,
                           v55,
                           &v60) )
      {
        if ( !under_debugger )
          interr(1124);
        goto LABEL_58;
      }
    }
    if ( v67 )
    {
      *(_QWORD *)&v68 = 0;
      qfree(v67);
    }
    if ( v65 )
    {
      *(_QWORD *)&v66 = 0;
      qfree(v65);
    }
    if ( ptr )
    {
      *(_QWORD *)&v64 = 0;
      qfree(ptr);
    }
    if ( v61 )
    {
      *(_QWORD *)&v62 = 0;
      qfree(v61);
    }
  }
  v28 = 24;
  v29 = 1;
  if ( v10 > 1 )
  {
    do
    {
      while ( *(_QWORD *)((char *)v73 + v28 + 8) > 1u )
      {
        ++v29;
        v28 += 24;
        if ( v10 == v29 )
          goto LABEL_43;
      }
      v30 = v29;
      v31 = 0;
      if ( v29 < 0 )
      {
        v30 = v29 & 0x7FFFFFFF;
        v31 = 1;
      }
      v32 = (__int64)a2;
      if ( !a2 )
        v32 = a1[1];
      sub_633C40(a1, v32, v30, v31);
      ++v29;
      v28 += 24;
    }
    while ( v10 != v29 );
  }
LABEL_43:
  qfree(*(void **)(v42 + 40));
  v33 = *(_QWORD *)v42;
  *(_QWORD *)(v42 + 40) = 0;
  *(_DWORD *)(v42 + 48) = 0;
  *(_DWORD *)(v33 + 32) &= ~0x10u;
  *(_DWORD *)(v42 + 8) &= ~2u;
  v34 = (char *)v73;
  v69[0] = off_2B0D1D8;
  if ( v73 )
  {
    if ( (_QWORD)v74 )
    {
      v35 = 0;
      v36 = v74;
      do
      {
        v37 = &v34[24 * v35];
        v38 = *(void **)v37;
        if ( *(_QWORD *)v37 )
        {
          *((_QWORD *)v37 + 1) = 0;
          qfree(v38);
          v34 = (char *)v73;
        }
        ++v35;
      }
      while ( v36 != v35 );
    }
    *(_QWORD *)&v74 = 0;
    qfree(v34);
  }
  if ( dest )
  {
    *(_QWORD *)&v72 = 0;
    qfree(dest);
  }
  return 1;
}

