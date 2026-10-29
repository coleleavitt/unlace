__int64 __fastcall sub_21E91E0(_BYTE *a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  _BYTE *v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rbp
  size_t v13; // r15
  size_t v14; // rcx
  size_t v15; // rdx
  signed __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  unsigned int v22; // esi
  unsigned int v23; // ecx
  int v24; // edi
  __int64 v25; // rbx
  _BYTE *v26; // r14
  _BYTE *v27; // rdi
  __int64 v28; // rax
  _BYTE *v29; // rbp
  size_t v30; // r15
  size_t v31; // rax
  unsigned int v32; // ebx
  _QWORD *v34; // r15
  __int64 v35; // rax
  _BYTE *v36; // rsi
  size_t v37; // rdx
  __int64 v38; // rbp
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r15
  __int64 v42; // rdi
  __m128i *v43; // rdi
  size_t v44; // rdx
  signed __int64 v45; // rax
  unsigned __int64 v46; // rdi
  _BYTE *v47; // rax
  _BYTE *v48; // rdi
  void *v49; // rdi
  void *v50; // rdi
  unsigned int v51; // eax
  int v52; // r10d
  __int64 v53; // r11
  int v54; // ecx
  __int64 v55; // r8
  __int64 v56; // [rsp+8h] [rbp-120h]
  size_t v57; // [rsp+8h] [rbp-120h]
  size_t v58; // [rsp+10h] [rbp-118h]
  void *v59; // [rsp+10h] [rbp-118h]
  __int64 v60; // [rsp+10h] [rbp-118h]
  const void *s2; // [rsp+18h] [rbp-110h]
  int v62; // [rsp+2Ch] [rbp-FCh] BYREF
  void *v63; // [rsp+30h] [rbp-F8h] BYREF
  size_t v64; // [rsp+38h] [rbp-F0h]
  _BYTE v65[16]; // [rsp+40h] [rbp-E8h] BYREF
  void *src; // [rsp+50h] [rbp-D8h] BYREF
  size_t n; // [rsp+58h] [rbp-D0h]
  _BYTE v68[16]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v69; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v70; // [rsp+78h] [rbp-B0h]
  char v71; // [rsp+80h] [rbp-A8h]
  void *v72; // [rsp+88h] [rbp-A0h]
  size_t v73; // [rsp+90h] [rbp-98h]
  _QWORD v74[2]; // [rsp+98h] [rbp-90h] BYREF
  void *ptr[2]; // [rsp+A8h] [rbp-80h] BYREF
  _BYTE v76[112]; // [rsp+B8h] [rbp-70h] BYREF

  v7 = sub_221BAF0();
  v8 = (__int64)&a3[a4];
  v9 = a3;
  v10 = v7;
  src = v68;
  v11 = v7 + 32;
  sub_21E9030(&src, v9, v8);
  v63 = v65;
  sub_21E9030(&v63, a1, (__int64)&a1[a2]);
  v12 = *(_QWORD *)(v10 + 40);
  v56 = v10 + 32;
  if ( !v12 )
    goto LABEL_41;
  v13 = v64;
  s2 = v63;
  do
  {
    while ( 1 )
    {
      v14 = *(_QWORD *)(v12 + 40);
      v15 = v13;
      if ( v14 <= v13 )
        v15 = *(_QWORD *)(v12 + 40);
      if ( !v15
        || (v58 = *(_QWORD *)(v12 + 40),
            LODWORD(v16) = memcmp(*(const void **)(v12 + 32), s2, v15),
            v14 = v58,
            !(_DWORD)v16) )
      {
        v16 = v14 - v13;
        if ( (__int64)(v14 - v13) > 0x7FFFFFFF )
          goto LABEL_3;
        if ( v16 < (__int64)0xFFFFFFFF80000000LL )
          break;
      }
      if ( (int)v16 < 0 )
        break;
LABEL_3:
      v11 = v12;
      v12 = *(_QWORD *)(v12 + 16);
      if ( !v12 )
        goto LABEL_10;
    }
    v12 = *(_QWORD *)(v12 + 24);
  }
  while ( v12 );
LABEL_10:
  if ( v56 != v11 && sub_9C4B50((__int64)&v63, v11 + 32) >= 0 )
    goto LABEL_12;
LABEL_41:
  v34 = (_QWORD *)v11;
  v35 = operator new(0x48u);
  v36 = v63;
  v37 = v64;
  v38 = v35 + 32;
  v11 = v35;
  *(_QWORD *)(v35 + 32) = v35 + 48;
  v59 = (void *)(v35 + 48);
  sub_21E8F70((_QWORD *)(v35 + 32), v36, (__int64)&v36[v37]);
  *(_DWORD *)(v11 + 64) = 0;
  v39 = sub_200EA40((_QWORD *)(v10 + 24), v34, v38);
  v41 = v39;
  if ( v40 )
  {
    if ( v39 || v56 == v40 )
    {
      v42 = 1;
    }
    else
    {
      v60 = v40;
      v51 = sub_9C4B50(v38, v40 + 32);
      v40 = v60;
      v42 = v51 >> 31;
    }
    std::_Rb_tree_insert_and_rebalance(v42, v11, v40, v56);
    v21 = *(_DWORD *)(v11 + 64);
    ++*(_QWORD *)(v10 + 64);
    if ( !v21 )
      goto LABEL_46;
LABEL_13:
    v22 = *(_DWORD *)(v10 + 16);
    v62 = v21;
    if ( v22 )
      goto LABEL_14;
LABEL_49:
    v69 = 0;
LABEL_50:
    sub_21E8B50((int **)v10, 2 * v22, v17, v18, v19, v20);
LABEL_51:
    sub_21E8AB0((__int64 *)v10, &v62, &v69);
    v21 = v62;
    v17 = v69;
    LODWORD(v18) = *(_DWORD *)(v10 + 8) + 1;
    goto LABEL_77;
  }
  v49 = *(void **)(v11 + 32);
  if ( v59 != v49 )
    operator delete(v49);
  v50 = (void *)v11;
  v11 = v41;
  operator delete(v50);
LABEL_12:
  v21 = *(_DWORD *)(v11 + 64);
  if ( v21 )
    goto LABEL_13;
LABEL_46:
  v43 = *(__m128i **)(v10 + 80);
  *(_DWORD *)(v11 + 64) = (((__int64)v43->m128i_i64 - *(_QWORD *)(v10 + 72)) >> 5) + 1;
  if ( v43 == *(__m128i **)(v10 + 88) )
  {
    sub_10BCB90((void ***)(v10 + 72), v43, (__int64)&v63);
  }
  else
  {
    v43->m128i_i64[0] = (__int64)v43[1].m128i_i64;
    sub_21E8F70(v43, v63, (__int64)v63 + v64);
    *(_QWORD *)(v10 + 80) += 32LL;
  }
  v21 = *(_DWORD *)(v11 + 64);
  v22 = *(_DWORD *)(v10 + 16);
  v62 = v21;
  if ( !v22 )
    goto LABEL_49;
LABEL_14:
  v20 = v22 - 1;
  v23 = v20 & (37 * v21);
  v17 = *(_QWORD *)v10 + ((unsigned __int64)v23 << 7);
  v24 = *(_DWORD *)v17;
  if ( v21 == *(_DWORD *)v17 )
  {
LABEL_15:
    v25 = v17 + 8;
    v26 = (_BYTE *)(v17 + 48);
  }
  else
  {
    v52 = 1;
    v53 = 0;
    if ( v24 != -1 )
    {
      while ( 1 )
      {
        if ( !v53 && v24 == -2 )
          v53 = v17;
        v23 = v20 & (v52 + v23);
        v17 = *(_QWORD *)v10 + ((unsigned __int64)v23 << 7);
        v24 = *(_DWORD *)v17;
        if ( v21 == *(_DWORD *)v17 )
          goto LABEL_15;
        if ( v24 == -1 )
        {
          if ( v53 )
            v17 = v53;
          break;
        }
        ++v52;
      }
    }
    v54 = *(_DWORD *)(v10 + 8);
    v69 = v17;
    v18 = (unsigned int)(v54 + 1);
    v19 = (unsigned int)(4 * v18);
    if ( (unsigned int)v19 >= 3 * v22 )
      goto LABEL_50;
    v55 = v22 >> 3;
    if ( v22 - *(_DWORD *)(v10 + 12) - (unsigned int)v18 <= (unsigned int)v55 )
    {
      sub_21E8B50((int **)v10, v22, v17, v18, v55, v20);
      goto LABEL_51;
    }
LABEL_77:
    *(_DWORD *)(v10 + 8) = v18;
    if ( *(_DWORD *)v17 != -1 )
      --*(_DWORD *)(v10 + 12);
    *(_DWORD *)v17 = v21;
    memset((void *)(v17 + 8), 0, 0x78u);
    v26 = (_BYTE *)(v17 + 48);
    *(_QWORD *)(v17 + 64) = v17 + 80;
    v25 = v17 + 8;
    *(_QWORD *)(v17 + 32) = v17 + 48;
    *(_QWORD *)(v17 + 72) = 0x300000000LL;
  }
  v70 = 0;
  v71 = 0;
  v72 = v74;
  ptr[0] = v76;
  v69 = 0;
  v73 = 0;
  LOBYTE(v74[0]) = 0;
  ptr[1] = (void *)0x300000000LL;
  v27 = *(_BYTE **)(v25 + 24);
  *(_QWORD *)v25 = 0;
  *(_QWORD *)(v25 + 8) = v70;
  *(_BYTE *)(v25 + 16) = v71;
  if ( v72 == v74 )
  {
    v44 = v73;
    if ( v73 )
    {
      if ( v73 == 1 )
        *v27 = v74[0];
      else
        memcpy(v27, v72, v73);
      v44 = v73;
      v27 = *(_BYTE **)(v25 + 24);
    }
    *(_QWORD *)(v25 + 32) = v44;
    v27[v44] = 0;
    v27 = v72;
  }
  else
  {
    if ( v26 == v27 )
    {
      *(_QWORD *)(v25 + 24) = v72;
      *(_QWORD *)(v25 + 32) = v73;
      *(_QWORD *)(v25 + 40) = v74[0];
    }
    else
    {
      *(_QWORD *)(v25 + 24) = v72;
      v28 = *(_QWORD *)(v25 + 40);
      *(_QWORD *)(v25 + 32) = v73;
      *(_QWORD *)(v25 + 40) = v74[0];
      if ( v27 )
      {
        v72 = v27;
        v74[0] = v28;
        goto LABEL_20;
      }
    }
    v27 = v74;
    v72 = v74;
  }
LABEL_20:
  v73 = 0;
  *v27 = 0;
  sub_200E7A0((char ***)(v25 + 56), (char ***)ptr);
  if ( ptr[0] != v76 )
    free(ptr[0]);
  if ( v72 != v74 )
    operator delete(v72);
  if ( (void **)(v25 + 24) != &src )
  {
    v29 = *(_BYTE **)(v25 + 24);
    v30 = n;
    if ( v29 == v26 )
      v31 = 15;
    else
      v31 = *(_QWORD *)(v25 + 40);
    if ( n > v31 )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      v45 = 2 * v31;
      v57 = v45;
      if ( n < v45 )
      {
        v46 = v45 + 1;
        if ( v45 < 0 )
        {
          v46 = 0x8000000000000000LL;
          v57 = 0x7FFFFFFFFFFFFFFFLL;
        }
      }
      else
      {
        v57 = n;
        v46 = n + 1;
      }
      v47 = (_BYTE *)operator new(v46);
      v48 = *(_BYTE **)(v25 + 24);
      v29 = v47;
      if ( v48 != v26 )
        operator delete(v48);
      *(_QWORD *)(v25 + 24) = v29;
      *(_QWORD *)(v25 + 40) = v57;
    }
    if ( v30 )
    {
      if ( v30 == 1 )
        *v29 = *(_BYTE *)src;
      else
        memcpy(v29, src, v30);
      v29 = *(_BYTE **)(v25 + 24);
    }
    *(_QWORD *)(v25 + 32) = v30;
    v29[v30] = 0;
  }
  v32 = v62;
  if ( v63 != v65 )
    operator delete(v63);
  if ( src != v68 )
    operator delete(src);
  return v32;
}
