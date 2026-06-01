__int64 __fastcall http_request(__int64 a1)
{
  unsigned int v2; // ebx
  int v4; // r14d
  const char *v5; // rbx
  int v6; // r14d
  size_t v7; // rax
  size_t v8; // rbp
  size_t v9; // r15
  unsigned __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r8d
  int v14; // r9d
  unsigned __int8 **v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rbx
  unsigned __int64 v21; // r15
  _BYTE *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rbx
  unsigned __int64 v28; // r15
  _BYTE *v29; // rsi
  size_t v30; // rax
  __int64 v31; // rbp
  size_t v32; // r15
  size_t v33; // r8
  _BYTE *v34; // rsi
  size_t v35; // rdx
  int v36; // edx
  const char *v37; // rsi
  unsigned __int8 v38; // al
  void *v39; // rdi
  size_t v40; // r13
  size_t v41; // rdx
  void *v42; // rdi
  const char *v43; // rsi
  unsigned __int8 v44; // al
  size_t v45; // r15
  size_t v46; // r13
  size_t v47; // rax
  void *v48; // rdi
  size_t v49; // [rsp+0h] [rbp-138h]
  size_t v50; // [rsp+8h] [rbp-130h]
  void *v51; // [rsp+10h] [rbp-128h] BYREF
  __int128 v52; // [rsp+18h] [rbp-120h]
  void *v53; // [rsp+30h] [rbp-108h] BYREF
  __int128 v54; // [rsp+38h] [rbp-100h]
  __int64 (__fastcall **v55)(); // [rsp+50h] [rbp-E8h] BYREF
  void *handle; // [rsp+58h] [rbp-E0h]
  __int128 v57; // [rsp+60h] [rbp-D8h]
  __int128 v58; // [rsp+70h] [rbp-C8h]
  __int128 v59; // [rsp+80h] [rbp-B8h]
  __int128 v60; // [rsp+90h] [rbp-A8h]
  __int128 v61; // [rsp+A0h] [rbp-98h]
  __int64 v62; // [rsp+B0h] [rbp-88h]
  void *src; // [rsp+B8h] [rbp-80h]
  size_t n[2]; // [rsp+C0h] [rbp-78h]
  int v65; // [rsp+D0h] [rbp-68h]
  __int64 v66; // [rsp+D8h] [rbp-60h]
  __int64 v67; // [rsp+E0h] [rbp-58h]
  __int64 v68; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v69; // [rsp+F8h] [rbp-40h]

  v69 = __readfsqword(0x28u);
  if ( !a1 || *(_QWORD *)a1 != 104 )
    return (unsigned int)-1;
  v4 = *(_DWORD *)(a1 + 8);
  v5 = *(const char **)(a1 + 24);
  v52 = 0;
  v54 = 0;
  v51 = nullptr;
  v6 = v4 & 0xF;
  v53 = nullptr;
  if ( v6 != 2 )
  {
    if ( v5 )
    {
      v7 = strlen(v5);
      v8 = v7;
      v9 = v7;
      if ( v7 )
      {
        v45 = v7 + 1;
        v53 = (void *)qvector_reserve(&v53, 0, v7 + 1, 1);
        *(_QWORD *)&v54 = v45;
        memmove(v53, v5, v8);
        *((_BYTE *)v53 + v8) = 0;
        v5 = (const char *)v53;
        if ( (_QWORD)v54 )
        {
          v9 = v54 - 1;
          v10 = v54 + 1;
        }
        else
        {
          v9 = 0;
          v10 = 2;
        }
        if ( *((_QWORD *)&v54 + 1) >= v10 )
          goto LABEL_10;
      }
      else
      {
        v5 = nullptr;
        v10 = 2;
      }
    }
    else
    {
      v9 = 0;
      v10 = 2;
    }
    v53 = (void *)qvector_reserve(&v53, v5, v10, 1);
    v5 = (const char *)v53;
LABEL_10:
    *(_QWORD *)&v54 = v10;
    v5[v9] = 63;
    *((_BYTE *)v53 + v9 + 1) = 0;
    v15 = *(unsigned __int8 ***)(a1 + 40);
    if ( *v15 )
    {
      sub_7A21C0((__int64 *)&v53, *v15, v11, v12, v13, v14);
      while ( 1 )
      {
        v20 = v54;
        v21 = 2;
        if ( (_QWORD)v54 )
        {
          v21 = v54 + 1;
          v20 = v54 - 1;
        }
        v22 = v53;
        if ( *((_QWORD *)&v54 + 1) < v21 )
        {
          v53 = (void *)qvector_reserve(&v53, v53, v21, 1);
          v22 = v53;
        }
        *(_QWORD *)&v54 = v21;
        v22[v20] = 61;
        *((_BYTE *)v53 + v20 + 1) = 0;
        sub_7A21C0((__int64 *)&v53, v15[1], v16, v17, v18, v19);
        v15 += 2;
        if ( !*v15 )
          break;
        v27 = v54;
        v28 = 2;
        if ( (_QWORD)v54 )
        {
          v28 = v54 + 1;
          v27 = v54 - 1;
        }
        v29 = v53;
        if ( *((_QWORD *)&v54 + 1) < v28 )
        {
          v53 = (void *)qvector_reserve(&v53, v53, v28, 1);
          v29 = v53;
        }
        *(_QWORD *)&v54 = v28;
        v29[v27] = 38;
        *((_BYTE *)v53 + v27 + 1) = 0;
        sub_7A21C0((__int64 *)&v53, *v15, v23, v24, v25, v26);
      }
    }
    v5 = haystack;
    if ( (_QWORD)v54 )
      v5 = (const char *)v53;
  }
  sub_3573A0((char **)&v51);
  if ( *(_WORD *)(a1 + 12) != 0xFFFF )
    sub_357520((__int64 *)&v51);
  if ( v5 )
  {
    v30 = strlen(v5);
    v31 = v52;
    v32 = v30;
    v33 = v30;
    if ( (_QWORD)v52 )
    {
      v31 = v52 - 1;
      v33 = v30 + v52 - 1;
    }
    v34 = v51;
    v35 = v33 + 1;
    if ( *((_QWORD *)&v52 + 1) < v33 + 1 )
    {
      v50 = v33;
      v49 = v33 + 1;
      v51 = (void *)qvector_reserve(&v51, v51, v35, 1);
      v33 = v50;
      v34 = v51;
      v35 = v49;
    }
    *(_QWORD *)&v52 = v35;
    v34[v33] = 0;
    memmove((char *)v51 + v31, v5, v32);
  }
  if ( (unk_2CACFE6 & 0x10) != 0 )
    sub_365330();
  **(_BYTE **)(a1 + 88) = 0;
  v36 = *(_DWORD *)(a1 + 8);
  if ( v6 == 2 )
  {
    handle = nullptr;
    v43 = haystack;
    v62 = 0;
    src = nullptr;
    v65 = v36;
    v55 = off_2B10910;
    v66 = a1;
    v67 = 0;
    v68 = 0;
    v57 = 0;
    v58 = 0;
    v59 = 0;
    v60 = 0;
    v61 = 0;
    *(_OWORD *)n = 0;
    if ( (_QWORD)v52 )
      v43 = (const char *)v51;
    v44 = sub_7A28E0((__int64)&v55, (__int64)v43, (_QWORD *)a1);
    v2 = v44;
    if ( v44 )
    {
      v46 = n[0];
      v47 = *(_QWORD *)(a1 + 96);
      v48 = *(void **)(a1 + 88);
      if ( n[0] <= v47 )
        v47 = n[0];
      memcpy(v48, src, v47);
      if ( v46 < *(_QWORD *)(a1 + 96) )
        *(_QWORD *)(a1 + 96) = v46;
    }
    v55 = off_2B108F0;
    if ( handle )
      dlclose(handle);
    v39 = src;
    handle = nullptr;
    v62 = 0;
    v57 = 0;
    v58 = 0;
    v59 = 0;
    v60 = 0;
    v61 = 0;
    if ( !src )
      goto LABEL_42;
  }
  else
  {
    handle = nullptr;
    v37 = haystack;
    v55 = off_2B108F0;
    v62 = 0;
    src = nullptr;
    v65 = v36;
    v57 = 0;
    v58 = 0;
    v59 = 0;
    v60 = 0;
    v61 = 0;
    *(_OWORD *)n = 0;
    if ( (_QWORD)v52 )
      v37 = (const char *)v51;
    v38 = sub_7A28E0((__int64)&v55, (__int64)v37, (_QWORD *)a1);
    v2 = v38;
    if ( v38 )
    {
      v40 = n[0];
      v41 = *(_QWORD *)(a1 + 96);
      v42 = *(void **)(a1 + 88);
      if ( n[0] <= v41 )
        v41 = n[0];
      memcpy(v42, src, v41);
      if ( v40 < *(_QWORD *)(a1 + 96) )
        *(_QWORD *)(a1 + 96) = v40;
    }
    v55 = off_2B108F0;
    if ( handle )
      dlclose(handle);
    v39 = src;
    handle = nullptr;
    v62 = 0;
    v57 = 0;
    v58 = 0;
    v59 = 0;
    v60 = 0;
    v61 = 0;
    if ( !src )
      goto LABEL_42;
  }
  n[0] = 0;
  qfree(v39);
LABEL_42:
  if ( (*(_DWORD *)&debug & 0x100000) != 0 )
    sub_365330();
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    qfree(v53);
  }
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v51);
  }
  return v2;
}

