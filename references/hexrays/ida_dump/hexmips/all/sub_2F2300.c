__int64 __fastcall sub_2F2300(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 *v2; // rax
  __int64 *v3; // r12
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 i; // r12
  __int64 *v13; // r15
  __int64 v14; // rdi
  __int64 v15; // r14
  __int64 v16; // r13
  __int64 v17; // rbp
  __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rbx
  __m128i v22; // xmm0
  __int64 v23; // rax
  __m128i v24; // xmm0
  int v25; // eax
  __int64 v26; // rax
  __m128i v27; // xmm0
  int v28; // eax
  unsigned __int64 *v29; // rdx
  unsigned __int64 *v30; // rax
  __int64 v31; // rdi
  char v32; // bl
  __int64 *v33; // rbx
  __int64 v34; // r13
  __int64 v35; // r14
  __int64 v36; // r15
  _QWORD *v37; // rbp
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r14
  __int64 v42; // r15
  __int64 v43; // r14
  __int64 v44; // rbx
  __int64 v45; // rax
  __m128i v46; // xmm0
  __int64 v47; // rax
  __m128i v48; // xmm0
  __int64 v49; // rdi
  unsigned __int64 *v51; // rsi
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rcx
  __int64 v54; // [rsp+0h] [rbp-228h]
  unsigned __int64 *v55; // [rsp+0h] [rbp-228h]
  unsigned __int8 v56; // [rsp+0h] [rbp-228h]
  __int64 *v57; // [rsp+8h] [rbp-220h]
  unsigned __int64 v58; // [rsp+10h] [rbp-218h]
  int v60; // [rsp+24h] [rbp-204h]
  unsigned __int64 *v61; // [rsp+28h] [rbp-200h]
  unsigned __int64 v62; // [rsp+30h] [rbp-1F8h]
  __int64 v63; // [rsp+40h] [rbp-1E8h]
  __int64 v64; // [rsp+48h] [rbp-1E0h]
  __m128i v65; // [rsp+60h] [rbp-1C8h] BYREF
  __int64 v66; // [rsp+70h] [rbp-1B8h]
  _QWORD v67[4]; // [rsp+78h] [rbp-1B0h] BYREF
  _QWORD v68[2]; // [rsp+98h] [rbp-190h] BYREF
  _QWORD v69[2]; // [rsp+A8h] [rbp-180h] BYREF
  _QWORD v70[2]; // [rsp+B8h] [rbp-170h] BYREF
  __int64 v71; // [rsp+C8h] [rbp-160h]
  __m128i v72; // [rsp+D0h] [rbp-158h] BYREF
  __int64 v73; // [rsp+E0h] [rbp-148h]
  char *v74; // [rsp+E8h] [rbp-140h] BYREF
  __int128 v75; // [rsp+F0h] [rbp-138h] BYREF
  __int128 v76; // [rsp+100h] [rbp-128h] BYREF
  __int64 v77; // [rsp+110h] [rbp-118h]
  _QWORD v78[2]; // [rsp+118h] [rbp-110h] BYREF
  _QWORD v79[2]; // [rsp+128h] [rbp-100h] BYREF
  int v80; // [rsp+138h] [rbp-F0h]
  int v81; // [rsp+140h] [rbp-E8h]
  __m128i v82; // [rsp+150h] [rbp-D8h] BYREF
  __m128i v83; // [rsp+160h] [rbp-C8h]
  _QWORD v84[2]; // [rsp+170h] [rbp-B8h] BYREF
  _BYTE v85[48]; // [rsp+180h] [rbp-A8h] BYREF
  __int64 v86; // [rsp+1C8h] [rbp-60h] BYREF
  __int128 v87; // [rsp+1D0h] [rbp-58h]
  __int64 v88; // [rsp+1E0h] [rbp-48h]
  unsigned __int64 v89; // [rsp+1E8h] [rbp-40h]

  v89 = __readfsqword(0x28u);
  v1 = a1[22];
  v84[0] = a1[1];
  v2 = (__int64 *)v85;
  v84[1] = v1;
  v3 = (__int64 *)v85;
  do
  {
    *v2 = 0;
    v2 += 3;
    *((_OWORD *)v2 - 1) = 0;
  }
  while ( v2 != &v86 );
  v86 = 0;
  v88 = 0;
  v87 = 0;
  if ( !v1 )
  {
    v32 = 0;
    goto LABEL_42;
  }
  v58 = 0;
  v60 = 0;
  do
  {
    v4 = a1[v58 + 19];
    if ( v4 )
    {
      switch_dbctx(*(int *)(v4 + 8));
      v5 = *(_QWORD *)(v4 + 80);
      v6 = j__qalloc_or_throw(1512);
      v7 = sub_25BBD0(0);
      sub_331CE0(v6, v7);
      v8 = *(_QWORD *)(v6 + 40);
      LOBYTE(v73) = 73;
      v75 = (unsigned __int64)v6;
      v72.m128i_i64[1] = v8;
      v74 = (char *)&v75 + 8;
      v72.m128i_i64[0] = (__int64)&off_4C18D0;
      v77 = 0;
      v76 = 0;
      *(_QWORD *)(v6 + 40) = v5;
      v9 = sub_2B1B70(*(_QWORD *)(v4 + 64), (__int64)&v72, 0);
      v10 = v75;
      v61 = (unsigned __int64 *)v9;
      v72.m128i_i64[0] = (__int64)&off_4C18D0;
      if ( (_QWORD)v75 )
      {
        sub_80090(v75);
        j__qfree(v10);
      }
      v11 = *((_QWORD *)&v75 + 1);
      v77 = 0;
      if ( *((_QWORD *)&v75 + 1) )
      {
        if ( (_QWORD)v76 )
        {
          v54 = v76;
          v57 = v3;
          for ( i = 0; i != v54; ++i )
          {
            v13 = (__int64 *)(v11 + 24 * i);
            v14 = *v13;
            if ( *v13 )
            {
              if ( v13[1] )
              {
                v15 = 0;
                v16 = v13[1];
                v17 = 0;
                do
                {
                  v18 = v14 + v17;
                  ++v15;
                  v17 += 112;
                  sub_118BA0(v18 + 88);
                  sub_118BA0(v18 + 72);
                  sub_118BA0(v18 + 56);
                  v14 = *v13;
                }
                while ( v16 != v15 );
              }
              v13[1] = 0;
              qfree(v14);
              v11 = *((_QWORD *)&v75 + 1);
            }
          }
          v3 = v57;
        }
        *(_QWORD *)&v76 = 0;
        qfree(v11);
      }
      if ( v61 )
      {
        v62 = *v61;
        if ( !*v61 )
        {
LABEL_34:
          qfree(v61);
          goto LABEL_35;
        }
        if ( v61[1] )
        {
          v55 = *(unsigned __int64 **)(v62 + 8);
          if ( (unsigned __int64 *)v62 == v55 )
          {
            v31 = *(_QWORD *)v62;
LABEL_31:
            sub_2B16B0((_QWORD *)(v31 & 0xFFFFFFFFFFFFFFFCLL));
            *(_QWORD *)*v61 = *v61 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)*v61 & 3LL;
            *(__m128i *)(*v61 + 8) = _mm_unpacklo_epi64((__m128i)*v61, (__m128i)*v61);
            *(_QWORD *)*v61 &= ~1uLL;
            *(_QWORD *)*v61 |= 2uLL;
            v61[1] = 0;
            goto LABEL_32;
          }
          do
          {
            v19 = v3[2];
            v20 = v3[1];
            if ( v19 < v20 + 1 )
            {
              v39 = qvector_reserve(v3, 0, v20 + 1, 272);
              v40 = v3[2];
              v41 = v3[1];
              v63 = v39;
              v3[2] = v19;
              v42 = *v3;
              v64 = v40;
              v43 = v41 - 1;
              if ( v43 >= 0 )
              {
                v44 = v39;
                do
                {
                  *(_QWORD *)v44 = off_4C1BA0;
                  v45 = *(_QWORD *)(v42 + 24);
                  v46 = _mm_loadu_si128((const __m128i *)(v42 + 8));
                  *(_DWORD *)(v44 + 68) = -1;
                  *(_QWORD *)(v44 + 24) = v45;
                  *(_WORD *)(v44 + 64) = 0;
                  *(_WORD *)(v44 + 66) = 0;
                  *(_WORD *)(v44 + 80) = 0;
                  *(_WORD *)(v44 + 82) = 0;
                  *(_QWORD *)(v44 + 72) = 0;
                  *(_DWORD *)(v44 + 84) = -1;
                  *(_QWORD *)(v44 + 88) = 0;
                  *(_WORD *)(v44 + 96) = 0;
                  *(_WORD *)(v44 + 98) = 0;
                  *(_DWORD *)(v44 + 100) = -1;
                  *(_QWORD *)(v44 + 104) = 0;
                  *(__m128i *)(v44 + 8) = v46;
                  *(_OWORD *)(v44 + 40) = 0;
                  sub_1211A0(v44 + 32, v42 + 32);
                  *(_DWORD *)(v44 + 112) = *(_DWORD *)(v42 + 112);
                  *(_DWORD *)(v44 + 120) = *(_DWORD *)(v42 + 120);
                  *(_BYTE *)(v44 + 128) = *(_BYTE *)(v42 + 128);
                  v47 = *(_QWORD *)(v42 + 152);
                  v48 = _mm_loadu_si128((const __m128i *)(v42 + 136));
                  *(_WORD *)(v44 + 192) = 0;
                  *(_WORD *)(v44 + 194) = 0;
                  *(_QWORD *)(v44 + 152) = v47;
                  *(_DWORD *)(v44 + 196) = -1;
                  *(_QWORD *)(v44 + 200) = 0;
                  *(_WORD *)(v44 + 208) = 0;
                  *(_WORD *)(v44 + 210) = 0;
                  *(_DWORD *)(v44 + 212) = -1;
                  *(_QWORD *)(v44 + 216) = 0;
                  *(_WORD *)(v44 + 224) = 0;
                  *(_WORD *)(v44 + 226) = 0;
                  *(_DWORD *)(v44 + 228) = -1;
                  *(_QWORD *)(v44 + 232) = 0;
                  *(__m128i *)(v44 + 136) = v48;
                  *(_OWORD *)(v44 + 168) = 0;
                  sub_1211A0(v44 + 160, v42 + 160);
                  v44 += 272;
                  *(_DWORD *)(v44 - 32) = *(_DWORD *)(v42 + 240);
                  *(_DWORD *)(v44 - 24) = *(_DWORD *)(v42 + 248);
                  *(_DWORD *)(v44 - 16) = *(_DWORD *)(v42 + 256);
                  *(_QWORD *)(v44 - 272) = off_4C33F0;
                  *(_QWORD *)(v44 - 8) = *(_QWORD *)(v42 + 264);
                  *(_QWORD *)v42 = off_4C1BA0;
                  sub_118BA0(v42 + 224);
                  sub_118BA0(v42 + 208);
                  sub_118BA0(v42 + 192);
                  sub_118BA0(v42 + 96);
                  sub_118BA0(v42 + 80);
                  v49 = v42 + 64;
                  v42 += 272;
                  sub_118BA0(v49);
                }
                while ( v43-- != 0 );
                v42 = *v3;
              }
              qfree(v42);
              *v3 = v63;
              v3[2] = v64;
              v20 = v3[1];
            }
            v65 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
            memset(v67, 0, sizeof(v67));
            v21 = *v3 + 272 * v20;
            v66 = 0xFFFFFFFFLL;
            v68[0] = 0xFFFFFFFF00000000LL;
            v68[1] = 0;
            v69[0] = 0xFFFFFFFF00000000LL;
            v69[1] = 0;
            v70[0] = 0xFFFFFFFF00000000LL;
            v70[1] = 0;
            v71 = 0;
            sub_32B920(v67, -1);
            v22 = _mm_load_si128(&v65);
            LODWORD(v71) = 0;
            v72 = v22;
            v73 = v66;
            *((_QWORD *)&v76 + 1) = 0xFFFFFFFF00000000LL;
            v77 = 0;
            v78[0] = 0xFFFFFFFF00000000LL;
            v78[1] = 0;
            v79[0] = 0xFFFFFFFF00000000LL;
            v79[1] = 0;
            v75 = 0;
            sub_1211A0((__int64)&v74, (__int64)v67);
            v81 = -1;
            v80 = v71;
            *(_QWORD *)v21 = off_4C1BA0;
            v23 = v73;
            v24 = _mm_load_si128(&v72);
            *(_QWORD *)(v21 + 64) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v21 + 24) = v23;
            *(_QWORD *)(v21 + 72) = 0;
            *(_QWORD *)(v21 + 80) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v21 + 88) = 0;
            *(_QWORD *)(v21 + 96) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v21 + 104) = 0;
            *(__m128i *)(v21 + 8) = v24;
            *(_OWORD *)(v21 + 40) = 0;
            sub_1211A0(v21 + 32, (__int64)&v74);
            *(_DWORD *)(v21 + 112) = v80;
            v25 = v81;
            *(_BYTE *)(v21 + 128) = 0;
            *(_DWORD *)(v21 + 120) = v25;
            v26 = v73;
            v27 = _mm_load_si128(&v72);
            *(_QWORD *)(v21 + 192) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v21 + 152) = v26;
            *(_QWORD *)(v21 + 200) = 0;
            *(_QWORD *)(v21 + 208) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v21 + 216) = 0;
            *(_QWORD *)(v21 + 224) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v21 + 232) = 0;
            *(__m128i *)(v21 + 136) = v27;
            *(_OWORD *)(v21 + 168) = 0;
            sub_1211A0(v21 + 160, (__int64)&v74);
            *(_DWORD *)(v21 + 240) = v80;
            v28 = v81;
            *(_DWORD *)(v21 + 256) = -2;
            *(_DWORD *)(v21 + 248) = v28;
            sub_118BA0((__int64)v79);
            sub_118BA0((__int64)v78);
            sub_118BA0((__int64)&v76 + 8);
            sub_118BA0((__int64)v70);
            sub_118BA0((__int64)v69);
            sub_118BA0((__int64)v68);
            *(_QWORD *)(v21 + 264) = -1;
            *(_QWORD *)v21 = off_4C33F0;
            ++v3[1];
            *(__m128i *)(v21 + 8) = _mm_loadu_si128((const __m128i *)(v55 + 3));
            *(_DWORD *)(v21 + 24) = *((_DWORD *)v55 + 10);
            sub_1211A0(v21 + 32, (__int64)(v55 + 6));
            ++v60;
            *(_DWORD *)(v21 + 112) = *((_DWORD *)v55 + 32);
            *(_DWORD *)(v21 + 120) = *((_DWORD *)v55 + 34);
            *(_BYTE *)(v21 + 128) = *((_BYTE *)v55 + 144);
            if ( (*v55 & 2) == 0 )
            {
              v29 = (unsigned __int64 *)v55[2];
              if ( (*(_BYTE *)v29 & 2) != 0 )
              {
                v30 = (unsigned __int64 *)(*v55 & 0xFFFFFFFFFFFFFFFCLL);
                v51 = v55;
                v52 = *v30;
                if ( (*v30 & 2) == 0 )
                {
                  while ( v51 == (unsigned __int64 *)v30[2] )
                  {
                    v51 = v30;
                    v53 = v52 & 0xFFFFFFFFFFFFFFFCLL;
                    v52 = *(_QWORD *)(v52 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v52 & 2) != 0 )
                    {
                      v55 = (unsigned __int64 *)v53;
                      goto LABEL_28;
                    }
                    v30 = (unsigned __int64 *)v53;
                  }
                }
              }
              else
              {
                do
                {
                  v30 = v29;
                  v29 = (unsigned __int64 *)v29[1];
                }
                while ( (*(_BYTE *)v29 & 2) == 0 );
              }
              v55 = v30;
            }
