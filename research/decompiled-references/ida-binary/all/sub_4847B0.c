unsigned __int64 __fastcall sub_4847B0(__int64 a1, const char *a2)
{
  const char *v3; // r13
  size_t v4; // rbp
  __int64 v5; // r12
  const char *v6; // rsi
  __int64 v7; // r14
  char *v8; // r15
  char *v10; // r12
  char *v11; // rbp
  char *v12; // rax
  size_t v13; // rax
  size_t v14; // r12
  size_t v15; // rbp
  const char *v16; // rdi
  const char *v17; // rax
  const char *v18; // rbp
  size_t v19; // rax
  size_t v20; // r12
  __int64 v21; // rax
  const char *v22; // r12
  void **v23; // rbp
  void *v24; // r13
  void *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdi
  char *v28; // rax
  __int64 v29; // rsi
  const char *v30; // r13
  bool v31; // zf
  __int64 v32; // rax
  const char *v33; // rax
  const char *v34; // rbp
  size_t v35; // rax
  size_t v36; // r12
  size_t v37; // rax
  size_t v38; // rbp
  const char *v39; // rdi
  const char *file_ext; // rax
  _BYTE *v41; // rsi
  _BYTE *v42; // rsi
  _BYTE *v43; // rax
  void *v44; // rdi
  size_t v45; // r13
  __int64 v46; // rbp
  __int64 v47; // r13
  unsigned __int64 v48; // r12
  _BYTE *v49; // rsi
  char *v50; // rbp
  void *v51; // rdi
  size_t v52; // r13
  unsigned __int64 v53; // rbp
  unsigned __int64 v54; // rbp
  size_t v55; // r13
  __int64 v56; // r12
  size_t v57; // r14
  _BYTE *v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rsi
  __int64 v61; // rdi
  void *v62; // rdi
  size_t v63; // r13
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  char *s; // [rsp+0h] [rbp-10A8h] BYREF
  __int128 v68; // [rsp+8h] [rbp-10A0h]
  void *dest; // [rsp+20h] [rbp-1088h] BYREF
  __int128 v70; // [rsp+28h] [rbp-1080h]
  void *v71; // [rsp+40h] [rbp-1068h] BYREF
  __int128 v72; // [rsp+48h] [rbp-1060h]
  char src[4104]; // [rsp+60h] [rbp-1048h] BYREF
  unsigned __int64 v74; // [rsp+1068h] [rbp-40h]

  v74 = __readfsqword(0x28u);
  s = nullptr;
  if ( a2 )
  {
    v3 = a2;
    v68 = 0;
    v4 = strlen(a2);
    v5 = v4 + 1;
  }
  else
  {
    v5 = 1;
    v4 = 0;
    v68 = 0;
    v3 = (const char *)&unk_5C2F25;
  }
  v6 = v3;
  s = (char *)qvector_reserve(&s, 0, v5, 1);
  *(_QWORD *)&v68 = v5;
  memmove(s, v3, v4);
  s[v4] = 0;
  v7 = v68;
  v8 = s;
  if ( (_QWORD)v68 )
  {
    v6 = (const char *)&dword_7C;
    v10 = &s[v68 - 1];
    v11 = s;
    v12 = strchr(s, 124);
    dest = nullptr;
    v70 = 0;
    if ( v12 )
    {
      do
      {
        v28 = strchr(v12 + 1, 124);
        v29 = *(_QWORD *)a1;
        v30 = v28;
        v31 = v28 == nullptr;
        v32 = *(_QWORD *)(a1 + 8);
        if ( v31 )
          v30 = &v8[v7 - 1];
        if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v32 + 1) )
        {
          v26 = qvector_reserve(a1, v29, v32 + 1, 48);
          *(_QWORD *)a1 = v26;
          v29 = v26;
          v32 = *(_QWORD *)(a1 + 8);
        }
        v27 = v29 + 48 * v32;
        *(_QWORD *)v27 = 0;
        *(_QWORD *)(v27 + 24) = 0;
        *(_OWORD *)(v27 + 8) = 0;
        *(_OWORD *)(v27 + 32) = 0;
        ++*(_QWORD *)(a1 + 8);
        sub_4836D0((__int64 *)v27, v11, v30);
        v11 = (char *)(v30 + 1);
        v6 = (const char *)&dword_7C;
        if ( v30 == v10 )
          v11 = &v8[v7 - 1];
        v12 = strchr(v11, 124);
      }
      while ( v12 );
    }
    else
    {
      if ( v7 == 1 )
        goto LABEL_4;
      v72 = 0;
      v71 = nullptr;
      if ( strchr(v8, 42) || strchr(v8, 63) )
      {
        *(_BYTE *)(a1 + 72) = 0;
        v13 = strlen(v3);
        v14 = v13 + 1;
        v15 = v13;
        dest = (void *)qvector_reserve(&dest, 0, v13 + 1, 1);
        *(_QWORD *)&v70 = v14;
        *((_BYTE *)dest + v15) = 0;
        memmove(dest, v3, v15);
      }
      else
      {
        *(_BYTE *)(a1 + 72) = 1;
        v33 = (const char *)qbasename(v8);
        v34 = v33;
        if ( v33 && (v35 = strlen(v33), (v36 = v35) != 0) )
        {
          v51 = *(void **)(a1 + 24);
          v52 = v35 + 1;
          if ( *(_QWORD *)(a1 + 40) < v35 + 1 )
          {
            v66 = qvector_reserve(a1 + 24, *(_QWORD *)(a1 + 24), v52, 1);
            *(_QWORD *)(a1 + 24) = v66;
            v51 = (void *)v66;
          }
          *(_QWORD *)(a1 + 32) = v52;
          memmove(v51, v34, v36);
          *(_BYTE *)(*(_QWORD *)(a1 + 24) + v36) = 0;
        }
        else
        {
          *(_QWORD *)(a1 + 32) = 0;
        }
        qdirname(src, 4096, v8);
        v37 = strlen(src);
        v38 = v37;
        if ( v37 )
        {
          v62 = *(void **)(a1 + 48);
          v63 = v37 + 1;
          if ( *(_QWORD *)(a1 + 64) < v37 + 1 )
          {
            v65 = qvector_reserve(a1 + 48, *(_QWORD *)(a1 + 48), v63, 1);
            *(_QWORD *)(a1 + 48) = v65;
            v62 = (void *)v65;
          }
          *(_QWORD *)(a1 + 56) = v63;
          memmove(v62, src, v38);
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + v38) = 0;
        }
        else
        {
          *(_QWORD *)(a1 + 56) = 0;
        }
        v39 = &s1;
        if ( *(_QWORD *)(a1 + 32) )
          v39 = *(const char **)(a1 + 24);
        file_ext = (const char *)get_file_ext(v39);
        if ( file_ext && *file_ext )
        {
          sub_169A50((__int64 *)&dest, (__int64)"*.%s", file_ext);
        }
        else
        {
          v41 = dest;
          if ( *((_QWORD *)&v70 + 1) <= 1u )
          {
            dest = (void *)qvector_reserve(&dest, dest, 2, 1);
            v41 = dest;
          }
          *(_QWORD *)&v70 = 2;
          *v41 = 42;
          *((_BYTE *)dest + 1) = 0;
          v42 = v71;
          if ( *((_QWORD *)&v72 + 1) <= 9u )
          {
            v71 = (void *)qvector_reserve(&v71, v71, 10, 1);
            v42 = v71;
          }
          *(_QWORD *)&v72 = 10;
          *(_QWORD *)v42 = 0x656C6966206C6C41LL;
          v43 = v71;
          v42[8] = 115;
          v43[9] = 0;
        }
      }
      if ( (unsigned __int64)v72 <= 1 )
      {
        v16 = &s1;
        if ( (_QWORD)v70 )
          v16 = (const char *)dest;
        v17 = (const char *)get_file_ext(v16);
        v18 = v17;
        if ( v17 && (v19 = strlen(v17), (v20 = v19) != 0) )
        {
          v44 = v71;
          v45 = v19 + 1;
          if ( *((_QWORD *)&v72 + 1) < v19 + 1 )
          {
            v71 = (void *)qvector_reserve(&v71, v71, v45, 1);
            v44 = v71;
          }
          *(_QWORD *)&v72 = v45;
          memmove(v44, v18, v20);
          *((_BYTE *)v71 + v20) = 0;
          if ( (unsigned __int64)v72 > 1 )
          {
            qstrupr(v71);
            v46 = v72;
            if ( (_QWORD)v72 )
            {
              v47 = v72 + 5;
              v48 = v72 + 6;
              v46 = v72 - 1;
            }
            else
            {
              v48 = 7;
              v47 = 6;
            }
            v49 = v71;
            if ( *((_QWORD *)&v72 + 1) < v48 )
            {
              v71 = (void *)qvector_reserve(&v71, v71, v48, 1);
              v49 = v71;
            }
            *(_QWORD *)&v72 = v48;
            v49[v47] = 0;
            v50 = (char *)v71 + v46;
            *(_DWORD *)v50 = 1818846752;
            *((_WORD *)v50 + 2) = 29541;
          }
        }
        else
        {
          *(_QWORD *)&v72 = 0;
        }
      }
      v6 = (const char *)dest;
      v21 = sub_483CC0((__int64 *)a1, (char *)dest);
      v22 = (const char *)v71;
      v23 = (void **)v21;
      v24 = (void *)v72;
      v25 = v71;
      if ( v23 )
      {
        if ( (unsigned __int64)v72 > 1 && (unsigned __int64)v23[1] <= 1 && v23 != &v71 )
        {
          if ( (unsigned __int64)v23[2] < (unsigned __int64)v72 )
            *v23 = (void *)qvector_reserve(v23, *v23, v72, 1);
          v23[1] = v24;
          v6 = v22;
          memmove(*v23, v22, (size_t)v24 - 1);
          *((_BYTE *)v24 + (_QWORD)*v23 - 1) = 0;
          v22 = (const char *)v71;
        }
      }
      else
      {
        v53 = 2;
        if ( (_QWORD)v72 )
        {
          v53 = v72 + 1;
          v24 = (void *)(v72 - 1);
        }
        if ( *((_QWORD *)&v72 + 1) < v53 )
        {
          v25 = (void *)qvector_reserve(&v71, v71, v53, 1);
          v71 = v25;
        }
        *(_QWORD *)&v72 = v53;
        *((_BYTE *)v24 + (_QWORD)v25) = 124;
        *((_BYTE *)v24 + (_QWORD)v71 + 1) = 0;
        v54 = v70;
        if ( (_QWORD)v70 )
        {
          v55 = v70 - 1;
          if ( (_QWORD)v70 != 1 )
          {
            v56 = v72;
            v57 = v70 - 1;
            if ( (_QWORD)v72 )
            {
              v56 = v72 - 1;
              v57 = v55 + v72 - 1;
              v54 = v70 + v72 - 1;
            }
            v58 = v71;
            if ( *((_QWORD *)&v72 + 1) < v54 )
            {
              v71 = (void *)qvector_reserve(&v71, v71, v54, 1);
              v58 = v71;
            }
            *(_QWORD *)&v72 = v54;
            v58[v57] = 0;
            memcpy((char *)v71 + v56, dest, v55);
          }
        }
        v59 = *(_QWORD *)(a1 + 8);
        v60 = *(_QWORD *)a1;
        if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v59 + 1) )
        {
          v64 = qvector_reserve(a1, v60, v59 + 1, 48);
          *(_QWORD *)a1 = v64;
          v60 = v64;
          v59 = *(_QWORD *)(a1 + 8);
        }
        v61 = v60 + 48 * v59;
        v6 = &s1;
        *(_QWORD *)v61 = 0;
        *(_OWORD *)(v61 + 8) = 0;
        *(_QWORD *)(v61 + 24) = 0;
        *(_OWORD *)(v61 + 32) = 0;
        ++*(_QWORD *)(a1 + 8);
        if ( (_QWORD)v72 )
          v6 = (const char *)v71;
        sub_4836D0((__int64 *)v61, v6, nullptr);
        v22 = (const char *)v71;
      }
      if ( v22 )
      {
        *(_QWORD *)&v72 = 0;
        qfree(v22, v6);
      }
    }
    if ( dest )
    {
      *(_QWORD *)&v70 = 0;
      qfree(dest, v6);
    }
    v8 = s;
  }
LABEL_4:
  if ( v8 )
  {
    *(_QWORD *)&v68 = 0;
    qfree(v8, v6);
  }
  return v74 - __readfsqword(0x28u);
}
