__int64 __fastcall sub_4BABD0(__int64 a1)
{
  __int64 v1; // rbx
  const char **v3; // rbp
  const char *v4; // r15
  size_t v5; // rax
  size_t v6; // r13
  size_t v7; // r12
  __int64 v8; // r13
  char *v9; // r15
  char *v10; // rax
  int *v11; // r14
  int *v12; // rbx
  char *v13; // rbp
  int *v14; // r12
  const char *v15; // rsi
  const char *v16; // rdi
  int v17; // eax
  int *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  const char *v21; // rsi
  const char *v22; // rax
  __int64 v23; // r15
  __int64 v24; // r14
  const char *v25; // r13
  _QWORD *v26; // rbp
  _QWORD *v27; // r12
  void *v28; // rdi
  __int64 v29; // rax
  size_t v30; // rax
  size_t v31; // r13
  void *v32; // rdx
  const void *v33; // r10
  void *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // r12
  __int64 v38; // r15
  __int64 v39; // rbx
  char *v40; // r14
  const char *v41; // rdi
  char *v42; // r9
  __int64 *v43; // r15
  __int64 *v44; // r13
  void *v45; // rdi
  __int64 v46; // rdx
  _QWORD *v47; // rdi
  __int64 v48; // r15
  size_t v49; // r9
  int *v50; // r12
  size_t v51; // r14
  void *v52; // r12
  void *v53; // rax
  void *v54; // r12
  void *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  size_t v58; // rax
  size_t v59; // r13
  void *v60; // rdx
  const void *v61; // r10
  void *v62; // rdi
  __int64 v63; // [rsp+10h] [rbp-F8h]
  const char **src; // [rsp+20h] [rbp-E8h]
  void *srca; // [rsp+20h] [rbp-E8h]
  void *srcb; // [rsp+20h] [rbp-E8h]
  char *srce; // [rsp+20h] [rbp-E8h]
  void *srcd; // [rsp+20h] [rbp-E8h]
  void *srcg; // [rsp+20h] [rbp-E8h]
  void *srcf; // [rsp+20h] [rbp-E8h]
  void *srcc; // [rsp+20h] [rbp-E8h]
  void *srch; // [rsp+20h] [rbp-E8h]
  __int64 v73; // [rsp+28h] [rbp-E0h]
  __int64 v74; // [rsp+30h] [rbp-D8h]
  char *v75; // [rsp+38h] [rbp-D0h]
  const void *v76; // [rsp+38h] [rbp-D0h]
  const void *v77; // [rsp+38h] [rbp-D0h]
  __int64 v78; // [rsp+40h] [rbp-C8h] BYREF
  void **v79; // [rsp+48h] [rbp-C0h]
  __int64 v80; // [rsp+50h] [rbp-B8h] BYREF
  int v81; // [rsp+58h] [rbp-B0h] BYREF
  void *v82; // [rsp+60h] [rbp-A8h]
  int *v83; // [rsp+68h] [rbp-A0h]
  int *v84; // [rsp+70h] [rbp-98h]
  __int64 v85; // [rsp+78h] [rbp-90h]
  char *s2; // [rsp+80h] [rbp-88h] BYREF
  __int128 v87; // [rsp+88h] [rbp-80h]
  void *dest; // [rsp+98h] [rbp-70h] BYREF
  __int128 v89; // [rsp+A0h] [rbp-68h]
  void *ptr; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v91; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v92; // [rsp+C8h] [rbp-40h]

  v92 = __readfsqword(0x28u);
  v78 = 0;
  v79 = nullptr;
  v63 = *(_QWORD *)(qword_2CA1698 + 1528);
  v1 = sub_4B89E0(&v78, a1);
  if ( !v1 )
  {
    v81 = 0;
    v82 = nullptr;
    v83 = &v81;
    v84 = &v81;
    v85 = 0;
    if ( (_DWORD)v78 != 3 )
      sub_4B0B70();
    v74 = (__int64)*v79 + 40 * (_QWORD)v79[1];
    if ( *v79 != (void *)v74 )
    {
      v3 = (const char **)*v79;
      while ( 1 )
      {
        s2 = nullptr;
        dest = nullptr;
        ptr = nullptr;
        v87 = 0;
        v89 = 0;
        v91 = 0;
        if ( v3[1] )
        {
          v4 = *v3;
          if ( *v3 )
          {
            v5 = strlen(*v3);
            v6 = v5;
            if ( v5 )
            {
              v7 = v5 + 1;
              s2 = (char *)qvector_reserve(&s2, 0, v5 + 1, 1);
              *(_QWORD *)&v87 = v7;
              memmove(s2, v4, v6);
              s2[v6] = 0;
            }
          }
        }
        if ( !v82 )
          goto LABEL_30;
        v8 = v87;
        v9 = s2;
        src = v3;
        v10 = (char *)haystack;
        v73 = v1;
        v11 = &v81;
        v12 = (int *)v82;
        if ( (_QWORD)v87 )
          v10 = s2;
        v13 = v10;
        while ( 1 )
        {
          v19 = *((_QWORD *)v12 + 5);
          if ( !v8 )
            break;
          v14 = v12;
          v15 = v9;
          v16 = haystack;
          if ( v19 )
            goto LABEL_15;
LABEL_16:
          v17 = strcmp(v16, v15);
          v18 = *((int **)v12 + 2);
          v12 = *((int **)v12 + 3);
          if ( v17 >= 0 )
          {
            v11 = v14;
            v12 = v18;
          }
          if ( !v12 )
          {
            v3 = src;
            v1 = v73;
            goto LABEL_25;
          }
        }
        if ( v19 )
          break;
        while ( 1 )
        {
          v20 = *((_QWORD *)v12 + 2);
          if ( !v20 )
            break;
          v11 = v12;
          v12 = *((int **)v12 + 2);
          if ( *(_QWORD *)(v20 + 40) )
            goto LABEL_23;
        }
        v50 = v12;
        v3 = src;
        v1 = v73;
        v11 = v50;
LABEL_25:
        if ( v11 == &v81 )
          goto LABEL_30;
        if ( !*((_QWORD *)v11 + 5) )
        {
          if ( v8 )
          {
            v21 = haystack;
            goto LABEL_29;
          }
LABEL_35:
          v1 = (__int64)sub_4BA180(v63);
          if ( ptr )
          {
            *(_QWORD *)&v91 = 0;
            qfree(ptr);
          }
          if ( dest )
          {
            *(_QWORD *)&v89 = 0;
            qfree(dest);
          }
          if ( s2 )
          {
            *(_QWORD *)&v87 = 0;
            qfree(s2);
          }
          goto LABEL_41;
        }
        v21 = *((const char **)v11 + 4);
        if ( !v8 )
          v9 = (char *)haystack;
LABEL_29:
        if ( strcmp(v9, v21) >= 0 )
          goto LABEL_35;
LABEL_30:
        sub_4BA290(&v80, (const char *)&s2);
        if ( *((_DWORD *)v3 + 6) != 3 )
          goto LABEL_35;
        v22 = v3[4];
        v23 = *(_QWORD *)v22;
        v24 = *(_QWORD *)v22 + 40LL * *((_QWORD *)v22 + 1);
        if ( v24 != *(_QWORD *)v22 )
        {
          while ( *(_QWORD *)(v23 + 8) )
          {
            v25 = *(const char **)v23;
            if ( !strcmp(*(const char **)v23, "ptn") )
            {
              if ( *(_DWORD *)(v23 + 24) != 2 )
                goto LABEL_35;
              v29 = *(_QWORD *)(v23 + 32);
              if ( *(_QWORD *)(v29 + 8)
                && *(_QWORD *)v29
                && (srca = *(void **)v29, v30 = strlen(*(const char **)v29), (v31 = v30) != 0) )
              {
                v32 = (void *)(v30 + 1);
                v33 = srca;
                v34 = dest;
                if ( *((_QWORD *)&v89 + 1) < v30 + 1 )
                {
                  v76 = srca;
                  srcd = (void *)(v30 + 1);
                  dest = (void *)qvector_reserve(&dest, dest, v32, 1);
                  v33 = v76;
                  v34 = dest;
                  v32 = srcd;
                }
                *(_QWORD *)&v89 = v32;
                memmove(v34, v33, v31);
                *((_BYTE *)dest + v31) = 0;
              }
              else
              {
                *(_QWORD *)&v89 = 0;
              }
            }
            else
            {
              if ( strcmp(v25, "rpl") || *(_DWORD *)(v23 + 24) != 2 )
                goto LABEL_35;
              v57 = *(_QWORD *)(v23 + 32);
              if ( *(_QWORD *)(v57 + 8)
                && *(_QWORD *)v57
                && (srcc = *(void **)v57, v58 = strlen(*(const char **)v57), (v59 = v58) != 0) )
              {
                v60 = (void *)(v58 + 1);
                v61 = srcc;
                v62 = ptr;
                if ( *((_QWORD *)&v91 + 1) < v58 + 1 )
                {
                  v77 = srcc;
                  srch = (void *)(v58 + 1);
                  ptr = (void *)qvector_reserve(&ptr, ptr, v60, 1);
                  v61 = v77;
                  v62 = ptr;
                  v60 = srch;
                }
                *(_QWORD *)&v91 = v60;
                memmove(v62, v61, v59);
                *((_BYTE *)ptr + v59) = 0;
              }
              else
              {
                *(_QWORD *)&v91 = 0;
              }
            }
            v23 += 40;
            if ( v24 == v23 )
              goto LABEL_58;
          }
          goto LABEL_35;
        }
LABEL_58:
        if ( (unsigned __int64)v87 <= 1 || (unsigned __int64)v89 <= 1 )
          goto LABEL_35;
        v35 = *(_QWORD *)(qword_2CA1698 + 1528);
        v36 = *(_QWORD *)(v35 + 248);
        if ( v36 )
        {
          srcb = (void *)v1;
          v37 = *(_QWORD *)(v35 + 240);
          v38 = 0;
          v39 = 0;
          v75 = (char *)v87;
          v40 = s2;
          while ( 1 )
          {
            v41 = haystack;
            if ( *(_QWORD *)(v37 + v38 + 8) )
              v41 = *(const char **)(v37 + v38);
            if ( !strcmp(v41, v40) )
              break;
            ++v39;
            v38 += 72;
            if ( v39 == v36 )
            {
              v1 = (__int64)srcb;
              goto LABEL_86;
            }
          }
          v42 = v75;
          v1 = (__int64)srcb;
          v43 = (__int64 *)(*(_QWORD *)(v63 + 240) + v38);
          v44 = v43;
          if ( v43 != (__int64 *)&s2 )
          {
            v45 = (void *)*v43;
            if ( v43[2] < (unsigned __int64)v75 )
            {
              v56 = qvector_reserve(v43, *v43, v75, 1);
              *v43 = v56;
              v42 = v75;
              v45 = (void *)v56;
            }
            v43[1] = (__int64)v42;
            srce = v42;
            memmove(v45, v40, (size_t)(v75 - 1));
            srce[*v43 - 1] = 0;
            if ( v43 + 3 != (__int64 *)&dest )
            {
              v46 = v89;
              if ( !(_QWORD)v89 || (v51 = v89 - 1, (_QWORD)v89 == 1) )
              {
                v43[4] = 0;
              }
              else
              {
                v52 = dest;
                v53 = (void *)v43[3];
                if ( v43[5] < (unsigned __int64)v89 )
                {
                  srcf = (void *)v89;
                  v53 = (void *)qvector_reserve(v43 + 3, v43[3], v89, 1);
                  v43[3] = (__int64)v53;
                  v46 = (__int64)srcf;
                }
                v43[4] = v46;
                memmove(v53, v52, v51);
                *(_BYTE *)(v43[3] + v51) = 0;
              }
            }
          }
          v47 = v43 + 6;
          if ( v43 + 6 != (__int64 *)&ptr )
          {
            v48 = v91;
            if ( (_QWORD)v91 && (v49 = v91 - 1, (_QWORD)v91 != 1) )
            {
              v54 = ptr;
              v55 = (void *)v44[6];
              if ( v44[8] < (unsigned __int64)v91 )
              {
                srcg = (void *)(v91 - 1);
                v55 = (void *)qvector_reserve(v47, v44[6], v91, 1);
                v44[6] = (__int64)v55;
                v49 = (size_t)srcg;
              }
              v44[7] = v48;
              memmove(v55, v54, v49);
              *(_BYTE *)(v44[6] + v48 - 1) = 0;
            }
            else
            {
              v44[7] = 0;
            }
          }
        }
        else
        {
LABEL_86:
          sub_4BA8C0((__int64 *)(v63 + 240), &s2);
        }
        if ( ptr )
        {
          *(_QWORD *)&v91 = 0;
          qfree(ptr);
        }
        if ( dest )
        {
          *(_QWORD *)&v89 = 0;
          qfree(dest);
        }
        if ( s2 )
        {
          *(_QWORD *)&v87 = 0;
          qfree(s2);
        }
        v3 += 5;
        if ( (const char **)v74 == v3 )
        {
LABEL_41:
          v26 = v82;
          if ( v82 )
          {
            do
            {
              v27 = v26;
              sub_4B1DA0((_QWORD *)v26[3]);
              v28 = (void *)v26[4];
              v26 = (_QWORD *)v26[2];
              if ( v28 )
              {
                v27[5] = 0;
                qfree(v28);
              }
              operator delete(v27, 0x38u);
            }
            while ( v26 );
          }
          goto LABEL_2;
        }
      }
LABEL_23:
      v14 = v12;
LABEL_15:
      v16 = *((const char **)v12 + 4);
      v15 = v13;
      goto LABEL_16;
    }
  }
LABEL_2:
  jvalue_t_clear(&v78);
  return v1;
}

