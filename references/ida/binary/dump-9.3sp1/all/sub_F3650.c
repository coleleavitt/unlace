unsigned __int64 __fastcall sub_F3650(_DWORD *a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v5; // r12
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  size_t v10; // r15
  int *v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  size_t v15; // r15
  void *v16; // rax
  unsigned __int64 v17; // r15
  _QWORD *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rdi
  char v21; // al
  int *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  size_t v26; // rbx
  size_t v27; // rbx
  unsigned __int64 v28; // r13
  void *v29; // rax
  _DWORD *v30; // rsi
  __int64 v31; // rbx
  __int64 v32; // rcx
  void *v33; // rax
  void *v34; // rsi
  void *v35; // rax
  void *v36; // rsi
  void *v37; // rax
  size_t v38; // [rsp+18h] [rbp-F0h]
  size_t v39; // [rsp+18h] [rbp-F0h]
  int v40; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v41; // [rsp+28h] [rbp-E0h]
  void *src; // [rsp+30h] [rbp-D8h]
  size_t n[2]; // [rsp+38h] [rbp-D0h]
  void *v44; // [rsp+48h] [rbp-C0h]
  size_t v45[2]; // [rsp+50h] [rbp-B8h]
  __int64 v46; // [rsp+60h] [rbp-A8h]
  __int64 v47; // [rsp+68h] [rbp-A0h]
  _DWORD v48[4]; // [rsp+70h] [rbp-98h] BYREF
  void *v49; // [rsp+80h] [rbp-88h]
  __int128 v50; // [rsp+88h] [rbp-80h]
  void *v51; // [rsp+98h] [rbp-70h]
  __int128 v52; // [rsp+A0h] [rbp-68h]
  __int64 v53; // [rsp+B0h] [rbp-58h]
  int v54; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v55; // [rsp+C8h] [rbp-40h]

  v5 = a4;
  v55 = __readfsqword(0x28u);
  a1[87] = a4;
  *(_DWORD *)(a2 + 8) = a4;
  v7 = *(_QWORD *)(a3 + 8);
  if ( a4 != v7 )
  {
    v47 = 0;
    v40 = 0;
    v41 = 0;
    src = nullptr;
    v44 = nullptr;
    v46 = 0;
    *(_OWORD *)n = 0;
    *(_OWORD *)v45 = 0;
    if ( a4 < v7 )
    {
      v17 = a4;
      do
      {
        v18 = (_QWORD *)(*(_QWORD *)a3 + 80 * v17);
        clear_tinfo_t();
        v19 = v18[5];
        if ( v19 )
        {
          v18[6] = 0;
          qfree(v19);
        }
        v20 = v18[2];
        if ( v20 )
        {
          v18[3] = 0;
          qfree(v20);
        }
        ++v17;
        cleanup_argloc();
      }
      while ( v17 < v7 );
      *(_QWORD *)(a3 + 8) = v5;
    }
    else
    {
      v8 = *(_QWORD *)a3;
      v9 = *(_QWORD *)(a3 + 16);
      if ( (unsigned __int64)&v40 < v8 || (unsigned __int64)&v40 >= v8 + 80 * v9 )
      {
        if ( v9 < a4 )
        {
          *(_QWORD *)a3 = qvector_reserve(a3, v8, a4, 80);
          v7 = *(_QWORD *)(a3 + 8);
        }
        for ( ; v7 < v5; *(_DWORD *)(v12 + 72) = v47 )
        {
          v11 = &v40;
          v12 = *(_QWORD *)a3 + 80 * v7;
          *(_DWORD *)v12 = 0;
          copy_argloc();
          *(_QWORD *)(v12 + 16) = 0;
          *(_OWORD *)(v12 + 24) = 0;
          v15 = n[0];
          if ( n[0] )
          {
            v16 = (void *)qalloc_or_throw(n[0], (__int64)&v40, v13, v14);
            *(_QWORD *)(v12 + 16) = v16;
            v11 = (int *)src;
            *(_QWORD *)(v12 + 32) = v15;
            memcpy(v16, v11, v15);
            *(_QWORD *)(v12 + 24) = v15;
          }
          *(_QWORD *)(v12 + 40) = 0;
          *(_OWORD *)(v12 + 48) = 0;
          v10 = v45[0];
          if ( v45[0] )
          {
            v33 = (void *)qalloc_or_throw(v45[0], (__int64)v11, v13, v14);
            *(_QWORD *)(v12 + 40) = v33;
            v34 = v44;
            *(_QWORD *)(v12 + 56) = v10;
            memcpy(v33, v34, v10);
            *(_QWORD *)(v12 + 48) = v10;
          }
          *(_QWORD *)(v12 + 64) = 0;
          copy_tinfo_t();
          ++v7;
        }
        *(_QWORD *)(a3 + 8) = v5;
      }
      else
      {
        v23 = &v40;
        v48[0] = 0;
        copy_argloc();
        v26 = n[0];
        v49 = nullptr;
        v50 = 0;
        if ( n[0] )
        {
          v37 = (void *)qalloc_or_throw(n[0], (__int64)&v40, v24, v25);
          v23 = (int *)src;
          v49 = v37;
          *((_QWORD *)&v50 + 1) = v26;
          memcpy(v37, src, v26);
          *(_QWORD *)&v50 = v26;
        }
        v27 = v45[0];
        v51 = nullptr;
        v52 = 0;
        if ( v45[0] )
        {
          v51 = (void *)qalloc_or_throw(v45[0], (__int64)v23, v24, v25);
          *((_QWORD *)&v52 + 1) = v27;
          memcpy(v51, v44, v27);
          *(_QWORD *)&v52 = v27;
        }
        v53 = 0;
        copy_tinfo_t();
        v54 = v47;
        if ( *(_QWORD *)(a3 + 16) < v5 )
          *(_QWORD *)a3 = qvector_reserve(a3, *(_QWORD *)a3, v5, 80);
        v28 = *(_QWORD *)(a3 + 8);
        if ( v28 < v5 )
        {
          do
          {
            v30 = v48;
            v31 = *(_QWORD *)a3 + 80 * v28;
            *(_DWORD *)v31 = 0;
            copy_argloc();
            *(_QWORD *)(v31 + 16) = 0;
            *(_OWORD *)(v31 + 24) = 0;
            if ( (_QWORD)v50 )
            {
              v38 = v50;
              v29 = (void *)qalloc_or_throw(v50, (__int64)v48, v50, v32);
              *(_QWORD *)(v31 + 16) = v29;
              v30 = v49;
              *(_QWORD *)(v31 + 32) = v38;
              memcpy(v29, v30, v38);
              *(_QWORD *)(v31 + 24) = v38;
            }
            *(_QWORD *)(v31 + 40) = 0;
            *(_OWORD *)(v31 + 48) = 0;
            if ( (_QWORD)v52 )
            {
              v39 = v52;
              v35 = (void *)qalloc_or_throw(v52, (__int64)v30, v52, v32);
              *(_QWORD *)(v31 + 40) = v35;
              v36 = v51;
              *(_QWORD *)(v31 + 56) = v39;
              memcpy(v35, v36, v39);
              *(_QWORD *)(v31 + 48) = v39;
            }
            *(_QWORD *)(v31 + 64) = 0;
            copy_tinfo_t();
            ++v28;
            *(_DWORD *)(v31 + 72) = v54;
          }
          while ( v5 != v28 );
        }
        *(_QWORD *)(a3 + 8) = v5;
        clear_tinfo_t();
        if ( v51 )
        {
          *(_QWORD *)&v52 = 0;
          qfree((__int64)v51);
        }
        if ( v49 )
        {
          *(_QWORD *)&v50 = 0;
          qfree((__int64)v49);
        }
        cleanup_argloc();
      }
    }
    clear_tinfo_t();
    if ( v44 )
    {
      v45[0] = 0;
      qfree((__int64)v44);
    }
    if ( src )
    {
      n[0] = 0;
      qfree((__int64)src);
    }
    cleanup_argloc();
  }
  a1[90] = 64;
  v21 = *(_BYTE *)(a3 + 88);
  *(_DWORD *)(a3 + 28) = 0;
  *(_BYTE *)(a3 + 88) = v21 & 0xF | 0x40;
  create_tinfo();
  return sub_E7260((__int64)a1, **(_DWORD **)(*(_QWORD *)a1 + 56LL) != 56, 1);
}
