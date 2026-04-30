__int64 __fastcall sub_4376C0(
        char a1,
        char *a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  size_t v17; // r13
  unsigned int v18; // r14d
  char *v19; // rsi
  __int64 v20; // rbp
  unsigned __int64 v21; // r15
  char *v22; // rbp
  const char *v24; // rdi
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // r13
  __int64 v29; // rax
  __int64 (__fastcall *v30)(_QWORD *, __int64, __int64, unsigned int); // r8
  __int64 v31; // rdx
  __int64 v32; // rdi
  const char *v33; // r14
  __int64 (*v34)(); // rax
  __int64 v35; // rdx
  __int64 v36; // r14
  __int64 v37; // r13
  __int64 v38; // rax
  __int64 v39; // rdi
  char *v40; // r8
  const char *v41; // rcx
  const char *v42; // rdx
  size_t v43; // r15
  const char *v44; // rsi
  char *v45; // rdx
  char *v46; // rax
  const char *v47; // rsi
  __int64 (__fastcall *v48)(_QWORD *, __int64, __int64, __int64, __int64); // r9
  __int64 v49; // rdi
  __int64 (*v50)(); // rax
  __int64 v51; // r14
  __int64 v52; // r13
  __int64 v53; // rax
  __int64 v54; // rdi
  void *v55; // rax
  const char *v56; // rsi
  unsigned __int64 v57; // rdi
  _BYTE *v58; // rdx
  _BYTE *v59; // r10
  _BYTE *v60; // r9
  __int64 v61; // rax
  char v62; // [rsp-8h] [rbp-B8h]
  _BYTE *v63; // [rsp+0h] [rbp-B0h]
  _BYTE *v64; // [rsp+8h] [rbp-A8h]
  _BYTE *v65; // [rsp+8h] [rbp-A8h]
  _BYTE *v66; // [rsp+10h] [rbp-A0h]
  char *s2; // [rsp+18h] [rbp-98h] BYREF
  __int128 v68; // [rsp+20h] [rbp-90h]
  unsigned __int64 v69; // [rsp+38h] [rbp-78h] BYREF
  __int128 v70; // [rsp+40h] [rbp-70h]
  const char *v71; // [rsp+58h] [rbp-58h] BYREF
  __int128 v72; // [rsp+60h] [rbp-50h]
  unsigned __int64 v73; // [rsp+70h] [rbp-40h]

  v17 = *((_QWORD *)a2 + 1);
  v73 = __readfsqword(0x28u);
  v18 = a4;
  v68 = 0;
  s2 = nullptr;
  if ( v17 )
  {
    v46 = (char *)qalloc_or_throw(v17);
    v47 = *(const char **)a2;
    *((_QWORD *)&v68 + 1) = v17;
    s2 = v46;
    memcpy(v46, v47, v17);
    *(_QWORD *)&v68 = v17;
  }
  v19 = a2;
  if ( !(unsigned int)sub_1697D0(
                        (int)"BUTTON YES Ok\n"
                             "BUTTON NO NONE\n"
                             "BUTTON CANCEL Cancel\n"
                             "Enter new path or name\n"
                             "Current name/path: %q\n"
                             " <New name/path   :q1:1000 : 50:: >",
                        (__int64)a2,
                        (__int64)&s2,
                        a4,
                        a5,
                        a6,
                        (__m128)0LL,
                        a8,
                        a9,
                        a10,
                        a11,
                        a12,
                        a13,
                        a14,
                        v62) )
  {
    LODWORD(v22) = 2;
    goto LABEL_17;
  }
  if ( sub_425DC0(&s2) )
    goto LABEL_5;
  v43 = *((_QWORD *)a2 + 1);
  v69 = 0;
  v70 = 0;
  if ( v43 )
  {
    v55 = (void *)qalloc_or_throw(v43);
    v56 = *(const char **)a2;
    v69 = (unsigned __int64)v55;
    *((_QWORD *)&v70 + 1) = v43;
    memcpy(v55, v56, v43);
    *(_QWORD *)&v70 = v43;
    if ( a3 )
    {
      if ( v43 != 1 )
      {
        v57 = v69;
        v58 = (_BYTE *)(v69 + v43 - 1);
        if ( v69 < (unsigned __int64)v58 )
        {
          while ( *(v58 - 1) == 47 )
          {
            if ( (_BYTE *)v69 == --v58 )
              goto LABEL_100;
          }
        }
        v59 = &v58[-v69];
        if ( v58 == (_BYTE *)v69 )
        {
LABEL_100:
          if ( v69 )
          {
            *(_QWORD *)&v70 = 0;
            qfree(v69, v56);
            v69 = 0;
            *((_QWORD *)&v70 + 1) = 0;
          }
        }
        else
        {
          v60 = v59 + 1;
          if ( v43 < (unsigned __int64)(v59 + 1) )
          {
            if ( *((_QWORD *)&v70 + 1) < (unsigned __int64)v60 )
            {
              v66 = &v58[-v69];
              v65 = v59 + 1;
              v69 = qvector_reserve(&v69, v69, v59 + 1, 1);
              v43 = v70;
              v57 = v69;
              v59 = v66;
              v60 = v65;
            }
            v63 = v60;
            v64 = v59;
            memset((void *)(v43 + v57), 0, (size_t)&v60[-v43]);
            v58 = &v64[v69];
            *(_QWORD *)&v70 = v63;
          }
          else if ( (_BYTE *)v43 != v59 + 1 )
          {
            *(_QWORD *)&v70 = v59 + 1;
          }
          *v58 = 0;
        }
      }
    }
  }
  v44 = nullptr;
  v71 = nullptr;
  v72 = 0;
  if ( (unsigned __int8)sub_425800((__int64 *)&v71, 0, (__int64)&v69) )
  {
    v45 = (char *)&s1;
    if ( (_QWORD)v68 )
      v45 = s2;
    v44 = &s1;
    if ( (_QWORD)v72 )
      v44 = v71;
    sub_425D00((__int64)&s2, v44, v45, 0);
  }
  if ( v71 )
  {
    *(_QWORD *)&v72 = 0;
    qfree(v71, v44);
  }
  if ( !v69 )
  {
LABEL_5:
    if ( !a3 )
      goto LABEL_14;
  }
  else
  {
    *(_QWORD *)&v70 = 0;
    qfree(v69, v44);
    if ( !a3 )
      goto LABEL_14;
  }
  v20 = v68;
  v19 = s2;
  if ( (_QWORD)v68 )
  {
    if ( (_QWORD)v68 != 1 && s2[(_QWORD)v68 - 2] == 47 )
    {
LABEL_21:
      v24 = &s1;
      if ( !*((_QWORD *)a2 + 1) )
        goto LABEL_22;
      goto LABEL_56;
    }
    v21 = v68 + 1;
    v20 = v68 - 1;
  }
  else
  {
    v21 = 2;
  }
  if ( *((_QWORD *)&v68 + 1) < v21 )
  {
    s2 = (char *)qvector_reserve(&s2, s2, v21, 1);
    v19 = s2;
  }
  *(_QWORD *)&v68 = v21;
  v19[v20] = 47;
  s2[v20 + 1] = 0;
LABEL_14:
  if ( (_QWORD)v68 )
  {
    v19 = s2;
    goto LABEL_21;
  }
  v19 = (char *)&s1;
  if ( !*((_QWORD *)a2 + 1) )
  {
LABEL_16:
    LODWORD(v22) = 1;
    goto LABEL_17;
  }
LABEL_56:
  v24 = *(const char **)a2;
LABEL_22:
  if ( !strcmp(v24, v19) )
    goto LABEL_16;
  v25 = sub_426230(v24, v19);
  v26 = (_QWORD *)sub_417080((__int64)v25);
  v27 = *v26;
  v28 = v26;
  v29 = v68;
  if ( a1 )
  {
    v30 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, unsigned int))(v27 + 344);
    v22 = (char *)&s1;
    if ( (_QWORD)v68 )
      v22 = s2;
    v31 = *((_QWORD *)a2 + 1);
    if ( v31 )
    {
      v33 = *(const char **)a2;
      if ( v30 == sub_419280 )
      {
        v32 = v28[1];
        if ( !v32 )
          goto LABEL_84;
LABEL_29:
        v34 = *(__int64 (**)())(*(_QWORD *)v32 + 480LL);
        if ( v34 != sub_178B60 && (unsigned __int8)v34() )
        {
          v29 = v68;
          v31 = *((_QWORD *)a2 + 1);
LABEL_84:
          if ( v29 )
          {
            v40 = s2;
            LODWORD(v22) = 52;
            v41 = &s1;
            if ( v31 )
              v41 = *(const char **)a2;
          }
          else if ( v31 )
          {
            v41 = *(const char **)a2;
            v40 = (char *)&s1;
            LODWORD(v22) = 52;
          }
          else
          {
            v40 = (char *)&s1;
            LODWORD(v22) = 52;
            v41 = &s1;
          }
          goto LABEL_87;
        }
        v72 = 0;
        v71 = nullptr;
        v22 = (char *)(*(unsigned int (__fastcall **)(_QWORD, const char **, const char *, char *, __int64))(*(_QWORD *)v28[1] + 312LL))(
                        v28[1],
                        &v71,
                        v33,
                        v22,
                        1);
        v19 = v22;
        (*(void (__fastcall **)(_QWORD *, char *, const char **))(*v28 + 24LL))(v28, v22, &v71);
        v35 = (__int64)v71;
        if ( v71 )
        {
          v36 = v72;
          if ( (_QWORD)v72 )
          {
            v37 = 0;
            do
            {
              v38 = v35 + 32 * v37;
              v39 = *(_QWORD *)(v38 + 8);
              if ( v39 )
              {
                *(_QWORD *)(v38 + 16) = 0;
                qfree(v39, v22);
                v35 = (__int64)v71;
              }
              ++v37;
            }
            while ( v36 != v37 );
          }
LABEL_36:
          *(_QWORD *)&v72 = 0;
          qfree(v35, v19);
          goto LABEL_37;
        }
        goto LABEL_37;
      }
    }
    else
    {
      if ( v30 == sub_419280 )
      {
        v32 = v28[1];
        v33 = &s1;
        if ( !v32 )
        {
          if ( !(_QWORD)v68 )
          {
            v40 = (char *)&s1;
            LODWORD(v22) = 52;
            v41 = &s1;
            v42 = "move/rename";
            goto LABEL_43;
          }
          v40 = s2;
          LODWORD(v22) = 52;
          v41 = &s1;
          goto LABEL_87;
        }
        goto LABEL_29;
      }
      v33 = &s1;
    }
    v19 = (char *)v33;
    LODWORD(v22) = v30(v28, (__int64)v33, (__int64)v22, 1u);
    goto LABEL_37;
  }
  v48 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64, __int64))(v27 + 336);
  v22 = (char *)&s1;
  if ( (_QWORD)v68 )
    v22 = s2;
  if ( *((_QWORD *)a2 + 1) )
  {
    v41 = *(const char **)a2;
    v19 = *(char **)a2;
    if ( v48 == sub_4193E0 )
    {
      v49 = v28[1];
      if ( !v49 )
      {
        LODWORD(v22) = 52;
        v40 = (char *)&s1;
        if ( (_QWORD)v68 )
          v40 = s2;
LABEL_42:
        v42 = "copy";
        if ( !a1 )
        {
LABEL_43:
          v19 = "Failed to %s file %s to %s:";
          sub_4168C0((unsigned int)v22, (__int64)"Failed to %s file %s to %s:", v42, v41, v40);
          goto LABEL_16;
        }
LABEL_87:
        v42 = "move/rename";
        goto LABEL_43;
      }
      goto LABEL_63;
    }
LABEL_97:
    LODWORD(v22) = v48(v28, (__int64)v19, (__int64)v22, v18, 1);
    goto LABEL_37;
  }
  if ( v48 != sub_4193E0 )
  {
    v19 = (char *)&s1;
    goto LABEL_97;
  }
  v49 = v28[1];
  v19 = (char *)&s1;
  if ( !v49 )
  {
    if ( (_QWORD)v68 )
    {
      v40 = s2;
      LODWORD(v22) = 52;
      v41 = &s1;
      v42 = "copy";
      goto LABEL_43;
    }
LABEL_95:
    v40 = (char *)&s1;
    LODWORD(v22) = 52;
    v42 = "copy";
    v41 = &s1;
    goto LABEL_43;
  }
