__int64 __fastcall sub_2FDC00(_QWORD *a1)
{
  _BYTE *v1; // r12
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 *v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r13
  __m128i v14; // xmm2
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rdx
  char v19; // bl
  unsigned __int64 *v20; // r15
  unsigned __int64 v21; // r14
  __int64 v22; // rbx
  __int64 v23; // r13
  _QWORD *v24; // rbp
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r13
  __m128i *v29; // r15
  __int64 v30; // r13
  __m128i *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 *v35; // rdi
  _QWORD *v37; // rax
  __int64 v38; // rdx
  _QWORD *v39; // rcx
  const void *v40; // r9
  void *v41; // rax
  const void *v42; // r9
  void *v43; // rax
  unsigned __int64 v44; // [rsp+8h] [rbp-148h]
  unsigned __int8 v45; // [rsp+8h] [rbp-148h]
  int v47; // [rsp+1Ch] [rbp-134h]
  _QWORD *v48; // [rsp+20h] [rbp-130h]
  __int64 v49; // [rsp+28h] [rbp-128h]
  const void *v50; // [rsp+28h] [rbp-128h]
  const void *v51; // [rsp+28h] [rbp-128h]
  __int64 v52; // [rsp+30h] [rbp-120h]
  __int64 *v53; // [rsp+40h] [rbp-110h]
  __int64 v54; // [rsp+48h] [rbp-108h] BYREF
  __m128i si128; // [rsp+50h] [rbp-100h]
  __int64 v56; // [rsp+60h] [rbp-F0h]
  int v57; // [rsp+68h] [rbp-E8h]
  __m128i v58; // [rsp+78h] [rbp-D8h] BYREF
  __m128i v59; // [rsp+88h] [rbp-C8h] BYREF
  _QWORD v60[2]; // [rsp+98h] [rbp-B8h] BYREF
  _BYTE v61[48]; // [rsp+A8h] [rbp-A8h] BYREF
  char v62; // [rsp+D8h] [rbp-78h] BYREF
  __int64 v63; // [rsp+F0h] [rbp-60h] BYREF
  __int128 v64; // [rsp+F8h] [rbp-58h]
  __int64 v65; // [rsp+108h] [rbp-48h]
  unsigned __int64 v66; // [rsp+110h] [rbp-40h]

  v1 = v61;
  v66 = __readfsqword(0x28u);
  v2 = a1[22];
  v3 = a1[1];
  v60[1] = v2;
  v60[0] = v3;
  v4 = (__int64 *)v61;
  do
  {
    *v4 = 0;
    v4 += 3;
    *((_OWORD *)v4 - 1) = 0;
  }
  while ( v4 != &v63 );
  v63 = 0;
  v65 = 0;
  v64 = 0;
  if ( v2 )
  {
    v47 = 0;
    v44 = 0;
    do
    {
      v5 = a1[v44 + 19];
      if ( v5 )
      {
        v6 = (__int64 *)sub_2C6FD0(v5);
        v53 = v6;
        if ( v6 )
        {
          v7 = *v6;
          v48 = (_QWORD *)*v6;
          if ( *v6 )
          {
            if ( v6[1] )
            {
              v8 = *(_QWORD *)(v7 + 8);
              if ( v7 != v8 )
              {
                while ( 1 )
                {
                  v9 = *((_QWORD *)v1 + 1);
                  v10 = *((_QWORD *)v1 + 2);
                  if ( v10 < v9 + 1 )
                  {
                    v26 = qvector_reserve(v1, 0, v9 + 1, 200);
                    v27 = *((_QWORD *)v1 + 2);
                    v28 = *((_QWORD *)v1 + 1);
                    v49 = v26;
                    *((_QWORD *)v1 + 2) = v10;
                    v29 = *(__m128i **)v1;
                    v52 = v27;
                    v30 = v28 - 1;
                    if ( v30 >= 0 )
                    {
                      v31 = (__m128i *)v26;
                      do
                      {
                        sub_2CE310(v31, v29);
                        v32 = v29[12].m128i_i64[0];
                        v31->m128i_i64[0] = (__int64)off_4E2D00;
                        v31[12].m128i_i64[0] = v32;
                        v29->m128i_i64[0] = (__int64)&off_4E1528;
                        cleanup_argloc(&v29[9]);
                        v33 = v29[6].m128i_i64[1];
                        if ( v33 )
                        {
                          v29[7].m128i_i64[0] = 0;
                          qfree(v33);
                        }
                        clear_tinfo_t(&v29[6]);
                        v34 = v29[4].m128i_i64[1];
                        if ( v34 )
                        {
                          v29[5].m128i_i64[0] = 0;
                          qfree(v34);
                        }
                        v31 = (__m128i *)((char *)v31 + 200);
                        cleanup_argloc(&v29[3]);
                        v35 = &v29->m128i_i64[1];
                        v29 = (__m128i *)((char *)v29 + 200);
                        cleanup_argloc(v35);
                      }
                      while ( v30-- != 0 );
                      v29 = *(__m128i **)v1;
                    }
                    qfree(v29);
                    *(_QWORD *)v1 = v49;
                    *((_QWORD *)v1 + 2) = v52;
                    v9 = *((_QWORD *)v1 + 1);
                  }
                  v56 = 0;
                  v11 = 25 * v9;
                  v12 = *(_QWORD *)v1;
                  v57 = 0;
                  si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
                  v54 = 0;
                  v13 = v12 + 8 * v11;
                  *(_QWORD *)v13 = &off_4E1528;
                  *(_DWORD *)(v13 + 8) = 0;
                  copy_argloc(v13 + 8, &v54);
                  v14 = _mm_load_si128((const __m128i *)&xmmword_424800);
                  *(_QWORD *)(v13 + 24) = si128.m128i_i64[1];
                  *(_QWORD *)(v13 + 32) = v56;
                  *(_DWORD *)(v13 + 40) = v57;
                  memset((void *)(v13 + 48), 0, 0x60u);
                  *(__m128i *)(v13 + 56) = v14;
                  *(_QWORD *)(v13 + 128) = -1;
                  *(_DWORD *)(v13 + 144) = 0;
                  copy_argloc(v13 + 144, &v54);
                  v15 = si128.m128i_i64[1];
                  *(_DWORD *)(v13 + 184) = -2;
                  *(_QWORD *)(v13 + 160) = v15;
                  *(_QWORD *)(v13 + 168) = v56;
                  *(_DWORD *)(v13 + 176) = v57;
                  cleanup_argloc(&v54);
                  *(_QWORD *)v13 = off_4E2D00;
                  *(_QWORD *)(v13 + 192) = -1;
                  ++*((_QWORD *)v1 + 1);
                  copy_argloc(v13 + 8, v8 + 24);
                  *(_QWORD *)(v13 + 24) = *(_QWORD *)(v8 + 40);
                  *(_QWORD *)(v13 + 32) = *(_QWORD *)(v8 + 48);
                  *(_DWORD *)(v13 + 40) = *(_DWORD *)(v8 + 56);
                  copy_argloc(v13 + 48, v8 + 64);
                  *(_QWORD *)(v13 + 64) = *(_QWORD *)(v8 + 80);
                  if ( v13 + 72 != v8 + 88 )
                  {
                    v16 = *(_QWORD *)(v8 + 96);
                    if ( v16 > 1 )
                    {
                      v42 = *(const void **)(v8 + 88);
                      v43 = *(void **)(v13 + 72);
                      if ( *(_QWORD *)(v13 + 88) < v16 )
                      {
                        v51 = *(const void **)(v8 + 88);
                        v43 = (void *)qvector_reserve(v13 + 72, *(_QWORD *)(v13 + 72), *(_QWORD *)(v8 + 96), 1);
                        *(_QWORD *)(v13 + 72) = v43;
                        v42 = v51;
                      }
                      *(_QWORD *)(v13 + 80) = v16;
                      memmove(v43, v42, v16 - 1);
                      *(_BYTE *)(*(_QWORD *)(v13 + 72) + v16 - 1) = 0;
                    }
                    else
                    {
                      *(_QWORD *)(v13 + 80) = 0;
                    }
                  }
                  copy_tinfo_t(v13 + 96, v8 + 112);
                  if ( v13 + 104 != v8 + 120 )
                  {
                    v17 = *(_QWORD *)(v8 + 128);
                    if ( v17 > 1 )
                    {
                      v40 = *(const void **)(v8 + 120);
                      v41 = *(void **)(v13 + 104);
                      if ( *(_QWORD *)(v13 + 120) < v17 )
                      {
                        v50 = *(const void **)(v8 + 120);
                        v41 = (void *)qvector_reserve(v13 + 104, *(_QWORD *)(v13 + 104), *(_QWORD *)(v8 + 128), 1);
                        *(_QWORD *)(v13 + 104) = v41;
                        v40 = v50;
                      }
                      *(_QWORD *)(v13 + 112) = v17;
                      memmove(v41, v40, v17 - 1);
                      *(_BYTE *)(*(_QWORD *)(v13 + 104) + v17 - 1) = 0;
                    }
                    else
                    {
                      *(_QWORD *)(v13 + 112) = 0;
                    }
                  }
                  ++v47;
                  *(_QWORD *)(v13 + 128) = *(_QWORD *)(v8 + 144);
                  *(_DWORD *)(v13 + 136) = *(_DWORD *)(v8 + 152);
                  if ( (*(_QWORD *)v8 & 2) != 0 )
                    goto LABEL_20;
                  v18 = *(_QWORD *)(v8 + 16);
                  if ( (*(_BYTE *)v18 & 2) != 0 )
                  {
                    v37 = (_QWORD *)(*(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCLL);
                    v38 = *v37;
                    if ( (*v37 & 2) == 0 )
                    {
                      while ( v37[2] == v8 )
                      {
                        v8 = v38 & 0xFFFFFFFFFFFFFFFCLL;
                        v38 = *(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFFCLL);
                        if ( (v38 & 2) != 0 )
                          goto LABEL_20;
                        v39 = v37;
                        v37 = (_QWORD *)v8;
                        v8 = (unsigned __int64)v39;
                      }
                    }
                    v8 = (unsigned __int64)v37;
                    if ( v48 == v37 )
                      break;
                  }
                  else
                  {
                    do
                    {
                      v8 = v18;
                      v18 = *(_QWORD *)(v18 + 8);
                    }
                    while ( (*(_BYTE *)v18 & 2) == 0 );
LABEL_20:
                    if ( v48 == (_QWORD *)v8 )
                      break;
                  }
                }
              }
            }
          }
          sub_2C3F80(v53);
          qfree(v53);
        }
      }
      ++v44;
      v1 += 24;
    }
    while ( v44 < a1[22] );
    if ( v47 )
    {
      v59 = 0u;
      v58 = 0;
      if ( sub_2BA770 )
      {
        v58.m128i_i64[0] = (__int64)sub_2BA770;
        v59 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4E2DB0), (__m128i)(unsigned __int64)sub_2AD250);
      }
      sub_2FC260(v60, &v58, 1);
      sub_66C50((__int64)&v58);
      sub_2CE9D0(v60, a1 + 19, 1);
      v19 = 1;
    }
    else
    {
      v19 = 0;
    }
    if ( v63 )
    {
      *(_QWORD *)&v64 = 0;
      qfree(v63);
    }
  }
  else
  {
    v19 = 0;
  }
  v45 = v19;
  v20 = (unsigned __int64 *)&v62;
  do
  {
    if ( *v20 )
    {
      v21 = v20[1];
      v22 = 0;
      v23 = 0;
      if ( v21 )
      {
        do
        {
          ++v23;
          v24 = (_QWORD *)(v22 + *v20);
          v22 += 200;
          *v24 = &off_4E1528;
          cleanup_argloc(v24 + 18);
          sub_2B9980(v24 + 6);
          cleanup_argloc(v24 + 1);
        }
        while ( v21 != v23 );
      }
      v20[1] = 0;
      qfree(*v20);
    }
    v20 -= 3;
  }
  while ( &v59.m128i_u64[1] != v20 );
  return v45;
}
