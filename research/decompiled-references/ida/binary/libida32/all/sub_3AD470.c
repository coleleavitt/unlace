unsigned __int64 __fastcall sub_3AD470(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 std_dirtree; // rax
  _QWORD *v6; // rbx
  const char *v7; // rdx
  __int64 v8; // rsi
  unsigned __int64 dir_size; // rax
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rbx
  __int64 v19; // rsi
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // r11
  __int64 v28; // r10
  int v29; // r8d
  __int64 v30; // rsi
  __int64 v31; // rax
  __m128i v32; // xmm0
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  unsigned __int64 v37; // r14
  __int64 v38; // r13
  __int64 v39; // rax
  void *v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rcx
  __m128i n; // [rsp+10h] [rbp-128h] BYREF
  __int64 v46; // [rsp+20h] [rbp-118h]
  __int64 v47; // [rsp+28h] [rbp-110h]
  __int64 v48; // [rsp+30h] [rbp-108h]
  __int64 v49; // [rsp+38h] [rbp-100h]
  int v50; // [rsp+40h] [rbp-F8h]
  int v51; // [rsp+44h] [rbp-F4h]
  __int64 v52; // [rsp+48h] [rbp-F0h]
  __int64 v53; // [rsp+50h] [rbp-E8h]
  __int64 v54; // [rsp+58h] [rbp-E0h]
  unsigned int v55; // [rsp+6Bh] [rbp-CDh] BYREF
  char v56; // [rsp+6Fh] [rbp-C9h]
  __int64 v57; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v58; // [rsp+78h] [rbp-C0h]
  void *v59; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v60; // [rsp+88h] [rbp-B0h]
  _QWORD v61[2]; // [rsp+A0h] [rbp-98h] BYREF
  __int128 v62; // [rsp+B0h] [rbp-88h]
  __int64 v63; // [rsp+C0h] [rbp-78h]
  unsigned __int64 v64; // [rsp+C8h] [rbp-70h]
  unsigned __int64 v65; // [rsp+D0h] [rbp-68h]
  __int64 v66; // [rsp+D8h] [rbp-60h]
  __int64 v67; // [rsp+E0h] [rbp-58h]
  unsigned __int64 v68; // [rsp+E8h] [rbp-50h]
  int v69; // [rsp+F0h] [rbp-48h]
  unsigned __int64 v70; // [rsp+F8h] [rbp-40h]

  v70 = __readfsqword(0x28u);
  std_dirtree = get_std_dirtree(5);
  v59 = nullptr;
  v60 = 0;
  if ( !a3 )
    return 0;
  v6 = (_QWORD *)std_dirtree;
  sub_3573A0((char **)&v59);
  v7 = haystack;
  v58 = -1;
  v57 = 0xFFFFFFFFLL;
  if ( (_QWORD)v60 )
    v7 = (const char *)v59;
  v8 = *v6;
  v56 = 0;
  v55 = -1;
  dirtree_resolve_path(&v55, v8, v7);
  if ( v55 != -1 && v56 )
  {
    LODWORD(v57) = v55;
    dir_size = dirtree_get_dir_size(*v6, v55);
    v10 = dir_size;
    if ( a2 )
    {
      if ( a2[2] < dir_size )
      {
        *a2 = qvector_reserve(a2, *a2, dir_size, 88);
      }
      else
      {
        v11 = 0;
        if ( !dir_size )
        {
LABEL_17:
          v18 = a2[1];
          if ( v11 != v18 )
          {
            v63 = 0xFFFFFFFFLL;
            v61[0] = 88;
            v61[1] = 0;
            v64 = 0xFFFFFFFF00000000LL;
            v65 = 0xFFFFFFFF00000000LL;
            v66 = 4;
            v67 = 9;
            v68 = 0xFFFFFFFF00000000LL;
            v69 = 0;
            v62 = 0;
            if ( v11 < v18 )
            {
              v37 = v11;
              v38 = 88 * v11;
              do
              {
                v39 = v38 + *a2;
                v40 = *(void **)(v39 + 8);
                if ( v40 )
                {
                  *(_QWORD *)(v39 + 16) = 0;
                  qfree(v40);
                }
                ++v37;
                v38 += 88;
              }
              while ( v18 != v37 );
            }
            else
            {
              v19 = *a2;
              v20 = a2[2];
              if ( (unsigned __int64)v61 < *a2 || (unsigned __int64)v61 >= v19 + 88 * v20 )
              {
                if ( v20 < v11 )
                {
                  *a2 = qvector_reserve(a2, v19, v11, 88);
                  v18 = a2[1];
                }
                if ( v18 < v11 )
                {
                  v42 = 88 * v18;
                  do
                  {
                    ++v18;
                    v43 = v42 + *a2;
                    v42 += 88;
                    *(_QWORD *)(v43 + 8) = 0;
                    *(_OWORD *)(v43 + 16) = 0;
                    v44 = v63;
                    *(_QWORD *)v43 = 88;
                    *(_QWORD *)(v43 + 32) = v44;
                    LODWORD(v44) = v64;
                    *(_QWORD *)(v43 + 44) = 0xFFFFFFFFLL;
                    *(_DWORD *)(v43 + 40) = v44;
                    *(_QWORD *)(v43 + 52) = 0x4FFFFFFFFLL;
                    *(_QWORD *)(v43 + 60) = 0x900000000LL;
                    *(_QWORD *)(v43 + 68) = 0;
                    *(_QWORD *)(v43 + 76) = 0xFFFFFFFFLL;
                  }
                  while ( v11 != v18 );
                }
              }
              else
              {
                if ( v20 < v11 )
                {
                  *a2 = qvector_reserve(a2, v19, v11, 88);
                  v18 = a2[1];
                }
                if ( v18 < v11 )
                {
                  v21 = 88 * v18;
                  do
                  {
                    ++v18;
                    v22 = v21 + *a2;
                    v21 += 88;
                    *(_QWORD *)v22 = 88;
                    *(_QWORD *)(v22 + 8) = 0;
                    *(_QWORD *)(v22 + 32) = 0xFFFFFFFFLL;
                    *(_QWORD *)(v22 + 40) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v22 + 48) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v22 + 56) = 4;
                    *(_QWORD *)(v22 + 64) = 9;
                    *(_QWORD *)(v22 + 72) = 0xFFFFFFFF00000000LL;
                    *(_DWORD *)(v22 + 80) = 0;
                    *(_OWORD *)(v22 + 16) = 0;
                  }
                  while ( v11 != v18 );
                }
              }
            }
            a2[1] = v11;
          }
          goto LABEL_29;
        }
      }
LABEL_9:
      v12 = 0;
      v11 = 0;
      do
      {
        v58 = v12;
        v13 = *v6;
        BYTE4(v61[0]) = 0;
        LODWORD(v61[0]) = -1;
        dirtree_resolve_cursor(v61, v13, &v57);
        v14 = LODWORD(v61[0]);
        if ( LODWORD(v61[0]) != -1 && !BYTE4(v61[0]) )
        {
          if ( a2 && (unsigned __int8)sub_3A60E0((__int64)v61, v61[0]) )
          {
            v24 = v61[0];
            v46 = *(_QWORD *)v61[0];
            v25 = *(_QWORD *)(v61[0] + 16LL);
            n = (__m128i)v25;
            if ( v25 )
            {
              v47 = v61[0];
              n.m128i_i64[1] = qalloc_or_throw(v25, v14, v15, v61[0], v16, v17);
              memcpy((void *)n.m128i_i64[1], *(const void **)(v47 + 8), n.m128i_u64[0]);
              v24 = v47;
            }
            v26 = *(_QWORD *)(v24 + 56);
            v27 = *(_QWORD *)(v24 + 64);
            v28 = *(_QWORD *)(v24 + 72);
            v29 = *(_DWORD *)(v24 + 80);
            v30 = *a2;
            v50 = *(_DWORD *)(v24 + 40);
            v48 = *(_QWORD *)(v24 + 32);
            v49 = *(_QWORD *)(v24 + 44);
            LODWORD(v47) = *(_DWORD *)(v24 + 52);
            v31 = a2[1];
            if ( a2[2] < (unsigned __int64)(v31 + 1) )
            {
              v54 = v28;
              v53 = v27;
              v52 = v26;
              v51 = v29;
              v41 = qvector_reserve(a2, v30, v31 + 1, 88);
              *a2 = v41;
              v30 = v41;
              v28 = v54;
              v31 = a2[1];
              v27 = v53;
              v26 = v52;
              v29 = v51;
            }
            v32 = _mm_loadl_epi64(&n);
            v33 = v30 + 88 * v31;
            *(_QWORD *)v33 = v46;
            v34 = n.m128i_i64[1];
            *(_QWORD *)(v33 + 56) = v26;
            *(_QWORD *)(v33 + 8) = v34;
            v35 = v48;
            *(_QWORD *)(v33 + 64) = v27;
            *(_QWORD *)(v33 + 32) = v35;
            LODWORD(v35) = v50;
            *(_QWORD *)(v33 + 72) = v28;
            *(_DWORD *)(v33 + 40) = v35;
            v36 = v49;
            *(_DWORD *)(v33 + 80) = v29;
            *(_QWORD *)(v33 + 44) = v36;
            LODWORD(v36) = v47;
            *(__m128i *)(v33 + 16) = _mm_unpacklo_epi64(v32, v32);
            *(_DWORD *)(v33 + 52) = v36;
            ++a2[1];
          }
          ++v11;
        }
        ++v12;
      }
      while ( v12 < v10 );
      if ( !a2 )
        goto LABEL_29;
      goto LABEL_17;
    }
    if ( dir_size )
      goto LABEL_9;
  }
  v11 = 0;
LABEL_29:
  if ( v59 )
  {
    *(_QWORD *)&v60 = 0;
    qfree(v59);
  }
  return v11;
}

