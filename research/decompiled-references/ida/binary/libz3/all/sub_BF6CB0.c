__int64 __fastcall sub_BF6CB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 *v7; // r8
  __int64 v8; // rbx
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // r8
  __int64 v13; // rbx
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  int v20; // edi
  char *v21; // rcx
  unsigned int v22; // edx
  char *v23; // rsi
  __int64 v24; // rdx
  char *v25; // r8
  char *i; // rax
  __int64 v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // r8
  int v30; // edx
  unsigned int v31; // r13d
  __m128i *v32; // r15
  unsigned int v33; // edi
  int v34; // r11d
  __int64 v35; // r8
  __m128i *v36; // rcx
  __int64 v37; // rdi
  __m128i *v38; // rsi
  _DWORD *v39; // r10
  __m128i *j; // rax
  __int64 v41; // r9
  unsigned int v42; // r9d
  __m128i *v43; // rax
  __m128i *v44; // r8
  __int64 v45; // rdi
  __int64 v46; // rax
  bool v47; // zf
  __int64 v49; // rax
  int v50; // eax
  int v51; // r8d
  int v52; // r9d
  int v53; // eax
  int v54; // r8d
  int v55; // r9d
  __m128i *v56; // rax
  __int64 v57; // r9
  __m128i *v58; // rax
  int v59; // r9d
  __m128i *v60; // rdx
  const __m128i *v61; // rax
  int v62; // r10d
  __m128i *v63; // r11
  __int64 v64; // rdx
  __m128i *v65; // rsi
  _DWORD *v66; // rdi
  __m128i *v67; // rdx
  int v68; // [rsp+0h] [rbp-80h]
  int v69; // [rsp+8h] [rbp-78h]
  int v70; // [rsp+10h] [rbp-70h]
  int v71; // [rsp+18h] [rbp-68h]
  int v72; // [rsp+1Ch] [rbp-64h]
  int v73; // [rsp+20h] [rbp-60h]
  __int64 v74; // [rsp+20h] [rbp-60h]
  char v75; // [rsp+28h] [rbp-58h]
  size_t v76; // [rsp+28h] [rbp-58h]
  __int64 v77; // [rsp+30h] [rbp-50h]
  int v78; // [rsp+38h] [rbp-48h]
  __int64 v79; // [rsp+38h] [rbp-48h]
  int v80; // [rsp+40h] [rbp-40h]
  __int64 v81; // [rsp+40h] [rbp-40h]
  int v82; // [rsp+40h] [rbp-40h]
  void *v83; // [rsp+48h] [rbp-38h]
  _DWORD *v84; // [rsp+48h] [rbp-38h]

  v77 = *(_QWORD *)(a1 + 24);
  v6 = sub_15D1F10(**(_QWORD **)(a2 + 8));
  v7 = *(__int64 **)(a2 + 8);
  v8 = *(_QWORD *)(a1 + 1736);
  if ( v7 && (v9 = *((_DWORD *)v7 - 1)) != 0 )
  {
    if ( v9 == 1 )
    {
      v10 = *v7;
      v84 = (_DWORD *)*v7;
    }
    else
    {
      v10 = sub_15E1AF0(*(_QWORD *)(a1 + 1736));
      v84 = (_DWORD *)v10;
    }
  }
  else
  {
    v50 = sub_15D2D60(v8, *(_DWORD *)(a1 + 1744), 1, 0, 0, 0, 0, v6);
    v10 = sub_15DC610(v8, v50, 0, 0, v51, v52, v68, v69, v70, v71, v73, v75, v77, v78, v80, v83);
    v84 = (_DWORD *)v10;
  }
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  v79 = *(_QWORD *)(a1 + 24);
  v11 = sub_15D1F10(**(_QWORD **)(a3 + 8));
  v12 = *(_QWORD **)(a3 + 8);
  v13 = *(_QWORD *)(a1 + 1736);
  if ( !v12 || (v14 = *((_DWORD *)v12 - 1)) == 0 )
  {
    v53 = sub_15D2D60(v13, *(_DWORD *)(a1 + 1744), 1, 0, 0, 0, 0, v11);
    v15 = sub_15DC610(v13, v53, 0, 0, v54, v55, v68, v69, v70, v71, v73, v75, v77, v79, v80, v84);
    goto LABEL_11;
  }
  if ( v14 != 1 )
  {
    v15 = sub_15E1AF0(*(_QWORD *)(a1 + 1736));
LABEL_11:
    v16 = v15;
    goto LABEL_12;
  }
  v16 = *v12;
