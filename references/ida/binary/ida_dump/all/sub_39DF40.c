unsigned __int64 __fastcall sub_39DF40(__int64 a1, __m128 a2)
{
  __int64 v3; // rbx
  int v4; // r12d
  __int64 v5; // rsi
  bool v6; // zf
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r14
  int i; // r12d
  int v14; // r13d
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rcx
  unsigned __int64 *v19; // rax
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // r15
  unsigned __int64 *v22; // rax
  __m128i v23; // xmm0
  const char *v25; // rdi
  __int64 v26; // rdi
  _BYTE *v27; // rsi
  bool v28; // sf
  bool v29; // of
  unsigned __int64 *v30; // rdx
  unsigned __int64 *j; // rax
  unsigned __int64 v32; // r15
  unsigned __int64 v33; // rax
  _QWORD *v34; // rbx
  __int64 *v35; // rdi
  __int64 *v36; // rdi
  __int64 v37; // rdx
  char *v38; // rbx
  __int64 v39; // r14
  unsigned __int64 *v40; // rax
  unsigned __int64 v41; // rdx
  unsigned __int64 *v42; // rcx
  unsigned __int64 v43; // rsi
  __int64 *v44; // rbx
  __int64 v45; // rdx
  __int64 *v46; // rdi
  __int64 *v47; // rdi
  unsigned __int64 *v48; // rax
  __m128i v49; // xmm0
  __int64 v50; // [rsp+18h] [rbp-E8h]
  unsigned __int64 *v51; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v52; // [rsp+28h] [rbp-D8h]
  const void **v53; // [rsp+30h] [rbp-D0h]
  size_t n; // [rsp+40h] [rbp-C0h]
  int v55; // [rsp+48h] [rbp-B8h]
  int v56; // [rsp+4Ch] [rbp-B4h]
  int v57; // [rsp+4Ch] [rbp-B4h]
  unsigned __int64 *v58; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v59; // [rsp+58h] [rbp-A8h]
  unsigned __int64 *v60; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v61; // [rsp+68h] [rbp-98h]
  void *src; // [rsp+70h] [rbp-90h]
  __int128 v63; // [rsp+78h] [rbp-88h]
  char *v64; // [rsp+90h] [rbp-70h]
  __int128 v65; // [rsp+98h] [rbp-68h]
  __int64 v66; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v67; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v68; // [rsp+C8h] [rbp-38h]

  v68 = __readfsqword(0x28u);
  v58 = nullptr;
  v59 = 0;
  sub_39CBC0((__int64 *)&v58, *(_QWORD *)(a1 + 32), 1);
  v3 = (__int64)v58;
  v60 = nullptr;
  v61 = 0;
  v50 = v59;
  v51 = v58;
  sub_38B9C0(*(_QWORD *)(a1 + 32), &v60, a1, a2);
  if ( !v3 )
  {
    v19 = v60;
    if ( !v60 )
      return v68 - __readfsqword(0x28u);
    v20 = *v60;
    v21 = *v60;
    if ( !v61 )
      goto LABEL_31;
    goto LABEL_93;
  }
  if ( !v50 )
  {
    v19 = v60;
    if ( !v60 )
      goto LABEL_36;
    goto LABEL_30;
  }
  v52 = (unsigned __int64 *)v51[1];
  if ( v51 == v52 )
    goto LABEL_61;
  do
  {
    v4 = 0;
    v5 = 0;
    v63 = 0;
    v6 = v52[5] == 0;
    src = nullptr;
    if ( v6 )
      goto LABEL_13;
    do
    {
      while ( 1 )
      {
        if ( !v60 )
          goto LABEL_12;
        v7 = (unsigned __int64 *)(*v60 & 0xFFFFFFFFFFFFFFFCLL);
        if ( v7 )
          break;
        v10 = 24;
LABEL_73:
        v37 = 4 * v63;
        v57 = *(_DWORD *)(v10 + 8);
        v38 = (char *)src;
        if ( 4LL * (_QWORD)v63 )
        {
          do
          {
            if ( *(_DWORD *)(v10 + 8) < *(_DWORD *)v38 )
            {
              v57 = *(_DWORD *)(v10 + 8);
              v39 = v38 - (_BYTE *)src;
              goto LABEL_78;
            }
            v38 += 4;
          }
          while ( v38 != (char *)src + 4 * (_QWORD)v63 );
          v57 = *(_DWORD *)(v10 + 8);
          v39 = 4 * v63;
          if ( *((_QWORD *)&v63 + 1) >= (unsigned __int64)(v63 + 1) )
            goto LABEL_79;
        }
        else
        {
          v39 = 0;
LABEL_78:
          if ( *((_QWORD *)&v63 + 1) >= (unsigned __int64)(v63 + 1) )
            goto LABEL_79;
        }
        src = (void *)qvector_reserve();
        v38 = (char *)src + v39;
        v37 = 4 * v63;
LABEL_79:
        ++v4;
        memmove(v38 + 4, v38, v37 - v39);
        v5 = v4;
        *(_DWORD *)v38 = v57;
        *(_QWORD *)&v63 = v63 + 1;
        if ( v4 >= v52[5] )
          goto LABEL_13;
      }
      if ( (*(_BYTE *)(*v60 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
        goto LABEL_12;
      v8 = *(_QWORD *)(v52[4] + 8 * v5);
      while ( 1 )
      {
        v9 = v7[3];
        v10 = (__int64)(v7 + 3);
        if ( v8 >= v9 )
          break;
        v7 = (unsigned __int64 *)v7[1];
LABEL_11:
        if ( (*(_BYTE *)v7 & 2) != 0 )
          goto LABEL_12;
      }
      if ( v9 < v8 )
      {
        v7 = (unsigned __int64 *)v7[2];
        goto LABEL_11;
      }
      if ( v60 != v7 )
        goto LABEL_73;
LABEL_12:
      v5 = ++v4;
    }
    while ( v4 < v52[5] );
LABEL_13:
    delete_extra_cmts();
    v11 = 0;
    v12 = *(_QWORD *)(a1 + 32);
    v55 = 0;
    for ( i = 1000; v55 < (unsigned __int64)v63; v11 = v55 )
    {
      v14 = 0;
      v15 = *((int *)src + v11);
      v56 = *((_DWORD *)src + v11);
      while ( 1 )
      {
        v16 = *(_QWORD *)(v12 + 128);
        v17 = 32 * v15;
        v64 = nullptr;
        v65 = 0;
        v18 = v17 + v16;
        if ( *(_QWORD *)(v18 + 8) )
        {
          v53 = (const void **)v18;
          n = *(_QWORD *)(v18 + 8);
          v64 = (char *)qalloc_or_throw();
          *((_QWORD *)&v65 + 1) = n;
          memcpy(v64, *v53, n);
          *(_QWORD *)&v65 = n;
          if ( n == 1 )
          {
            v66 = 0;
            v67 = 0;
          }
          else
          {
            if ( tag_remove() > 0 )
            {
              if ( v14 )
              {
                v25 = (const char *)skip_spaces();
                if ( ((*v25 - 123) & 0xFD) == 0 )
                  goto LABEL_50;
                if ( !strncmp(v25, "while", 5u) )
                  goto LABEL_50;
                if ( !strncmp(v25, "else", 4u) )
                  goto LABEL_50;
                v26 = *(_QWORD *)(a1 + 32);
                v27 = *(_BYTE **)(*(_QWORD *)(v12 + 128) + v17);
                v29 = __OFSUB__(v56, *(_DWORD *)(v26 + 152));
                v28 = v56 - *(_DWORD *)(v26 + 152) < 0;
                LODWORD(v66) = 0;
                sub_38A790(v26, v27, 0, v28 == v29, 0, (__int64)&v66, 0);
                if ( (_DWORD)v66 )
                {
                  if ( (_DWORD)v66 != 1 || *(int *)(v67 + 8) > 69 )
                    goto LABEL_50;
                }
              }
            }
            v66 = 0;
            v67 = 0;
          }
        }
        else
        {
          v66 = 0;
          v67 = 0;
        }
        ++v56;
        sub_6B870(&v66);
        update_extra_cmt();
        if ( (unsigned __int64)v65 <= 1 || v64[(_QWORD)v65 - 2] != 58 )
          ++v14;
        v15 = v56;
        if ( (unsigned __int64)v56 >= *(_QWORD *)(v12 + 136) )
          break;
        if ( v66 )
        {
          *(_QWORD *)&v67 = 0;
          qfree();
        }
        if ( v64 )
        {
          *(_QWORD *)&v65 = 0;
          qfree();
        }
        ++i;
      }
      if ( v66 )
      {
        *(_QWORD *)&v67 = 0;
        qfree();
      }
      ++i;
LABEL_50:
      if ( v64 )
      {
        *(_QWORD *)&v65 = 0;
        qfree();
      }
      ++v55;
    }
    if ( src )
    {
      *(_QWORD *)&v63 = 0;
      qfree();
    }
    if ( (*v52 & 2) == 0 )
    {
      v30 = (unsigned __int64 *)v52[2];
      if ( (*(_BYTE *)v30 & 2) != 0 )
      {
        v40 = (unsigned __int64 *)(*v52 & 0xFFFFFFFFFFFFFFFCLL);
        v41 = *v40;
        if ( (*v40 & 2) == 0 )
        {
          v42 = v52;
          while ( (unsigned __int64 *)v40[2] == v42 )
          {
            v42 = v40;
            v43 = v41 & 0xFFFFFFFFFFFFFFFCLL;
            v41 = *(_QWORD *)(v41 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v41 & 2) != 0 )
            {
              v52 = (unsigned __int64 *)v43;
              goto LABEL_60;
            }
            v40 = (unsigned __int64 *)v43;
          }
        }
        v52 = v40;
      }
      else
      {
        for ( j = (unsigned __int64 *)v30[1]; (*(_BYTE *)j & 2) == 0; j = (unsigned __int64 *)j[1] )
          v30 = j;
        v52 = v30;
      }
    }
LABEL_60:
    ;
  }
  while ( v52 != v51 );
LABEL_61:
  v19 = v60;
  if ( !v60 )
  {
LABEL_62:
    v32 = *v51;
    v33 = *v51 & 0xFFFFFFFFFFFFFFFCLL;
    v34 = (_QWORD *)v33;
    if ( (*(_BYTE *)v33 & 2) == 0 )
    {
      v35 = *(__int64 **)(v33 + 8);
      if ( (*(_BYTE *)v35 & 2) != 0 )
      {
        v36 = *(__int64 **)(v33 + 16);
        if ( (*(_BYTE *)v36 & 2) != 0 )
          goto LABEL_65;
LABEL_103:
        sub_385990(v36);
      }
      else
      {
        sub_385990(v35);
        v36 = (__int64 *)v34[2];
        if ( (*(_BYTE *)v36 & 2) == 0 )
          goto LABEL_103;
      }
      if ( (*(_BYTE *)v34 & 2) == 0 )
      {
LABEL_65:
        if ( v34[4] )
        {
          v34[5] = 0;
          qfree();
        }
        *v34 |= 2uLL;
      }
      if ( v32 > 3 )
        qfree();
    }
LABEL_36:
    qfree();
    return v68 - __readfsqword(0x28u);
  }
LABEL_30:
  v20 = *v19;
  v21 = *v19;
  if ( !v61 )
  {
LABEL_31:
    *v19 = v20 & 3 | (unsigned __int64)v19 & 0xFFFFFFFFFFFFFFFCLL;
    v22 = v60;
    v23 = (__m128i)(unsigned __int64)v60;
    *v60 &= ~1uLL;
    *(__m128i *)(v22 + 1) = _mm_unpacklo_epi64(v23, v23);
    *v60 |= 2u;
    goto LABEL_32;
  }
LABEL_93:
  v44 = (__int64 *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
  v45 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v45 & 2) == 0 )
  {
    v46 = (__int64 *)v44[1];
    if ( (*(_BYTE *)v46 & 2) != 0 )
    {
      v47 = (__int64 *)v44[2];
      if ( (*(_BYTE *)v47 & 2) == 0 )
      {
LABEL_96:
        sub_3855A0(v47);
        goto LABEL_97;
      }
    }
    else
    {
      sub_3855A0(v46);
      v47 = (__int64 *)v44[2];
      if ( (*(_BYTE *)v47 & 2) == 0 )
        goto LABEL_96;
LABEL_97:
      v45 = *v44;
      if ( (*v44 & 2) != 0 )
      {
LABEL_98:
        if ( v21 > 3 )
          qfree();
        v19 = v60;
        goto LABEL_101;
      }
    }
    *v44 = v45 | 2;
    goto LABEL_98;
  }
LABEL_101:
  *v19 = (unsigned __int64)v19 & 0xFFFFFFFFFFFFFFFCLL | *v19 & 3;
  v48 = v60;
  v49 = (__m128i)(unsigned __int64)v60;
  *v60 &= ~1uLL;
  *(__m128i *)(v48 + 1) = _mm_unpacklo_epi64(v49, v49);
  *v60 |= 2u;
  v61 = 0;
LABEL_32:
  if ( v60 )
    qfree();
  if ( v51 )
  {
    if ( v50 )
      goto LABEL_62;
    goto LABEL_36;
  }
  return v68 - __readfsqword(0x28u);
}
