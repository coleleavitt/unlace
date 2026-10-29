__int64 __fastcall sub_508600(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 (__fastcall *a6)(__int64 *, __int64, _QWORD, __int64),
        double a7,
        double a8,
        double a9,
        __int64 a10)
{
  _QWORD *v10; // rbx
  __int64 *v12; // r15
  __int64 *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r12
  int v16; // eax
  unsigned __int64 v17; // rbp
  unsigned __int64 **v18; // rax
  void **v19; // rsi
  unsigned __int64 v20; // rbp
  __int64 v21; // r13
  unsigned __int64 v22; // r12
  bool v23; // cf
  unsigned __int64 v24; // rax
  __int64 v25; // rbp
  __int64 **v26; // r14
  __int64 v27; // r9
  char *v28; // rbp
  __int64 *v29; // rax
  void **v30; // r12
  void **v31; // rbp
  void *v32; // rdi
  __int64 v33; // r12
  _QWORD **v34; // rbp
  _QWORD **i; // r12
  char *v36; // rbp
  __int64 v37; // rax
  __int64 v38; // r12
  __int64 v39; // r8
  __int64 v40; // rdx
  char *v41; // r13
  char *v42; // r14
  __int64 v43; // rax
  int v44; // edx
  __int64 v45; // rax
  _QWORD *v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // rbx
  int v50; // eax
  __int64 v51; // rdx
  void **v52; // rdi
  __int64 v53; // rbp
  __int64 v54; // rbx
  __int64 v55; // rax
  void *v56; // rdi
  char v57; // dl
  __int64 v58; // rsi
  __int64 v59; // rdx
  void *v60; // rax
  __int64 v61; // rbp
  void **v62; // r13
  void *v63; // r12
  void **v64; // rbx
  void *v65; // rdi
  char *v66; // rdx
  __int64 v67; // rax
  char *v68; // rax
  unsigned __int64 v69; // rdx
  char *v70; // rax
  unsigned __int64 v71; // rax
  char *v72; // rax
  unsigned __int64 v73; // rbp
  unsigned __int64 v74; // rax
  char *v75; // rax
  unsigned __int64 v76; // r12
  unsigned __int64 v77; // rax
  __m128i v78; // xmm0
  unsigned __int64 v79; // rax
  void **dest; // [rsp+0h] [rbp-C8h]
  __int64 desta; // [rsp+0h] [rbp-C8h]
  _QWORD *destb; // [rsp+0h] [rbp-C8h]
  __int64 destc; // [rsp+0h] [rbp-C8h]
  __int64 v84; // [rsp+8h] [rbp-C0h]
  __int64 v85; // [rsp+8h] [rbp-C0h]
  unsigned int v86; // [rsp+14h] [rbp-B4h]
  unsigned __int64 v88; // [rsp+20h] [rbp-A8h]
  unsigned int v90; // [rsp+34h] [rbp-94h]
  unsigned __int64 v91; // [rsp+38h] [rbp-90h]
  void **src; // [rsp+40h] [rbp-88h]
  __int64 v95; // [rsp+58h] [rbp-70h]
  __m128i v96; // [rsp+60h] [rbp-68h] BYREF
  void *ptr; // [rsp+70h] [rbp-58h] BYREF
  __int128 v98; // [rsp+78h] [rbp-50h]
  unsigned __int64 v99; // [rsp+88h] [rbp-40h]

  v99 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 32) )
    return (unsigned int)-1;
  v10 = (_QWORD *)a1;
  v90 = a5;
  sub_505250(a1, (__int64)"move_ranges from %a to %a size %a changed_netmap %d", a7, a8, a9, a2);
  v13 = *(__int64 **)(a1 + 32);
  v12 = v13;
  dest = (void **)sub_506E00((__int64 ***)v13, a2);
  if ( dest == (void **)(*v12 + 16 * v12[1]) )
    return 0;
  v15 = v10[4];
  v16 = *(_DWORD *)(v15 + 180);
  if ( v16 )
    goto LABEL_4;
  if ( (unsigned __int8)must_journal(v13, a2, v14) )
  {
    v16 = *(_DWORD *)(v15 + 180);
LABEL_4:
    *(_DWORD *)(v15 + 180) = v16 + 1;
  }
  if ( *(_QWORD *)*dest < a2 )
  {
    sub_507990(v10, ((__int64)dest - *v13) >> 4, a2);
    dest = (void **)sub_506E00((__int64 ***)v13, a2);
  }
  v17 = a2 + a4;
  v18 = (unsigned __int64 **)sub_506E00((__int64 ***)v13, v17);
  src = (void **)v18;
  if ( v18 != (unsigned __int64 **)(*v13 + 16 * v13[1]) && **v18 < v17 )
  {
    sub_507990(v10, ((__int64)v18 - *v13) >> 4, v17);
    src = (void **)sub_506E00((__int64 ***)v13, v17);
    dest = (void **)sub_506E00((__int64 ***)v13, a2);
  }
  ptr = nullptr;
  v98 = 0;
  if ( src < dest )
  {
    if ( !under_debugger )
      interr(1427);
    BUG();
  }
  v19 = dest;
  v20 = ((char *)src - (char *)dest) >> 4;
  v95 = v20;
  if ( v20 )
  {
    if ( dest != src )
    {
      v68 = (char *)qvector_reserve(&ptr, 0, ((char *)src - (char *)dest) >> 4, 16);
      ptr = v68;
      if ( (unsigned __int64)v98 < v20 )
      {
        v69 = v98 + 1;
        v70 = &v68[16 * v98];
        *(_QWORD *)v70 = 0;
        *((_DWORD *)v70 + 2) = 0;
        v70[12] = 1;
        if ( v69 < v20 )
        {
          do
          {
            v71 = v69++;
            v72 = (char *)ptr + 16 * v71;
            *(_QWORD *)v72 = 0;
            *((_DWORD *)v72 + 2) = 0;
            v72[12] = 1;
          }
          while ( v20 != v69 );
        }
      }
      *(_QWORD *)&v98 = ((char *)src - (char *)dest) >> 4;
    }
    v21 = a3 - a2;
    qfree(nullptr);
    v88 = v20 - 1;
    v22 = v20 - 1;
    while ( 1 )
    {
      v24 = v88 - v22;
      if ( v21 > 0 )
        v24 = v22;
      v91 = v24;
      v25 = 16 * v24;
      v26 = (__int64 **)&dest[2 * v24];
      sub_5056E0((__int64 *)(v10[4] + 64LL), 1, (__int64)v10, *v26);
      v27 = **v26;
      **v26 = v21 + v27;
      (*v26)[1] += v21;
      if ( a6 )
      {
        v84 = v27;
        v86 = a6(*v26, v21, v90, a10);
        v27 = v84;
        if ( v86 )
          break;
      }
      v28 = (char *)ptr + v25;
      v28[12] = 1;
      *((_DWORD *)v28 + 2) = *((_DWORD *)v26 + 2);
      v29 = *v26;
      *(_QWORD *)v28 = *v26;
      if ( a5 )
      {
        v23 = v22-- == 0;
        if ( v23 )
          goto LABEL_21;
      }
      else
      {
        v85 = v27;
        sub_504300(v10, v27, *v29);
        netnode_supdel(*v10, v85, 339);
        v23 = v22-- == 0;
        if ( v23 )
        {
LABEL_21:
          v86 = 0;
          goto LABEL_22;
        }
      }
    }
    v58 = a3;
    v59 = a2 - a3;
    **v26 += a2 - a3;
    (*v26)[1] += a2 - a3;
    if ( v21 > 0 )
    {
      v60 = ptr;
      v61 = v25 + 16;
      v62 = (void **)((char *)ptr + v61);
      if ( (char *)ptr + v61 == ptr )
      {
        v66 = (char *)ptr + v61;
      }
      else
      {
        destb = v10;
        v63 = ptr;
        v64 = (void **)ptr;
        do
        {
          v65 = *v64;
          v64 += 2;
          qfree(v65);
        }
        while ( v62 != v64 );
        v10 = destb;
        v66 = (char *)ptr;
        v60 = v63;
      }
      v58 = (__int64)v62;
      memmove(v60, v62, &v66[16 * v98] - (char *)v62);
      *(_QWORD *)&v98 = v98 - (v61 >> 4);
      dest = (void **)(v26 + 2);
LABEL_65:
      sub_504C90(v10[4] + 64LL, v58, v59);
      v95 = ((char *)src - (char *)dest) >> 4;
LABEL_22:
      v30 = dest;
      if ( dest != src )
      {
        if ( (((_BYTE)src - (_BYTE)dest) & 0x10) == 0 || (*dest = nullptr, v30 = dest + 2, src != dest + 2) )
        {
          do
          {
            *v30 = nullptr;
            v30 += 4;
            *(v30 - 2) = nullptr;
          }
          while ( src != v30 );
        }
        v31 = dest;
        do
        {
          v32 = *v31;
          v31 += 2;
          qfree(v32);
        }
        while ( v30 != v31 );
      }
      memmove(dest, src, *v12 + 16 * v12[1] - (_QWORD)src);
      v12[1] -= v95;
      v33 = v98;
      v34 = (_QWORD **)ptr;
      v12[3] = (__int64)dest;
      for ( i = &v34[2 * v33]; i != v34; v34 += 2 )
        sub_5056E0((__int64 *)(v10[4] + 64LL), 0, (__int64)v10, *v34);
      v19 = (void **)a3;
      v36 = (char *)sub_506E00((__int64 ***)v12, a3);
      v37 = v98;
      v38 = 16 * v98;
      v39 = (16 * (__int64)v98) >> 4;
      if ( v39 )
      {
        v40 = v12[1];
        v41 = (char *)ptr;
        v42 = &v36[-*v12];
        if ( v12[2] < (unsigned __int64)(v39 + v40) )
        {
          destc = (16 * (__int64)v98) >> 4;
          v67 = qvector_reserve(v12, *v12, v39 + v40, 16);
          v40 = v12[1];
          v39 = destc;
          *v12 = v67;
          v36 = &v42[v67];
        }
        v19 = (void **)v36;
        desta = v39;
        memmove(&v36[v38], v36, 16 * v40 - (_QWORD)v42);
        v43 = 0;
        if ( v38 )
        {
          do
          {
            *(__m128i *)&v36[v43] = _mm_loadu_si128((const __m128i *)&v41[v43]);
            v43 += 16;
          }
          while ( v38 != v43 );
        }
        v12[1] += desta;
        v37 = v98;
        v36 = &v42[*v12];
      }
      v12[3] = (__int64)v36;
      if ( v37 )
      {
        v44 = 0;
        v45 = 0;
        do
        {
          ++v44;
          *((_QWORD *)ptr + 2 * v45) = 0;
          v45 = v44;
        }
        while ( v44 < (unsigned __int64)v98 );
      }
      goto LABEL_43;
    }
    v73 = v98;
    if ( v91 == (_QWORD)v98 )
    {
LABEL_80:
      src = (void **)v26;
      goto LABEL_65;
    }
    v96.m128i_i64[0] = 0;
    v96.m128i_i32[2] = 0;
    v96.m128i_i8[12] = 1;
    if ( v91 < (unsigned __int64)v98 )
    {
      v76 = v91;
      do
      {
        v77 = v76++;
        qfree(*((void **)ptr + 2 * v77));
      }
      while ( v76 < v73 );
    }
    else
    {
      v58 = (__int64)ptr;
      if ( &v96 >= ptr && &v96 < (__m128i *)((char *)ptr + 16 * *((_QWORD *)&v98 + 1)) )
      {
        if ( *((_QWORD *)&v98 + 1) < v91 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v91, 16);
          v73 = v98;
        }
        if ( v73 < v91 )
        {
          do
          {
            v74 = v73++;
            v75 = (char *)ptr + 16 * v74;
            *(_QWORD *)v75 = 0;
            *((_DWORD *)v75 + 2) = 0;
            v75[12] = 1;
          }
          while ( v91 != v73 );
        }
        *(_QWORD *)&v98 = v91;
        qfree(nullptr);
        goto LABEL_79;
      }
      if ( *((_QWORD *)&v98 + 1) < v91 )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v91, 16);
        v73 = v98;
      }
      if ( v73 < v91 )
      {
        v78 = _mm_load_si128(&v96);
        do
        {
          v79 = v73++;
          *((__m128i *)ptr + v79) = v78;
        }
        while ( v91 != v73 );
      }
    }
    *(_QWORD *)&v98 = v91;
