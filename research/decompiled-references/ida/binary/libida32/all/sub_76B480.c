unsigned __int64 __fastcall sub_76B480(_QWORD *a1, const void *a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  int v6; // r8d
  char **v7; // rbx
  size_t v8; // rax
  size_t v9; // rbp
  const char *v10; // rbx
  int v11; // ebp
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  int v14; // r15d
  __int64 v15; // rcx
  __int64 v16; // r12
  __int64 v17; // r14
  const char **v18; // r13
  __int64 v19; // rbp
  __int64 v20; // rax
  const char **v21; // rbp
  int v22; // eax
  __int64 v23; // r12
  __int64 v24; // r12
  __int64 v25; // rax
  const char **v26; // r13
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // rdx
  const char **v30; // r15
  __int64 v31; // r13
  unsigned __int64 v32; // rdx
  __int64 v33; // r12
  int v34; // eax
  unsigned __int64 v35; // r14
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rbx
  const char **v39; // rdi
  __int64 v40; // rax
  const char **v41; // rdx
  const char *v42; // rcx
  bool v43; // cf
  unsigned __int64 v44; // r14
  __int64 v45; // r13
  __int64 v46; // rax
  __int64 v47; // r15
  const char **v48; // rdi
  __int64 v49; // rax
  const char **v50; // rdx
  const char *v51; // rcx
  __int64 v52; // r15
  char *v53; // r14
  __int64 v54; // r12
  const char *v55; // rbp
  __int64 v56; // rbx
  __int64 v57; // rax
  __m128i v58; // xmm0
  void *v59; // rdi
  void *v60; // rdi
  char *v61; // r13
  __int64 v62; // rax
  __int64 v63; // rax
  const char **v64; // rdx
  const char *v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  const char **v69; // rdx
  const char *v70; // rcx
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // r14
  __int64 v73; // r12
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // r13
  char *v77; // r14
  __int64 v78; // r15
  const char *v79; // rbp
  __int64 v80; // rbx
  __int64 v81; // rax
  __m128i v82; // xmm0
  void *v83; // rdi
  int v84; // [rsp+8h] [rbp-90h]
  int v85; // [rsp+8h] [rbp-90h]
  __int64 v86; // [rsp+8h] [rbp-90h]
  int v87; // [rsp+8h] [rbp-90h]
  int v88; // [rsp+8h] [rbp-90h]
  __int64 v90; // [rsp+10h] [rbp-88h]
  unsigned __int64 v91; // [rsp+18h] [rbp-80h]
  int v93; // [rsp+2Ch] [rbp-6Ch]
  const char *v94; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v95; // [rsp+58h] [rbp-40h]

  v4 = a1[3];
  v5 = a1[2];
  v95 = __readfsqword(0x28u);
  v6 = a3;
  if ( a1[4] < (unsigned __int64)(v4 + 1) )
  {
    v66 = qvector_reserve(a1 + 2, v5, v4 + 1, 24);
    v6 = a3;
    a1[2] = v66;
    v5 = v66;
    v4 = a1[3];
  }
  v7 = (char **)(v5 + 24 * v4);
  *v7 = nullptr;
  *(_OWORD *)(v7 + 1) = 0;
  ++a1[3];
  if ( a2 && (v84 = v6, v8 = strlen((const char *)a2), v6 = v84, (v9 = v8) != 0) )
  {
    v60 = *v7;
    v61 = (char *)(v8 + 1);
    if ( (unsigned __int64)v7[2] < v8 + 1 )
    {
      v74 = qvector_reserve(v7, *v7, v8 + 1, 1);
      v6 = v84;
      *v7 = (char *)v74;
      v60 = (void *)v74;
    }
    v7[1] = v61;
    v88 = v6;
    memmove(v60, a2, v9);
    v6 = v88;
    (*v7)[v9] = 0;
  }
  else
  {
    v7[1] = nullptr;
  }
  v85 = v6;
  v10 = (const char *)qstrtok(*v7, "|");
  if ( v10 )
  {
    v11 = v85;
    while ( 1 )
    {
      v12 = 1;
      v13 = a1[6];
      if ( v13 )
        break;
LABEL_62:
      v44 = a1[7];
      if ( v44 < v12 )
      {
        v45 = qvector_reserve(a1 + 5, 0, v12, 32);
        v52 = a1[7];
        a1[7] = v44;
        v53 = (char *)a1[5];
        if ( a1[6] - 1LL >= 0 )
        {
          v87 = v11;
          v54 = v45;
          v55 = v10;
          v56 = a1[6] - 1LL;
          do
          {
            v57 = *(_QWORD *)v53;
            v58 = _mm_loadu_si128((const __m128i *)(v53 + 8));
            *(_QWORD *)v53 = 0;
            *((_QWORD *)v53 + 2) = 0;
            *(_QWORD *)v54 = v57;
            *(__m128i *)(v54 + 8) = v58;
            *(_DWORD *)(v54 + 24) = *((_DWORD *)v53 + 6);
            v59 = *(void **)v53;
            if ( *(_QWORD *)v53 )
            {
              *((_QWORD *)v53 + 1) = 0;
              qfree(v59);
            }
            v53 += 32;
            v54 += 32;
            v43 = v56-- == 0;
          }
          while ( !v43 );
          v10 = v55;
          v11 = v87;
          v53 = (char *)a1[5];
        }
        qfree(v53);
        a1[5] = v45;
        v13 = a1[6];
        a1[7] = v52;
      }
      else
      {
        v45 = a1[5];
      }
      v24 = v45 + 32 * v13;
      *(_QWORD *)v24 = 0;
      *(_OWORD *)(v24 + 8) = 0;
      ++a1[6];
      *(_DWORD *)(v24 + 24) = v11;
LABEL_23:
      v25 = *(_QWORD *)(v24 + 8);
      v26 = *(const char ***)v24;
      v94 = v10;
      v27 = *(_QWORD *)(v24 + 16);
      v28 = v25 + 1;
      if ( &v94 < v26 || &v94 >= &v26[v27] )
      {
        if ( v27 < v28 )
        {
          v37 = qvector_reserve(v24, 0, v28, 8);
          v38 = *(_QWORD *)(v24 + 16);
          v39 = *(const char ***)v24;
          *(_QWORD *)(v24 + 16) = v27;
          v26 = (const char **)v37;
          v40 = *(_QWORD *)(v24 + 8) - 1LL;
          if ( v40 >= 0 )
          {
            v41 = v26;
            do
            {
              v42 = *v39;
              ++v41;
              ++v39;
              *(v41 - 1) = v42;
              v43 = v40-- == 0;
            }
            while ( !v43 );
LABEL_59:
            v39 = *(const char ***)v24;
          }
          goto LABEL_60;
        }
LABEL_47:
        v26[v25] = v94;
      }
      else
      {
        if ( v27 < v28 )
        {
          v67 = qvector_reserve(v24, 0, v28, 8);
          v47 = *(_QWORD *)(v24 + 16);
          v48 = *(const char ***)v24;
          *(_QWORD *)(v24 + 16) = v27;
          v26 = (const char **)v67;
          v68 = *(_QWORD *)(v24 + 8) - 1LL;
          if ( v68 >= 0 )
          {
            v69 = v26;
            do
            {
              v70 = *v48;
              ++v69;
              ++v48;
              *(v69 - 1) = v70;
              v43 = v68-- == 0;
            }
            while ( !v43 );
LABEL_69:
            v48 = *(const char ***)v24;
          }
          goto LABEL_70;
        }
LABEL_26:
        v26[v25] = v10;
      }
      ++*(_QWORD *)(v24 + 8);
LABEL_28:
      v10 = (const char *)qstrtok(nullptr, "|");
      if ( !v10 )
        return v95 - __readfsqword(0x28u);
    }
    v93 = v11;
    v91 = a1[6];
    v14 = 0;
    v15 = 0;
    v90 = a1[5];
    while ( 1 )
    {
      v16 = v90 + 32 * v15;
      v17 = *(_QWORD *)(v16 + 8);
      v18 = *(const char ***)v16;
      v86 = *(_QWORD *)v16 + 8 * v17;
      v19 = (8 * v17) >> 5;
      v20 = (8 * v17) >> 3;
      if ( v19 > 0 )
      {
        v21 = &v18[4 * v19];
        while ( strcmp(*v18, v10) )
        {
          if ( !strcmp(v18[1], v10) )
          {
            ++v18;
            break;
          }
          if ( !strcmp(v18[2], v10) )
          {
            v18 += 2;
            break;
          }
          if ( !strcmp(v18[3], v10) )
          {
            v18 += 3;
            break;
          }
          v18 += 4;
          if ( v18 == v21 )
          {
            v20 = (v86 - (__int64)v18) >> 3;
            goto LABEL_31;
          }
        }
LABEL_17:
        if ( (const char **)v86 != v18 )
          goto LABEL_36;
        goto LABEL_18;
      }
LABEL_31:
      if ( v20 != 2 )
      {
        if ( v20 != 3 )
        {
          if ( v20 != 1 )
            goto LABEL_18;
          goto LABEL_34;
        }
        if ( !strcmp(*v18, v10) )
          goto LABEL_17;
        ++v18;
      }
      if ( !strcmp(*v18, v10) )
        goto LABEL_17;
      ++v18;
LABEL_34:
      if ( !strcmp(*v18, v10) && (const char **)v86 != v18 )
      {
LABEL_36:
        v30 = v18;
        v11 = v93;
        v31 = v17;
        if ( *(_DWORD *)(v16 + 24) == v93 )
          goto LABEL_28;
        if ( ((v86 - (__int64)v30) >> 3) - 2 >= 0 )
        {
          memmove(v30, v30 + 1, v86 - (_QWORD)v30 - 8);
          v31 = *(_QWORD *)(v16 + 8);
        }
        *(_QWORD *)(v16 + 8) = v31 - 1;
        v32 = a1[6];
        if ( v32 )
        {
          v33 = 0;
          v34 = 0;
          while ( 1 )
          {
            v24 = a1[5] + 32 * v33;
            if ( v93 == *(_DWORD *)(v24 + 24) )
              break;
            v33 = ++v34;
            if ( v34 >= v32 )
              goto LABEL_89;
          }
          if ( v24 )
            goto LABEL_44;
LABEL_89:
          v71 = v32 + 1;
        }
        else
        {
          v71 = 1;
        }
        v72 = a1[7];
        if ( v72 < v71 )
        {
          v75 = qvector_reserve(a1 + 5, 0, v71, 32);
          v76 = a1[7];
          a1[7] = v72;
          v73 = v75;
          v77 = (char *)a1[5];
          if ( a1[6] - 1LL >= 0 )
          {
            v78 = v75;
            v79 = v10;
            v80 = a1[6] - 1LL;
            do
            {
              v81 = *(_QWORD *)v77;
              v82 = _mm_loadu_si128((const __m128i *)(v77 + 8));
              *(_QWORD *)v77 = 0;
              *((_QWORD *)v77 + 2) = 0;
              *(_QWORD *)v78 = v81;
              *(__m128i *)(v78 + 8) = v82;
              *(_DWORD *)(v78 + 24) = *((_DWORD *)v77 + 6);
              v83 = *(void **)v77;
              if ( *(_QWORD *)v77 )
              {
                *((_QWORD *)v77 + 1) = 0;
                qfree(v83);
              }
              v77 += 32;
              v78 += 32;
              v43 = v80-- == 0;
            }
            while ( !v43 );
            v10 = v79;
            v11 = v93;
            v77 = (char *)a1[5];
          }
          qfree(v77);
          a1[5] = v73;
          v32 = a1[6];
          a1[7] = v76;
        }
        else
        {
          v73 = a1[5];
        }
        v24 = 32 * v32 + v73;
        *(_QWORD *)v24 = 0;
        *(_OWORD *)(v24 + 8) = 0;
        ++a1[6];
        *(_DWORD *)(v24 + 24) = v11;
LABEL_44:
        v25 = *(_QWORD *)(v24 + 8);
        v26 = *(const char ***)v24;
        v94 = v10;
        v35 = *(_QWORD *)(v24 + 16);
        v36 = v25 + 1;
        if ( &v94 < v26 || &v94 >= &v26[v35] )
        {
          if ( v35 >= v36 )
            goto LABEL_47;
          v62 = qvector_reserve(v24, 0, v36, 8);
          v38 = *(_QWORD *)(v24 + 16);
          v39 = *(const char ***)v24;
          *(_QWORD *)(v24 + 16) = v35;
          v26 = (const char **)v62;
          v63 = *(_QWORD *)(v24 + 8) - 1LL;
          if ( v63 >= 0 )
          {
            v64 = v26;
            do
            {
              v65 = *v39;
              ++v64;
              ++v39;
              *(v64 - 1) = v65;
              v43 = v63-- == 0;
            }
            while ( !v43 );
            goto LABEL_59;
          }
LABEL_60:
          qfree(v39);
          *(_QWORD *)v24 = v26;
          v25 = *(_QWORD *)(v24 + 8);
          *(_QWORD *)(v24 + 16) = v38;
          goto LABEL_47;
        }
        if ( v35 >= v36 )
          goto LABEL_26;
        v46 = qvector_reserve(v24, 0, v36, 8);
        v47 = *(_QWORD *)(v24 + 16);
        v48 = *(const char ***)v24;
        *(_QWORD *)(v24 + 16) = v35;
        v26 = (const char **)v46;
        v49 = *(_QWORD *)(v24 + 8) - 1LL;
        if ( v49 >= 0 )
        {
          v50 = v26;
          do
          {
            v51 = *v48;
            ++v50;
            ++v48;
            *(v50 - 1) = v51;
            v43 = v49-- == 0;
          }
          while ( !v43 );
          goto LABEL_69;
        }
LABEL_70:
        qfree(v48);
        *(_QWORD *)v24 = v26;
        v25 = *(_QWORD *)(v24 + 8);
        *(_QWORD *)(v24 + 16) = v47;
        goto LABEL_26;
      }
LABEL_18:
      v15 = ++v14;
      if ( v14 >= v91 )
      {
        v13 = v91;
        v11 = v93;
        v22 = 0;
        v23 = 0;
        while ( 1 )
        {
          v24 = v90 + 32 * v23;
          if ( v93 == *(_DWORD *)(v24 + 24) )
            break;
          v23 = ++v22;
          if ( v22 >= v91 )
            goto LABEL_61;
        }
        if ( v24 )
          goto LABEL_23;
LABEL_61:
        v12 = v91 + 1;
        goto LABEL_62;
      }
    }
  }
  return v95 - __readfsqword(0x28u);
}

