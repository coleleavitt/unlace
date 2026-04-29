__int64 __fastcall sub_2E4370(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 *v2; // rax
  __int64 *v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 *v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // r15
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  const __m128i *v12; // r10
  __int64 v13; // rbx
  unsigned __int64 v14; // r11
  size_t v15; // r9
  _QWORD *v16; // rdx
  char v17; // bp
  unsigned __int64 *v18; // r14
  unsigned __int64 v19; // rbp
  __int64 v20; // r15
  __int64 v21; // rbx
  _QWORD *v22; // rax
  __int64 v23; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rsi
  const __m128i *v28; // r10
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // r13
  __int64 v32; // rbp
  __m128i v33; // xmm0
  __int64 v34; // rdx
  __m128i v35; // xmm0
  __m128i v36; // xmm0
  __int64 v37; // rdi
  _QWORD *v39; // rax
  __int64 v40; // rdx
  _QWORD *v41; // rcx
  const void *v42; // r8
  void *v43; // rax
  unsigned __int64 v44; // [rsp+0h] [rbp-158h]
  unsigned __int8 v45; // [rsp+0h] [rbp-158h]
  int v47; // [rsp+14h] [rbp-144h]
  _QWORD *v48; // [rsp+18h] [rbp-140h]
  __int64 v49; // [rsp+20h] [rbp-138h]
  unsigned __int64 v50; // [rsp+20h] [rbp-138h]
  __int64 v51; // [rsp+20h] [rbp-138h]
  const __m128i *v52; // [rsp+28h] [rbp-130h]
  const __m128i *v53; // [rsp+28h] [rbp-130h]
  const __m128i *v54; // [rsp+30h] [rbp-128h]
  size_t v55; // [rsp+30h] [rbp-128h]
  __int64 *v56; // [rsp+38h] [rbp-120h]
  const void *v57; // [rsp+38h] [rbp-120h]
  __int64 *v58; // [rsp+48h] [rbp-110h]
  _QWORD v59[2]; // [rsp+60h] [rbp-F8h] BYREF
  char v60; // [rsp+70h] [rbp-E8h]
  __int64 v61; // [rsp+78h] [rbp-E0h]
  __m128i v62; // [rsp+80h] [rbp-D8h] BYREF
  __m128i v63; // [rsp+90h] [rbp-C8h] BYREF
  __m128i v64; // [rsp+A0h] [rbp-B8h] BYREF
  _BYTE v65[48]; // [rsp+B0h] [rbp-A8h] BYREF
  char v66; // [rsp+E0h] [rbp-78h] BYREF
  __int64 v67; // [rsp+F8h] [rbp-60h] BYREF
  __int128 v68; // [rsp+100h] [rbp-58h]
  __int64 v69; // [rsp+110h] [rbp-48h]
  unsigned __int64 v70; // [rsp+118h] [rbp-40h]

  v70 = __readfsqword(0x28u);
  v1 = a1[22];
  v64.m128i_i64[0] = a1[1];
  v2 = (__int64 *)v65;
  v64.m128i_i64[1] = v1;
  v3 = (__int64 *)v65;
  do
  {
    *v2 = 0;
    v2 += 3;
    *((_OWORD *)v2 - 1) = 0;
  }
  while ( v2 != &v67 );
  v67 = 0;
  v69 = 0;
  v68 = 0;
  if ( v1 )
  {
    v44 = 0;
    v47 = 0;
    do
    {
      v4 = a1[v44 + 19];
      if ( v4 )
      {
        switch_dbctx(*(int *)(v4 + 8));
        v5 = *(_QWORD *)(v4 + 80);
        v6 = *(_QWORD *)(v4 + 64);
        v60 = 99;
        v59[1] = v5;
        v59[0] = &off_4DB710;
        v61 = 0;
        v7 = (__int64 *)sub_2B67B0(v6, (__int64)v59, 0);
        v58 = v7;
        if ( v7 )
        {
          v8 = (_QWORD *)*v7;
          v48 = (_QWORD *)*v7;
          if ( *v7 )
          {
            if ( v7[1] )
            {
              v9 = (_QWORD *)v8[1];
              if ( v8 != v9 )
              {
                while ( 1 )
                {
                  v10 = v3[1];
                  v11 = v3[2];
                  v12 = (const __m128i *)(v9 + 3);
                  if ( v11 < v10 + 1 )
                  {
                    v25 = qvector_reserve(v3, 0, v10 + 1, 88);
                    v26 = v3[1];
                    v27 = v3[2];
                    v49 = v25;
                    v3[2] = v11;
                    v28 = (const __m128i *)(v9 + 3);
                    v29 = v26 - 1;
                    v30 = *v3;
                    if ( v29 >= 0 )
                    {
                      v56 = v3;
                      v31 = v29;
                      v32 = v25;
                      do
                      {
                        v33 = _mm_loadu_si128((const __m128i *)(v30 + 8));
                        *(_QWORD *)v32 = off_4DB918;
                        *(__m128i *)(v32 + 8) = v33;
                        v34 = *(_QWORD *)(v30 + 24);
                        v35 = _mm_loadu_si128((const __m128i *)(v30 + 32));
                        *(_QWORD *)(v30 + 24) = 0;
                        *(_QWORD *)(v32 + 24) = v34;
                        *(__m128i *)(v32 + 32) = v35;
                        LOBYTE(v34) = *(_BYTE *)(v30 + 48);
                        *(_QWORD *)(v30 + 40) = 0;
                        *(_BYTE *)(v32 + 48) = v34;
                        LODWORD(v34) = *(_DWORD *)(v30 + 72);
                        v36 = _mm_loadu_si128((const __m128i *)(v30 + 56));
                        *(_QWORD *)v32 = off_4DD280;
                        *(_DWORD *)(v32 + 72) = v34;
                        *(__m128i *)(v32 + 56) = v36;
                        *(_QWORD *)(v32 + 80) = *(_QWORD *)(v30 + 80);
                        v37 = *(_QWORD *)(v30 + 24);
                        *(_QWORD *)v30 = off_4DB918;
                        if ( v37 )
                        {
                          *(_QWORD *)(v30 + 32) = 0;
                          qfree(v37);
                        }
                        v30 += 88;
                        v32 += 88;
                      }
                      while ( v31-- != 0 );
                      v3 = v56;
                      v28 = (const __m128i *)(v9 + 3);
                      v30 = *v56;
                    }
                    v54 = v28;
                    qfree(v30);
                    v12 = v54;
                    *v3 = v49;
                    v3[2] = v27;
                    v10 = v3[1];
                  }
                  v13 = *v3 + 88 * v10;
                  *(_QWORD *)(v13 + 8) = -1;
                  *(_DWORD *)(v13 + 16) = 0;
                  *(_QWORD *)(v13 + 24) = 0;
                  *(_BYTE *)(v13 + 48) = 0;
                  *(_QWORD *)(v13 + 56) = -1;
                  *(_DWORD *)(v13 + 64) = 0;
                  *(_DWORD *)(v13 + 72) = -2;
                  *(_QWORD *)v13 = off_4DD280;
                  *(_QWORD *)(v13 + 80) = -1;
                  *(_OWORD *)(v13 + 32) = 0;
                  ++v3[1];
                  *(__m128i *)(v13 + 8) = _mm_loadu_si128(v12);
                  if ( (const __m128i *)(v13 + 24) != &v12[1] )
                  {
                    v14 = v12[1].m128i_u64[1];
                    if ( v14 && (v15 = v14 - 1, v14 != 1) )
                    {
                      v42 = (const void *)v12[1].m128i_i64[0];
                      v43 = *(void **)(v13 + 24);
                      if ( *(_QWORD *)(v13 + 40) < v14 )
                      {
                        v57 = (const void *)v12[1].m128i_i64[0];
                        v55 = v14 - 1;
                        v53 = v12;
                        v51 = v12[1].m128i_i64[1];
                        v43 = (void *)qvector_reserve(v13 + 24, *(_QWORD *)(v13 + 24), v51, 1);
                        v42 = v57;
                        v15 = v55;
                        *(_QWORD *)(v13 + 24) = v43;
                        v12 = v53;
                        v14 = v51;
                      }
                      *(_QWORD *)(v13 + 32) = v14;
                      v52 = v12;
                      v50 = v14;
                      memmove(v43, v42, v15);
                      v12 = v52;
                      *(_BYTE *)(*(_QWORD *)(v13 + 24) + v50 - 1) = 0;
                    }
                    else
                    {
                      *(_QWORD *)(v13 + 32) = 0;
                    }
                  }
                  ++v47;
                  *(_BYTE *)(v13 + 48) = v12[2].m128i_i8[8];
                  if ( (*v9 & 2) != 0 )
                    goto LABEL_18;
                  v16 = (_QWORD *)v9[2];
                  if ( (*(_BYTE *)v16 & 2) != 0 )
                  {
                    v39 = (_QWORD *)(*v9 & 0xFFFFFFFFFFFFFFFCLL);
                    v40 = *v39;
                    if ( (*v39 & 2) == 0 )
                    {
                      while ( (_QWORD *)v39[2] == v9 )
                      {
                        v9 = (_QWORD *)(v40 & 0xFFFFFFFFFFFFFFFCLL);
                        v40 = *(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFFCLL);
                        if ( (v40 & 2) != 0 )
                          goto LABEL_18;
                        v41 = v39;
                        v39 = v9;
                        v9 = v41;
                      }
                    }
                    v9 = v39;
                    if ( v48 == v39 )
                      break;
                  }
                  else
                  {
                    do
                    {
                      v9 = v16;
                      v16 = (_QWORD *)v16[1];
                    }
                    while ( (*(_BYTE *)v16 & 2) == 0 );
LABEL_18:
                    if ( v48 == v9 )
                      break;
                  }
                }
              }
            }
          }
          sub_2C2850(v58);
          qfree(v58);
        }
      }
      ++v44;
      v3 += 3;
    }
    while ( v44 < a1[22] );
    if ( v47 )
    {
      v63 = 0u;
      v62 = 0;
      if ( sub_2B15C0 )
      {
        v62.m128i_i64[0] = (__int64)sub_2B15C0;
        v63 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4DD430), (__m128i)(unsigned __int64)sub_2AD590);
      }
      sub_2E29C0(&v64, &v62, 1);
      sub_66650((__int64)&v62);
      sub_2C7E10(&v64, a1 + 19, 1);
      v17 = 1;
    }
    else
    {
      v17 = 0;
    }
    if ( v67 )
    {
      *(_QWORD *)&v68 = 0;
      qfree(v67);
    }
  }
  else
  {
    v17 = 0;
  }
  v45 = v17;
  v18 = (unsigned __int64 *)&v66;
  do
  {
    if ( *v18 )
    {
      v19 = v18[1];
      v20 = 0;
      v21 = 0;
      if ( v19 )
      {
        do
        {
          v22 = (_QWORD *)(v20 + *v18);
          v23 = v22[3];
          *v22 = off_4DB918;
          if ( v23 )
          {
            v22[4] = 0;
            qfree(v23);
          }
          ++v21;
          v20 += 88;
        }
        while ( v19 != v21 );
      }
      v18[1] = 0;
      qfree(*v18);
    }
    v18 -= 3;
  }
  while ( &v63.m128i_u64[1] != v18 );
  return v45;
}
