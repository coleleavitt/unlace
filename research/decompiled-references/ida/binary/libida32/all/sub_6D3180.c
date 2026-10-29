unsigned __int64 __fastcall sub_6D3180(__int64 a1, const char *a2, unsigned __int64 a3, int a4)
{
  size_t v6; // rax
  size_t v7; // r12
  size_t v8; // rbx
  void *v9; // rax
  void *v10; // r15
  size_t v11; // rbx
  unsigned __int64 v12; // r12
  __int64 v13; // r13
  void *v14; // rax
  unsigned __int64 v15; // rbp
  char *v16; // rax
  char *v17; // rcx
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // r15
  __int64 **v22; // rax
  __int64 *v23; // rbx
  void *v24; // rdi
  void *v25; // rdi
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r9
  __int64 **v28; // rsi
  unsigned __int64 v29; // r11
  __int64 v30; // r8
  __int64 *v31; // rax
  __int64 *v32; // rbp
  __int64 *v33; // rdi
  __int64 v34; // r9
  __int64 *v35; // rcx
  unsigned __int64 v36; // rdx
  const char *v38; // rsi
  const char *v39; // rdi
  char v40; // al
  unsigned __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  unsigned __int64 v44; // r9
  char *v45; // rbp
  __int64 v46; // r15
  __int64 **v47; // rax
  _QWORD *v48; // rdx
  __int64 *v49; // rax
  unsigned __int64 v50; // rbx
  size_t v51; // r12
  void *v52; // rcx
  _QWORD *v53; // r12
  unsigned __int64 v54; // r15
  _QWORD *v55; // rsi
  unsigned __int64 v56; // rax
  char *v57; // r9
  char *i; // r10
  __int64 v59; // rdx
  unsigned __int64 v60; // rdx
  char *v61; // rax
  void *v62; // rdi
  __int64 v63; // rdx
  char *v64; // rcx
  unsigned __int64 v65; // rax
  char *j; // rsi
  __int64 v67; // rdx
  unsigned __int64 v68; // rdx
  void *ptr; // [rsp+0h] [rbp-80h]
  unsigned __int64 v71; // [rsp+8h] [rbp-78h]
  unsigned __int64 v72; // [rsp+8h] [rbp-78h]
  unsigned __int64 v73; // [rsp+8h] [rbp-78h]
  unsigned __int64 v74; // [rsp+18h] [rbp-68h]
  unsigned __int64 v75; // [rsp+20h] [rbp-60h] BYREF
  void *src; // [rsp+28h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+30h] [rbp-50h]
  unsigned __int64 v78; // [rsp+40h] [rbp-40h]

  ptr = (void *)a2;
  v75 = a3;
  v78 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  src = nullptr;
  if ( !a2 )
  {
    v12 = v75;
    v13 = operator new(0x30u);
    *(_OWORD *)v13 = 0;
    *(_OWORD *)(v13 + 16) = 0;
LABEL_35:
    v15 = *(_QWORD *)(a1 + 152);
    *(_QWORD *)(v13 + 32) = v12;
    *(_DWORD *)(v13 + 40) = a4;
    if ( v15 )
      goto LABEL_91;
    goto LABEL_36;
  }
  v6 = strlen(a2);
  v7 = v6 + 1;
  v8 = v6;
  v9 = (void *)qvector_reserve(&src, 0, v6 + 1, 1);
  n[0] = v7;
  src = v9;
  memmove(v9, a2, v8);
  *((_BYTE *)src + v8) = 0;
  v10 = src;
  v11 = n[0];
  v12 = v75;
  *(_OWORD *)n = 0;
  ptr = src;
  src = nullptr;
  v13 = operator new(0x30u);
  *(_OWORD *)v13 = 0;
  *(_OWORD *)(v13 + 16) = 0;
  if ( !v11 )
    goto LABEL_35;
  v14 = (void *)qalloc_or_throw(v11, a2);
  *(_QWORD *)(v13 + 24) = v11;
  *(_QWORD *)(v13 + 8) = v14;
  memcpy(v14, v10, v11);
  *(_DWORD *)(v13 + 40) = a4;
  v15 = *(_QWORD *)(a1 + 152);
  *(_QWORD *)(v13 + 16) = v11;
  *(_QWORD *)(v13 + 32) = v12;
  if ( !v15 )
  {
    v15 = v11;
LABEL_36:
    v23 = *(__int64 **)(a1 + 144);
    if ( !v23 )
    {
LABEL_45:
      v16 = *(char **)(v13 + 8);
      v17 = &v16[v15];
      if ( v16 == &v16[v15] )
      {
        v20 = *(_QWORD *)(a1 + 136);
        v15 = 0;
        v18 = 0xCBF29CE484222325LL;
        v21 = 0xCBF29CE484222325LL % v20;
        goto LABEL_48;
      }
      v15 = 0;
      goto LABEL_5;
    }
    while ( v23[2] )
    {
      v38 = (const char *)v23[1];
      v39 = haystack;
      if ( v15 )
        goto LABEL_44;
LABEL_39:
      if ( !strcmp(v39, v38) )
        goto LABEL_10;
      v23 = (__int64 *)*v23;
      if ( !v23 )
        goto LABEL_45;
    }
    if ( !v15 )
      goto LABEL_10;
    v38 = haystack;
LABEL_44:
    v39 = *(const char **)(v13 + 8);
    goto LABEL_39;
  }
  v16 = *(char **)(v13 + 8);
  v17 = &v16[v11];
  if ( &v16[v11] != v16 )
  {
LABEL_5:
    v18 = 0xCBF29CE484222325LL;
    do
    {
      v19 = *v16++;
      v18 = 0x100000001B3LL * (v19 ^ v18);
    }
    while ( v17 != v16 );
    v20 = *(_QWORD *)(a1 + 136);
    v21 = v18 % v20;
    if ( !v15 )
      goto LABEL_48;
    goto LABEL_8;
  }
LABEL_91:
  v20 = *(_QWORD *)(a1 + 136);
  v18 = 0xCBF29CE484222325LL;
  v21 = 0xCBF29CE484222325LL % v20;
LABEL_8:
  v74 = v18;
  v22 = (__int64 **)sub_6CFB80(*(_QWORD *)(a1 + 128), v20, v21, v13 + 8);
  v18 = v74;
  if ( v22 )
  {
    v23 = *v22;
    if ( *v22 )
    {
LABEL_10:
      if ( v13 )
      {
        v24 = *(void **)(v13 + 8);
        if ( v24 )
        {
          *(_QWORD *)(v13 + 16) = 0;
          qfree(v24);
        }
        operator delete((void *)v13, 0x30u);
      }
      if ( ptr )
      {
        qfree(ptr);
        v25 = src;
        if ( !src )
          goto LABEL_17;
      }
      else
      {
        v25 = src;
        if ( !src )
        {
LABEL_17:
          v26 = v23[4];
          if ( v26 == v12 )
          {
LABEL_32:
            *((_DWORD *)v23 + 10) = a4;
            return v78 - __readfsqword(0x28u);
          }
          if ( *(_QWORD *)(a1 + 208) )
          {
            v27 = *(_QWORD *)(a1 + 192);
            v28 = *(__int64 ***)(*(_QWORD *)(a1 + 184) + 8 * (v26 % v27));
            v29 = v26 % v27;
            v30 = 8 * (v26 % v27);
            if ( v28 )
            {
              v31 = *v28;
              if ( v26 != (*v28)[1] )
              {
                do
                {
                  v32 = (__int64 *)*v31;
                  if ( !*v31 )
                    goto LABEL_31;
                  v28 = (__int64 **)v31;
                  if ( v26 % v27 != v32[1] % v27 )
                    goto LABEL_31;
                  v31 = (__int64 *)*v31;
                }
                while ( v26 != v32[1] );
              }
              if ( v28 )
              {
                v33 = *v28;
LABEL_26:
                v34 = *(_QWORD *)(a1 + 184);
                v35 = (__int64 *)*v33;
                if ( v28 == *(__int64 ***)(v34 + v30) )
                {
                  if ( v35 )
                  {
                    v68 = (unsigned __int64)v35[1] % *(_QWORD *)(a1 + 192);
                    if ( v29 != v68 )
                    {
                      *(_QWORD *)(v34 + 8 * v68) = v28;
                      *(_QWORD *)(*(_QWORD *)(a1 + 184) + v30) = 0;
                      v35 = (__int64 *)*v33;
                    }
                  }
                  else
                  {
                    *(_QWORD *)(v34 + v30) = 0;
                    v35 = (__int64 *)*v33;
                  }
                }
                else if ( v35 )
                {
                  v36 = (unsigned __int64)v35[1] % *(_QWORD *)(a1 + 192);
                  if ( v29 != v36 )
                  {
                    *(_QWORD *)(v34 + 8 * v36) = v28;
                    v35 = (__int64 *)*v33;
                  }
                }
                *v28 = v35;
                operator delete(v33, 0x10u);
                --*(_QWORD *)(a1 + 208);
              }
            }
          }
          else
          {
            v49 = *(__int64 **)(a1 + 200);
            v28 = (__int64 **)(a1 + 200);
            if ( v49 )
            {
              while ( v26 != v49[1] )
              {
                v28 = (__int64 **)v49;
                if ( !*v49 )
                  goto LABEL_31;
                v49 = (__int64 *)*v49;
              }
              v33 = *v28;
              v29 = (unsigned __int64)(*v28)[1] % *(_QWORD *)(a1 + 192);
              v30 = 8 * v29;
              goto LABEL_26;
            }
          }
LABEL_31:
          v23[4] = v12;
          sub_6CF7E0((char **)(a1 + 184), &v75);
          goto LABEL_32;
        }
      }
      n[0] = 0;
      qfree(v25);
      goto LABEL_17;
    }
  }
LABEL_48:
  v71 = v18;
  v40 = std::__detail::_Prime_rehash_policy::_M_need_rehash(
          (std::__detail::_Prime_rehash_policy *)(a1 + 160),
          v20,
          v15,
          1u);
  v44 = v71;
  if ( v40 )
  {
    v50 = v41;
    if ( v41 == 1 )
    {
      v52 = (void *)(a1 + 176);
      *(_QWORD *)(a1 + 176) = 0;
      v45 = (char *)(a1 + 176);
    }
    else
    {
      if ( v41 >> 60 )
      {
        if ( v41 >> 61 )
          sub_2E883E(a1 + 160, v20, v41, v42, v43);
        std::__throw_bad_alloc();
      }
      v51 = 8 * v41;
      v45 = (char *)operator new(8 * v41);
      memset(v45, 0, v51);
      v44 = v71;
      v52 = (void *)(a1 + 176);
    }
    v53 = *(_QWORD **)(a1 + 144);
    v54 = 0;
    *(_QWORD *)(a1 + 144) = 0;
    if ( v53 )
    {
      v72 = v44;
      do
      {
        v55 = v53;
        v56 = 0xCBF29CE484222325LL;
        v53 = (_QWORD *)*v53;
        v57 = (char *)v55[1];
        for ( i = &v57[v55[2]]; i != v57; v56 = 0x100000001B3LL * (v59 ^ v56) )
          v59 = *v57++;
        v60 = v56 % v50;
        v61 = &v45[8 * (v56 % v50)];
        if ( *(_QWORD *)v61 )
        {
          *v55 = **(_QWORD **)v61;
          **(_QWORD **)v61 = v55;
        }
        else
        {
          *v55 = *(_QWORD *)(a1 + 144);
          *(_QWORD *)(a1 + 144) = v55;
          *(_QWORD *)v61 = a1 + 144;
          if ( *v55 )
            *(_QWORD *)&v45[8 * v54] = v55;
          v54 = v60;
        }
      }
      while ( v53 );
      v44 = v72;
    }
    v62 = *(void **)(a1 + 128);
    if ( v62 != v52 )
    {
      v73 = v44;
      operator delete(v62, 8LL * *(_QWORD *)(a1 + 136));
      v44 = v73;
    }
    *(_QWORD *)(a1 + 136) = v50;
    *(_QWORD *)(a1 + 128) = v45;
    v21 = v44 % v50;
  }
  else
  {
    v45 = *(char **)(a1 + 128);
  }
  v46 = 8 * v21;
  v47 = (__int64 **)&v45[v46];
  v48 = *(_QWORD **)&v45[v46];
  if ( v48 )
  {
    *(_QWORD *)v13 = *v48;
    **v47 = v13;
  }
  else
  {
    v63 = *(_QWORD *)(a1 + 144);
    *(_QWORD *)(a1 + 144) = v13;
    *(_QWORD *)v13 = v63;
    if ( v63 )
    {
      v64 = *(char **)(v63 + 8);
      v65 = 0xCBF29CE484222325LL;
      for ( j = &v64[*(_QWORD *)(v63 + 16)]; j != v64; v65 = 0x100000001B3LL * (v67 ^ v65) )
        v67 = *v64++;
      *(_QWORD *)&v45[8 * (v65 % *(_QWORD *)(a1 + 136))] = v13;
      v47 = (__int64 **)(v46 + *(_QWORD *)(a1 + 128));
    }
    *v47 = (__int64 *)(a1 + 144);
  }
  ++*(_QWORD *)(a1 + 152);
  if ( ptr )
    qfree(ptr);
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  sub_6CF7E0((char **)(a1 + 184), &v75);
  return v78 - __readfsqword(0x28u);
}

