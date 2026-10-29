unsigned __int64 __fastcall sub_3E4780(
        __int64 a1,
        __int64 *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12)
{
  double v14; // xmm0_8
  const char *v15; // rsi
  __int64 v16; // rcx
  double v17; // xmm4_8
  double v18; // xmm5_8
  __int64 v19; // rax
  __int64 v20; // rbx
  unsigned __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // r15
  __int64 v24; // r13
  __int64 v25; // rax
  const char *v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rbx
  __int64 *v29; // rdi
  _BOOL8 v30; // rsi
  unsigned __int64 v32; // rax
  __int64 v33; // r15
  unsigned int v34; // r13d
  __int64 v35; // rax
  __int64 v36; // rdx
  size_t v37; // rbx
  __int64 v38; // rbx
  unsigned __int64 v39; // r8
  size_t v40; // r9
  unsigned __int64 v41; // rdi
  void *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  double v45; // xmm4_8
  double v46; // xmm5_8
  __int64 v47; // r13
  __int64 v48; // rbx
  __int64 v49; // rdi
  const char *v50; // rsi
  void *v51; // r10
  void *v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rcx
  const char *v55; // rsi
  __int64 v56; // rax
  __int64 v57; // [rsp+8h] [rbp-100h]
  __int64 v58; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v59; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v60; // [rsp+10h] [rbp-F8h]
  int v61; // [rsp+1Ch] [rbp-ECh]
  size_t v62; // [rsp+20h] [rbp-E8h]
  void *v63; // [rsp+28h] [rbp-E0h]
  __int64 v64; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v65; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v66; // [rsp+48h] [rbp-C0h]
  const char *v67; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v68; // [rsp+68h] [rbp-A0h]
  void *src; // [rsp+80h] [rbp-88h] BYREF
  __int128 v70; // [rsp+88h] [rbp-80h]
  _BYTE v71[40]; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v72; // [rsp+C8h] [rbp-40h]

  v72 = __readfsqword(0x28u);
  if ( !a2 )
  {
    sub_3E2CD0((__int64 *)a1, nullptr, *(unsigned int *)(a1 + 24), a12, a3);
    sub_3E2FB0((__int64 *)a1, 0, 1, a3);
    return sub_3E2FB0((__int64 *)a1, 0, 0, a3);
  }
  v14 = 0.0;
  v15 = (const char *)&v65;
  v65 = 0;
  v66 = 0;
  sub_3DFFE0(a1, &v65);
  v19 = v66;
  if ( (_QWORD)v66 != a2[1] )
    goto LABEL_22;
  v20 = v65;
  v21 = *a2;
  v22 = 8 * v66;
  v23 = v65 + 8 * v66;
  v57 = *a2;
  if ( v65 == v23 )
    goto LABEL_14;
  while ( 1 )
  {
    v24 = *(_QWORD *)v20;
    if ( *(_DWORD *)(*(_QWORD *)v20 + 56LL) != 3 || !v24 )
    {
      if ( !under_debugger )
      {
        interr(40269, v15, v22, v16, v14);
        goto LABEL_44;
      }
      goto LABEL_56;
    }
    v25 = *(_QWORD *)(v21 + 40);
    if ( !v25 )
      break;
    v15 = *(const char **)(v25 + 16);
    if ( !v15 )
    {
      v14 = qsnprintf(v71, 32, "[%u]", *(_DWORD *)(a1 + 64) - 1227133513 * (unsigned int)((__int64)(v21 - v57) >> 3));
      v15 = v71;
    }
    v26 = &s1;
    if ( *(_QWORD *)(v24 + 88) )
      v26 = *(const char **)(v24 + 80);
    if ( strcmp(v26, v15) )
      break;
    v20 += 8;
    v21 += 56LL;
    if ( v20 == v23 )
      goto LABEL_13;
  }
  if ( v20 == v23 )
  {
LABEL_13:
    v16 = *a2;
    v19 = v66;
    v23 = v65;
    v57 = *a2;
    v22 = 8 * v66;
LABEL_14:
    v27 = v22 - v19;
    v61 = v19;
    v28 = v57 + 8 * v27;
    if ( v28 == v57 )
      goto LABEL_18;
    while ( 1 )
    {
      v29 = *(__int64 **)v23;
      if ( *(_DWORD *)(*(_QWORD *)v23 + 56LL) != 3 || !v29 )
        break;
      v15 = (const char *)v57;
      sub_3E46F0(v29, v57, v27, v16, v14, a4, a5, a6, v17, v18, a9, a10);
      v23 += 8;
      v57 += 56;
      if ( v28 == v57 )
        goto LABEL_18;
    }
    if ( !under_debugger )
      interr(40270, v15, v27, v16, v14);
LABEL_56:
    BUG();
  }
LABEL_22:
  sub_3E2CD0((__int64 *)a1, nullptr, *(unsigned int *)(a1 + 24), v16, v14);
  v21 = *(_QWORD *)(a1 + 48);
  v32 = a2[1];
  v14 = 0.0;
  v67 = nullptr;
  v68 = 0;
  if ( v21 > v32 )
    LODWORD(v21) = v32;
  v61 = v21;
  if ( (int)v21 > 0 )
  {
    v33 = 0;
    v34 = 0;
    do
    {
      v35 = *a2;
      a4 = 0;
      src = nullptr;
      v70 = 0;
      v36 = *(_QWORD *)(v35 + v33 + 40);
      v37 = *(_QWORD *)(v36 + 24);
      if ( !v37
        || (v58 = *(_QWORD *)(v35 + v33 + 40),
            v42 = (void *)qalloc_or_throw(*(_QWORD *)(v36 + 24)),
            *((_QWORD *)&v70 + 1) = v37,
            src = v42,
            memcpy(v42, *(const void **)(v58 + 16), v37),
            *(_QWORD *)&v70 = v37,
            v37 == 1) )
      {
        sub_169A50((__int64 *)&src, (__int64)"[%u]", v34 + *(_DWORD *)(a1 + 64));
      }
      v38 = operator new(0x1B0u);
      sub_3DE430(v38, *(_QWORD *)(a1 + 8), 3);
      v39 = v70;
      v14 = 0.0;
      a5 = 0;
      *(_QWORD *)v38 = &precomp_node_t___vtable;
      *(_BYTE *)(v38 + 376) = 2;
      *(_QWORD *)(v38 + 400) = 0;
      *(_QWORD *)(v38 + 408) = 0;
      *(_OWORD *)(v38 + 384) = 0;
      *(_OWORD *)(v38 + 416) = 0;
      if ( v39 && (v40 = v39 - 1, v39 != 1) )
      {
        v51 = src;
        v52 = *(void **)(v38 + 80);
        if ( *(_QWORD *)(v38 + 96) < v39 )
        {
          v63 = src;
          v62 = v39 - 1;
          v60 = v39;
          v53 = qvector_reserve(v38 + 80, *(_QWORD *)(v38 + 80), v39, 1);
          *(_QWORD *)(v38 + 80) = v53;
          v51 = v63;
          v52 = (void *)v53;
          v40 = v62;
          v39 = v60;
        }
        *(_QWORD *)(v38 + 88) = v39;
        v59 = v39;
        memmove(v52, v51, v40);
        *(_BYTE *)(*(_QWORD *)(v38 + 80) + v59 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v38 + 88) = 0;
      }
      v56 = v68;
      v55 = v67;
      v64 = v38;
      v54 = *((_QWORD *)&v68 + 1);
      v41 = v68 + 1;
      if ( &v64 < (__int64 *)v67 || &v64 >= (__int64 *)&v67[8 * *((_QWORD *)&v68 + 1)] )
      {
        if ( *((_QWORD *)&v68 + 1) < v41 )
        {
          v67 = (const char *)qvector_reserve(&v67, v67, v68 + 1, 8);
          v55 = v67;
          v38 = v64;
          v56 = v68;
        }
      }
      else if ( *((_QWORD *)&v68 + 1) < v41 )
      {
        v67 = (const char *)qvector_reserve(&v67, v67, v68 + 1, 8);
        v55 = v67;
        v56 = v68;
      }
      *(_QWORD *)&v55[8 * v56] = v38;
      *(_QWORD *)&v68 = v68 + 1;
      if ( src )
      {
        *(_QWORD *)&v70 = 0;
        v14 = qfree(src, v55);
      }
      ++v34;
      v33 += 56;
    }
    while ( v34 < (unsigned int)v21 );
LABEL_44:
    sub_3E29E0((__int64 *)a1, (char *)&v67, 0, v54, v14);
    v47 = 0;
    v48 = 0;
    do
    {
      v49 = *(_QWORD *)&v67[8 * v48];
      if ( *(_DWORD *)(v49 + 56) != 3 )
        v49 = 0;
      v50 = (const char *)(v47 + *a2);
      sub_3E46F0((__int64 *)v49, (__int64)v50, v43, v44, v14, a4, a5, a6, v45, v46, a9, a10);
      ++v48;
      v47 += 56;
    }
    while ( (unsigned int)v48 < (unsigned int)v21 );
    if ( v67 )
    {
      *(_QWORD *)&v68 = 0;
      v14 = qfree(v67, v50);
    }
  }
LABEL_18:
  sub_3E2FB0((__int64 *)a1, *(_QWORD *)(a1 + 64) != 0, 1, v14);
  v30 = *(_QWORD *)(a1 + 64) + v61 < (unsigned __int64)*(int *)(a1 + 312);
  sub_3E2FB0((__int64 *)a1, v30, 0, v14);
  if ( v65 )
  {
    *(_QWORD *)&v66 = 0;
    qfree(v65, (const char *)v30);
  }
  return v72 - __readfsqword(0x28u);
}