LABEL_12:
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
  v81 = *(_QWORD *)(a1 + 24);
  v17 = sub_15E1B70(v81);
  v18 = v17;
  if ( v17 )
    ++*(_DWORD *)(v17 + 8);
  v19 = *(unsigned int *)(a1 + 896);
  v20 = *(_DWORD *)(v18 + 12);
  v21 = *(char **)(a1 + 888);
  v22 = v19 - 1;
  v19 *= 16;
  v23 = &v21[v19];
  v24 = 16LL * (v20 & v22);
  v25 = &v21[v24];
  if ( v24 != v19 )
  {
    for ( i = &v21[v24]; v23 != i; i += 16 )
    {
      v27 = *(_QWORD *)i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( *(_DWORD *)(v27 + 12) == v20 && v18 == v27 )
        {
LABEL_79:
          v31 = (unsigned __int8)i[8];
          goto LABEL_50;
        }
      }
      else if ( !v27 )
      {
        goto LABEL_23;
      }
    }
  }
  for ( ; v25 != v21; v21 += 16 )
  {
    v49 = *(_QWORD *)v21;
    if ( *(_QWORD *)v21 > 1u )
    {
      if ( *(_DWORD *)(v49 + 12) == v20 && v18 == v49 )
      {
        i = v21;
        goto LABEL_79;
      }
    }
    else if ( !v49 )
    {
      break;
    }
  }
LABEL_23:
  v28 = sub_1462740(a1 + 3424, a2, a3, v21, v25);
  v29 = *(unsigned int *)(a1 + 896);
  v30 = *(_DWORD *)(v18 + 12);
  v31 = v28;
  v32 = *(__m128i **)(a1 + 888);
  v33 = v29 - 1;
  v34 = *(_DWORD *)(a1 + 896);
  v35 = 16 * v29;
  v36 = (__m128i *)((char *)v32 + v35);
  v37 = 16LL * (v30 & v33);
  v38 = &v32[(unsigned __int64)v37 / 0x10];
  if ( v37 != v35 )
  {
    v39 = v84;
    for ( j = &v32[(unsigned __int64)v37 / 0x10]; v36 != j; ++j )
    {
      v41 = j->m128i_i64[0];
      if ( j->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v41 + 12) == v30 && v18 == v41 )
        {
LABEL_107:
          v84 = v39;
          goto LABEL_32;
        }
      }
      else if ( !v41 )
      {
LABEL_30:
        v84 = v39;
        goto LABEL_31;
      }
    }
  }
  if ( v32 != v38 )
  {
    v39 = v84;
    v56 = *(__m128i **)(a1 + 888);
    while ( 1 )
    {
      v57 = v56->m128i_i64[0];
      if ( v56->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v57 + 12) == v30 && v18 == v57 )
          goto LABEL_107;
      }
      else if ( !v57 )
      {
        goto LABEL_30;
      }
      if ( v38 == ++v56 )
        goto LABEL_30;
    }
  }
LABEL_31:
  ++*(_DWORD *)(v18 + 8);
