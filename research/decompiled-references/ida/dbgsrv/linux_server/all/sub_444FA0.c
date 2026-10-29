/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_444FA0
// Address: 0x0000000000444FA0

//----- (0000000000444FA0) ----------------------------------------------------
__int64 __fastcall sub_444FA0(
        __m128i *a1,
        unsigned __int8 *a2,
        __int64 a3,
        signed __int64 a4,
        char a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  unsigned __int8 *v14; // r13
  unsigned __int8 v18; // al
  unsigned int v19; // eax
  double v20; // xmm4_8
  double v21; // xmm5_8
  __int64 v22; // r14
  __int64 v23; // r13
  _QWORD *v24; // r14
  __int64 v25; // r15
  const char *v26; // rax
  const char *v27; // rsi
  const char *v28; // rdi
  int v29; // eax
  _QWORD *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v34; // rax
  void *v35; // rax
  __m128i v36; // xmm0
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  const void *v39; // rbp
  unsigned __int64 v40; // r13
  void *v41; // rdi
  double v42; // xmm4_8
  double v43; // xmm5_8
  double v44; // xmm4_8
  double v45; // xmm5_8
  char *v46; // rdi
  int v47; // eax
  char v48; // al
  __int64 v49; // rdx
  double v50; // xmm4_8
  double v51; // xmm5_8
  __int64 v52; // r12
  _QWORD *v53; // [rsp+0h] [rbp-D8h]
  unsigned int v54; // [rsp+0h] [rbp-D8h]
  __int64 v55; // [rsp+8h] [rbp-D0h]
  const char *v56; // [rsp+20h] [rbp-B8h]
  char *s2; // [rsp+28h] [rbp-B0h]
  void *ptr; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v59; // [rsp+38h] [rbp-A0h] BYREF
  char v60; // [rsp+50h] [rbp-88h] BYREF
  __int128 v61; // [rsp+58h] [rbp-80h]
  __int64 v62; // [rsp+68h] [rbp-70h]
  char v63[40]; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v64; // [rsp+98h] [rbp-40h]

  v64 = __readfsqword(0x28u);
  if ( !a1 )
    return sub_479EB0(0x620u);
  v14 = a2;
  if ( !a2 )
    return sub_479EB0(0x620u);
  while ( 1 )
  {
    v18 = *v14;
    if ( *v14 == 7 )
    {
      v34 = *((_QWORD *)v14 + 2);
      if ( !v34 )
      {
LABEL_26:
        ptr = nullptr;
        v59 = 0;
LABEL_27:
        sub_441540((__int64)a1, 0.0, a7, a8, a9, a10, a11, a12, a13);
        v35 = ptr;
        v36 = _mm_loadu_si128(&v59);
        a1->m128i_i8[0] = 7;
        a1->m128i_i64[1] = (__int64)v35;
        a1[1] = v36;
        return 0;
      }
      v37 = v34 - 1;
      if ( a3 >= 0 || (a3 += v37, a3 >= 0) )
      {
        if ( v37 <= a3 )
          a3 = v37;
        if ( (a5 & 1) != 0 )
        {
          if ( a3 + 1 < 0 )
            goto LABEL_26;
          if ( v37 >= a3 + 1 )
          {
            v39 = (const void *)(*((_QWORD *)v14 + 1) + a3);
            a4 = 1;
            ptr = nullptr;
            v59 = 0;
            goto LABEL_38;
          }
        }
        else
        {
          if ( a4 < 0 )
          {
            a4 += v37;
            if ( a4 < 0 )
              goto LABEL_26;
          }
          if ( v37 > a4 )
            v37 = a4;
        }
        if ( v37 < a3 )
          goto LABEL_26;
      }
      else
      {
        if ( (a5 & 1) != 0 )
        {
          if ( !v37 )
            goto LABEL_26;
          v39 = *((const void **)v14 + 1);
          v40 = 2;
          ptr = nullptr;
          v59 = 0;
          a4 = 1;
          goto LABEL_73;
        }
        if ( a4 >= 0 )
        {
          v39 = *((const void **)v14 + 1);
          ptr = nullptr;
          if ( v37 <= a4 )
            a4 = v37;
          v59 = 0;
          v40 = a4 + 1;
          if ( !a4 )
            goto LABEL_27;
          goto LABEL_73;
        }
        v52 = v37 + a4;
        if ( v52 < 0 )
          goto LABEL_26;
        if ( v37 > v52 )
          v37 = v52;
        a3 = 0;
      }
      v38 = *((_QWORD *)v14 + 1);
      ptr = nullptr;
      v59 = 0;
      a4 = v37 - a3;
      if ( v37 == a3 )
        goto LABEL_27;
      v39 = (const void *)(v38 + a3);
LABEL_38:
      v40 = a4 + 1;
      if ( a4 == -1 )
      {
        v41 = nullptr;
        a4 = -1;
LABEL_40:
        v59.m128i_i64[0] = v40;
        memmove(v41, v39, a4);
        *((_BYTE *)ptr + a4) = 0;
        goto LABEL_27;
      }
LABEL_73:
      ptr = sub_481540((__int64)&ptr, nullptr, v40, 1u);
      v41 = ptr;
      goto LABEL_40;
    }
    if ( v18 != 10 )
      break;
    v14 = sub_4419D0(v14, 0, a6, a7, a8, a9, a10, a11, a12, a13);
    if ( !v14 )
      return sub_479E90();
  }
  if ( v18 != 5 )
    return sub_479EB0(0x620u);
  if ( (a5 & 1) != 0 )
  {
    sub_485490(v63, 32, "%llu", a3);
    return sub_444A40(a1, (__int64)v14, v63, 0, a6, a7, a8, a9, v42, v43, a12, a13);
  }
  v60 = 2;
  v62 = 0;
  v61 = 0;
  v19 = sub_442A20((__int64)&v60, 0, 0.0, a7, a8, a9, a10, a11, a12, a13);
  if ( v19 )
  {
LABEL_42:
    v54 = v19;
    sub_441540((__int64)&v60, 0.0, a7, a8, a9, v20, v21, a12, a13);
    return v54;
  }
  v22 = *((_QWORD *)v14 + 1);
  ptr = nullptr;
  v59 = 0;
  ptr = sub_481540((__int64)&ptr, nullptr, 3u, 1u);
  v23 = v22 + 8;
  v59.m128i_i64[0] = 3;
  *(_WORD *)ptr = -209;
  *((_BYTE *)ptr + 2) = 0;
  v24 = *(_QWORD **)(v22 + 16);
  s2 = (char *)ptr;
  if ( !v24 )
  {
    if ( ptr )
    {
      v59.m128i_i64[0] = 0;
      j__free(ptr);
    }
    goto LABEL_48;
  }
  v25 = v23;
  v55 = v59.m128i_i64[0];
  v26 = s1;
  if ( v59.m128i_i64[0] )
    v26 = (const char *)ptr;
  v56 = v26;
  while ( 2 )
  {
    v31 = v24[5];
    if ( v55 )
    {
      if ( !v31 )
      {
        v53 = v24;
        v27 = s2;
        v28 = s1;
        goto LABEL_14;
      }
LABEL_21:
      v28 = (const char *)v24[4];
      v27 = v56;
      v53 = v24;
LABEL_14:
      v29 = strcmp(v28, v27);
      v30 = (_QWORD *)v24[2];
      v24 = (_QWORD *)v24[3];
      if ( v29 >= 0 )
      {
        v25 = (__int64)v53;
        v24 = v30;
      }
      if ( !v24 )
        goto LABEL_50;
      continue;
    }
    break;
  }
  if ( v31 )
    goto LABEL_21;
  while ( 1 )
  {
    v32 = v24[2];
    if ( !v32 )
      break;
    v25 = (__int64)v24;
    v24 = (_QWORD *)v24[2];
    if ( *(_QWORD *)(v32 + 40) )
      goto LABEL_21;
  }
  v25 = (__int64)v24;
LABEL_50:
  if ( s2 )
  {
    v59.m128i_i64[0] = 0;
    j__free(s2);
  }
  for ( ; v25 != v23; v25 = std::_Rb_tree_increment(v25) )
  {
    if ( *(_QWORD *)(v25 + 40) )
    {
      v46 = *(char **)(v25 + 32);
      v47 = (unsigned __int8)*v46 - 58;
      if ( *v46 == 58 )
        v47 = (unsigned __int8)v46[1];
      if ( v47 >= 0 )
        break;
      v48 = *v46;
      if ( *v46 )
      {
        v49 = *(_QWORD *)(v25 + 32);
        if ( v48 == 48 )
        {
          if ( !v46[1] )
          {
LABEL_61:
            sub_485540(v46, "%llu", &ptr);
            if ( (unsigned __int64)ptr >= a3 && ((unsigned __int64)ptr < a4 || a4 == 0x7FFFFFFF) )
            {
              sub_485490(v63, 32, "%llu", (char *)ptr - a3);
              v19 = sub_443F90((__int64)&v60, v63, (__m128i *)(v25 + 56), 0, 0.0, a7, a8, a9, v50, v51, a12, a13);
              if ( v19 )
                goto LABEL_42;
            }
          }
        }
        else
        {
          while ( (unsigned __int8)(v48 - 48) <= 9u )
          {
            v48 = *(_BYTE *)++v49;
            if ( !v48 )
              goto LABEL_61;
          }
        }
      }
    }
  }
LABEL_48:
  sub_43CF00(a1, (__m128i *)&v60);
  sub_441540((__int64)&v60, 0.0, a7, a8, a9, v44, v45, a12, a13);
  return 0;
}
// 445032: variable 'a10' is possibly undefined
// 445032: variable 'a11' is possibly undefined
// 4452C9: variable 'v42' is possibly undefined
// 4452C9: variable 'v43' is possibly undefined
// 445308: variable 'v20' is possibly undefined
// 445308: variable 'v21' is possibly undefined
// 445383: variable 'v44' is possibly undefined
// 445383: variable 'v45' is possibly undefined
// 44546F: variable 'v50' is possibly undefined
// 44546F: variable 'v51' is possibly undefined
// 405450: using guessed type __int64 __fastcall std::_Rb_tree_increment(_QWORD);