LABEL_63:
  v50 = *(__int64 (**)())(*(_QWORD *)v49 + 480LL);
  if ( v50 != sub_178B60 && (unsigned __int8)v50() )
  {
    v61 = *((_QWORD *)a2 + 1);
    if ( (_QWORD)v68 )
    {
      v40 = s2;
      if ( v61 )
      {
        v41 = *(const char **)a2;
        LODWORD(v22) = 52;
      }
      else
      {
        LODWORD(v22) = 52;
        v41 = &s1;
      }
      v42 = "copy";
      goto LABEL_43;
    }
    if ( v61 )
    {
      v41 = *(const char **)a2;
      v40 = (char *)&s1;
      LODWORD(v22) = 52;
      v42 = "copy";
      goto LABEL_43;
    }
    goto LABEL_95;
  }
  v71 = nullptr;
  v72 = 0;
  v22 = (char *)(*(unsigned int (__fastcall **)(_QWORD, const char **, char *, char *, _QWORD, __int64))(*(_QWORD *)v28[1] + 304LL))(
                  v28[1],
                  &v71,
                  v19,
                  v22,
                  v18,
                  1);
  v19 = v22;
  (*(void (__fastcall **)(_QWORD *, char *, const char **))(*v28 + 24LL))(v28, v22, &v71);
  v35 = (__int64)v71;
  if ( v71 )
  {
    v51 = v72;
    if ( (_QWORD)v72 )
    {
      v52 = 0;
      do
      {
        v53 = v35 + 32 * v52;
        v54 = *(_QWORD *)(v53 + 8);
        if ( v54 )
        {
          *(_QWORD *)(v53 + 16) = 0;
          qfree(v54, v22);
          v35 = (__int64)v71;
        }
        ++v52;
      }
      while ( v51 != v52 );
    }
    goto LABEL_36;
  }
LABEL_37:
  if ( (_DWORD)v22 )
  {
    v40 = (char *)&s1;
    if ( (_QWORD)v68 )
      v40 = s2;
    v41 = &s1;
    if ( *((_QWORD *)a2 + 1) )
      v41 = *(const char **)a2;
    goto LABEL_42;
  }
LABEL_17:
  if ( s2 )
  {
    *(_QWORD *)&v68 = 0;
    qfree(s2, v19);
  }
  return (unsigned int)v22;
}
