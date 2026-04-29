unsigned __int64 __fastcall sub_316C80(_QWORD *a1, unsigned __int64 a2, __m128 a3)
{
  _QWORD *exception; // rdi
  _QWORD *v4; // rdi
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r12
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned __int64 **v11; // r14
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r8
  int *v14; // rbp
  int *v15; // rax
  __int64 v16; // r13
  unsigned __int64 v17; // r15
  __int64 v18; // rbp
  __int64 v19; // rax
  __m128i v20; // xmm1
  unsigned __int64 v21; // rdx
  int v22; // eax
  unsigned __int64 v23; // rax
  char v24; // r9
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __m128i v28; // xmm5
  char v29; // r9
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  __m128i v33; // xmm4
  bool v34; // r13
  unsigned __int64 v35; // rax
  int *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  unsigned __int64 v39; // r13
  __int64 *v40; // r12
  __int64 v41; // rdx
  __int64 *v42; // rbp
  __int64 v43; // rax
  __int64 *v44; // rbp
  __int64 *v45; // rdi
  __int64 *v46; // rdi
  __int64 v47; // rax
  __int64 *v49; // rdi
  __int64 *v50; // rdi
  __m128i v51; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v52; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v53; // [rsp+18h] [rbp-C0h]
  _QWORD *v54; // [rsp+20h] [rbp-B8h]
  unsigned __int64 v55; // [rsp+28h] [rbp-B0h]
  int *v56; // [rsp+30h] [rbp-A8h]
  char v57; // [rsp+3Eh] [rbp-9Ah]
  char v58; // [rsp+3Fh] [rbp-99h]
  _QWORD *v59; // [rsp+40h] [rbp-98h]
  __int64 v60; // [rsp+48h] [rbp-90h]
  _QWORD v61[3]; // [rsp+50h] [rbp-88h] BYREF
  int v62; // [rsp+68h] [rbp-70h] BYREF
  int *v63; // [rsp+70h] [rbp-68h]
  int *v64; // [rsp+78h] [rbp-60h]
  int *v65; // [rsp+80h] [rbp-58h]
  __int64 v66; // [rsp+88h] [rbp-50h]
  unsigned __int64 v67; // [rsp+98h] [rbp-40h]

  v54 = a1;
  v52 = a2;
  v67 = __readfsqword(0x28u);
  v6 = a1[4];
  if ( (int)v6 != a1[1] )
    sub_315AF0(v52, 0xC63Au, *(double *)a3.m128_u64);
  if ( !(_DWORD)v6 )
    sub_315AF0(v52, 0xC63Bu, *(double *)a3.m128_u64);
  if ( (_DWORD)v6 == 1 )
  {
    v7 = *v54;
    if ( !*(_DWORD *)(*v54 + 8LL) )
      sub_315AF0(v52, 0xC63Cu, *(double *)a3.m128_u64);
    v62 = 0;
    v63 = nullptr;
    v56 = &v62;
    v64 = &v62;
    v65 = &v62;
    v66 = 0;
  }
  else
  {
    v62 = 0;
    v63 = nullptr;
    v56 = &v62;
    v64 = &v62;
    v65 = &v62;
    v66 = 0;
    if ( (int)v6 <= 0 )
    {
      sub_315750(nullptr);
      return v67 - __readfsqword(0x28u);
    }
    v7 = *v54;
  }
  v58 = 0;
  v8 = 0;
  v9 = 0;
  v53 = 0;
  v60 = 4LL * (unsigned int)(v6 - 1) + 4;
  v59 = v61;
  while ( 1 )
  {
    v10 = 3 * v53;
    v11 = (unsigned __int64 **)(v7 + 6 * v53);
    if ( v11[1] )
    {
      v16 = v8 + 1;
      v17 = **v11;
      if ( v9 )
      {
        v18 = v8;
        v51 = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
        goto LABEL_27;
      }
      v32 = qalloc(32);
      v9 = v32;
      v51 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v32, (__m128i)(unsigned __int64)v32);
      if ( !v32 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      v33 = _mm_load_si128(&v51);
      *(_OWORD *)(v32 + 16) = 0;
      *(__m128i *)(v32 + 8) = v33;
      *(_QWORD *)v32 = v32 & 0xFFFFFFFFFFFFFFFCLL | 2;
LABEL_23:
      v19 = qalloc(32);
      a3 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v19, (__m128i)(unsigned __int64)v19);
      if ( !v19 )
      {
        v5 = __cxa_allocate_exception(8u);
        *v5 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v5,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      v20 = _mm_load_si128(&v51);
      *(_QWORD *)(v19 + 24) = v17;
      a2 = v9 & 0xFFFFFFFFFFFFFFFCLL;
      v18 = v16;
      *(__m128i *)(v19 + 8) = v20;
      *(_QWORD *)v19 = v9 & 0xFFFFFFFFFFFFFFFCLL | 1;
      v21 = *(_QWORD *)v9;
      *(__m128 *)(v9 + 8) = a3;
      *(_QWORD *)v9 = v19 & 0xFFFFFFFFFFFFFFFCLL | v21 & 3;
      v10 = v9 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v19 & 2LL;
      *(_QWORD *)v19 = v10;
      while ( 1 )
      {
        v22 = v16++;
        v23 = v22 - (int)v8;
        if ( v23 >= (unsigned __int64)v11[1] )
          break;
        v17 = (*v11)[v23];
LABEL_27:
        if ( !v18 )
          goto LABEL_23;
        v24 = 1;
        v25 = *(_QWORD *)v9 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (*(_BYTE *)v25 & 2) != 0 )
        {
          v25 = v9;
          v24 = 1;
        }
        else
        {
          v30 = *(_QWORD *)(v25 + 24);
          if ( v17 < v30 )
          {
LABEL_38:
            v31 = *(_QWORD *)(v25 + 8);
            v24 = 1;
            goto LABEL_39;
          }
          while ( v30 < v17 )
          {
            v31 = *(_QWORD *)(v25 + 16);
            v24 = 0;
LABEL_39:
            if ( (*(_BYTE *)v31 & 2) != 0 )
              goto LABEL_30;
            v25 = v31;
            v30 = *(_QWORD *)(v31 + 24);
            if ( v17 < v30 )
              goto LABEL_38;
          }
          if ( v25 )
            sub_315AF0(v52, 0xC63Fu, *(double *)a3.m128_u64);
        }
LABEL_30:
        v57 = v24;
        v55 = v25;
        v26 = qalloc(32);
        if ( !v26 )
        {
          v4 = __cxa_allocate_exception(8u);
          *v4 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v4,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        v27 = v55;
        v28 = _mm_load_si128(&v51);
        *(_QWORD *)(v26 + 24) = v17;
        v29 = v57;
        *(__m128i *)(v26 + 8) = v28;
        a2 = v27 & 0xFFFFFFFFFFFFFFFCLL;
        *(_QWORD *)v26 = v27 & 0xFFFFFFFFFFFFFFFCLL | 1;
        if ( v27 == v9 )
        {
          a3 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v26, (__m128i)(unsigned __int64)v26);
          v38 = *(_QWORD *)v9 & 3LL;
          *(__m128 *)(v9 + 8) = a3;
          *(_QWORD *)v9 = v26 & 0xFFFFFFFFFFFFFFFCLL | v38;
          v10 = a2 | *(_QWORD *)v26 & 2LL;
          *(_QWORD *)v26 = v10;
        }
        else
        {
          if ( v29 )
          {
            *(_QWORD *)(v27 + 8) = v26;
            if ( *(_QWORD *)(v9 + 8) == v27 )
              *(_QWORD *)(v9 + 8) = v26;
          }
          else
          {
            *(_QWORD *)(v27 + 16) = v26;
            if ( *(_QWORD *)(v9 + 16) == v27 )
              *(_QWORD *)(v9 + 16) = v26;
          }
          a2 = v26;
          v61[0] = v9;
          v61[1] = v18;
          sub_316890(v59, (__int64 *)v26);
        }
        v18 = v16;
      }
      v8 = v18;
    }
    else
    {
      if ( v58 )
        sub_315AF0(v52, 0xC63Eu, *(double *)a3.m128_u64);
      v58 = 1;
    }
    v12 = v53;
    v13 = *(int *)(v54[3] + v53);
    if ( (int)v13 <= 0 || *(_DWORD *)(*(_QWORD *)(v52 + 8) + 64LL) <= (int)v13 )
      sub_315AF0(v52, 0xC640u, *(double *)a3.m128_u64);
    v14 = v63;
    if ( !v63 )
    {
      v14 = v64;
      if ( v64 == v56 )
      {
        v34 = 1;
        goto LABEL_50;
      }
      v14 = v56;
LABEL_53:
      v51.m128i_i64[0] = *(int *)(v54[3] + v53);
      v37 = std::_Rb_tree_decrement(v14, a2, v10, v12, v13);
      v13 = v51.m128i_i64[0];
      v12 = *(_QWORD *)(v37 + 32);
LABEL_19:
      if ( v12 >= v13 )
        sub_315AF0(v52, 0xC641u, *(double *)a3.m128_u64);
      goto LABEL_48;
    }
    while ( 1 )
    {
      v12 = *((_QWORD *)v14 + 4);
      v15 = *((int **)v14 + 2);
      a2 = 1;
      v10 = *((_QWORD *)v14 + 3);
      if ( v13 >= v12 )
      {
        v15 = *((int **)v14 + 3);
        a2 = 0;
      }
      if ( !v15 )
        break;
      v14 = v15;
    }
    if ( !(_BYTE)a2 )
      goto LABEL_19;
    if ( v64 != v14 )
      goto LABEL_53;
LABEL_48:
    v34 = 1;
    if ( v14 != v56 )
      v34 = v13 < *((_QWORD *)v14 + 4);
LABEL_50:
    v51.m128i_i64[0] = v13;
    v35 = operator new(0x28u);
    v36 = v56;
    a2 = v35;
    *(_QWORD *)(v35 + 32) = v51.m128i_i64[0];
    std::_Rb_tree_insert_and_rebalance(v34, v35, v14, v36);
    v53 += 4LL;
    ++v66;
    if ( v60 == v53 )
      break;
    v7 = *v54;
  }
  sub_315750(v63);
  if ( !v9 )
    return v67 - __readfsqword(0x28u);
  if ( !v8 )
    goto LABEL_74;
  v39 = *(_QWORD *)v9;
  v40 = (__int64 *)(*(_QWORD *)v9 & 0xFFFFFFFFFFFFFFFCLL);
  v41 = *v40;
  if ( (*v40 & 2) != 0 )
    goto LABEL_74;
  v42 = (__int64 *)v40[1];
  v43 = *v42;
  if ( (*v42 & 2) == 0 )
  {
    v49 = (__int64 *)v42[1];
    if ( (*(_BYTE *)v49 & 2) != 0 )
    {
      v50 = (__int64 *)v42[2];
      if ( (*(_BYTE *)v50 & 2) != 0 )
      {
LABEL_92:
        *v42 = v43 | 2;
LABEL_82:
        if ( v42 )
          qfree(v42);
        v44 = (__int64 *)v40[2];
        if ( (*(_BYTE *)v44 & 2) != 0 )
        {
LABEL_71:
          v41 = *v40;
          if ( (*v40 & 2) == 0 )
            goto LABEL_86;
          goto LABEL_72;
        }
LABEL_65:
        v45 = (__int64 *)v44[1];
        if ( (*(_BYTE *)v45 & 2) != 0 )
        {
          v46 = (__int64 *)v44[2];
          if ( (*(_BYTE *)v46 & 2) != 0 )
          {
            v47 = *v44;
LABEL_89:
            *v44 = v47 | 2;
LABEL_69:
            if ( v44 )
              qfree(v44);
            goto LABEL_71;
          }
        }
        else
        {
          sub_315430(v45);
          v46 = (__int64 *)v44[2];
          if ( (*(_BYTE *)v46 & 2) != 0 )
            goto LABEL_68;
        }
        sub_315430(v46);
LABEL_68:
        v47 = *v44;
        if ( (*v44 & 2) != 0 )
          goto LABEL_69;
        goto LABEL_89;
      }
    }
    else
    {
      sub_315430(v49);
      v50 = (__int64 *)v42[2];
      if ( (*(_BYTE *)v50 & 2) != 0 )
        goto LABEL_81;
    }
    sub_315430(v50);
LABEL_81:
    v43 = *v42;
    if ( (*v42 & 2) != 0 )
      goto LABEL_82;
    goto LABEL_92;
  }
  v44 = (__int64 *)v40[2];
  if ( (*(_BYTE *)v44 & 2) == 0 )
    goto LABEL_65;
LABEL_86:
  *v40 = v41 | 2;
LABEL_72:
  if ( v39 > 3 )
    qfree(v40);
LABEL_74:
  qfree(v9);
  return v67 - __readfsqword(0x28u);
}
