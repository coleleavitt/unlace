__int64 __fastcall sub_2F0320(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 *v2; // rax
  size_t *v3; // r15
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 *v7; // rax
  __int64 v8; // rsi
  _QWORD *v9; // r14
  size_t v10; // rbx
  _QWORD *v11; // r13
  size_t v12; // rbx
  size_t v13; // r11
  __int64 v14; // rcx
  __int64 v15; // rdi
  __m128i v16; // xmm0
  _QWORD *v17; // rdx
  __int64 *v18; // rbx
  _QWORD *v19; // r15
  unsigned int v20; // ebp
  __int64 *v21; // r13
  __int64 *v22; // r14
  __int64 v23; // r15
  __int64 v24; // rbx
  _QWORD *v25; // rax
  __int64 v26; // rdi
  __int64 v28; // rax
  size_t v29; // rcx
  size_t v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // r13
  __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // rax
  __m128i v36; // xmm0
  __int64 v37; // rax
  __int64 v38; // rdi
  void *v40; // rax
  void *v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rdx
  _QWORD *v44; // rcx
  unsigned __int64 v45; // [rsp+0h] [rbp-160h]
  int v47; // [rsp+14h] [rbp-14Ch]
  __int64 v48; // [rsp+18h] [rbp-148h]
  size_t nb; // [rsp+20h] [rbp-140h]
  size_t n; // [rsp+20h] [rbp-140h]
  __int64 na; // [rsp+20h] [rbp-140h]
  __m128i v52; // [rsp+28h] [rbp-138h] BYREF
  _QWORD *v53; // [rsp+38h] [rbp-128h]
  _QWORD *v54; // [rsp+40h] [rbp-120h]
  __int64 *v55; // [rsp+48h] [rbp-118h]
  __int64 *v56; // [rsp+50h] [rbp-110h]
  __int64 *v57; // [rsp+58h] [rbp-108h]
  _QWORD *v58; // [rsp+60h] [rbp-100h]
  _QWORD v59[2]; // [rsp+68h] [rbp-F8h] BYREF
  char v60; // [rsp+78h] [rbp-E8h]
  __int64 v61; // [rsp+80h] [rbp-E0h]
  __m128i v62; // [rsp+88h] [rbp-D8h] BYREF
  __m128i v63; // [rsp+98h] [rbp-C8h]
  _QWORD v64[2]; // [rsp+A8h] [rbp-B8h] BYREF
  _BYTE v65[48]; // [rsp+B8h] [rbp-A8h] BYREF
  __int64 v66; // [rsp+100h] [rbp-60h] BYREF
  __int128 v67; // [rsp+108h] [rbp-58h]
  __int64 v68; // [rsp+118h] [rbp-48h]
  unsigned __int64 v69; // [rsp+120h] [rbp-40h]

  v69 = __readfsqword(0x28u);
  v57 = &v66;
  v1 = a1[22];
  v64[0] = a1[1];
  v58 = v64;
  v2 = (__int64 *)v65;
  v64[1] = v1;
  v3 = (size_t *)v65;
  v56 = (__int64 *)v65;
  do
  {
    *v2 = 0;
    v2 += 3;
    *((_OWORD *)v2 - 1) = 0;
  }
  while ( v2 != &v66 );
  v66 = 0;
  v68 = 0;
  v67 = 0;
  if ( v1 )
  {
    v45 = 0;
    v47 = 0;
    do
    {
      v4 = a1[v45 + 19];
      if ( v4 )
      {
        switch_dbctx(*(int *)(v4 + 8));
        v5 = *(_QWORD *)(v4 + 80);
        v6 = *(_QWORD *)(v4 + 64);
        v60 = 117;
        v59[1] = v5;
        v59[0] = &off_4E10F0;
        v61 = 0;
        v7 = (__int64 *)sub_2B63F0(v6, (__int64)v59, 0);
        v55 = v7;
        if ( v7 )
        {
          v8 = *v7;
          v48 = *v7;
          if ( *v7 )
          {
            if ( v7[1] )
            {
              v9 = *(_QWORD **)(v8 + 8);
              if ( (_QWORD *)v8 != v9 )
              {
                while ( 1 )
                {
                  v10 = v3[1];
                  v11 = v9 + 3;
                  if ( v3[2] < v10 + 1 )
                  {
                    v53 = (_QWORD *)v3[2];
                    v28 = qvector_reserve(v3, 0, v10 + 1, 64);
                    n = v28;
                    v29 = v3[1];
                    v30 = *v3;
                    v52.m128i_i64[0] = v3[2];
                    v3[2] = (size_t)v53;
                    v31 = v29 - 1;
                    if ( v31 >= 0 )
                    {
                      v53 = v9 + 3;
                      v32 = v31;
                      v54 = v9;
                      v33 = v28;
                      do
                      {
                        v34 = *(_QWORD *)(v30 + 8);
                        *(_QWORD *)v33 = off_4E13C0;
                        *(_QWORD *)(v33 + 8) = v34;
                        v35 = *(_QWORD *)(v30 + 16);
                        v36 = _mm_loadu_si128((const __m128i *)(v30 + 24));
                        *(_QWORD *)(v30 + 16) = 0;
                        *(_QWORD *)(v33 + 16) = v35;
                        *(__m128i *)(v33 + 24) = v36;
                        v37 = *(_QWORD *)(v30 + 40);
                        *(_QWORD *)(v30 + 32) = 0;
                        *(_QWORD *)(v33 + 40) = v37;
                        LODWORD(v37) = *(_DWORD *)(v30 + 48);
                        *(_QWORD *)v33 = off_4E2C60;
                        *(_DWORD *)(v33 + 48) = v37;
                        *(_QWORD *)(v33 + 56) = *(_QWORD *)(v30 + 56);
                        v38 = *(_QWORD *)(v30 + 16);
                        *(_QWORD *)v30 = off_4E13C0;
                        if ( v38 )
                        {
                          *(_QWORD *)(v30 + 24) = 0;
                          qfree(v38);
                        }
                        v30 += 64LL;
                        v33 += 64;
                      }
                      while ( v32-- != 0 );
                      v11 = v53;
                      v9 = v54;
                      v30 = *v3;
                    }
                    qfree(v30);
                    v10 = v3[1];
                    *v3 = n;
                    v3[2] = v52.m128i_i64[0];
                  }
                  v12 = *v3 + (v10 << 6);
                  v13 = 0;
                  *(_QWORD *)(v12 + 8) = -1;
                  *(_QWORD *)(v12 + 16) = 0;
                  *(_QWORD *)(v12 + 40) = -1;
                  *(_DWORD *)(v12 + 48) = -2;
                  *(_QWORD *)v12 = off_4E2C60;
                  *(_QWORD *)(v12 + 56) = -1;
                  *(_OWORD *)(v12 + 24) = 0;
                  ++v3[1];
                  *(_QWORD *)(v12 + 8) = *v11;
                  v14 = v11[2];
                  if ( v14 )
                  {
                    v52.m128i_i64[0] = v11[2];
                    na = 4 * v14;
                    v40 = (void *)qalloc_or_throw(4 * v14);
                    v41 = memcpy(v40, (const void *)v11[1], na);
                    v14 = v52.m128i_i64[0];
                    v13 = (size_t)v41;
                  }
                  v15 = *(_QWORD *)(v12 + 16);
                  v16 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, (__m128i)(unsigned __int64)v14);
                  if ( v15 )
                  {
                    *(_QWORD *)(v12 + 24) = 0;
                    nb = v13;
                    v52 = v16;
                    qfree(v15);
                    v16 = _mm_load_si128(&v52);
                    v13 = nb;
                  }
                  *(_QWORD *)(v12 + 16) = v13;
                  *(__m128i *)(v12 + 24) = v16;
                  ++v47;
                  if ( (*v9 & 2) != 0 )
                    goto LABEL_18;
                  v17 = (_QWORD *)v9[2];
                  if ( (*(_BYTE *)v17 & 2) != 0 )
                  {
                    v42 = (_QWORD *)(*v9 & 0xFFFFFFFFFFFFFFFCLL);
                    v43 = *v42;
                    if ( (*v42 & 2) == 0 )
                    {
                      while ( v9 == (_QWORD *)v42[2] )
                      {
                        v9 = (_QWORD *)(v43 & 0xFFFFFFFFFFFFFFFCLL);
                        v43 = *(_QWORD *)(v43 & 0xFFFFFFFFFFFFFFFCLL);
                        if ( (v43 & 2) != 0 )
                          goto LABEL_18;
                        v44 = v42;
                        v42 = v9;
                        v9 = v44;
                      }
                    }
                    v9 = v42;
                    if ( (_QWORD *)v48 == v42 )
                      break;
                  }
                  else
                  {
                    do
                    {
                      v9 = v17;
                      v17 = (_QWORD *)v17[1];
                    }
                    while ( (*(_BYTE *)v17 & 2) == 0 );
LABEL_18:
                    if ( (_QWORD *)v48 == v9 )
                      break;
                  }
                }
              }
            }
          }
          v18 = v55;
          sub_2C29C0(v55);
          qfree(v18);
        }
      }
      ++v45;
      v3 += 3;
    }
    while ( v45 < a1[22] );
    if ( v47 )
    {
      v63 = 0u;
      v62 = 0;
      if ( sub_2AFBF0 )
      {
        v62.m128i_i64[0] = (__int64)sub_2AFBF0;
        v63 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4E2D90), (__m128i)(unsigned __int64)sub_2AD210);
      }
      v19 = v58;
      sub_2EE9E0(v58, &v62, 1);
      sub_66C50((__int64)&v62);
      sub_2CA8B0(v19, a1 + 19, 1);
      v20 = 1;
    }
    else
    {
      v20 = 0;
    }
    if ( v66 )
    {
      *(_QWORD *)&v67 = 0;
      qfree(v66);
    }
  }
  else
  {
    v20 = 0;
  }
  v21 = v57;
  v22 = v56;
  do
  {
    v21 -= 3;
    if ( *v21 )
    {
      v23 = v21[1];
      v24 = 0;
      if ( v23 )
      {
        do
        {
          v25 = (_QWORD *)(*v21 + (v24 << 6));
          v26 = v25[2];
          *v25 = off_4E13C0;
          if ( v26 )
          {
            v25[3] = 0;
            qfree(v26);
          }
          ++v24;
        }
        while ( v23 != v24 );
      }
      v21[1] = 0;
      qfree(*v21);
    }
  }
  while ( v21 != v22 );
  return v20;
}
