__int64 __fastcall parse_command_line(__int64 *a1, __int64 a2, __int64 a3, char a4)
{
  bool v5; // r12
  __m128i *v6; // rax
  char v7; // r15
  __m128i *v8; // rbx
  char v9; // r13
  char v10; // bl
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rax
  void *v14; // rcx
  void *v15; // rdx
  __m128i v16; // xmm0
  __int8 *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rax
  void *v21; // rcx
  void *v22; // rdx
  __m128i v23; // xmm0
  void *v24; // rdi
  __int64 v25; // rbx
  __int64 v27; // r14
  unsigned __int64 v28; // rdx
  _BYTE *v29; // rsi
  __int32 v30; // r15d
  char v31; // dl
  __m128i *v32; // rdi
  char *v33; // rax
  char v34; // r14
  char *v35; // r12
  char *v36; // r13
  unsigned __int64 v37; // r12
  __int64 v38; // rax
  unsigned __int64 v39; // r12
  __m128i *v40; // rsi
  __int64 v41; // r12
  __int64 v42; // rax
  void *v43; // rdx
  __m128i *v44; // r12
  void *v45; // rax
  __m128i v46; // xmm0
  __int64 v47; // rdx
  __int64 v48; // r13
  void *v49; // rdi
  __int64 v50; // r14
  unsigned __int64 v51; // rdx
  _BYTE *v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rsi
  __int64 v56; // rax
  void *v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rax
  char v61; // al
  __int64 *i; // r10
  char v63; // r11
  __int64 v64; // r12
  unsigned __int64 v65; // rdx
  _BYTE *v66; // rsi
  void *v67; // rdi
  __int64 v68; // rdx
  __m128i v69; // xmm0
  void *v70; // r14
  __m128i v71; // xmm0
  __int64 v72; // r14
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rsi
  __m128i *v76; // rax
  __m128i *v77; // r12
  __m128i *v78; // rbx
  __int8 *v79; // rbp
  __int64 v80; // rdx
  __m128i v81; // xmm0
  __int64 v82; // rdx
  void *v83; // rdi
  __int64 v85; // rax
  __int64 v86; // rcx
  char v87; // dl
  int v88; // eax
  __m128i v89; // [rsp+0h] [rbp-D8h] BYREF
  __m128i *v90; // [rsp+10h] [rbp-C8h]
  __int64 *v91; // [rsp+18h] [rbp-C0h]
  __int64 v92; // [rsp+20h] [rbp-B8h]
  bool v93; // [rsp+2Fh] [rbp-A9h]
  __int64 v94; // [rsp+30h] [rbp-A8h]
  int v95; // [rsp+38h] [rbp-A0h]
  int v96; // [rsp+3Ch] [rbp-9Ch]
  void *v97; // [rsp+40h] [rbp-98h] BYREF
  __m128i v98; // [rsp+48h] [rbp-90h]
  void *v99; // [rsp+60h] [rbp-78h] BYREF
  __m128i v100; // [rsp+68h] [rbp-70h]
  void *ptr; // [rsp+80h] [rbp-58h] BYREF
  __m128i v102; // [rsp+88h] [rbp-50h] BYREF
  unsigned __int64 v103; // [rsp+98h] [rbp-40h]

  v92 = a2;
  v94 = a3;
  v103 = __readfsqword(0x28u);
  if ( !a3 )
    return 0;
  v98 = 0;
  v97 = nullptr;
  v5 = (a4 & 4) != 0;
  v6 = (__m128i *)skip_spaces(a3);
  v7 = v6->m128i_i8[0];
  v8 = v6;
  v93 = a2 != 0;
  v9 = 0;
  if ( v7 )
  {
    while ( 1 )
    {
      v17 = &v8->m128i_i8[1];
      if ( v7 == 34 || v7 == 39 )
        break;
      if ( v9 )
        goto LABEL_27;
      if ( (unsigned int)v7 > 0x7F )
        goto LABEL_59;
      if ( !isspace(v7) )
      {
LABEL_27:
        if ( v7 != 92 || v9 == 39 )
          goto LABEL_59;
        v7 = v8->m128i_i8[1];
        if ( v7 != 34 && v7 != 92 )
        {
          v50 = v98.m128i_i64[0];
          v51 = 2;
          if ( v98.m128i_i64[0] )
          {
            v51 = v98.m128i_i64[0] + 1;
            v50 = v98.m128i_i64[0] - 1;
          }
          v52 = v97;
          if ( v98.m128i_i64[1] < v51 )
          {
            v89.m128i_i64[0] = v51;
            v97 = (void *)qvector_reserve(&v97, v97, v51, 1);
            v51 = v89.m128i_i64[0];
            v52 = v97;
          }
          v98.m128i_i64[0] = v51;
          v52[v50] = 92;
          *((_BYTE *)v97 + v50 + 1) = 0;
          if ( !v7 )
            goto LABEL_21;
        }
        v8 = (__m128i *)((char *)v8 + 2);
LABEL_31:
        v27 = v98.m128i_i64[0];
        v28 = 2;
        if ( v98.m128i_i64[0] )
        {
          v28 = v98.m128i_i64[0] + 1;
          v27 = v98.m128i_i64[0] - 1;
        }
        v29 = v97;
        if ( v98.m128i_i64[1] < v28 )
        {
          v89.m128i_i64[0] = v28;
          v97 = (void *)qvector_reserve(&v97, v97, v28, 1);
          v28 = v89.m128i_i64[0];
          v29 = v97;
        }
        v98.m128i_i64[0] = v28;
        v29[v27] = v7;
        *((_BYTE *)v97 + v27 + 1) = 0;
        if ( (v7 & 0xFD) != 0x3C || v9 || v5 )
          goto LABEL_13;
        v30 = v98.m128i_i32[0];
        if ( !v98.m128i_i64[0] )
          goto LABEL_58;
        v5 = v93 && (unsigned __int64)(v98.m128i_i64[0] - 1) <= 2;
        if ( v5 )
        {
          if ( v98.m128i_i64[0] == 1 )
            goto LABEL_58;
          v31 = *((char *)v97 + v98.m128i_i64[0] - 2);
          if ( v31 == 62 )
          {
            v87 = v8->m128i_i8[0];
            if ( v98.m128i_i64[0] != 2 )
            {
              if ( (unsigned __int8)(*(_BYTE *)v97 - 48) <= 9u )
              {
                v88 = *(char *)v97 - 48;
                if ( v87 == 62 )
                {
                  v95 = 6;
                  v32 = (__m128i *)&v8->m128i_i8[1];
                }
                else
                {
                  v95 = 2;
                  v32 = v8;
                }
                v96 = v88;
                goto LABEL_44;
              }
LABEL_58:
              v5 = 0;
              v9 = 0;
              goto LABEL_13;
            }
            if ( v87 == 62 )
            {
              v95 = 6;
              v32 = (__m128i *)&v8->m128i_i8[1];
            }
            else
            {
              v95 = 2;
              v32 = v8;
            }
            v96 = 1;
LABEL_44:
            v99 = nullptr;
            v100 = 0;
            v33 = (char *)skip_spaces(v32);
            v34 = *v33;
            v35 = v33;
            if ( *v33 == 34 || v34 == 39 )
            {
              v61 = v33[1];
              for ( i = (__int64 *)(v35 + 1); v61; v61 = v36[1] )
              {
                v36 = (char *)i + 1;
                if ( v61 == 92 )
                {
                  v63 = *((_BYTE *)i + 1);
                  if ( !v63 )
                    break;
                }
                else
                {
                  if ( v34 == v61 )
                  {
                    v95 |= 8u;
                    v37 = v100.m128i_i64[0];
                    goto LABEL_51;
                  }
                  v63 = *(_BYTE *)i;
                  v36 = (char *)i;
                }
                v64 = v100.m128i_i64[0];
                i = (__int64 *)(v36 + 1);
                v65 = 2;
                if ( v100.m128i_i64[0] )
                {
                  v65 = v100.m128i_i64[0] + 1;
                  v64 = v100.m128i_i64[0] - 1;
                }
                v66 = v99;
                if ( v100.m128i_i64[1] < v65 )
                {
                  v91 = (__int64 *)(v36 + 1);
                  LOBYTE(v90) = v63;
                  v89.m128i_i64[0] = v65;
                  v99 = (void *)qvector_reserve(&v99, v99, v65, 1);
                  i = v91;
                  v66 = v99;
                  v63 = (char)v90;
                  v65 = v89.m128i_i64[0];
                }
                v100.m128i_i64[0] = v65;
                v66[v64] = v63;
                *((_BYTE *)v99 + v64 + 1) = 0;
              }
            }
            else
            {
              v36 = v33;
              if ( !v34 )
                goto LABEL_50;
              do
              {
                if ( (unsigned int)v34 <= 0x7F && (isspace(v34) || (v34 & 0xFD) == 0x3C) )
                  break;
                v34 = *++v36;
              }
              while ( v34 );
              if ( v35 >= v36 )
                goto LABEL_50;
              v67 = nullptr;
              ptr = nullptr;
              v102 = 0;
              v68 = v36 - v35 + 1;
              if ( v36 - v35 != -1 )
              {
                v89.m128i_i64[0] = v36 - v35 + 1;
                ptr = (void *)qvector_reserve(&ptr, 0, v68, 1);
                v68 = v89.m128i_i64[0];
                v67 = ptr;
              }
              v102.m128i_i64[0] = v68;
              memmove(v67, v35, v36 - v35);
              *((_BYTE *)ptr + v36 - v35) = 0;
              v69 = _mm_loadu_si128(&v102);
              v70 = ptr;
              v102 = 0;
              ptr = nullptr;
              v37 = v69.m128i_i64[0];
              if ( v99 )
              {
                v89 = v69;
                v100.m128i_i64[0] = 0;
                qfree(v99);
                v71 = _mm_load_si128(&v89);
                v99 = v70;
                v100 = v71;
                if ( !ptr )
                  goto LABEL_51;
                v102.m128i_i64[0] = 0;
                qfree(ptr);
LABEL_50:
                v37 = v100.m128i_i64[0];
                goto LABEL_51;
              }
              v99 = v70;
              v100 = v69;
LABEL_51:
              if ( v37 > 1 )
              {
                v38 = *(_QWORD *)(v92 + 8);
                v39 = *(_QWORD *)(v92 + 16);
                if ( v39 < v38 + 1 )
                {
                  v72 = v92;
                  v73 = qvector_reserve(v92, 0, v38 + 1, 48);
                  v74 = *(_QWORD *)(v72 + 16);
                  v75 = v73;
                  v76 = *(__m128i **)(v72 + 8);
                  *(_QWORD *)(v72 + 16) = v39;
                  v77 = *(__m128i **)v72;
                  v89.m128i_i64[0] = v74;
                  v90 = v76;
                  if ( (__int64)&v76[-1].m128i_i64[1] + 7 >= 0 )
                  {
                    v90 = v8;
                    v78 = (__m128i *)v75;
                    v91 = a1;
                    v79 = &v76[-1].m128i_i8[15];
                    do
                    {
                      v78->m128i_i32[0] = v77->m128i_i32[0];
                      v80 = v77->m128i_i64[1];
                      v77->m128i_i64[1] = 0;
                      v81 = _mm_loadu_si128(v77 + 1);
                      v78->m128i_i64[1] = v80;
                      v78[1] = v81;
                      v82 = v77[2].m128i_i64[0];
                      v77[1].m128i_i64[1] = 0;
                      v78[2].m128i_i64[0] = v82;
                      v78[2].m128i_i32[2] = v77[2].m128i_i32[2];
                      v83 = (void *)v77->m128i_i64[1];
                      if ( v83 )
                      {
                        v77[1].m128i_i64[0] = 0;
                        qfree(v83);
                      }
                      v77 += 3;
                      v78 += 3;
                    }
                    while ( v79-- != nullptr );
                    v8 = v90;
                    a1 = v91;
                    v77 = *(__m128i **)v92;
                  }
                  v90 = (__m128i *)v75;
                  qfree(v77);
                  v85 = v92;
                  v40 = v90;
                  v86 = v89.m128i_i64[0];
                  *(_QWORD *)v92 = v90;
                  *(_QWORD *)(v85 + 16) = v86;
                  v38 = *(_QWORD *)(v85 + 8);
                }
                else
                {
                  v40 = *(__m128i **)v92;
                }
                v41 = 3 * v38;
                v42 = v92;
                v43 = v99;
                v44 = &v40[v41];
                v44->m128i_i64[1] = 0;
                v44[1] = 0;
                ++*(_QWORD *)(v42 + 8);
                v45 = (void *)v44->m128i_i64[1];
                v44->m128i_i64[1] = (__int64)v43;
                v99 = v45;
                LODWORD(v45) = v95;
                v46 = _mm_loadu_si128(v44 + 1);
                v44[1].m128i_i64[0] = v100.m128i_i64[0];
                v44[2].m128i_i32[0] = (int)v45;
                v47 = v100.m128i_i64[1];
                LODWORD(v45) = v96;
                v100 = v46;
                v44[1].m128i_i64[1] = v47;
                v44->m128i_i32[0] = (int)v45;
                v48 = skip_spaces(v36);
                v49 = v99;
                v44[2].m128i_i32[1] = (_DWORD)v8 - v30 + 1 - v94;
                v44[2].m128i_i32[2] = v48 - ((_DWORD)v8 - v30 + 1);
                if ( v49 )
                {
                  v100.m128i_i64[0] = 0;
                  qfree(v49);
                }
                if ( v48 )
                {
                  v98.m128i_i64[0] = 0;
                  v8 = (__m128i *)v48;
                }
                goto LABEL_58;
              }
            }
            if ( v99 )
            {
              v100.m128i_i64[0] = 0;
              v5 = 0;
              v9 = 0;
              qfree(v99);
              goto LABEL_13;
            }
            goto LABEL_58;
          }
          v5 = v98.m128i_i64[0] == 2 && v31 == 60;
          if ( v5 )
          {
            v95 = 1;
            v32 = v8;
            v96 = 0;
            goto LABEL_44;
          }
        }
LABEL_13:
        v7 = v8->m128i_i8[0];
        if ( !v8->m128i_i8[0] )
          goto LABEL_21;
      }
      else
      {
        v18 = a1[1];
        v19 = *a1;
        if ( a1[2] < (unsigned __int64)(v18 + 1) )
        {
          v59 = qvector_reserve(a1, v19, v18 + 1, 24);
          *a1 = v59;
          v18 = a1[1];
          v19 = v59;
        }
        v20 = v19 + 24 * v18;
        *(_QWORD *)v20 = 0;
        v21 = v97;
        *(_OWORD *)(v20 + 8) = 0;
        ++a1[1];
        v22 = *(void **)v20;
        *(_QWORD *)v20 = v21;
        v23 = _mm_loadu_si128((const __m128i *)(v20 + 8));
        v97 = v22;
        *(__m128i *)(v20 + 8) = v98;
        v98 = v23;
        v8 = (__m128i *)skip_spaces(&v8->m128i_i8[1]);
        v5 = 0;
        v7 = v8->m128i_i8[0];
        if ( !v8->m128i_i8[0] )
          goto LABEL_21;
      }
    }
    if ( !v9 )
    {
      v8 = (__m128i *)((char *)v8 + 1);
      v9 = v7;
      goto LABEL_13;
    }
    if ( v9 == v7 )
    {
      v10 = v8->m128i_i8[1];
      if ( (unsigned int)v10 <= 0x7F && (isspace(v10) || !v10) )
      {
        v11 = a1[1];
        v12 = *a1;
        if ( a1[2] < (unsigned __int64)(v11 + 1) )
        {
          v53 = qvector_reserve(a1, v12, v11 + 1, 24);
          *a1 = v53;
          v11 = a1[1];
          v12 = v53;
        }
        v5 = 0;
        v13 = v12 + 24 * v11;
        *(_QWORD *)v13 = 0;
        v14 = v97;
        *(_OWORD *)(v13 + 8) = 0;
        ++a1[1];
        v15 = *(void **)v13;
        *(_QWORD *)v13 = v14;
        v16 = _mm_loadu_si128((const __m128i *)(v13 + 8));
        v97 = v15;
        *(__m128i *)(v13 + 8) = v98;
        v98 = v16;
      }
      v8 = (__m128i *)skip_spaces(v17);
      v9 = 0;
      goto LABEL_13;
    }
LABEL_59:
    v8 = (__m128i *)((char *)v8 + 1);
    goto LABEL_31;
  }
LABEL_21:
  if ( v98.m128i_i64[0] > 1uLL )
  {
    v54 = a1[1];
    v55 = *a1;
    if ( a1[2] < (unsigned __int64)(v54 + 1) )
    {
      v60 = qvector_reserve(a1, v55, v54 + 1, 24);
      *a1 = v60;
      v54 = a1[1];
      v55 = v60;
    }
    v56 = v55 + 24 * v54;
    *(_QWORD *)v56 = 0;
    v57 = v97;
    *(_OWORD *)(v56 + 8) = 0;
    ++a1[1];
    v24 = *(void **)v56;
    *(_QWORD *)v56 = v57;
    v58 = *(_QWORD *)(v56 + 16);
    v97 = v24;
    *(__m128i *)(v56 + 8) = v98;
    v98.m128i_i64[1] = v58;
  }
  else
  {
    v24 = v97;
  }
  v25 = a1[1];
  if ( v24 )
  {
    v98.m128i_i64[0] = 0;
    qfree(v24);
  }
  return v25;
}

