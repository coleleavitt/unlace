unsigned __int64 __fastcall sub_3B6CD0(__int64 a1, __int64 *a2)
{
  int i; // eax
  char *v5; // rdi
  __int64 *v6; // r15
  size_t v7; // rax
  size_t v8; // r9
  char *v9; // rsi
  __int64 idati; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  size_t v14; // r9
  size_t v15; // rax
  char *v16; // r10
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  char *v22; // rax
  unsigned __int64 v23; // rdx
  signed __int64 v24; // r9
  __int64 v25; // rax
  void *v26; // r10
  void *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  char *v32; // rsi
  __int64 v33; // rax
  const char *src; // [rsp+8h] [rbp-50C0h]
  _BYTE *srcc; // [rsp+8h] [rbp-50C0h]
  char *srca; // [rsp+8h] [rbp-50C0h]
  _BYTE *srce; // [rsp+8h] [rbp-50C0h]
  void *srcb; // [rsp+8h] [rbp-50C0h]
  void *srcg; // [rsp+8h] [rbp-50C0h]
  void *srcd; // [rsp+8h] [rbp-50C0h]
  void *srcf; // [rsp+8h] [rbp-50C0h]
  unsigned __int64 v42; // [rsp+10h] [rbp-50B8h]
  size_t v43; // [rsp+10h] [rbp-50B8h]
  signed __int64 v44; // [rsp+10h] [rbp-50B8h]
  const char *v45; // [rsp+10h] [rbp-50B8h]
  signed __int64 v46; // [rsp+10h] [rbp-50B8h]
  __int64 v47; // [rsp+18h] [rbp-50B0h]
  size_t v48; // [rsp+18h] [rbp-50B0h]
  __int64 v49; // [rsp+20h] [rbp-50A8h] BYREF
  __int128 v50; // [rsp+28h] [rbp-50A0h]
  char v51[4]; // [rsp+40h] [rbp-5088h] BYREF
  char s[8228]; // [rsp+44h] [rbp-5084h] BYREF
  __int64 v53; // [rsp+2068h] [rbp-3060h]
  int v54; // [rsp+2074h] [rbp-3054h]
  _BYTE v55[4104]; // [rsp+4080h] [rbp-1048h] BYREF
  unsigned __int64 v56; // [rsp+5088h] [rbp-40h]

  v56 = __readfsqword(0x28u);
  v53 = 0;
  v54 = 0;
  qmakepath(v55, 4096, a1, "*.til", 0);
  for ( i = qfindfirst(v55, v51, 0); !i; i = qfindnext(v51) )
  {
    v9 = s;
    v49 = 0;
    v50 = 0;
    v17 = load_til_header(a1, s, &v49);
    if ( !v17 )
      goto LABEL_9;
    v18 = a2[1];
    v19 = *a2;
    if ( a2[2] < (unsigned __int64)(v18 + 1) )
    {
      v20 = qvector_reserve(a2, v19, v18 + 1, 56);
      *a2 = v20;
      v18 = a2[1];
      v19 = v20;
    }
    v5 = s;
    v6 = (__int64 *)(v19 + 56 * v18);
    *v6 = 0;
    v6[3] = 0;
    *(_OWORD *)(v6 + 1) = 0;
    *((_OWORD *)v6 + 2) = 0;
    ++a2[1];
    v7 = strlen(s);
    v8 = v7;
    if ( !v7 )
    {
      v6[1] = 0;
LABEL_4:
      v9 = (char *)&s1;
      goto LABEL_5;
    }
    v5 = (char *)*v6;
    v21 = v7 + 1;
    if ( v6[2] < v7 + 1 )
    {
      v43 = v7;
      srcb = (void *)(v7 + 1);
      v30 = qvector_reserve(v6, *v6, v21, 1);
      v8 = v43;
      v21 = (__int64)srcb;
      *v6 = v30;
      v5 = (char *)v30;
    }
    v6[1] = v21;
    srcc = (_BYTE *)v8;
    memmove(v5, s, v8);
    srcc[*v6] = 0;
    if ( !v6[1] )
      goto LABEL_4;
    v42 = v6[1];
    v47 = *v6;
    srca = (char *)*v6;
    v22 = strrchr((const char *)*v6, 46);
    v5 = srca;
    v23 = v42;
    if ( v22 )
    {
      v24 = v22 - srca;
      if ( v22 - srca != -1 )
      {
        if ( v24 )
        {
          v26 = (void *)(v24 + 1);
          if ( v42 < v24 + 1 )
          {
            if ( v6[2] < (unsigned __int64)v26 )
            {
              v32 = srca;
              v46 = v22 - srca;
              srcf = (void *)(v24 + 1);
              v33 = qvector_reserve(v6, v32, v24 + 1, 1);
              v23 = v6[1];
              v24 = v46;
              v47 = v33;
              *v6 = v33;
              v26 = srcf;
            }
            srcg = v26;
            v44 = v24;
            v5 = (char *)(v23 + v47);
            memset((void *)(v23 + v47), 0, (size_t)v26 - v23);
            v22 = (char *)(*v6 + v44);
            v6[1] = (__int64)srcg;
          }
          else if ( v42 != v24 + 1 )
          {
            v6[1] = (__int64)v26;
          }
          *v22 = 0;
          v25 = v6[1];
        }
        else
        {
          if ( !srca )
            goto LABEL_30;
          v6[1] = 0;
          qfree(srca, (_BYTE *)&qword_28 + 6, v42);
          *v6 = 0;
          v25 = v6[1];
          v6[2] = 0;
        }
        if ( !v25 )
          goto LABEL_4;
        v5 = (char *)*v6;
      }
    }
LABEL_30:
    v9 = v5;
LABEL_5:
    idati = get_idati(v5);
    *((_BYTE *)v6 + 48) = sub_3B5400(idati, v9);
    if ( *(_QWORD *)(v17 + 8)
      && (src = *(const char **)(v17 + 8), v15 = strlen(src), v16 = (char *)src, (v14 = v15) != 0) )
    {
      v28 = (void *)v6[3];
      v29 = v15 + 1;
      if ( v6[5] < v15 + 1 )
      {
        v48 = v15;
        v45 = src;
        srcd = (void *)(v15 + 1);
        v31 = qvector_reserve(v6 + 3, v28, v29, 1);
        v6[3] = v31;
        v14 = v48;
        v28 = (void *)v31;
        v16 = (char *)v45;
        v29 = (__int64)srcd;
      }
      v6[4] = v29;
      v9 = v16;
      srce = (_BYTE *)v14;
      memmove(v28, v16, v14);
      v14 = (size_t)srce;
      srce[v6[3]] = 0;
    }
    else
    {
      v6[4] = 0;
    }
    free_til(v17, v9, v11, v12, v13, v14);
LABEL_9:
    if ( v49 )
    {
      *(_QWORD *)&v50 = 0;
      qfree(v49, v9);
    }
  }
  qfindclose(v51);
  return v56 - __readfsqword(0x28u);
}
