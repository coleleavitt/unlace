unsigned __int64 __fastcall sub_178DA0(__int64 a1, const char *a2)
{
  char *v3; // r13
  size_t v4; // rbp
  __int64 v5; // r12
  __int64 v6; // r14
  char *v7; // r15
  __int64 v9; // r12
  const char *v10; // rbp
  char *v11; // rax
  size_t v12; // rax
  size_t v13; // r12
  size_t v14; // rbp
  const char *v15; // rax
  const char *v16; // rbp
  size_t v17; // rax
  size_t v18; // r12
  __int64 v19; // rax
  void *v20; // r12
  __int64 v21; // rbp
  __int64 v22; // r13
  void *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdi
  char *v26; // rax
  __int64 v27; // rsi
  const char *v28; // r13
  bool v29; // zf
  __int64 v30; // rax
  const char *v31; // rax
  const char *v32; // rbp
  size_t v33; // rax
  size_t v34; // r12
  size_t v35; // rax
  size_t v36; // rbp
  _BYTE *file_ext; // rax
  _BYTE *v38; // rsi
  _BYTE *v39; // rsi
  _BYTE *v40; // rax
  void *v41; // rdi
  size_t v42; // r13
  __int64 v43; // rbp
  __int64 v44; // r13
  unsigned __int64 v45; // r12
  _BYTE *v46; // rsi
  char *v47; // rbp
  void *v48; // rdi
  size_t v49; // r13
  unsigned __int64 v50; // rbp
  unsigned __int64 v51; // rbp
  size_t v52; // r13
  __int64 v53; // r12
  size_t v54; // r14
  _BYTE *v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rsi
  __int64 v58; // rdi
  const char *v59; // rsi
  void *v60; // rdi
  size_t v61; // r13
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  char *s; // [rsp+0h] [rbp-10A8h]
  void *dest; // [rsp+20h] [rbp-1088h] BYREF
  __int128 v67; // [rsp+28h] [rbp-1080h]
  void *v68; // [rsp+40h] [rbp-1068h] BYREF
  __int128 v69; // [rsp+48h] [rbp-1060h]
  char src[4104]; // [rsp+60h] [rbp-1048h] BYREF
  unsigned __int64 v71; // [rsp+1068h] [rbp-40h]

  v71 = __readfsqword(0x28u);
  if ( a2 )
  {
    v3 = (char *)a2;
    v4 = strlen(a2);
    v5 = v4 + 1;
  }
  else
  {
    v5 = 1;
    v4 = 0;
    v3 = "";
  }
  s = (char *)qvector_reserve();
  memmove(s, v3, v4);
  s[v4] = 0;
  v6 = v5;
  v7 = s;
  if ( v5 )
  {
    v9 = (__int64)&s[v5 - 1];
    v10 = s;
    v11 = strchr(s, 124);
    dest = nullptr;
    v67 = 0;
    if ( v11 )
    {
      do
      {
        v26 = strchr(v11 + 1, 124);
        v27 = *(_QWORD *)a1;
        v28 = v26;
        v29 = v26 == nullptr;
        v30 = *(_QWORD *)(a1 + 8);
        if ( v29 )
          v28 = &s[v6 - 1];
        if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v30 + 1) )
        {
          v24 = qvector_reserve();
          *(_QWORD *)a1 = v24;
          v27 = v24;
          v30 = *(_QWORD *)(a1 + 8);
        }
        v25 = v27 + 48 * v30;
        *(_QWORD *)v25 = 0;
        *(_QWORD *)(v25 + 24) = 0;
        *(_OWORD *)(v25 + 8) = 0;
        *(_OWORD *)(v25 + 32) = 0;
        ++*(_QWORD *)(a1 + 8);
        sub_1773F0((__int64 *)v25, v10, v28);
        v10 = v28 + 1;
        if ( v28 == (const char *)v9 )
          v10 = &s[v6 - 1];
        v11 = strchr(v10, 124);
      }
      while ( v11 );
    }
    else
    {
      if ( v6 == 1 )
        goto LABEL_4;
      v69 = 0;
      v68 = nullptr;
      if ( strchr(s, 42) || strchr(s, 63) )
      {
        *(_BYTE *)(a1 + 72) = 0;
        v12 = strlen(v3);
        v13 = v12 + 1;
        v14 = v12;
        dest = (void *)qvector_reserve();
        *(_QWORD *)&v67 = v13;
        *((_BYTE *)dest + v14) = 0;
        memmove(dest, v3, v14);
      }
      else
      {
        *(_BYTE *)(a1 + 72) = 1;
        v31 = (const char *)qbasename();
        v32 = v31;
        if ( v31 && (v33 = strlen(v31), (v34 = v33) != 0) )
        {
          v48 = *(void **)(a1 + 24);
          v49 = v33 + 1;
          if ( *(_QWORD *)(a1 + 40) < v33 + 1 )
          {
            v64 = qvector_reserve();
            *(_QWORD *)(a1 + 24) = v64;
            v48 = (void *)v64;
          }
          *(_QWORD *)(a1 + 32) = v49;
          memmove(v48, v32, v34);
          *(_BYTE *)(*(_QWORD *)(a1 + 24) + v34) = 0;
        }
        else
        {
          *(_QWORD *)(a1 + 32) = 0;
        }
        qdirname();
        v35 = strlen(src);
        v36 = v35;
        if ( v35 )
        {
          v60 = *(void **)(a1 + 48);
          v61 = v35 + 1;
          if ( *(_QWORD *)(a1 + 64) < v35 + 1 )
          {
            v63 = qvector_reserve();
            *(_QWORD *)(a1 + 48) = v63;
            v60 = (void *)v63;
          }
          *(_QWORD *)(a1 + 56) = v61;
          memmove(v60, src, v36);
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + v36) = 0;
        }
        else
        {
          *(_QWORD *)(a1 + 56) = 0;
        }
        file_ext = (_BYTE *)get_file_ext();
        if ( file_ext && *file_ext )
        {
          sub_94360((__int64 *)&dest);
        }
        else
        {
          v38 = dest;
          if ( *((_QWORD *)&v67 + 1) <= 1u )
          {
            dest = (void *)qvector_reserve();
            v38 = dest;
          }
          *(_QWORD *)&v67 = 2;
          *v38 = 42;
          *((_BYTE *)dest + 1) = 0;
          v39 = v68;
          if ( *((_QWORD *)&v69 + 1) <= 9u )
          {
            v68 = (void *)qvector_reserve();
            v39 = v68;
          }
          *(_QWORD *)&v69 = 10;
          *(_QWORD *)v39 = 0x656C6966206C6C41LL;
          v40 = v68;
          v39[8] = 115;
          v40[9] = 0;
        }
      }
      if ( (unsigned __int64)v69 <= 1 )
      {
        v15 = (const char *)get_file_ext();
        v16 = v15;
        if ( v15 && (v17 = strlen(v15), (v18 = v17) != 0) )
        {
          v41 = v68;
          v42 = v17 + 1;
          if ( *((_QWORD *)&v69 + 1) < v17 + 1 )
          {
            v68 = (void *)qvector_reserve();
            v41 = v68;
          }
          *(_QWORD *)&v69 = v42;
          memmove(v41, v16, v18);
          *((_BYTE *)v68 + v18) = 0;
          if ( (unsigned __int64)v69 > 1 )
          {
            qstrupr();
            v43 = v69;
            if ( (_QWORD)v69 )
            {
              v44 = v69 + 5;
              v45 = v69 + 6;
              v43 = v69 - 1;
            }
            else
            {
              v45 = 7;
              v44 = 6;
            }
            v46 = v68;
            if ( *((_QWORD *)&v69 + 1) < v45 )
            {
              v68 = (void *)qvector_reserve();
              v46 = v68;
            }
            *(_QWORD *)&v69 = v45;
            v46[v44] = 0;
            v47 = (char *)v68 + v43;
            *(_DWORD *)v47 = 1818846752;
            *((_WORD *)v47 + 2) = 29541;
          }
        }
        else
        {
          *(_QWORD *)&v69 = 0;
        }
      }
      v19 = sub_1779E0((__int64 *)a1, (const char *)dest);
      v20 = v68;
      v21 = v19;
      v22 = v69;
      v23 = v68;
      if ( v21 )
      {
        if ( (unsigned __int64)v69 > 1 && *(_QWORD *)(v21 + 8) <= 1u && (void **)v21 != &v68 )
        {
          if ( *(_QWORD *)(v21 + 16) < (unsigned __int64)v69 )
            *(_QWORD *)v21 = qvector_reserve();
          *(_QWORD *)(v21 + 8) = v22;
          memmove(*(void **)v21, v20, v22 - 1);
          *(_BYTE *)(*(_QWORD *)v21 + v22 - 1) = 0;
          v20 = v68;
        }
      }
      else
      {
        v50 = 2;
        if ( (_QWORD)v69 )
        {
          v50 = v69 + 1;
          v22 = v69 - 1;
        }
        if ( *((_QWORD *)&v69 + 1) < v50 )
        {
          v23 = (void *)qvector_reserve();
          v68 = v23;
        }
        *(_QWORD *)&v69 = v50;
        *((_BYTE *)v23 + v22) = 124;
        *((_BYTE *)v68 + v22 + 1) = 0;
        v51 = v67;
        if ( (_QWORD)v67 )
        {
          v52 = v67 - 1;
          if ( (_QWORD)v67 != 1 )
          {
            v53 = v69;
            v54 = v67 - 1;
            if ( (_QWORD)v69 )
            {
              v53 = v69 - 1;
              v54 = v52 + v69 - 1;
              v51 = v67 + v69 - 1;
            }
            v55 = v68;
            if ( *((_QWORD *)&v69 + 1) < v51 )
            {
              v68 = (void *)qvector_reserve();
              v55 = v68;
            }
            *(_QWORD *)&v69 = v51;
            v55[v54] = 0;
            memcpy((char *)v68 + v53, dest, v52);
          }
        }
        v56 = *(_QWORD *)(a1 + 8);
        v57 = *(_QWORD *)a1;
        if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v56 + 1) )
        {
          v62 = qvector_reserve();
          *(_QWORD *)a1 = v62;
          v57 = v62;
          v56 = *(_QWORD *)(a1 + 8);
        }
        v58 = v57 + 48 * v56;
        *(_QWORD *)v58 = 0;
        *(_OWORD *)(v58 + 8) = 0;
        *(_QWORD *)(v58 + 24) = 0;
        *(_OWORD *)(v58 + 32) = 0;
        ++*(_QWORD *)(a1 + 8);
        if ( (_QWORD)v69 )
          v59 = (const char *)v68;
        else
          v59 = s1;
        sub_1773F0((__int64 *)v58, v59, nullptr);
        v20 = v68;
      }
      if ( v20 )
      {
        *(_QWORD *)&v69 = 0;
        qfree();
      }
    }
    if ( dest )
    {
      *(_QWORD *)&v67 = 0;
      qfree();
    }
    v7 = s;
  }
LABEL_4:
  if ( v7 )
    qfree();
  return v71 - __readfsqword(0x28u);
}

