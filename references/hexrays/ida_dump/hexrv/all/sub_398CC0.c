unsigned __int64 __fastcall sub_398CC0(__int64 a1, __m128 a2)
{
  __int64 v3; // rbx
  int v4; // r12d
  __int64 v5; // rsi
  bool v6; // zf
  _QWORD *v7; // r13
  unsigned __int64 *v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned int v14; // r12d
  int v15; // r13d
  __int64 v16; // rbx
  const char *v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 *v22; // rax
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // r15
  unsigned __int64 *v25; // rax
  __m128i v26; // xmm0
  const char *v28; // rdi
  __int64 v29; // rdi
  const char *v30; // rsi
  bool v31; // sf
  bool v32; // of
  unsigned __int64 *v33; // rdx
  unsigned __int64 *i; // rax
  unsigned __int64 v35; // r15
  unsigned __int64 v36; // rax
  _QWORD *v37; // rbx
  __int64 *v38; // rdi
  __int64 *v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // rdx
  char *v42; // rbx
  __int64 v43; // rdi
  __int64 v44; // r14
  unsigned __int64 *v45; // rax
  unsigned __int64 v46; // rdx
  unsigned __int64 *v47; // rcx
  unsigned __int64 v48; // rsi
  __int64 *v49; // rbx
  __int64 v50; // rdx
  __int64 *v51; // rdi
  __int64 *v52; // rdi
  unsigned __int64 *v53; // rax
  __m128i v54; // xmm0
  __int64 v55; // [rsp+18h] [rbp-E8h]
  unsigned __int64 *v56; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v57; // [rsp+28h] [rbp-D8h]
  const void **v58; // [rsp+30h] [rbp-D0h]
  __int64 v59; // [rsp+38h] [rbp-C8h]
  size_t n; // [rsp+40h] [rbp-C0h]
  int v61; // [rsp+48h] [rbp-B8h]
  int v62; // [rsp+4Ch] [rbp-B4h]
  int v63; // [rsp+4Ch] [rbp-B4h]
  unsigned __int64 *v64; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v65; // [rsp+58h] [rbp-A8h]
  unsigned __int64 *v66; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v67; // [rsp+68h] [rbp-98h]
  void *src; // [rsp+70h] [rbp-90h] BYREF
  __int128 v69; // [rsp+78h] [rbp-88h]
  char *v70; // [rsp+90h] [rbp-70h] BYREF
  __int128 v71; // [rsp+98h] [rbp-68h]
  __int64 v72; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v73; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v74; // [rsp+C8h] [rbp-38h]

  v74 = __readfsqword(0x28u);
  v64 = nullptr;
  v65 = 0;
  sub_397940((__int64 *)&v64, *(_QWORD *)(a1 + 32), 1);
  v3 = (__int64)v64;
  v66 = nullptr;
  v67 = 0;
  v55 = v65;
  v56 = v64;
  sub_386740(*(_QWORD *)(a1 + 32), &v66, a1, a2);
  if ( !v3 )
  {
    v22 = v66;
    if ( !v66 )
      return v74 - __readfsqword(0x28u);
    v23 = *v66;
    v24 = *v66;
    if ( !v67 )
      goto LABEL_34;
    goto LABEL_96;
  }
  if ( !v55 )
  {
    v22 = v66;
    if ( !v66 )
      goto LABEL_39;
    goto LABEL_33;
  }
  v57 = (unsigned __int64 *)v56[1];
  if ( v56 == v57 )
    goto LABEL_64;
  do
  {
    v4 = 0;
    v5 = 0;
    v69 = 0;
    v6 = v57[5] == 0;
    v7 = v57 + 3;
    src = nullptr;
    if ( v6 )
      goto LABEL_13;
    do
    {
      while ( 1 )
      {
        if ( !v66 )
          goto LABEL_12;
        v8 = (unsigned __int64 *)(*v66 & 0xFFFFFFFFFFFFFFFCLL);
        if ( v8 )
          break;
        v11 = 24;
LABEL_76:
        v41 = 4 * v69;
        v63 = *(_DWORD *)(v11 + 8);
        v42 = (char *)src;
        if ( 4LL * (_QWORD)v69 )
        {
          do
          {
            if ( *(_DWORD *)(v11 + 8) < *(_DWORD *)v42 )
            {
              v63 = *(_DWORD *)(v11 + 8);
              v44 = v42 - (_BYTE *)src;
              goto LABEL_81;
            }
            v42 += 4;
          }
          while ( v42 != (char *)src + 4 * (_QWORD)v69 );
          v63 = *(_DWORD *)(v11 + 8);
          v44 = 4 * v69;
          v43 = v69 + 1;
          if ( *((_QWORD *)&v69 + 1) >= (unsigned __int64)(v69 + 1) )
            goto LABEL_82;
        }
        else
        {
          v44 = 0;
LABEL_81:
          v43 = v69 + 1;
          if ( *((_QWORD *)&v69 + 1) >= (unsigned __int64)(v69 + 1) )
            goto LABEL_82;
        }
        src = (void *)qvector_reserve(&src, src, v43, 4);
        v42 = (char *)src + v44;
        v41 = 4 * v69;
LABEL_82:
        ++v4;
        memmove(v42 + 4, v42, v41 - v44);
        v5 = v4;
        *(_DWORD *)v42 = v63;
        *(_QWORD *)&v69 = v69 + 1;
        if ( v4 >= v57[5] )
          goto LABEL_13;
      }
      if ( (*(_BYTE *)(*v66 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
        goto LABEL_12;
      v9 = *(_QWORD *)(v57[4] + 8 * v5);
      while ( 1 )
      {
        v10 = v8[3];
        v11 = (__int64)(v8 + 3);
        if ( v9 >= v10 )
          break;
        v8 = (unsigned __int64 *)v8[1];
LABEL_11:
        if ( (*(_BYTE *)v8 & 2) != 0 )
          goto LABEL_12;
      }
      if ( v10 < v9 )
      {
        v8 = (unsigned __int64 *)v8[2];
        goto LABEL_11;
      }
      if ( v66 != v8 )
        goto LABEL_76;
LABEL_12:
      v5 = ++v4;
    }
    while ( v4 < v57[5] );
LABEL_13:
    v59 = *v7;
    delete_extra_cmts(*v7, 1000);
    v12 = 0;
    v13 = *(_QWORD *)(a1 + 32);
    v61 = 0;
    v14 = 1000;
    if ( !(_QWORD)v69 )
      goto LABEL_56;
    while ( 2 )
    {
      v15 = 0;
      v16 = *((int *)src + v12);
      v62 = *((_DWORD *)src + v12);
      while ( 2 )
      {
        v18 = *(_QWORD *)(v13 + 128);
        v19 = 32 * v16;
        v70 = nullptr;
        v71 = 0;
        v20 = v19 + v18;
        if ( *(_QWORD *)(v20 + 8) )
        {
          v58 = (const void **)v20;
          n = *(_QWORD *)(v20 + 8);
          v70 = (char *)qalloc_or_throw(n);
          *((_QWORD *)&v71 + 1) = n;
          memcpy(v70, *v58, n);
          *(_QWORD *)&v71 = n;
          if ( n == 1 )
          {
            v72 = 0;
            v73 = 0;
            goto LABEL_31;
          }
          if ( tag_remove(&v70, v70, 0) > 0 && v15 )
          {
            v28 = (const char *)skip_spaces(v70);
            if ( ((*v28 - 123) & 0xFD) == 0 )
              goto LABEL_53;
            if ( !strncmp(v28, "while", 5u) )
              goto LABEL_53;
            if ( !strncmp(v28, "else", 4u) )
              goto LABEL_53;
            v29 = *(_QWORD *)(a1 + 32);
            v30 = *(const char **)(*(_QWORD *)(v13 + 128) + v19);
            v32 = __OFSUB__(v62, *(_DWORD *)(v29 + 152));
            v31 = v62 - *(_DWORD *)(v29 + 152) < 0;
            LODWORD(v72) = 0;
            sub_385510(v29, v30, 0, v31 == v32, nullptr, (__int64)&v72, 0.0, 0);
            if ( (_DWORD)v72 )
            {
              if ( (_DWORD)v72 != 1 || *(int *)(v73 + 8) > 69 )
                goto LABEL_53;
            }
            v21 = v71;
          }
          else
          {
            v21 = v71;
          }
          v72 = 0;
          v73 = 0;
          if ( v21 )
          {
LABEL_31:
            v17 = v70;
            goto LABEL_17;
          }
        }
        else
        {
          v72 = 0;
          v73 = 0;
        }
        v17 = s1;
LABEL_17:
        sub_674F0(
          &v72,
          (__int64)"%s %d: %s",
          *(const char **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 1496LL) + 16LL) + 48LL),
          ++v62,
          v17);
        update_extra_cmt(v59, v14, v72);
        if ( (unsigned __int64)v71 <= 1 || v70[(_QWORD)v71 - 2] != 58 )
          ++v15;
        v16 = v62;
        if ( (unsigned __int64)v62 < *(_QWORD *)(v13 + 136) )
        {
          if ( v72 )
          {
            *(_QWORD *)&v73 = 0;
            qfree(v72);
          }
          if ( v70 )
          {
            *(_QWORD *)&v71 = 0;
            qfree(v70);
          }
          ++v14;
          continue;
        }
        break;
      }
      if ( v72 )
      {
        *(_QWORD *)&v73 = 0;
        qfree(v72);
      }
      ++v14;
LABEL_53:
      if ( v70 )
      {
        *(_QWORD *)&v71 = 0;
        qfree(v70);
      }
      v12 = ++v61;
      if ( v61 < (unsigned __int64)v69 )
        continue;
      break;
    }
LABEL_56:
    if ( src )
    {
      *(_QWORD *)&v69 = 0;
      qfree(src);
    }
    if ( (*v57 & 2) == 0 )
    {
      v33 = (unsigned __int64 *)v57[2];
      if ( (*(_BYTE *)v33 & 2) != 0 )
      {
        v45 = (unsigned __int64 *)(*v57 & 0xFFFFFFFFFFFFFFFCLL);
        v46 = *v45;
        if ( (*v45 & 2) == 0 )
        {
          v47 = v57;
          while ( (unsigned __int64 *)v45[2] == v47 )
          {
            v47 = v45;
            v48 = v46 & 0xFFFFFFFFFFFFFFFCLL;
            v46 = *(_QWORD *)(v46 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v46 & 2) != 0 )
            {
              v57 = (unsigned __int64 *)v48;
              goto LABEL_63;
            }
            v45 = (unsigned __int64 *)v48;
          }
        }
        v57 = v45;
      }
      else
      {
        for ( i = (unsigned __int64 *)v33[1]; (*(_BYTE *)i & 2) == 0; i = (unsigned __int64 *)i[1] )
          v33 = i;
        v57 = v33;
      }
    }
LABEL_63:
    ;
  }
  while ( v57 != v56 );
LABEL_64:
  v22 = v66;
  if ( !v66 )
  {
LABEL_65:
    v35 = *v56;
    v36 = *v56 & 0xFFFFFFFFFFFFFFFCLL;
    v37 = (_QWORD *)v36;
    if ( (*(_BYTE *)v36 & 2) == 0 )
    {
      v38 = *(__int64 **)(v36 + 8);
      if ( (*(_BYTE *)v38 & 2) != 0 )
      {
        v39 = *(__int64 **)(v36 + 16);
        if ( (*(_BYTE *)v39 & 2) != 0 )
          goto LABEL_68;
LABEL_106:
        sub_380710(v39);
      }
      else
      {
        sub_380710(v38);
        v39 = (__int64 *)v37[2];
        if ( (*(_BYTE *)v39 & 2) == 0 )
          goto LABEL_106;
      }
      if ( (*(_BYTE *)v37 & 2) == 0 )
      {
LABEL_68:
        v40 = v37[4];
        if ( v40 )
        {
          v37[5] = 0;
          qfree(v40);
        }
        *v37 |= 2uLL;
      }
      if ( v35 > 3 )
        qfree(v37);
    }
LABEL_39:
    qfree(v56);
    return v74 - __readfsqword(0x28u);
  }
LABEL_33:
  v23 = *v22;
  v24 = *v22;
  if ( !v67 )
  {
LABEL_34:
    *v22 = v23 & 3 | (unsigned __int64)v22 & 0xFFFFFFFFFFFFFFFCLL;
    v25 = v66;
    v26 = (__m128i)(unsigned __int64)v66;
    *v66 &= ~1uLL;
    *(__m128i *)(v25 + 1) = _mm_unpacklo_epi64(v26, v26);
    *v66 |= 2u;
    goto LABEL_35;
  }
LABEL_96:
  v49 = (__int64 *)(v23 & 0xFFFFFFFFFFFFFFFCLL);
  v50 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v50 & 2) == 0 )
  {
    v51 = (__int64 *)v49[1];
    if ( (*(_BYTE *)v51 & 2) != 0 )
    {
      v52 = (__int64 *)v49[2];
      if ( (*(_BYTE *)v52 & 2) == 0 )
      {
LABEL_99:
        sub_380320(v52);
        goto LABEL_100;
      }
    }
    else
    {
      sub_380320(v51);
      v52 = (__int64 *)v49[2];
      if ( (*(_BYTE *)v52 & 2) == 0 )
        goto LABEL_99;
LABEL_100:
      v50 = *v49;
      if ( (*v49 & 2) != 0 )
      {
LABEL_101:
        if ( v24 > 3 )
          qfree(v23 & 0xFFFFFFFFFFFFFFFCLL);
        v22 = v66;
        goto LABEL_104;
      }
    }
    *v49 = v50 | 2;
    goto LABEL_101;
  }
LABEL_104:
  *v22 = (unsigned __int64)v22 & 0xFFFFFFFFFFFFFFFCLL | *v22 & 3;
  v53 = v66;
  v54 = (__m128i)(unsigned __int64)v66;
  *v66 &= ~1uLL;
  *(__m128i *)(v53 + 1) = _mm_unpacklo_epi64(v54, v54);
  *v66 |= 2u;
  v67 = 0;
LABEL_35:
  if ( v66 )
    qfree(v66);
  if ( v56 )
  {
    if ( v55 )
      goto LABEL_65;
    goto LABEL_39;
  }
  return v74 - __readfsqword(0x28u);
}