LABEL_79:
    qfree(nullptr);
    goto LABEL_80;
  }
  v86 = 0;
LABEL_43:
  v47 = v10;
  sub_504B40((__int64)v10);
  v49 = v10[4];
  v50 = *(_DWORD *)(v49 + 180);
  if ( v50 || (v57 = must_journal(v47, v19, v48), v50 = *(_DWORD *)(v49 + 180), v57) )
    *(_DWORD *)(v49 + 180) = --v50;
  if ( !v50 )
  {
    v51 = *(_QWORD *)(v49 + 72);
    if ( v51 )
    {
      add_undo_record(*(unsigned int *)(v49 + 176), *(_QWORD *)(v49 + 64), v51);
      v56 = *(void **)(v49 + 64);
      if ( v56 )
      {
        *(_QWORD *)(v49 + 72) = 0;
        qfree(v56);
        *(_QWORD *)(v49 + 64) = 0;
        *(_QWORD *)(v49 + 80) = 0;
      }
      *(_QWORD *)(v49 + 144) = -1;
    }
  }
  v52 = (void **)ptr;
  if ( ptr )
  {
    v53 = v98;
    if ( (_QWORD)v98 )
    {
      v54 = 0;
      do
      {
        v55 = v54++;
        qfree(v52[2 * v55]);
        v52 = (void **)ptr;
      }
      while ( v53 != v54 );
    }
    *(_QWORD *)&v98 = 0;
    qfree(v52);
  }
  return v86;
}