LABEL_32:
  v42 = 2 * v34;
  if ( 3 * v34 < (unsigned int)(4 * (*(_DWORD *)(a1 + 900) + *(_DWORD *)(a1 + 904))) )
  {
    v72 = 2 * v34;
    v74 = v42;
    v76 = 16LL * v42;
    v58 = (__m128i *)sub_186B270(v76);
    v59 = v72;
    v32 = v58;
    v35 = v76;
    v60 = &v58[v74];
    if ( v72 )
    {
      do
      {
        v58->m128i_i64[0] = 0;
        ++v58;
        v58[-1].m128i_i8[8] = 0;
      }
      while ( v58 != v60 );
    }
    v61 = *(const __m128i **)(a1 + 888);
    v62 = v72 - 1;
    v36 = &v32[v76 / 0x10];
    v63 = (__m128i *)&v61[*(unsigned int *)(a1 + 896)];
    if ( v61 != v63 )
    {
      do
      {
        if ( v61->m128i_i64[0] > 1uLL )
        {
          v64 = 16LL * (*(_DWORD *)(v61->m128i_i64[0] + 12) & (unsigned int)v62);
          v65 = &v32[(unsigned __int64)v64 / 0x10];
          if ( v76 == v64 )
          {
LABEL_91:
            if ( v32 == v65 )
            {
LABEL_104:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v66 = v84;
            v67 = v32;
            while ( v67->m128i_i64[0] )
            {
              if ( v65 == ++v67 )
                goto LABEL_104;
            }
          }
          else
          {
            v66 = v84;
            v67 = &v32[(unsigned __int64)v64 / 0x10];
            while ( v67->m128i_i64[0] )
            {
              if ( v36 == ++v67 )
                goto LABEL_91;
            }
          }
          v84 = v66;
          *v67 = _mm_loadu_si128(v61);
        }
        ++v61;
      }
      while ( v63 != v61 );
      v63 = *(__m128i **)(a1 + 888);
    }
    if ( v63 )
    {
      sub_186B220(v63);
      v59 = v72;
      v62 = v72 - 1;
      v36 = &v32[v76 / 0x10];
      v35 = v76;
    }
    v30 = *(_DWORD *)(v18 + 12);
    *(_QWORD *)(a1 + 888) = v32;
    *(_DWORD *)(a1 + 896) = v59;
    *(_DWORD *)(a1 + 904) = 0;
    v37 = 16LL * (v30 & (unsigned int)v62);
    v38 = &v32[(unsigned __int64)v37 / 0x10];
  }
  if ( v37 == v35 )
  {
    v44 = nullptr;
LABEL_41:
    if ( v32 == v38 )
    {
LABEL_49:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v46 = v32->m128i_i64[0];
        if ( v32->m128i_i64[0] <= 1uLL )
          break;
        if ( *(_DWORD *)(v46 + 12) == v30 && v18 == v46 )
        {
          v32->m128i_i64[0] = v18;
          v32->m128i_i8[8] = v31;
          goto LABEL_50;
        }
        if ( ++v32 == v38 )
          goto LABEL_49;
      }
      if ( !v46 )
        break;
      v44 = v32++;
      if ( v32 == v38 )
        goto LABEL_49;
    }
    if ( v44 )
      goto LABEL_101;
    v44 = v32;
  }
  else
  {
    v43 = v38;
    v44 = nullptr;
    while ( 1 )
    {
      while ( 1 )
      {
        v45 = v43->m128i_i64[0];
        if ( v43->m128i_i64[0] <= 1uLL )
          break;
        if ( *(_DWORD *)(v45 + 12) == v30 && v18 == v45 )
        {
          v43->m128i_i64[0] = v18;
          v43->m128i_i8[8] = v31;
          goto LABEL_50;
        }
        if ( ++v43 == v36 )
          goto LABEL_41;
      }
      if ( !v45 )
        break;
      v44 = v43++;
      if ( v43 == v36 )
        goto LABEL_41;
    }
    if ( v44 )
LABEL_101:
      --*(_DWORD *)(a1 + 904);
    else
      v44 = v43;
  }
  v44->m128i_i64[0] = v18;
  v44->m128i_i8[8] = v31;
  ++*(_DWORD *)(a1 + 900);
LABEL_50:
  v47 = (*(_DWORD *)(v18 + 8))-- == 1;
  if ( v47 )
    sub_15D7BC0(v81, v18);
  if ( v16 )
  {
    v47 = (*(_DWORD *)(v16 + 8))-- == 1;
    if ( v47 )
      sub_15D7BC0(v79, v16);
  }
  if ( v84 )
  {
    v82 = v84[2];
    v84[2] = v82 - 1;
    if ( v82 == 1 )
      sub_15D7BC0(v77, v84);
  }
  return v31;
}

