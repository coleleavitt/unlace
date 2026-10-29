unsigned __int64 __fastcall sub_7EFFE0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r15
  size_t v4; // r15
  size_t v5; // r15
  unsigned __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // rbx
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  __int64 v15; // [rsp+0h] [rbp-218h] BYREF
  __int128 v16; // [rsp+8h] [rbp-210h]
  __int64 v17; // [rsp+20h] [rbp-1F8h]
  __int64 v18; // [rsp+28h] [rbp-1F0h] BYREF
  __int128 v19; // [rsp+30h] [rbp-1E8h]
  __int128 v20; // [rsp+40h] [rbp-1D8h]
  __int64 v21; // [rsp+50h] [rbp-1C8h] BYREF
  __int128 v22; // [rsp+58h] [rbp-1C0h]
  __int128 v23; // [rsp+68h] [rbp-1B0h]
  void *v24; // [rsp+80h] [rbp-198h] BYREF
  __int128 v25; // [rsp+88h] [rbp-190h]
  int v26; // [rsp+98h] [rbp-180h]
  void *v27; // [rsp+A0h] [rbp-178h] BYREF
  size_t v28[2]; // [rsp+A8h] [rbp-170h]
  __int64 v29; // [rsp+B8h] [rbp-160h]
  void *src; // [rsp+C0h] [rbp-158h] BYREF
  size_t n[2]; // [rsp+C8h] [rbp-150h]
  int v32; // [rsp+D8h] [rbp-140h]
  void *v33; // [rsp+E0h] [rbp-138h] BYREF
  __int128 v34; // [rsp+E8h] [rbp-130h]
  void *ptr; // [rsp+F8h] [rbp-120h] BYREF
  __int128 v36; // [rsp+100h] [rbp-118h]
  __int128 v37; // [rsp+110h] [rbp-108h]
  __int64 v38; // [rsp+120h] [rbp-F8h]
  void *v39; // [rsp+130h] [rbp-E8h] BYREF
  __int128 v40; // [rsp+138h] [rbp-E0h]
  int v41; // [rsp+148h] [rbp-D0h]
  void *v42; // [rsp+150h] [rbp-C8h]
  __int128 v43; // [rsp+158h] [rbp-C0h]
  int v44; // [rsp+168h] [rbp-B0h]
  void *v45; // [rsp+170h] [rbp-A8h]
  __int128 v46; // [rsp+178h] [rbp-A0h]
  int v47; // [rsp+188h] [rbp-90h]
  void *v48; // [rsp+190h] [rbp-88h] BYREF
  __int128 v49; // [rsp+198h] [rbp-80h]
  __int64 v50; // [rsp+1A8h] [rbp-70h] BYREF
  __int128 v51; // [rsp+1B0h] [rbp-68h]
  __int128 v52; // [rsp+1C0h] [rbp-58h]
  __int64 v53; // [rsp+1D0h] [rbp-48h]
  unsigned __int64 v54; // [rsp+1D8h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  if ( a1[1] != a2 )
  {
    v20 = 0;
    v21 = 0;
    v17 = 0;
    v18 = 0;
    v15 = 0;
    v24 = nullptr;
    v26 = 0;
    v27 = nullptr;
    v22 = 0;
    v23 = 0;
    v19 = 0;
    v16 = 0;
    v25 = 0;
    *(_OWORD *)v28 = 0;
    sub_7DCF50(&v27, (__int64)&v15);
    v29 = 0;
    src = nullptr;
    *(_OWORD *)n = 0;
    sub_7DCF50(&src, (__int64)&v18);
    v32 = 0;
    v34 = 0;
    v33 = nullptr;
    ptr = nullptr;
    v36 = 0;
    sub_7DCEA0(&ptr, (__int64)&v21);
    v3 = a1[1];
    v38 = -1;
    v37 = 0;
    if ( a2 < v3 )
    {
      v6 = a2;
      v7 = 168 * a2;
      do
      {
        v8 = v7 + *a1;
        v9 = *(void **)(v8 + 120);
        if ( v9 )
        {
          *(_QWORD *)(v8 + 128) = 0;
          qfree(v9);
        }
        v10 = *(void **)(v8 + 96);
        if ( v10 )
        {
          *(_QWORD *)(v8 + 104) = 0;
          qfree(v10);
        }
        v11 = *(void **)(v8 + 64);
        if ( v11 )
        {
          *(_QWORD *)(v8 + 72) = 0;
          qfree(v11);
        }
        v12 = *(void **)(v8 + 32);
        if ( v12 )
        {
          *(_QWORD *)(v8 + 40) = 0;
          qfree(v12);
        }
        v13 = *(void **)v8;
        if ( *(_QWORD *)v8 )
        {
          *(_QWORD *)(v8 + 8) = 0;
          qfree(v13);
        }
        ++v6;
        v7 += 168;
      }
      while ( v3 != v6 );
      a1[1] = a2;
    }
    else if ( v3 < a2 )
    {
      if ( (unsigned __int64)&v24 < *a1 || (unsigned __int64)&v24 >= *a1 + 168LL * a1[2] )
      {
        sub_7EFD00(a1, a2, (__int64)&v24);
      }
      else
      {
        v39 = nullptr;
        v40 = 0;
        sub_7DCEA0(&v39, (__int64)&v24);
        v4 = v28[0];
        v42 = nullptr;
        v43 = 0;
        v41 = v26;
        if ( v28[0] )
        {
          v42 = (void *)qalloc_or_throw(v28[0]);
          *((_QWORD *)&v43 + 1) = v4;
          memcpy(v42, v27, v4);
          *(_QWORD *)&v43 = v4;
        }
        v5 = n[0];
        v45 = nullptr;
        v46 = 0;
        v44 = v29;
        if ( n[0] )
        {
          v45 = (void *)qalloc_or_throw(n[0]);
          *((_QWORD *)&v46 + 1) = v5;
          memcpy(v45, src, v5);
          *(_QWORD *)&v46 = v5;
        }
        v48 = nullptr;
        v47 = v32;
        v49 = 0;
        sub_7DCEA0(&v48, (__int64)&v33);
        v50 = 0;
        v51 = 0;
        sub_7DCEA0(&v50, (__int64)&ptr);
        v53 = -1;
        v52 = 0;
        sub_7EFD00(a1, a2, (__int64)&v39);
        sub_7ECE20((__int64)&v39);
      }
    }
    if ( ptr )
      qfree(ptr);
    if ( v33 )
      qfree(v33);
    if ( src )
      qfree(src);
    if ( v27 )
      qfree(v27);
    if ( v24 )
      qfree(v24);
  }
  return v54 - __readfsqword(0x28u);
}
