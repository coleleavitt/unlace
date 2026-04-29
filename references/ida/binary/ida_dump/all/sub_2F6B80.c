__int64 __fastcall sub_2F6B80(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 *v2; // rax
  __int64 *v3; // r12
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 i; // r12
  __int64 *v11; // r15
  __int64 v12; // rdi
  __int64 v13; // r14
  __int64 v14; // r13
  __int64 v15; // rbp
  __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rbx
  __m128i v20; // xmm0
  __int64 v21; // rax
  __m128i v22; // xmm0
  int v23; // eax
  __int64 v24; // rax
  __m128i v25; // xmm0
  int v26; // eax
  unsigned __int64 *v27; // rdx
  unsigned __int64 *v28; // rax
  __int64 v29; // rdi
  char v30; // bl
  __int64 *v31; // rbx
  __int64 v32; // r13
  __int64 v33; // r14
  __int64 v34; // r15
  _QWORD *v35; // rbp
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r14
  __int64 v40; // r15
  __int64 v41; // r14
  __int64 v42; // rbx
  __int64 v43; // rax
  __m128i v44; // xmm0
  __int64 v45; // rax
  __m128i v46; // xmm0
  __int64 v47; // rdi
  unsigned __int64 *v49; // rsi
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rcx
  __int64 v52; // [rsp+0h] [rbp-228h]
  unsigned __int64 *v53; // [rsp+0h] [rbp-228h]
  unsigned __int8 v54; // [rsp+0h] [rbp-228h]
  __int64 *v55; // [rsp+8h] [rbp-220h]
  unsigned __int64 v56; // [rsp+10h] [rbp-218h]
  int v58; // [rsp+24h] [rbp-204h]
  unsigned __int64 *v59; // [rsp+28h] [rbp-200h]
  unsigned __int64 *v60; // [rsp+30h] [rbp-1F8h]
  __int64 v61; // [rsp+40h] [rbp-1E8h]
  __int64 v62; // [rsp+48h] [rbp-1E0h]
  __m128i v63; // [rsp+60h] [rbp-1C8h] BYREF
  __int64 v64; // [rsp+70h] [rbp-1B8h]
  _QWORD v65[4]; // [rsp+78h] [rbp-1B0h] BYREF
  _QWORD v66[2]; // [rsp+98h] [rbp-190h] BYREF
  _QWORD v67[2]; // [rsp+A8h] [rbp-180h] BYREF
  _QWORD v68[2]; // [rsp+B8h] [rbp-170h] BYREF
  __int64 v69; // [rsp+C8h] [rbp-160h]
  __m128i v70; // [rsp+D0h] [rbp-158h] BYREF
  __int64 v71; // [rsp+E0h] [rbp-148h]
  char *v72; // [rsp+E8h] [rbp-140h] BYREF
  __int128 v73; // [rsp+F0h] [rbp-138h] BYREF
  __int128 v74; // [rsp+100h] [rbp-128h] BYREF
  __int64 v75; // [rsp+110h] [rbp-118h]
  _QWORD v76[2]; // [rsp+118h] [rbp-110h] BYREF
  _QWORD v77[2]; // [rsp+128h] [rbp-100h] BYREF
  int v78; // [rsp+138h] [rbp-F0h]
  int v79; // [rsp+140h] [rbp-E8h]
  __m128i v80; // [rsp+150h] [rbp-D8h] BYREF
  __m128i v81; // [rsp+160h] [rbp-C8h]
  _QWORD v82[2]; // [rsp+170h] [rbp-B8h] BYREF
  _BYTE v83[48]; // [rsp+180h] [rbp-A8h] BYREF
  __int64 v84; // [rsp+1C8h] [rbp-60h] BYREF
  __int128 v85; // [rsp+1D0h] [rbp-58h]
  __int64 v86; // [rsp+1E0h] [rbp-48h]
  unsigned __int64 v87; // [rsp+1E8h] [rbp-40h]

  v87 = __readfsqword(0x28u);
  v1 = a1[22];
  v82[0] = a1[1];
  v2 = (__int64 *)v83;
  v82[1] = v1;
  v3 = (__int64 *)v83;
  do
  {
    *v2 = 0;
    v2 += 3;
    *((_OWORD *)v2 - 1) = 0;
  }
  while ( v2 != &v84 );
  v84 = 0;
  v86 = 0;
  v85 = 0;
  if ( !v1 )
  {
    v30 = 0;
    goto LABEL_42;
  }
  v56 = 0;
  v58 = 0;
  do
  {
    v4 = a1[v56 + 19];
    if ( v4 )
    {
      switch_dbctx();
      v5 = *(_QWORD *)(v4 + 80);
      v6 = j__qalloc_or_throw();
      v7 = sub_260450(0);
      sub_336F00(v6, v7);
      v8 = *(_QWORD *)(v6 + 40);
      LOBYTE(v71) = 73;
      v73 = (unsigned __int64)v6;
      v70.m128i_i64[1] = v8;
      v72 = (char *)&v73 + 8;
      v70.m128i_i64[0] = (__int64)&off_4E1190;
      v75 = 0;
      v74 = 0;
      *(_QWORD *)(v6 + 40) = v5;
      v59 = (unsigned __int64 *)sub_2B63F0(*(_QWORD *)(v4 + 64), &v70);
      v70.m128i_i64[0] = (__int64)&off_4E1190;
      if ( (_QWORD)v73 )
      {
        sub_84290(v73);
        j__qfree();
      }
      v9 = *((_QWORD *)&v73 + 1);
      v75 = 0;
      if ( *((_QWORD *)&v73 + 1) )
      {
        if ( (_QWORD)v74 )
        {
          v52 = v74;
          v55 = v3;
          for ( i = 0; i != v52; ++i )
          {
            v11 = (__int64 *)(v9 + 24 * i);
            v12 = *v11;
            if ( *v11 )
            {
              if ( v11[1] )
              {
                v13 = 0;
                v14 = v11[1];
                v15 = 0;
                do
                {
                  v16 = v12 + v15;
                  ++v13;
                  v15 += 112;
                  sub_11CDA0(v16 + 88);
                  sub_11CDA0(v16 + 72);
                  sub_11CDA0(v16 + 56);
                  v12 = *v11;
                }
                while ( v14 != v13 );
              }
              v11[1] = 0;
              qfree();
              v9 = *((_QWORD *)&v73 + 1);
            }
          }
          v3 = v55;
        }
        *(_QWORD *)&v74 = 0;
        qfree();
      }
      if ( v59 )
      {
        v60 = (unsigned __int64 *)*v59;
        if ( !*v59 )
        {
LABEL_34:
          qfree();
          goto LABEL_35;
        }
        if ( v59[1] )
        {
          v53 = (unsigned __int64 *)v60[1];
          if ( v60 == v53 )
          {
            v29 = *v60;
LABEL_31:
            sub_2B5F30((_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFCLL));
            *(_QWORD *)*v59 = *v59 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)*v59 & 3LL;
            *(__m128i *)(*v59 + 8) = _mm_unpacklo_epi64((__m128i)*v59, (__m128i)*v59);
            *(_QWORD *)*v59 &= ~1uLL;
            *(_QWORD *)*v59 |= 2uLL;
            v59[1] = 0;
            goto LABEL_32;
          }
          do
          {
            v17 = v3[2];
            v18 = v3[1];
            if ( v17 < v18 + 1 )
            {
              v37 = qvector_reserve();
              v38 = v3[2];
              v39 = v3[1];
              v61 = v37;
              v3[2] = v17;
              v40 = *v3;
              v62 = v38;
              v41 = v39 - 1;
              if ( v41 >= 0 )
              {
                v42 = v37;
                do
                {
                  *(_QWORD *)v42 = off_4E1460;
                  v43 = *(_QWORD *)(v40 + 24);
                  v44 = _mm_loadu_si128((const __m128i *)(v40 + 8));
                  *(_DWORD *)(v42 + 68) = -1;
                  *(_QWORD *)(v42 + 24) = v43;
                  *(_WORD *)(v42 + 64) = 0;
                  *(_WORD *)(v42 + 66) = 0;
                  *(_WORD *)(v42 + 80) = 0;
                  *(_WORD *)(v42 + 82) = 0;
                  *(_QWORD *)(v42 + 72) = 0;
                  *(_DWORD *)(v42 + 84) = -1;
                  *(_QWORD *)(v42 + 88) = 0;
                  *(_WORD *)(v42 + 96) = 0;
                  *(_WORD *)(v42 + 98) = 0;
                  *(_DWORD *)(v42 + 100) = -1;
                  *(_QWORD *)(v42 + 104) = 0;
                  *(__m128i *)(v42 + 8) = v44;
                  *(_OWORD *)(v42 + 40) = 0;
                  sub_1253A0(v42 + 32, v40 + 32);
                  *(_DWORD *)(v42 + 112) = *(_DWORD *)(v40 + 112);
                  *(_DWORD *)(v42 + 120) = *(_DWORD *)(v40 + 120);
                  *(_BYTE *)(v42 + 128) = *(_BYTE *)(v40 + 128);
                  v45 = *(_QWORD *)(v40 + 152);
                  v46 = _mm_loadu_si128((const __m128i *)(v40 + 136));
                  *(_WORD *)(v42 + 192) = 0;
                  *(_WORD *)(v42 + 194) = 0;
                  *(_QWORD *)(v42 + 152) = v45;
                  *(_DWORD *)(v42 + 196) = -1;
                  *(_QWORD *)(v42 + 200) = 0;
                  *(_WORD *)(v42 + 208) = 0;
                  *(_WORD *)(v42 + 210) = 0;
                  *(_DWORD *)(v42 + 212) = -1;
                  *(_QWORD *)(v42 + 216) = 0;
                  *(_WORD *)(v42 + 224) = 0;
                  *(_WORD *)(v42 + 226) = 0;
                  *(_DWORD *)(v42 + 228) = -1;
                  *(_QWORD *)(v42 + 232) = 0;
                  *(__m128i *)(v42 + 136) = v46;
                  *(_OWORD *)(v42 + 168) = 0;
                  sub_1253A0(v42 + 160, v40 + 160);
                  v42 += 272;
                  *(_DWORD *)(v42 - 32) = *(_DWORD *)(v40 + 240);
                  *(_DWORD *)(v42 - 24) = *(_DWORD *)(v40 + 248);
                  *(_DWORD *)(v42 - 16) = *(_DWORD *)(v40 + 256);
                  *(_QWORD *)(v42 - 272) = off_4E2CB0;
                  *(_QWORD *)(v42 - 8) = *(_QWORD *)(v40 + 264);
                  *(_QWORD *)v40 = off_4E1460;
                  sub_11CDA0(v40 + 224);
                  sub_11CDA0(v40 + 208);
                  sub_11CDA0(v40 + 192);
                  sub_11CDA0(v40 + 96);
                  sub_11CDA0(v40 + 80);
                  v47 = v40 + 64;
                  v40 += 272;
                  sub_11CDA0(v47);
                }
                while ( v41-- != 0 );
              }
              qfree();
              *v3 = v61;
              v3[2] = v62;
              v18 = v3[1];
            }
            v63 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
            memset(v65, 0, sizeof(v65));
            v19 = *v3 + 272 * v18;
            v64 = 0xFFFFFFFFLL;
            v66[0] = 0xFFFFFFFF00000000LL;
            v66[1] = 0;
            v67[0] = 0xFFFFFFFF00000000LL;
            v67[1] = 0;
            v68[0] = 0xFFFFFFFF00000000LL;
            v68[1] = 0;
            v69 = 0;
            sub_330970(v65, -1);
            v20 = _mm_load_si128(&v63);
            LODWORD(v69) = 0;
            v70 = v20;
            v71 = v64;
            *((_QWORD *)&v74 + 1) = 0xFFFFFFFF00000000LL;
            v75 = 0;
            v76[0] = 0xFFFFFFFF00000000LL;
            v76[1] = 0;
            v77[0] = 0xFFFFFFFF00000000LL;
            v77[1] = 0;
            v73 = 0;
            sub_1253A0((__int64)&v72, (__int64)v65);
            v79 = -1;
            v78 = v69;
            *(_QWORD *)v19 = off_4E1460;
            v21 = v71;
            v22 = _mm_load_si128(&v70);
            *(_QWORD *)(v19 + 64) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v19 + 24) = v21;
            *(_QWORD *)(v19 + 72) = 0;
            *(_QWORD *)(v19 + 80) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v19 + 88) = 0;
            *(_QWORD *)(v19 + 96) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v19 + 104) = 0;
            *(__m128i *)(v19 + 8) = v22;
            *(_OWORD *)(v19 + 40) = 0;
            sub_1253A0(v19 + 32, (__int64)&v72);
            *(_DWORD *)(v19 + 112) = v78;
            v23 = v79;
            *(_BYTE *)(v19 + 128) = 0;
            *(_DWORD *)(v19 + 120) = v23;
            v24 = v71;
            v25 = _mm_load_si128(&v70);
            *(_QWORD *)(v19 + 192) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v19 + 152) = v24;
            *(_QWORD *)(v19 + 200) = 0;
            *(_QWORD *)(v19 + 208) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v19 + 216) = 0;
            *(_QWORD *)(v19 + 224) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v19 + 232) = 0;
            *(__m128i *)(v19 + 136) = v25;
            *(_OWORD *)(v19 + 168) = 0;
            sub_1253A0(v19 + 160, (__int64)&v72);
            *(_DWORD *)(v19 + 240) = v78;
            v26 = v79;
            *(_DWORD *)(v19 + 256) = -2;
            *(_DWORD *)(v19 + 248) = v26;
            sub_11CDA0((__int64)v77);
            sub_11CDA0((__int64)v76);
            sub_11CDA0((__int64)&v74 + 8);
            sub_11CDA0((__int64)v68);
            sub_11CDA0((__int64)v67);
            sub_11CDA0((__int64)v66);
            *(_QWORD *)(v19 + 264) = -1;
            *(_QWORD *)v19 = off_4E2CB0;
            ++v3[1];
            *(__m128i *)(v19 + 8) = _mm_loadu_si128((const __m128i *)(v53 + 3));
            *(_DWORD *)(v19 + 24) = *((_DWORD *)v53 + 10);
            sub_1253A0(v19 + 32, (__int64)(v53 + 6));
            ++v58;
            *(_DWORD *)(v19 + 112) = *((_DWORD *)v53 + 32);
            *(_DWORD *)(v19 + 120) = *((_DWORD *)v53 + 34);
            *(_BYTE *)(v19 + 128) = *((_BYTE *)v53 + 144);
            if ( (*v53 & 2) == 0 )
            {
              v27 = (unsigned __int64 *)v53[2];
              if ( (*(_BYTE *)v27 & 2) != 0 )
              {
                v28 = (unsigned __int64 *)(*v53 & 0xFFFFFFFFFFFFFFFCLL);
                v49 = v53;
                v50 = *v28;
                if ( (*v28 & 2) == 0 )
                {
                  while ( v49 == (unsigned __int64 *)v28[2] )
                  {
                    v49 = v28;
                    v51 = v50 & 0xFFFFFFFFFFFFFFFCLL;
                    v50 = *(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v50 & 2) != 0 )
                    {
                      v53 = (unsigned __int64 *)v51;
                      goto LABEL_28;
                    }
                    v28 = (unsigned __int64 *)v51;
                  }
                }
              }
              else
              {
                do
                {
                  v28 = v27;
                  v27 = (unsigned __int64 *)v27[1];
                }
                while ( (*(_BYTE *)v27 & 2) == 0 );
              }
              v53 = v28;
            }
