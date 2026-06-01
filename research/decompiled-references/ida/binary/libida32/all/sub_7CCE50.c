unsigned __int64 __fastcall sub_7CCE50(__int64 a1, const char *a2)
{
  unsigned __int64 v4; // r15
  const char *v5; // rsi
  size_t v6; // r15
  size_t v7; // r15
  const char *v8; // r14
  __int64 v9; // r13
  __int64 v10; // rbx
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  void *v17; // rax
  __int64 v18; // [rsp+0h] [rbp-218h] BYREF
  __int128 v19; // [rsp+8h] [rbp-210h]
  __int64 v20; // [rsp+20h] [rbp-1F8h]
  __int64 v21; // [rsp+28h] [rbp-1F0h] BYREF
  __int128 v22; // [rsp+30h] [rbp-1E8h]
  __int128 v23; // [rsp+40h] [rbp-1D8h]
  __int64 v24; // [rsp+50h] [rbp-1C8h] BYREF
  __int128 v25; // [rsp+58h] [rbp-1C0h]
  __int128 v26; // [rsp+68h] [rbp-1B0h]
  void *v27; // [rsp+80h] [rbp-198h] BYREF
  __int128 v28; // [rsp+88h] [rbp-190h]
  int v29; // [rsp+98h] [rbp-180h]
  void *v30; // [rsp+A0h] [rbp-178h] BYREF
  size_t v31[2]; // [rsp+A8h] [rbp-170h]
  __int64 v32; // [rsp+B8h] [rbp-160h]
  void *src; // [rsp+C0h] [rbp-158h] BYREF
  size_t n[2]; // [rsp+C8h] [rbp-150h]
  int v35; // [rsp+D8h] [rbp-140h]
  void *v36; // [rsp+E0h] [rbp-138h] BYREF
  __int128 v37; // [rsp+E8h] [rbp-130h]
  void *ptr; // [rsp+F8h] [rbp-120h] BYREF
  __int128 v39; // [rsp+100h] [rbp-118h]
  __int128 v40; // [rsp+110h] [rbp-108h]
  __int64 v41; // [rsp+120h] [rbp-F8h]
  void *v42; // [rsp+130h] [rbp-E8h] BYREF
  __int128 v43; // [rsp+138h] [rbp-E0h]
  int v44; // [rsp+148h] [rbp-D0h]
  void *v45; // [rsp+150h] [rbp-C8h]
  __int128 v46; // [rsp+158h] [rbp-C0h]
  int v47; // [rsp+168h] [rbp-B0h]
  void *v48; // [rsp+170h] [rbp-A8h]
  __int128 v49; // [rsp+178h] [rbp-A0h]
  int v50; // [rsp+188h] [rbp-90h]
  void *v51; // [rsp+190h] [rbp-88h] BYREF
  __int128 v52; // [rsp+198h] [rbp-80h]
  __int64 v53; // [rsp+1A8h] [rbp-70h] BYREF
  __int128 v54; // [rsp+1B0h] [rbp-68h]
  __int128 v55; // [rsp+1C0h] [rbp-58h]
  __int64 v56; // [rsp+1D0h] [rbp-48h]
  unsigned __int64 v57; // [rsp+1D8h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  if ( *(const char **)(a1 + 8) != a2 )
  {
    v23 = 0;
    v24 = 0;
    v20 = 0;
    v21 = 0;
    v18 = 0;
    v27 = nullptr;
    v29 = 0;
    v30 = nullptr;
    v25 = 0;
    v26 = 0;
    v22 = 0;
    v19 = 0;
    v28 = 0;
    *(_OWORD *)v31 = 0;
    sub_7B9B70(&v30, (__int64)&v18);
    v32 = 0;
    src = nullptr;
    *(_OWORD *)n = 0;
    sub_7B9B70(&src, (__int64)&v21);
    v35 = 0;
    v37 = 0;
    v36 = nullptr;
    ptr = nullptr;
    v39 = 0;
    sub_7B9AC0(&ptr, (__int64)&v24);
    v4 = *(_QWORD *)(a1 + 8);
    v41 = -1;
    v40 = 0;
    if ( (unsigned __int64)a2 < v4 )
    {
      v8 = a2;
      v9 = 168LL * (_QWORD)a2;
      do
      {
        v10 = v9 + *(_QWORD *)a1;
        v11 = *(void **)(v10 + 120);
        if ( v11 )
        {
          *(_QWORD *)(v10 + 128) = 0;
          qfree(v11);
        }
        v12 = *(void **)(v10 + 96);
        if ( v12 )
        {
          *(_QWORD *)(v10 + 104) = 0;
          qfree(v12);
        }
        v13 = *(void **)(v10 + 64);
        if ( v13 )
        {
          *(_QWORD *)(v10 + 72) = 0;
          qfree(v13);
        }
        v14 = *(void **)(v10 + 32);
        if ( v14 )
        {
          *(_QWORD *)(v10 + 40) = 0;
          qfree(v14);
        }
        v15 = *(void **)v10;
        if ( *(_QWORD *)v10 )
        {
          *(_QWORD *)(v10 + 8) = 0;
          qfree(v15);
        }
        ++v8;
        v9 += 168;
      }
      while ( (const char *)v4 != v8 );
      *(_QWORD *)(a1 + 8) = a2;
    }
    else if ( v4 < (unsigned __int64)a2 )
    {
      if ( (unsigned __int64)&v27 < *(_QWORD *)a1
        || (unsigned __int64)&v27 >= *(_QWORD *)a1 + 168LL * *(_QWORD *)(a1 + 16) )
      {
        sub_7CCB70((const char **)a1, a2, (__int64)&v27);
      }
      else
      {
        v5 = (const char *)&v27;
        v42 = nullptr;
        v43 = 0;
        sub_7B9AC0(&v42, (__int64)&v27);
        v6 = v31[0];
        v45 = nullptr;
        v46 = 0;
        v44 = v29;
        if ( v31[0] )
        {
          v17 = (void *)qalloc_or_throw(v31[0], (const char *)&v27);
          v5 = (const char *)v30;
          v45 = v17;
          *((_QWORD *)&v46 + 1) = v6;
          memcpy(v17, v30, v6);
          *(_QWORD *)&v46 = v6;
        }
        v7 = n[0];
        v48 = nullptr;
        v49 = 0;
        v47 = v32;
        if ( n[0] )
        {
          v48 = (void *)qalloc_or_throw(n[0], v5);
          *((_QWORD *)&v49 + 1) = v7;
          memcpy(v48, src, v7);
          *(_QWORD *)&v49 = v7;
        }
        v51 = nullptr;
        v50 = v35;
        v52 = 0;
        sub_7B9AC0(&v51, (__int64)&v36);
        v53 = 0;
        v54 = 0;
        sub_7B9AC0(&v53, (__int64)&ptr);
        v56 = -1;
        v55 = 0;
        sub_7CCB70((const char **)a1, a2, (__int64)&v42);
        sub_7C9BE0((__int64)&v42);
      }
    }
    if ( ptr )
      qfree(ptr);
    if ( v36 )
      qfree(v36);
    if ( src )
      qfree(src);
    if ( v30 )
      qfree(v30);
    if ( v27 )
      qfree(v27);
  }
  return v57 - __readfsqword(0x28u);
}

