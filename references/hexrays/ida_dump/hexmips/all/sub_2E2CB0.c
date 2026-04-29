__int64 __fastcall sub_2E2CB0(_QWORD *a1)
{
  __int64 *v1; // r15
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 *v8; // rax
  _QWORD *v9; // rsi
  _QWORD *v10; // r14
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  _QWORD *v13; // rbp
  __m128i si128; // xmm2
  __int64 v15; // rbx
  unsigned __int64 v16; // r11
  size_t v17; // r9
  _QWORD *v18; // rdx
  unsigned int v19; // ebp
  unsigned __int64 *v20; // r14
  unsigned __int64 v21; // r15
  __int64 v22; // r13
  _QWORD *v23; // rax
  __int64 v24; // rdi
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // r14
  __int64 v32; // rbp
  __m128i v33; // xmm0
  __int64 v34; // rcx
  __m128i v35; // xmm0
  __int64 v36; // rcx
  __m128i v37; // xmm0
  __int64 v38; // rdi
  _QWORD *v40; // rax
  __int64 v41; // rdx
  _QWORD *v42; // rcx
  const void *v43; // r8
  void *v44; // rax
  unsigned __int64 v45; // [rsp+0h] [rbp-148h]
  int v47; // [rsp+14h] [rbp-134h]
  _QWORD *v48; // [rsp+18h] [rbp-130h]
  __int64 v49; // [rsp+20h] [rbp-128h]
  unsigned __int64 v50; // [rsp+20h] [rbp-128h]
  unsigned __int64 v51; // [rsp+20h] [rbp-128h]
  size_t v52; // [rsp+28h] [rbp-120h]
  _QWORD *v53; // [rsp+38h] [rbp-110h]
  const void *v54; // [rsp+38h] [rbp-110h]
  _QWORD *v55; // [rsp+40h] [rbp-108h]
  __int64 *v56; // [rsp+48h] [rbp-100h]
  _QWORD v57[2]; // [rsp+50h] [rbp-F8h] BYREF
  char v58; // [rsp+60h] [rbp-E8h]
  __int64 v59; // [rsp+68h] [rbp-E0h]
  __m128i v60; // [rsp+70h] [rbp-D8h] BYREF
  __m128i v61; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v62[2]; // [rsp+90h] [rbp-B8h] BYREF
  _BYTE v63[48]; // [rsp+A0h] [rbp-A8h] BYREF
  char v64; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v65; // [rsp+E8h] [rbp-60h] BYREF
  __int128 v66; // [rsp+F0h] [rbp-58h]
  __int64 v67; // [rsp+100h] [rbp-48h]
  unsigned __int64 v68; // [rsp+108h] [rbp-40h]

  v1 = (__int64 *)v63;
  v68 = __readfsqword(0x28u);
  v2 = a1[22];
  v3 = a1[1];
  v62[1] = v2;
  v62[0] = v3;
  v4 = (__int64 *)v63;
  do
  {
    *v4 = 0;
    v4 += 3;
    *((_OWORD *)v4 - 1) = 0;
  }
  while ( v4 != &v65 );
  v65 = 0;
  v67 = 0;
  v66 = 0;
  if ( v2 )
  {
    v45 = 0;
    v47 = 0;
    do
    {
      v5 = a1[v45 + 19];
      if ( v5 )
      {
        switch_dbctx(*(int *)(v5 + 8));
        v6 = *(_QWORD *)(v5 + 80);
        v7 = *(_QWORD *)(v5 + 64);
        v58 = 102;
        v57[1] = v6;
        v57[0] = &off_4C17B8;
        v59 = 0;
        v8 = (__int64 *)sub_2B1B70(v7, (__int64)v57, 0);
        v56 = v8;
        if ( v8 )
        {
          v9 = (_QWORD *)*v8;
          v48 = (_QWORD *)*v8;
          if ( *v8 )
          {
            if ( v8[1] )
            {
              v10 = (_QWORD *)v9[1];
              if ( v9 != v10 )
              {
                while ( 1 )
                {
                  v11 = v1[1];
                  v12 = v1[2];
                  v13 = v10 + 3;
                  if ( v12 < v11 + 1 )
                  {
                    v26 = qvector_reserve(v1, 0, v11 + 1, 96);
                    v27 = v1[2];
                    v28 = v1[1];
                    v1[2] = v12;
                    v49 = v26;
                    v29 = *v1;
                    v30 = v28 - 1;
                    if ( v30 >= 0 )
                    {
                      v53 = v10;
                      v31 = v26;
                      v55 = v13;
                      v32 = v30;
                      do
                      {
                        v33 = _mm_loadu_si128((const __m128i *)(v29 + 8));
                        *(_QWORD *)v31 = off_4C19E8;
                        *(__m128i *)(v31 + 8) = v33;
                        *(_DWORD *)(v31 + 24) = *(_DWORD *)(v29 + 24);
                        *(_WORD *)(v31 + 28) = *(_WORD *)(v29 + 28);
                        *(_BYTE *)(v31 + 30) = *(_BYTE *)(v29 + 30);
                        *(_BYTE *)(v31 + 31) = *(_BYTE *)(v29 + 31);
                        v34 = *(_QWORD *)(v29 + 32);
                        v35 = _mm_loadu_si128((const __m128i *)(v29 + 40));
                        *(_QWORD *)(v29 + 32) = 0;
                        *(_QWORD *)(v31 + 32) = v34;
                        *(__m128i *)(v31 + 40) = v35;
                        v36 = *(_QWORD *)(v29 + 56);
                        *(_QWORD *)(v29 + 48) = 0;
                        *(_QWORD *)(v31 + 56) = v36;
                        LODWORD(v36) = *(_DWORD *)(v29 + 80);
                        v37 = _mm_loadu_si128((const __m128i *)(v29 + 64));
                        *(_QWORD *)v31 = off_4C3328;
                        *(_DWORD *)(v31 + 80) = v36;
                        *(__m128i *)(v31 + 64) = v37;
                        *(_QWORD *)(v31 + 88) = *(_QWORD *)(v29 + 88);
                        v38 = *(_QWORD *)(v29 + 32);
                        *(_QWORD *)v29 = off_4C19E8;
                        if ( v38 )
                        {
                          *(_QWORD *)(v29 + 40) = 0;
                          qfree(v38);
                        }
                        v29 += 96;
                        v31 += 96;
                      }
                      while ( v32-- != 0 );
                      v10 = v53;
                      v13 = v55;
                      v29 = *v1;
                    }
                    qfree(v29);
                    *v1 = v49;
                    v1[2] = v27;
                    v11 = v1[1];
                  }
                  si128 = _mm_load_si128((const __m128i *)&xmmword_407240);
                  v15 = *v1 + 96 * v11;
                  *(_QWORD *)(v15 + 16) = 0xFFFFFFFFLL;
                  *(_QWORD *)(v15 + 72) = 0xFFFFFFFFLL;
                  *(_QWORD *)(v15 + 24) = 0;
                  *(_QWORD *)(v15 + 8) = -1;
                  *(_QWORD *)(v15 + 32) = 0;
                  *(_QWORD *)(v15 + 80) = 4294967294LL;
                  *(_QWORD *)v15 = off_4C3328;
                  *(_QWORD *)(v15 + 88) = -1;
                  *(_OWORD *)(v15 + 40) = 0;
                  *(__m128i *)(v15 + 56) = si128;
                  ++v1[1];
                  *(_QWORD *)(v15 + 8) = *v13;
                  *(_DWORD *)(v15 + 16) = *((_DWORD *)v13 + 2);
                  *(_DWORD *)(v15 + 24) = *((_DWORD *)v13 + 4);
                  *(_BYTE *)(v15 + 28) = *((_BYTE *)v13 + 20);
                  *(_BYTE *)(v15 + 29) = *((_BYTE *)v13 + 21);
                  *(_BYTE *)(v15 + 30) = *((_BYTE *)v13 + 22);
                  *(_BYTE *)(v15 + 31) = *((_BYTE *)v13 + 23);
                  if ( (_QWORD *)(v15 + 32) != v13 + 3 )
                  {
                    v16 = v13[4];
                    if ( v16 && (v17 = v16 - 1, v16 != 1) )
                    {
                      v43 = (const void *)v13[3];
                      v44 = *(void **)(v15 + 32);
                      if ( *(_QWORD *)(v15 + 48) < v16 )
                      {
                        v54 = (const void *)v13[3];
                        v52 = v16 - 1;
                        v51 = v13[4];
                        v44 = (void *)qvector_reserve(v15 + 32, *(_QWORD *)(v15 + 32), v51, 1);
                        v43 = v54;
                        v17 = v52;
                        *(_QWORD *)(v15 + 32) = v44;
                        v16 = v51;
                      }
                      *(_QWORD *)(v15 + 40) = v16;
                      v50 = v16;
                      memmove(v44, v43, v17);
                      *(_BYTE *)(*(_QWORD *)(v15 + 32) + v50 - 1) = 0;
                    }
                    else
                    {
                      *(_QWORD *)(v15 + 40) = 0;
                    }
                  }
                  ++v47;
                  *(_QWORD *)(v15 + 56) = v13[6];
                  if ( (*v10 & 2) != 0 )
                    goto LABEL_18;
                  v18 = (_QWORD *)v10[2];
                  if ( (*(_BYTE *)v18 & 2) != 0 )
                  {
                    v40 = (_QWORD *)(*v10 & 0xFFFFFFFFFFFFFFFCLL);
                    v41 = *v40;
                    if ( (*v40 & 2) == 0 )
                    {
                      while ( (_QWORD *)v40[2] == v10 )
                      {
                        v10 = (_QWORD *)(v41 & 0xFFFFFFFFFFFFFFFCLL);
                        v41 = *(_QWORD *)(v41 & 0xFFFFFFFFFFFFFFFCLL);
                        if ( (v41 & 2) != 0 )
                          goto LABEL_18;
                        v42 = v40;
                        v40 = v10;
                        v10 = v42;
                      }
                    }
                    v10 = v40;
                    if ( v48 == v40 )
                      break;
                  }
                  else
                  {
                    do
                    {
                      v10 = v18;
                      v18 = (_QWORD *)v18[1];
                    }
                    while ( (*(_BYTE *)v18 & 2) == 0 );
LABEL_18:
                    if ( v48 == v10 )
                      break;
                  }
                }
              }
            }
          }
          sub_7EC00(v56);
          qfree(v56);
        }
      }
      ++v45;
      v1 += 3;
    }
    while ( v45 < a1[22] );
    if ( v47 )
    {
      v61 = 0u;
      v60 = 0;
      if ( sub_2B4170 )
      {
        v60.m128i_i64[0] = (__int64)sub_2B4170;
        v61 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4C34B8), (__m128i)(unsigned __int64)sub_2A8960);
      }
      sub_2E1320(v62, &v60, 1);
      sub_62A50((__int64)&v60);
      sub_2C4250(v62, a1 + 19, 1);
      v19 = 1;
    }
    else
    {
      v19 = 0;
    }
    if ( v65 )
    {
      *(_QWORD *)&v66 = 0;
      qfree(v65);
    }
  }
  else
  {
    v19 = 0;
  }
  v20 = (unsigned __int64 *)&v64;
  do
  {
    if ( *v20 )
    {
      v21 = v20[1];
      v22 = 0;
      if ( v21 )
      {
        do
        {
          v23 = (_QWORD *)(*v20 + 96 * v22);
          v24 = v23[4];
          *v23 = off_4C19E8;
          if ( v24 )
          {
            v23[5] = 0;
            qfree(v24);
          }
          ++v22;
        }
        while ( v21 != v22 );
      }
      v20[1] = 0;
      qfree(*v20);
    }
    v20 -= 3;
  }
  while ( &v61.m128i_u64[1] != v20 );
  return v19;
}