LABEL_28:
            ;
          }
          while ( (unsigned __int64 *)v62 != v55 );
          v62 = *v61;
          if ( !*v61 )
            goto LABEL_34;
          v31 = *(_QWORD *)*v61;
          if ( v61[1] )
            goto LABEL_31;
        }
        else
        {
          v31 = *(_QWORD *)*v61;
        }
        *(_QWORD *)v62 = v31 & 3 | v62 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(*v61 + 8) = _mm_unpacklo_epi64((__m128i)*v61, (__m128i)*v61);
        *(_QWORD *)*v61 &= ~1uLL;
        *(_QWORD *)*v61 |= 2uLL;
LABEL_32:
        if ( *v61 )
          qfree(*v61);
        goto LABEL_34;
      }
    }
LABEL_35:
    ++v58;
    v3 += 3;
  }
  while ( v58 < a1[22] );
  if ( v60 )
  {
    v83 = 0u;
    v82 = 0;
    if ( sub_2B43B0 )
    {
      v82.m128i_i64[0] = (__int64)sub_2B43B0;
      v83 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4C34E0), (__m128i)(unsigned __int64)sub_2A89B0);
    }
    sub_2F08C0(v84, &v82, 1);
    sub_62A50((__int64)&v82);
    sub_2C72E0(v84, a1 + 19, 1);
    v32 = 1;
  }
  else
  {
    v32 = 0;
  }
  if ( v86 )
  {
    *(_QWORD *)&v87 = 0;
    qfree(v86);
  }
LABEL_42:
  v56 = v32;
  v33 = &v86;
  do
  {
    v33 -= 3;
    if ( *v33 )
    {
      v34 = v33[1];
      v35 = 0;
      v36 = 0;
      if ( v34 )
      {
        do
        {
          ++v36;
          v37 = (_QWORD *)(v35 + *v33);
          v35 += 272;
          *v37 = off_4C1BA0;
          sub_118BA0((__int64)(v37 + 28));
          sub_118BA0((__int64)(v37 + 26));
          sub_118BA0((__int64)(v37 + 24));
          sub_118BA0((__int64)(v37 + 12));
          sub_118BA0((__int64)(v37 + 10));
          sub_118BA0((__int64)(v37 + 8));
        }
        while ( v34 != v36 );
      }
      v33[1] = 0;
      qfree(*v33);
    }
  }
  while ( v33 != (__int64 *)v85 );
  return v56;
}
