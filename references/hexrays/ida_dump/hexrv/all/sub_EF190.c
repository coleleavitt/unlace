unsigned __int64 __fastcall sub_EF190(_DWORD *a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v5; // r12
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  size_t v10; // r15
  __int64 v11; // rbx
  size_t v12; // r15
  void *v13; // rax
  void *v14; // rsi
  unsigned __int64 v15; // r15
  _QWORD *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rdi
  char v19; // al
  size_t v21; // rbx
  size_t v22; // rbx
  unsigned __int64 v23; // r13
  void *v24; // rax
  void *v25; // rsi
  __int64 v26; // rbx
  void *v27; // rax
  void *v28; // rsi
  void *v29; // rax
  void *v30; // rsi
  size_t v31; // [rsp+18h] [rbp-F0h]
  size_t v32; // [rsp+18h] [rbp-F0h]
  int v33; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v34; // [rsp+28h] [rbp-E0h]
  void *src; // [rsp+30h] [rbp-D8h]
  size_t n[2]; // [rsp+38h] [rbp-D0h]
  void *v37; // [rsp+48h] [rbp-C0h]
  size_t v38[2]; // [rsp+50h] [rbp-B8h]
  __int64 v39; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+68h] [rbp-A0h]
  _DWORD v41[4]; // [rsp+70h] [rbp-98h] BYREF
  void *v42; // [rsp+80h] [rbp-88h]
  __int128 v43; // [rsp+88h] [rbp-80h]
  void *v44; // [rsp+98h] [rbp-70h]
  __int128 v45; // [rsp+A0h] [rbp-68h]
  __int64 v46; // [rsp+B0h] [rbp-58h] BYREF
  int v47; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v48; // [rsp+C8h] [rbp-40h]

  v5 = a4;
  v48 = __readfsqword(0x28u);
  a1[87] = a4;
  *(_DWORD *)(a2 + 8) = a4;
  v7 = *(_QWORD *)(a3 + 8);
  if ( a4 != v7 )
  {
    v40 = 0;
    v33 = 0;
    v34 = 0;
    src = nullptr;
    v37 = nullptr;
    v39 = 0;
    *(_OWORD *)n = 0;
    *(_OWORD *)v38 = 0;
    if ( a4 < v7 )
    {
      v15 = a4;
      do
      {
        v16 = (_QWORD *)(*(_QWORD *)a3 + 80 * v15);
        clear_tinfo_t(v16 + 8);
        v17 = v16[5];
        if ( v17 )
        {
          v16[6] = 0;
          qfree(v17);
        }
        v18 = v16[2];
        if ( v18 )
        {
          v16[3] = 0;
          qfree(v18);
        }
        ++v15;
        cleanup_argloc(v16);
      }
      while ( v15 < v7 );
      *(_QWORD *)(a3 + 8) = v5;
    }
    else
    {
      v8 = *(_QWORD *)a3;
      v9 = *(_QWORD *)(a3 + 16);
      if ( (unsigned __int64)&v33 < v8 || (unsigned __int64)&v33 >= v8 + 80 * v9 )
      {
        if ( v9 < a4 )
        {
          *(_QWORD *)a3 = qvector_reserve(a3, v8, a4, 80);
          v7 = *(_QWORD *)(a3 + 8);
        }
        for ( ; v7 < v5; *(_DWORD *)(v11 + 72) = v40 )
        {
          v11 = *(_QWORD *)a3 + 80 * v7;
          *(_DWORD *)v11 = 0;
          copy_argloc(v11, &v33);
          *(_QWORD *)(v11 + 16) = 0;
          *(_OWORD *)(v11 + 24) = 0;
          v12 = n[0];
          if ( n[0] )
          {
            v13 = (void *)qalloc_or_throw(n[0]);
            *(_QWORD *)(v11 + 16) = v13;
            v14 = src;
            *(_QWORD *)(v11 + 32) = v12;
            memcpy(v13, v14, v12);
            *(_QWORD *)(v11 + 24) = v12;
          }
          *(_QWORD *)(v11 + 40) = 0;
          *(_OWORD *)(v11 + 48) = 0;
          v10 = v38[0];
          if ( v38[0] )
          {
            v27 = (void *)qalloc_or_throw(v38[0]);
            *(_QWORD *)(v11 + 40) = v27;
            v28 = v37;
            *(_QWORD *)(v11 + 56) = v10;
            memcpy(v27, v28, v10);
            *(_QWORD *)(v11 + 48) = v10;
          }
          *(_QWORD *)(v11 + 64) = 0;
          copy_tinfo_t(v11 + 64, &v39);
          ++v7;
        }
        *(_QWORD *)(a3 + 8) = v5;
      }
      else
      {
        v41[0] = 0;
        copy_argloc(v41, &v33);
        v21 = n[0];
        v42 = nullptr;
        v43 = 0;
        if ( n[0] )
        {
          v42 = (void *)qalloc_or_throw(n[0]);
          *((_QWORD *)&v43 + 1) = v21;
          memcpy(v42, src, v21);
          *(_QWORD *)&v43 = v21;
        }
        v22 = v38[0];
        v44 = nullptr;
        v45 = 0;
        if ( v38[0] )
        {
          v44 = (void *)qalloc_or_throw(v38[0]);
          *((_QWORD *)&v45 + 1) = v22;
          memcpy(v44, v37, v22);
          *(_QWORD *)&v45 = v22;
        }
        v46 = 0;
        copy_tinfo_t(&v46, &v39);
        v47 = v40;
        if ( *(_QWORD *)(a3 + 16) < v5 )
          *(_QWORD *)a3 = qvector_reserve(a3, *(_QWORD *)a3, v5, 80);
        v23 = *(_QWORD *)(a3 + 8);
        if ( v23 < v5 )
        {
          do
          {
            v26 = *(_QWORD *)a3 + 80 * v23;
            *(_DWORD *)v26 = 0;
            copy_argloc(v26, v41);
            *(_QWORD *)(v26 + 16) = 0;
            *(_OWORD *)(v26 + 24) = 0;
            if ( (_QWORD)v43 )
            {
              v31 = v43;
              v24 = (void *)qalloc_or_throw(v43);
              *(_QWORD *)(v26 + 16) = v24;
              v25 = v42;
              *(_QWORD *)(v26 + 32) = v31;
              memcpy(v24, v25, v31);
              *(_QWORD *)(v26 + 24) = v31;
            }
            *(_QWORD *)(v26 + 40) = 0;
            *(_OWORD *)(v26 + 48) = 0;
            if ( (_QWORD)v45 )
            {
              v32 = v45;
              v29 = (void *)qalloc_or_throw(v45);
              *(_QWORD *)(v26 + 40) = v29;
              v30 = v44;
              *(_QWORD *)(v26 + 56) = v32;
              memcpy(v29, v30, v32);
              *(_QWORD *)(v26 + 48) = v32;
            }
            *(_QWORD *)(v26 + 64) = 0;
            copy_tinfo_t(v26 + 64, &v46);
            ++v23;
            *(_DWORD *)(v26 + 72) = v47;
          }
          while ( v5 != v23 );
        }
        *(_QWORD *)(a3 + 8) = v5;
        clear_tinfo_t(&v46);
        if ( v44 )
        {
          *(_QWORD *)&v45 = 0;
          qfree(v44);
        }
        if ( v42 )
        {
          *(_QWORD *)&v43 = 0;
          qfree(v42);
        }
        cleanup_argloc(v41);
      }
    }
    clear_tinfo_t(&v39);
    if ( v37 )
    {
      v38[0] = 0;
      qfree(v37);
    }
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
    cleanup_argloc(&v33);
  }
  a1[90] = 64;
  v19 = *(_BYTE *)(a3 + 88);
  *(_DWORD *)(a3 + 28) = 0;
  *(_BYTE *)(a3 + 88) = v19 & 0xF | 0x40;
  create_tinfo(a1 + 74, 12, 12, a3);
  return sub_E2DA0((__int64)a1, **(_DWORD **)(*(_QWORD *)a1 + 56LL) != 56, 1);
}
