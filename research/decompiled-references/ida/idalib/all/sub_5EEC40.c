unsigned __int64 __fastcall sub_5EEC40(__int64 a1, __int64 a2)
{
  __int64 *v2; // r15
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  _BYTE *v5; // rdi
  _BYTE *v6; // rax
  _BYTE *v7; // rsi
  _BYTE *v8; // rsi
  size_t v9; // rbp
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rbx
  char *v12; // r13
  char *v13; // rbp
  unsigned __int64 v14; // r14
  size_t v15; // rbp
  char *v16; // rdi
  unsigned __int64 v17; // rbx
  _BYTE *v18; // rax
  _BYTE *v19; // r14
  void *v20; // rbx
  __int64 v21; // rdx
  char *v22; // rsi
  char *v23; // rax
  char *v24; // rdi
  __int64 v25; // rdx
  char *v26; // r13
  char *v27; // rax
  __int64 v28; // rcx
  _BYTE *v29; // rsi
  char *v30; // rbx
  unsigned __int64 v31; // rbp
  size_t v32; // r15
  __int64 v33; // r14
  size_t v34; // r9
  __int64 v35; // rbp
  __int64 v36; // r14
  __int64 v37; // rax
  const char *v38; // rsi
  unsigned __int64 v39; // rbx
  size_t v40; // r14
  __int64 v41; // rax
  _BYTE *v42; // rbx
  unsigned __int64 v43; // rbp
  char *v44; // rdi
  _BYTE *v45; // r13
  size_t v46; // rbx
  char *v47; // rdi
  char *v48; // rdi
  unsigned __int64 v49; // rax
  char *v50; // rdi
  char v51; // al
  __int128 v52; // kr00_16
  void *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rbx
  __int64 v56; // rbp
  char *v57; // rdx
  void *v58; // rax
  __int64 v60; // rax
  _BYTE *v61; // rbx
  unsigned __int64 v62; // rbp
  _BYTE *v63; // rbx
  unsigned __int64 v64; // rbp
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  _BYTE *v70; // r13
  __int64 v71; // rbx
  __int64 v72; // rbp
  unsigned __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  _BYTE *v76; // r13
  __int64 v77; // rbx
  _BYTE *v78; // rbp
  unsigned __int64 v79; // rax
  __int64 v80; // rax
  char v81; // [rsp+0h] [rbp-90h]
  size_t v82; // [rsp+0h] [rbp-90h]
  __int64 *v83; // [rsp+8h] [rbp-88h]
  void *v85; // [rsp+18h] [rbp-78h] BYREF
  __int128 v86; // [rsp+20h] [rbp-70h]
  __int64 v87; // [rsp+38h] [rbp-58h] BYREF
  __int128 v88; // [rsp+40h] [rbp-50h]
  unsigned __int64 v89; // [rsp+50h] [rbp-40h]

  v2 = *(__int64 **)a2;
  v89 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 8);
  v81 = 0;
  v85 = nullptr;
  v86 = 0;
  v83 = &v2[3 * v3];
  if ( v2 == v83 )
  {
    v87 = 0;
    v88 = 0;
    goto LABEL_108;
  }
  do
  {
    v4 = v2[1];
    if ( v4 > 1 )
    {
      v5 = (_BYTE *)*v2;
      v6 = (_BYTE *)(*v2 + v4 - 1);
      v7 = (_BYTE *)*v2;
      if ( *v2 < (unsigned __int64)v6 )
      {
        while ( *v7 == 9 )
        {
          if ( v6 == ++v7 )
          {
            *v5 = *v6;
            v48 = (char *)*v2;
            goto LABEL_88;
          }
        }
        if ( v5 >= v7 )
          goto LABEL_8;
        v75 = v6 - v7;
        v76 = (_BYTE *)(v75 + 1);
        v77 = v75;
        memmove(v5, v7, v75 + 1);
        v78 = (_BYTE *)*v2;
        v48 = (char *)*v2;
        if ( v77 )
        {
          v79 = v2[1];
          if ( v79 < (unsigned __int64)v76 )
          {
            if ( v2[2] < (unsigned __int64)v76 )
            {
              v80 = qvector_reserve(v2, *v2, v76, 1);
              *v2 = v80;
              v48 = (char *)v80;
              v79 = v2[1];
            }
            memset(&v48[v79], 0, (size_t)&v76[-v79]);
            v2[1] = (__int64)v76;
            v78 = (_BYTE *)*v2;
          }
          else if ( v76 != (_BYTE *)v79 )
          {
            v2[1] = (__int64)v76;
          }
          v78[v77] = 0;
          goto LABEL_90;
        }
LABEL_88:
        if ( v48 )
        {
          v2[1] = 0;
          qfree(v48);
          *v2 = 0;
          v2[2] = 0;
        }
LABEL_90:
        v49 = v2[1];
        if ( v49 <= 1 )
          goto LABEL_13;
        v5 = (_BYTE *)*v2;
        v6 = (_BYTE *)(*v2 + v49 - 1);
LABEL_8:
        if ( v5 < v6 )
        {
          v8 = v5;
          while ( *v8 == 32 )
          {
            if ( ++v8 == v6 )
            {
              *v5 = *v8;
              v47 = (char *)*v2;
              goto LABEL_85;
            }
          }
          if ( v5 >= v8 )
            goto LABEL_13;
          v69 = v6 - v8;
          v70 = (_BYTE *)(v69 + 1);
          v71 = v69;
          memmove(v5, v8, v69 + 1);
          v72 = *v2;
          v47 = (char *)*v2;
          if ( v71 )
          {
            v73 = v2[1];
            if ( v73 < (unsigned __int64)v70 )
            {
              if ( v2[2] < (unsigned __int64)v70 )
              {
                v74 = qvector_reserve(v2, *v2, v70, 1);
                *v2 = v74;
                v47 = (char *)v74;
                v73 = v2[1];
              }
              memset(&v47[v73], 0, (size_t)&v70[-v73]);
              v2[1] = (__int64)v70;
              v72 = *v2;
            }
            else if ( v70 != (_BYTE *)v73 )
            {
              v2[1] = (__int64)v70;
            }
            *(_BYTE *)(v72 + v71) = 0;
            goto LABEL_13;
          }
LABEL_85:
          if ( v47 )
          {
            v2[1] = 0;
            qfree(v47);
            *v2 = 0;
            v2[2] = 0;
          }
        }
      }
    }
LABEL_13:
    sub_5E54C0((__int64)v2);
    v9 = v2[1];
    v10 = v9;
    if ( !v9 )
    {
LABEL_33:
      v20 = nullptr;
      goto LABEL_34;
    }
    while ( 1 )
    {
      v11 = v10 - 1;
      if ( v10 - 1 <= 3 )
        break;
      v12 = (char *)*v2;
      v13 = (char *)*v2;
      if ( strncmp((const char *)*v2, "/**/", 4u) )
        goto LABEL_61;
      if ( v10 == 5 )
      {
        v14 = 1;
        v15 = 0;
      }
      else
      {
        v15 = v10 - 5;
        v14 = v10 - 4;
        memmove(v12, v12 + 4, v15);
        v12 = (char *)*v2;
      }
      if ( v2[2] < v14 )
      {
        v37 = qvector_reserve(v2, v12, v14, 1);
        *v2 = v37;
        v12 = (char *)v37;
      }
      v2[1] = v14;
      v12[v15] = 0;
      v10 = v2[1];
      if ( !v10 )
        goto LABEL_21;
    }
    if ( v10 != 4 )
      goto LABEL_21;
    v13 = (char *)*v2;
LABEL_61:
    v38 = v13;
    if ( *v13 != 47 )
      goto LABEL_21;
    if ( v13[1] == 42 && v13[2] == 42 || v13[1] == 42 && v13[2] == 33 )
    {
      v81 = 1;
LABEL_94:
      if ( v10 == 4 )
        goto LABEL_68;
      goto LABEL_95;
    }
    if ( v13[1] == 47 && v13[2] == 47 )
      goto LABEL_94;
    if ( v13[1] != 47 || v13[2] != 33 )
      goto LABEL_21;
    if ( v10 == 4 )
    {
LABEL_68:
      v39 = 1;
      v40 = 0;
      if ( v2[2] )
        goto LABEL_96;
LABEL_69:
      v41 = qvector_reserve(v2, v38, v39, 1);
      *v2 = v41;
      v38 = (const char *)v41;
      goto LABEL_96;
    }
LABEL_95:
    v40 = v10 - 4;
    v39 = v11 - 2;
    memmove(v13, v13 + 3, v40);
    v38 = (const char *)*v2;
    if ( v2[2] < v39 )
      goto LABEL_69;
LABEL_96:
    v2[1] = v39;
    v38[v40] = 0;
    v10 = v2[1];
    v9 = v10;
    if ( v10 <= 1 )
      goto LABEL_104;
    v50 = (char *)*v2;
    v51 = *(_BYTE *)*v2;
    if ( v51 != 60 )
      goto LABEL_98;
    v63 = (_BYTE *)(v10 - 1);
    v64 = 0;
    if ( v10 != 2 )
    {
      v64 = v10 - 2;
      memmove(v50, v50 + 1, v10 - 2);
      v50 = (char *)*v2;
    }
    if ( v2[2] < (unsigned __int64)v63 )
    {
      v66 = qvector_reserve(v2, v50, v10 - 1, 1);
      *v2 = v66;
      v50 = (char *)v66;
    }
    v2[1] = (__int64)v63;
    v50[v64] = 0;
    v10 = v2[1];
    v9 = v10;
    if ( v10 <= 1 )
    {
LABEL_104:
      if ( !v81 )
        goto LABEL_31;
      if ( v10 )
      {
        v81 = 1;
        v9 = v10;
        goto LABEL_31;
      }
LABEL_106:
      v81 = 1;
      v9 = 0;
      v20 = nullptr;
LABEL_34:
      v21 = v86;
      v22 = (char *)v85;
      if ( *((_QWORD *)&v86 + 1) < (unsigned __int64)(v86 + 1) )
      {
        v85 = (void *)qvector_reserve(&v85, v85, v86 + 1, 24);
        v21 = v86;
        v22 = (char *)v85;
      }
      v23 = &v22[24 * v21];
      *(_QWORD *)v23 = v20;
      *(__m128i *)(v23 + 8) = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
      *(_QWORD *)&v86 = v86 + 1;
      goto LABEL_37;
    }
    v50 = (char *)*v2;
    v51 = *(_BYTE *)*v2;
LABEL_98:
    if ( v51 != 32 )
    {
      v9 = v10;
      if ( !v81 )
        goto LABEL_31;
      goto LABEL_23;
    }
    v61 = (_BYTE *)(v10 - 1);
    v62 = 0;
    if ( v10 != 2 )
    {
      v62 = v10 - 2;
      memmove(v50, v50 + 1, v10 - 2);
      v50 = (char *)*v2;
    }
    if ( v2[2] < (unsigned __int64)v61 )
    {
      v67 = qvector_reserve(v2, v50, v10 - 1, 1);
      *v2 = v67;
      v50 = (char *)v67;
    }
    v2[1] = (__int64)v61;
    v50[v62] = 0;
    v10 = v2[1];
LABEL_21:
    v9 = v10;
    if ( !v81 )
      goto LABEL_31;
    if ( !v10 )
      goto LABEL_106;
LABEL_23:
    if ( v10 - 1 <= 1 )
    {
      v9 = v10;
      if ( v10 <= 1 )
      {
        v81 = 1;
      }
      else
      {
        v16 = (char *)*v2;
LABEL_72:
        v81 = 1;
        if ( *v16 == 42 )
          goto LABEL_73;
LABEL_30:
        v9 = v10;
      }
      goto LABEL_31;
    }
    v16 = (char *)*v2;
    v17 = v10 - 3;
    v18 = (_BYTE *)(*v2 + v10 - 3);
    if ( *v18 != 42 || v18[1] != 47 )
      goto LABEL_72;
    v19 = (_BYTE *)(v10 - 2);
    if ( v2[2] < (unsigned __int64)v19 )
    {
      v60 = qvector_reserve(v2, *v2, v19, 1);
      *v2 = v60;
      v18 = (_BYTE *)(v17 + v60);
    }
    v2[1] = (__int64)v19;
    *v18 = 0;
    sub_5E54C0((__int64)v2);
    v10 = v2[1];
    if ( v10 > 1 )
    {
      v16 = (char *)*v2;
      v81 = 0;
      if ( *(_BYTE *)*v2 != 42 )
        goto LABEL_30;
LABEL_73:
      v42 = (_BYTE *)(v10 - 1);
      v43 = 0;
      if ( v10 != 2 )
      {
        v43 = v10 - 2;
        memmove(v16, v16 + 1, v10 - 2);
        v16 = (char *)*v2;
      }
      if ( v2[2] < (unsigned __int64)v42 )
      {
        v65 = qvector_reserve(v2, v16, v10 - 1, 1);
        *v2 = v65;
        v16 = (char *)v65;
      }
      v2[1] = (__int64)v42;
      v16[v43] = 0;
      v9 = v2[1];
      if ( v9 > 1 )
      {
        v44 = (char *)*v2;
        if ( *(_BYTE *)*v2 == 32 )
        {
          v45 = (_BYTE *)(v9 - 1);
          v46 = 0;
          if ( v9 != 2 )
          {
            v46 = v9 - 2;
            memmove(v44, v44 + 1, v9 - 2);
            v44 = (char *)*v2;
          }
          if ( v2[2] < (unsigned __int64)v45 )
          {
            v68 = qvector_reserve(v2, v44, v9 - 1, 1);
            *v2 = v68;
            v44 = (char *)v68;
          }
          v2[1] = (__int64)v45;
          v44[v46] = 0;
          v9 = v2[1];
          goto LABEL_31;
        }
LABEL_32:
        v20 = (void *)qalloc_or_throw(v9);
        memcpy(v20, (const void *)*v2, v9);
        goto LABEL_34;
      }
LABEL_31:
      if ( !v9 )
        goto LABEL_33;
      goto LABEL_32;
    }
    v81 = 0;
LABEL_37:
    v2 += 3;
  }
  while ( v83 != v2 );
  v87 = 0;
  v88 = 0;
  if ( !(_QWORD)v86 )
  {
LABEL_108:
    if ( !a1 )
      goto LABEL_113;
    v29 = nullptr;
    v52 = 0u;
    goto LABEL_110;
  }
  v24 = (char *)v85;
  v25 = v86 - 1;
  v26 = (char *)v85 + 24 * v86;
  if ( v85 == v26 )
  {
    if ( (_QWORD)v86 != 1 )
      goto LABEL_125;
    v29 = nullptr;
    if ( !a1 )
      goto LABEL_114;
LABEL_127:
    v52 = v88;
LABEL_110:
    v53 = *(void **)a1;
    v54 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)a1 = v29;
    *(_OWORD *)(a1 + 8) = v52;
    v87 = (__int64)v53;
    *((_QWORD *)&v88 + 1) = v54;
    goto LABEL_111;
  }
  v27 = (char *)v85;
  do
  {
    v28 = *((_QWORD *)v27 + 1);
    if ( v28 )
      v25 = v25 + v28 - 1;
    v27 += 24;
  }
  while ( v27 != v26 );
  v29 = nullptr;
  if ( !v25 )
  {
LABEL_45:
    v30 = v24;
    do
    {
      v35 = v88;
      if ( (unsigned __int64)v88 > 1 )
      {
        v36 = v88 - 1;
        if ( *((_QWORD *)&v88 + 1) < (unsigned __int64)(v88 + 1) )
        {
          v87 = qvector_reserve(&v87, v29, v88 + 1, 1);
          v29 = (_BYTE *)v87;
        }
        *(_QWORD *)&v88 = v35 + 1;
        v29[v35] = 0;
        *(_BYTE *)(v87 + v36) = 10;
        v29 = (_BYTE *)v87;
      }
      v31 = *((_QWORD *)v30 + 1);
      if ( v31 )
      {
        v32 = v31 - 1;
        if ( v31 != 1 )
        {
          v33 = v88;
          v34 = v31 - 1;
          if ( (_QWORD)v88 )
          {
            v33 = v88 - 1;
            v34 = v32 + v88 - 1;
            v31 += v88 - 1;
          }
          if ( *((_QWORD *)&v88 + 1) < v31 )
          {
            v82 = v34;
            v87 = qvector_reserve(&v87, v29, v31, 1);
            v34 = v82;
            v29 = (_BYTE *)v87;
          }
          *(_QWORD *)&v88 = v31;
          v29[v34] = 0;
          memcpy((void *)(v33 + v87), *(const void **)v30, v32);
          v29 = (_BYTE *)v87;
        }
      }
      v30 += 24;
    }
    while ( v26 != v30 );
    goto LABEL_126;
  }
LABEL_125:
  v87 = qvector_reserve(&v87, 0, v25, 1);
  v29 = (_BYTE *)v87;
  v24 = (char *)v85;
  v26 = (char *)v85 + 24 * v86;
  if ( v26 != v85 )
    goto LABEL_45;
LABEL_126:
  v53 = v29;
  if ( a1 )
    goto LABEL_127;
LABEL_111:
  if ( v53 )
  {
    *(_QWORD *)&v88 = 0;
    qfree(v53);
  }
LABEL_113:
  v24 = (char *)v85;
LABEL_114:
  if ( v24 )
  {
    v55 = v86;
    if ( (_QWORD)v86 )
    {
      v56 = 0;
      do
      {
        v57 = &v24[24 * v56];
        v58 = *(void **)v57;
        if ( *(_QWORD *)v57 )
        {
          *((_QWORD *)v57 + 1) = 0;
          qfree(v58);
          v24 = (char *)v85;
        }
        ++v56;
      }
      while ( v55 != v56 );
    }
    *(_QWORD *)&v86 = 0;
    qfree(v24);
  }
  return v89 - __readfsqword(0x28u);
}