LABEL_28:
            ;
          }
          while ( v60 != v53 );
          v60 = (unsigned __int64 *)*v59;
          if ( !*v59 )
            goto LABEL_34;
          v29 = *(_QWORD *)*v59;
          if ( v59[1] )
            goto LABEL_31;
        }
        else
        {
          v29 = *(_QWORD *)*v59;
        }
        *v60 = v29 & 3 | (unsigned __int64)v60 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(*v59 + 8) = _mm_unpacklo_epi64((__m128i)*v59, (__m128i)*v59);
        *(_QWORD *)*v59 &= ~1uLL;
        *(_QWORD *)*v59 |= 2uLL;
LABEL_32:
        if ( *v59 )
          qfree();
        goto LABEL_34;
      }
    }
LABEL_35:
    ++v56;
    v3 += 3;
  }
  while ( v56 < a1[22] );
  if ( v58 )
  {
    v81 = 0u;
    v80 = 0;
    if ( sub_2B8C30 )
    {
      v80.m128i_i64[0] = (__int64)sub_2B8C30;
      v81 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4E2DA0), (__m128i)(unsigned __int64)sub_2AD230);
    }
    sub_2F5140(v82, &v80, 1);
    sub_66C50((__int64)&v80);
    sub_2CBB60(v82, a1 + 19, 1);
    v30 = 1;
  }
  else
  {
    v30 = 0;
  }
  if ( v84 )
  {
    *(_QWORD *)&v85 = 0;
    qfree();
  }
LABEL_42:
  v54 = v30;
  v31 = &v84;
  do
  {
    v31 -= 3;
    if ( *v31 )
    {
      v32 = v31[1];
      v33 = 0;
      v34 = 0;
      if ( v32 )
      {
        do
        {
          ++v34;
          v35 = (_QWORD *)(v33 + *v31);
          v33 += 272;
          *v35 = off_4E1460;
          sub_11CDA0((__int64)(v35 + 28));
          sub_11CDA0((__int64)(v35 + 26));
          sub_11CDA0((__int64)(v35 + 24));
          sub_11CDA0((__int64)(v35 + 12));
          sub_11CDA0((__int64)(v35 + 10));
          sub_11CDA0((__int64)(v35 + 8));
        }
        while ( v32 != v34 );
      }
      v31[1] = 0;
      qfree();
    }
  }
  while ( v31 != (__int64 *)v83 );
  return v54;
}
