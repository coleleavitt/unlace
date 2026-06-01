__int64 __fastcall sub_3BAAE0(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int v9; // eax
  __int64 result; // rax
  __int64 v12; // rbp
  __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  double v15; // xmm4_8
  double v16; // xmm5_8
  const char *v17; // rdx
  const char *v18; // rsi
  __int64 v19; // rdi
  char tinfo_details; // dl
  int *v21; // rax
  int *v22; // rdi
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r15
  __int64 v26; // rdi
  __int64 v27; // r13
  __int64 v28; // r15
  __int64 v29; // r14
  __int64 *v30; // r12
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __m128 v37; // xmm4
  __m128 v38; // xmm5
  __int64 v39; // rdx
  const char *v40; // r13
  size_t v41; // rsi
  const char *v42; // rdi
  const char *v43; // rdx
  __int64 v44; // rdi
  __int64 v45; // r13
  __int64 v46; // r12
  __int64 v47; // rbp
  __int64 *v48; // rbx
  __int64 v49; // rdi
  __int64 v50; // rdi
  unsigned int v51; // eax
  void *v52; // rax
  const char *v53; // rax
  char v54; // [rsp+0h] [rbp-A8h]
  size_t n; // [rsp+8h] [rbp-A0h]
  unsigned int na; // [rsp+8h] [rbp-A0h]
  int nb; // [rsp+8h] [rbp-A0h]
  int nc; // [rsp+8h] [rbp-A0h]
  unsigned int nd; // [rsp+8h] [rbp-A0h]
  unsigned int ne; // [rsp+8h] [rbp-A0h]
  const void **v61; // [rsp+10h] [rbp-98h]
  unsigned __int64 v62; // [rsp+18h] [rbp-90h]
  unsigned __int64 v63; // [rsp+20h] [rbp-88h] BYREF
  __int64 v64; // [rsp+28h] [rbp-80h] BYREF
  __int64 v65; // [rsp+30h] [rbp-78h] BYREF
  __int128 v66; // [rsp+38h] [rbp-70h]
  int *v67; // [rsp+48h] [rbp-60h]
  __int128 v68; // [rsp+50h] [rbp-58h]
  int v69; // [rsp+60h] [rbp-48h]
  char v70; // [rsp+64h] [rbp-44h]
  unsigned __int64 v71; // [rsp+68h] [rbp-40h]

  v9 = *(_DWORD *)(a1 + 8);
  v71 = __readfsqword(0x28u);
  if ( v9 != 58 && v9 != 25 || !(unsigned __int8)sub_3BA410((__int64 *)a1, &v63, &v64, nullptr) )
    return 0;
  v12 = *(_QWORD *)(a1 + 208);
  if ( (get_tinfo_property(*(_QWORD *)(v12 + 8), 2) & 0x2F) == 0xD )
  {
    if ( v64 == -1 )
      v13 = v63 + 1;
    else
      v13 = v64 + 1;
    LODWORD(v14) = set_tinfo_property4(v12 + 8, 10, v63, v13, 0, 0);
    goto LABEL_10;
  }
  if ( (get_tinfo_property(*(_QWORD *)(v12 + 8), 2) & 0x3F) != 0x2D )
  {
    if ( (get_tinfo_property(*(_QWORD *)(v12 + 8), 2) & 0xF) != 0xC || !*(_QWORD *)a1 )
      return 0;
    if ( v64 == -1 )
    {
      if ( !*(_QWORD *)(v12 + 296) )
      {
        sub_169630(
          (int)"Please use \"Change calling convention...\" action",
          2,
          v33,
          v34,
          v35,
          v36,
          a2,
          a3,
          a4,
          a5,
          v37,
          v38,
          a8,
          a9,
          v54);
        return 0;
      }
      LODWORD(v14) = set_tinfo_property4(v12 + 8, 33, v63, v63 + 1, 0, 0);
    }
    else
    {
      LODWORD(v14) = set_tinfo_property4(v12 + 8, 33, v63, v64 + 1, 0, 0);
    }
    if ( (_DWORD)v14 != 1 )
      goto LABEL_10;
    return 0;
  }
  if ( v64 != -1 )
  {
    LODWORD(v14) = set_tinfo_property4(v12 + 8, 21, v63, v64 + 1, 0, 0);
LABEL_10:
    v17 = "Failed to delete member";
    if ( *(_BYTE *)(v12 + 31) == 12 )
      v17 = "Failed to delete argument";
    return (unsigned __int8)sub_3AC490((__int64 *)a1, v14, (__int64)v17, a2, a3, a4, a5, v15, v16, a8, a9);
  }
  a2 = 0;
  v70 = 0x80;
  v18 = (_BYTE *)(&qword_28 + 5);
  v67 = nullptr;
  v69 = 0;
  v66 = 0;
  v68 = 0;
  v19 = *(_QWORD *)(v12 + 8);
  v65 = 0;
  tinfo_details = get_tinfo_details(v19, 45, &v65);
  result = 0;
  if ( tinfo_details )
  {
    if ( !(_QWORD)v68 )
      goto LABEL_24;
    v21 = v67;
    v22 = &v67[v68];
    if ( v67 == v22 )
      goto LABEL_24;
    v23 = 0;
    while ( 1 )
    {
      v24 = *v21;
      v25 = v23;
      v23 += v24;
      if ( v63 < v23 )
        break;
      if ( v22 == ++v21 )
        goto LABEL_24;
    }
    if ( *(_QWORD *)(v12 + 16) == v25 && v24 > 1 )
    {
      v39 = v65 + 56 * v25;
      v40 = nullptr;
      v41 = *(_QWORD *)(v39 + 8);
      v42 = &s1;
      if ( v41 )
      {
        v62 = *v21;
        v61 = (const void **)(v65 + 56 * v25);
        v52 = (void *)qalloc_or_throw(*(_QWORD *)(v39 + 8));
        v53 = (const char *)memcpy(v52, *v61, v41);
        v24 = v62;
        v42 = v53;
        v40 = v53;
      }
      v18 = "Do you want to delete whole group mask %s";
      n = v24;
      if ( (unsigned int)sub_1698A0(0, (int)"Do you want to delete whole group mask %s", v42) != 1 )
      {
        if ( v40 )
          qfree(v40, "Do you want to delete whole group mask %s", v43);
        result = 1;
        goto LABEL_48;
      }
      v51 = set_tinfo_property4(v12 + 8, 21, v25, v25 + n, 0, 0);
      v14 = v51;
      if ( v40 )
      {
        ne = v51;
        *(double *)a2.m128_u64 = qfree(v40, (const char *)v51);
        v14 = ne;
      }
    }
    else
    {
LABEL_24:
      v14 = (unsigned int)set_tinfo_property4(v12 + 8, 21, v63, v63 + 1, 0, 0);
    }
    if ( v67 )
    {
      *(_QWORD *)&v68 = 0;
      *(double *)a2.m128_u64 = qfree(v67, (const char *)v14);
      v14 = (unsigned int)v14;
    }
    v26 = v65;
    if ( v65 )
    {
      v27 = v66;
      v28 = 0;
      v29 = 0;
      if ( (_QWORD)v66 )
      {
        do
        {
          v30 = (__int64 *)(v26 + v28);
          v31 = *(_QWORD *)(v26 + v28 + 24);
          if ( v31 )
          {
            v30[4] = 0;
            qfree(v31, (const char *)v14);
            v14 = (unsigned int)v14;
          }
          v32 = *v30;
          if ( *v30 )
          {
            v30[1] = 0;
            qfree(v32, (const char *)v14);
            v14 = (unsigned int)v14;
          }
          ++v29;
          v26 = v65;
          v28 += 56;
        }
        while ( v27 != v29 );
      }
      *(_QWORD *)&v66 = 0;
      *(double *)a2.m128_u64 = qfree(v26, (const char *)v14);
    }
    goto LABEL_10;
  }
LABEL_48:
  if ( v67 )
  {
    na = result;
    *(_QWORD *)&v68 = 0;
    qfree(v67, v18);
    result = na;
  }
  v44 = v65;
  if ( v65 )
  {
    v45 = v66;
    v46 = 0;
    v47 = 0;
    if ( (_QWORD)v66 )
    {
      do
      {
        v48 = (__int64 *)(v44 + v46);
        v49 = *(_QWORD *)(v44 + v46 + 24);
        if ( v49 )
        {
          v48[4] = 0;
          nb = result;
          qfree(v49, v18);
          LODWORD(result) = nb;
        }
        v50 = *v48;
        if ( *v48 )
        {
          v48[1] = 0;
          nc = result;
          qfree(v50, v18);
          LODWORD(result) = nc;
        }
        ++v47;
        v44 = v65;
        v46 += 56;
      }
      while ( v45 != v47 );
    }
    nd = result;
    *(_QWORD *)&v66 = 0;
    qfree(v44, v18);
    return nd;
  }
  return result;
}
