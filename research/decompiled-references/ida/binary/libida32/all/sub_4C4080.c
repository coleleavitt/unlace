unsigned __int64 __fastcall sub_4C4080(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rdx
  __int64 v4; // rsi
  _QWORD *v5; // rcx
  unsigned __int64 v6; // rsi
  unsigned int v7; // eax
  const char *v8; // rsi
  unsigned int v9; // eax
  __int64 v10; // r14
  unsigned __int64 v11; // rbp
  __int64 v12; // rbx
  char *v13; // rax
  void *v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rdx
  char *v17; // r15
  const char *v18; // r14
  char *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  char *v25; // rdx
  __int64 v26; // rbp
  __int64 v27; // rbx
  char *v28; // rax
  void *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rdx
  size_t v35; // rax
  size_t v36; // r13
  void *v37; // rax
  unsigned __int64 v38; // rbx
  char *v39; // rbp
  __m128i *v40; // rax
  __int64 v41; // rax
  __int64 *v42; // r8
  __int64 v43; // rdx
  __int64 i; // r14
  char *v45; // rax
  void *v46; // rdi
  char *v47; // r8
  __int128 v48; // xmm0
  __int64 v49; // rcx
  char *v50; // rdx
  char *v51; // rsi
  void *v52; // rax
  __m128i *v53; // [rsp+8h] [rbp-F0h]
  __int64 *v54; // [rsp+8h] [rbp-F0h]
  size_t n; // [rsp+10h] [rbp-E8h]
  size_t na; // [rsp+10h] [rbp-E8h]
  unsigned int v57; // [rsp+1Ch] [rbp-DCh]
  __int64 v58; // [rsp+20h] [rbp-D8h]
  __int64 v59; // [rsp+28h] [rbp-D0h]
  _QWORD *v60; // [rsp+38h] [rbp-C0h]
  char v62; // [rsp+47h] [rbp-B1h]
  __int64 v63; // [rsp+50h] [rbp-A8h]
  char *v64; // [rsp+58h] [rbp-A0h]
  char *s[2]; // [rsp+60h] [rbp-98h] BYREF
  void *ptr; // [rsp+70h] [rbp-88h] BYREF
  __int128 v67; // [rsp+78h] [rbp-80h]
  unsigned int v68; // [rsp+90h] [rbp-68h]
  unsigned __int64 v69; // [rsp+B8h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(unsigned int *)(a2 + 4);
  v69 = __readfsqword(0x28u);
  v5 = *(_QWORD **)(a1 + 1528);
  v6 = v3 + v4;
  *(__m128i *)s = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v6);
  v60 = v5;
  v59 = (__int64)(v5 + 12);
  if ( v3 < v6 )
  {
    v58 = (__int64)(v5 + 12);
    v62 = 1;
    while ( 1 )
    {
      ptr = nullptr;
      v67 = 0;
      v7 = unpack_dd(s);
      v8 = s[1];
      v57 = v7;
      v9 = unpack_dd(s);
      v10 = v67;
      v11 = v9;
      v12 = 0;
      if ( (_QWORD)v67 )
      {
        do
        {
          v13 = (char *)ptr + 24 * v12;
          v14 = *(void **)v13;
          if ( *(_QWORD *)v13 )
          {
            *((_QWORD *)v13 + 1) = 0;
            qfree(v14);
          }
          ++v12;
        }
        while ( v10 != v12 );
      }
      *(_QWORD *)&v67 = 0;
      if ( *((_QWORD *)&v67 + 1) < v11 )
        break;
      if ( v11 )
        goto LABEL_9;
LABEL_17:
      if ( a3 )
      {
        if ( v62 )
        {
          v20 = v60[13];
          if ( v20 )
          {
            v21 = v59;
            do
            {
              while ( 1 )
              {
                v22 = *(_QWORD *)(v20 + 16);
                v23 = *(_QWORD *)(v20 + 24);
                if ( *(_DWORD *)(v20 + 32) < v57 )
                  break;
                v21 = v20;
                v20 = *(_QWORD *)(v20 + 16);
                if ( !v22 )
                  goto LABEL_24;
              }
              v20 = *(_QWORD *)(v20 + 24);
            }
            while ( v23 );
LABEL_24:
            v58 = v21;
            v24 = v21;
            if ( v21 != v59 )
            {
              if ( v57 < *(_DWORD *)(v21 + 32) )
                v24 = v59;
              v58 = v24;
            }
          }
          else
          {
            v58 = v59;
          }
          v62 = 0;
        }
      }
      else
      {
        v38 = v67;
        v39 = nullptr;
        v68 = v57;
        if ( (_QWORD)v67 )
        {
          v39 = (char *)qalloc_or_throw(24 * v67, v8);
          v47 = v39;
          v48 = 0;
          v49 = 0;
          do
          {
            v50 = (char *)ptr;
            *(_OWORD *)(v47 + 8) = v48;
            *(_QWORD *)v47 = 0;
            v51 = &v50[24 * v49];
            if ( *((_QWORD *)v51 + 1) )
            {
              v64 = v47;
              v63 = v49;
              na = *((_QWORD *)v51 + 1);
              v52 = (void *)qalloc_or_throw(na, v51);
              *((_QWORD *)v64 + 2) = na;
              *(_QWORD *)v64 = v52;
              memcpy(v52, *(const void **)v51, na);
              v47 = v64;
              v48 = 0;
              v49 = v63;
              *((_QWORD *)v64 + 1) = na;
            }
            ++v49;
            v47 += 24;
          }
          while ( v38 != v49 );
        }
        v40 = (__m128i *)operator new(0x40u);
        v40[2].m128i_i64[1] = (__int64)v39;
        v53 = v40;
        v40[2].m128i_i32[0] = v57;
        v40[3] = _mm_unpacklo_epi64((__m128i)v38, (__m128i)v38);
        v41 = sub_4B0E80(v60 + 11, v58, v57);
        v42 = (__int64 *)v53;
        v58 = v41;
        if ( v43 )
        {
          std::_Rb_tree_insert_and_rebalance();
          ++v60[16];
          v58 = (__int64)v53;
        }
        else if ( v53 )
        {
          if ( v39 )
          {
            if ( v38 )
            {
              for ( i = 0; i != v38; ++i )
              {
                v45 = &v39[24 * i];
                v46 = *(void **)v45;
                if ( *(_QWORD *)v45 )
                {
                  *((_QWORD *)v45 + 1) = 0;
                  qfree(v46);
                }
                v39 = (char *)v53[2].m128i_i64[1];
              }
              v42 = (__int64 *)v53;
            }
            v42[6] = 0;
            v54 = v42;
            qfree(v39);
            v42 = v54;
          }
          operator delete(v42, 0x40u);
        }
      }
      v25 = (char *)ptr;
      if ( ptr )
      {
        v26 = v67;
        if ( (_QWORD)v67 )
        {
          v27 = 0;
          do
          {
            v28 = &v25[24 * v27];
            v29 = *(void **)v28;
            if ( *(_QWORD *)v28 )
            {
              *((_QWORD *)v28 + 1) = 0;
              qfree(v29);
              v25 = (char *)ptr;
            }
            ++v27;
          }
          while ( v26 != v27 );
        }
        *(_QWORD *)&v67 = 0;
        qfree(v25);
      }
      if ( s[0] >= s[1] )
        goto LABEL_37;
    }
    ptr = (void *)qvector_reserve(&ptr, ptr, v11, 24);
LABEL_9:
    v15 = 0;
    do
    {
      v16 = v67;
      v8 = (const char *)ptr;
      if ( *((_QWORD *)&v67 + 1) < (unsigned __int64)(v67 + 1) )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v67 + 1, 24);
        v16 = v67;
        v8 = (const char *)ptr;
      }
      v17 = (char *)&v8[24 * v16];
      *(_QWORD *)v17 = 0;
      v18 = s[0];
      *(_OWORD *)(v17 + 8) = 0;
      *(_QWORD *)&v67 = v67 + 1;
      v19 = (char *)v18;
      do
      {
        if ( v19 >= s[1] )
          goto LABEL_15;
        ++v19;
      }
      while ( *(v19 - 1) );
      s[0] = v19;
      if ( !v18 || (v35 = strlen(v18), (v36 = v35) == 0) )
      {
LABEL_15:
        *((_QWORD *)v17 + 1) = 0;
        goto LABEL_16;
      }
      n = v35 + 1;
      v37 = (void *)qvector_reserve(v17, *(_QWORD *)v17, v35 + 1, 1);
      *(_QWORD *)v17 = v37;
      v8 = v18;
      *((_QWORD *)v17 + 1) = n;
      memmove(v37, v18, v36);
      *(_BYTE *)(*(_QWORD *)v17 + v36) = 0;
LABEL_16:
      ++v15;
    }
    while ( v11 != v15 );
    goto LABEL_17;
  }
  v58 = (__int64)(v5 + 12);
LABEL_37:
  if ( a3 )
  {
    v30 = v60[13];
    if ( v30 )
    {
      v31 = v59;
      do
      {
        while ( 1 )
        {
          v32 = *(_QWORD *)(v30 + 16);
          v33 = *(_QWORD *)(v30 + 24);
          if ( v57 >= *(_DWORD *)(v30 + 32) )
            break;
          v31 = v30;
          v30 = *(_QWORD *)(v30 + 16);
          if ( !v32 )
            goto LABEL_43;
        }
        v30 = *(_QWORD *)(v30 + 24);
      }
      while ( v33 );
LABEL_43:
      v59 = v31;
    }
    sub_4C33B0((__int64)(v60 + 11), v58, v59);
  }
  return v69 - __readfsqword(0x28u);
}

