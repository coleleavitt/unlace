__int64 __fastcall sub_2F6B80(_QWORD *a1, __m128i *a2)
{
  __int64 v2; // rdx
  __int64 *v3; // rax
  __int64 *v4; // r12
  __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 i; // r12
  __int64 *v16; // r15
  __int64 v17; // rdi
  __int64 v18; // r14
  __int64 v19; // r13
  __int64 v20; // rbp
  __int64 v21; // rbx
  unsigned __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rbx
  __m128i v25; // xmm0
  __int64 v26; // rax
  __m128i v27; // xmm0
  int v28; // eax
  __int64 v29; // rax
  __m128i v30; // xmm0
  int v31; // eax
  __m128i *v32; // rdx
  __m128i *v33; // rax
  __int64 v34; // rdi
  char v35; // bl
  __int64 *v36; // rbx
  __int64 v37; // r13
  __int64 v38; // r14
  __int64 v39; // r15
  _QWORD *v40; // rbp
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r14
  __int64 v45; // r15
  __int64 v46; // r14
  __int64 v47; // rbx
  __int64 v48; // rax
  __m128i v49; // xmm0
  __int64 v50; // rax
  __m128i v51; // xmm0
  __int64 v52; // rdi
  __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  __int64 v56; // [rsp+0h] [rbp-228h]
  __m128i *v57; // [rsp+0h] [rbp-228h]
  unsigned __int8 v58; // [rsp+0h] [rbp-228h]
  __int64 *v59; // [rsp+8h] [rbp-220h]
  unsigned __int64 v60; // [rsp+10h] [rbp-218h]
  int v62; // [rsp+24h] [rbp-204h]
  __int64 *v63; // [rsp+28h] [rbp-200h]
  unsigned __int64 v64; // [rsp+30h] [rbp-1F8h]
  __int64 v65; // [rsp+40h] [rbp-1E8h]
  __int64 v66; // [rsp+48h] [rbp-1E0h]
  __m128i v67; // [rsp+60h] [rbp-1C8h] BYREF
  __int64 v68; // [rsp+70h] [rbp-1B8h]
  _QWORD v69[4]; // [rsp+78h] [rbp-1B0h] BYREF
  _QWORD v70[2]; // [rsp+98h] [rbp-190h] BYREF
  _QWORD v71[2]; // [rsp+A8h] [rbp-180h] BYREF
  _QWORD v72[2]; // [rsp+B8h] [rbp-170h] BYREF
  __int64 v73; // [rsp+C8h] [rbp-160h]
  __m128i v74; // [rsp+D0h] [rbp-158h] BYREF
  __int64 v75; // [rsp+E0h] [rbp-148h]
  char *v76; // [rsp+E8h] [rbp-140h] BYREF
  __int128 v77; // [rsp+F0h] [rbp-138h] BYREF
  __int128 v78; // [rsp+100h] [rbp-128h] BYREF
  __int64 v79; // [rsp+110h] [rbp-118h]
  _QWORD v80[2]; // [rsp+118h] [rbp-110h] BYREF
  _QWORD v81[2]; // [rsp+128h] [rbp-100h] BYREF
  int v82; // [rsp+138h] [rbp-F0h]
  int v83; // [rsp+140h] [rbp-E8h]
  __m128i v84; // [rsp+150h] [rbp-D8h] BYREF
  __m128i v85; // [rsp+160h] [rbp-C8h]
  _QWORD v86[2]; // [rsp+170h] [rbp-B8h] BYREF
  _BYTE v87[48]; // [rsp+180h] [rbp-A8h] BYREF
  __int64 v88; // [rsp+1C8h] [rbp-60h] BYREF
  __int128 v89; // [rsp+1D0h] [rbp-58h]
  __int64 v90; // [rsp+1E0h] [rbp-48h]
  unsigned __int64 v91; // [rsp+1E8h] [rbp-40h]

  v91 = __readfsqword(0x28u);
  v2 = a1[22];
  v86[0] = a1[1];
  v3 = (__int64 *)v87;
  v86[1] = v2;
  v4 = (__int64 *)v87;
  do
  {
    *v3 = 0;
    v3 += 3;
    *((_OWORD *)v3 - 1) = 0;
  }
  while ( v3 != &v88 );
  v88 = 0;
  v90 = 0;
  v89 = 0;
  if ( !v2 )
  {
    v35 = 0;
    goto LABEL_42;
  }
  v60 = 0;
  v62 = 0;
  do
  {
    v5 = a1[v60 + 19];
    if ( v5 )
    {
      switch_dbctx();
      v6 = *(_QWORD *)(v5 + 80);
      v9 = j__qalloc_or_throw(1512, (__int64)a2, v7, v8);
      v10 = sub_260450(0);
      sub_336F00(v9, v10);
      v11 = *(_QWORD *)(v9 + 40);
      LOBYTE(v75) = 73;
      v77 = (unsigned __int64)v9;
      v74.m128i_i64[1] = v11;
      a2 = &v74;
      v76 = (char *)&v77 + 8;
      v74.m128i_i64[0] = (__int64)&off_4E1190;
      v79 = 0;
      v78 = 0;
      *(_QWORD *)(v9 + 40) = v6;
      v12 = sub_2B63F0(*(_QWORD *)(v5 + 64), &v74);
      v13 = v77;
      v63 = (__int64 *)v12;
      v74.m128i_i64[0] = (__int64)&off_4E1190;
      if ( (_QWORD)v77 )
      {
        sub_84290(v77);
        j__qfree(v13);
      }
      v14 = *((_QWORD *)&v77 + 1);
      v79 = 0;
      if ( *((_QWORD *)&v77 + 1) )
      {
        if ( (_QWORD)v78 )
        {
          v56 = v78;
          v59 = v4;
          for ( i = 0; i != v56; ++i )
          {
            v16 = (__int64 *)(v14 + 24 * i);
            v17 = *v16;
            if ( *v16 )
            {
              if ( v16[1] )
              {
                v18 = 0;
                v19 = v16[1];
                v20 = 0;
                do
                {
                  v21 = v17 + v20;
                  ++v18;
                  v20 += 112;
                  sub_11CDA0(v21 + 88);
                  sub_11CDA0(v21 + 72);
                  sub_11CDA0(v21 + 56);
                  v17 = *v16;
                }
                while ( v19 != v18 );
              }
              v16[1] = 0;
              qfree(v17);
              v14 = *((_QWORD *)&v77 + 1);
            }
          }
          v4 = v59;
        }
        *(_QWORD *)&v78 = 0;
        qfree(v14);
      }
      if ( v63 )
      {
        v64 = *v63;
        if ( !*v63 )
        {
LABEL_34:
          qfree((__int64)v63);
          goto LABEL_35;
        }
        if ( v63[1] )
        {
          v57 = *(__m128i **)(v64 + 8);
          if ( (__m128i *)v64 == v57 )
          {
            v34 = *(_QWORD *)v64;
LABEL_31:
            sub_2B5F30((_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFCLL));
            a2 = (__m128i *)v63;
            *(_QWORD *)*v63 = *v63 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)*v63 & 3LL;
            *(__m128i *)(*v63 + 8) = _mm_unpacklo_epi64(
                                       (__m128i)(unsigned __int64)*v63,
                                       (__m128i)(unsigned __int64)*v63);
            *(_QWORD *)*v63 &= ~1uLL;
            *(_QWORD *)*v63 |= 2uLL;
            v63[1] = 0;
            goto LABEL_32;
          }
          do
          {
            v22 = v4[2];
            v23 = v4[1];
            if ( v22 < v23 + 1 )
            {
              v42 = qvector_reserve((__int64)v4, 0, v23 + 1, 272);
              v43 = v4[2];
              v44 = v4[1];
              v65 = v42;
              v4[2] = v22;
              v45 = *v4;
              v66 = v43;
              v46 = v44 - 1;
              if ( v46 >= 0 )
              {
                v47 = v42;
                do
                {
                  *(_QWORD *)v47 = off_4E1460;
                  v48 = *(_QWORD *)(v45 + 24);
                  v49 = _mm_loadu_si128((const __m128i *)(v45 + 8));
                  *(_DWORD *)(v47 + 68) = -1;
                  *(_QWORD *)(v47 + 24) = v48;
                  *(_WORD *)(v47 + 64) = 0;
                  *(_WORD *)(v47 + 66) = 0;
                  *(_WORD *)(v47 + 80) = 0;
                  *(_WORD *)(v47 + 82) = 0;
                  *(_QWORD *)(v47 + 72) = 0;
                  *(_DWORD *)(v47 + 84) = -1;
                  *(_QWORD *)(v47 + 88) = 0;
                  *(_WORD *)(v47 + 96) = 0;
                  *(_WORD *)(v47 + 98) = 0;
                  *(_DWORD *)(v47 + 100) = -1;
                  *(_QWORD *)(v47 + 104) = 0;
                  *(__m128i *)(v47 + 8) = v49;
                  *(_OWORD *)(v47 + 40) = 0;
                  sub_1253A0(v47 + 32, v45 + 32);
                  *(_DWORD *)(v47 + 112) = *(_DWORD *)(v45 + 112);
                  *(_DWORD *)(v47 + 120) = *(_DWORD *)(v45 + 120);
                  *(_BYTE *)(v47 + 128) = *(_BYTE *)(v45 + 128);
                  v50 = *(_QWORD *)(v45 + 152);
                  v51 = _mm_loadu_si128((const __m128i *)(v45 + 136));
                  *(_WORD *)(v47 + 192) = 0;
                  *(_WORD *)(v47 + 194) = 0;
                  *(_QWORD *)(v47 + 152) = v50;
                  *(_DWORD *)(v47 + 196) = -1;
                  *(_QWORD *)(v47 + 200) = 0;
                  *(_WORD *)(v47 + 208) = 0;
                  *(_WORD *)(v47 + 210) = 0;
                  *(_DWORD *)(v47 + 212) = -1;
                  *(_QWORD *)(v47 + 216) = 0;
                  *(_WORD *)(v47 + 224) = 0;
                  *(_WORD *)(v47 + 226) = 0;
                  *(_DWORD *)(v47 + 228) = -1;
                  *(_QWORD *)(v47 + 232) = 0;
                  *(__m128i *)(v47 + 136) = v51;
                  *(_OWORD *)(v47 + 168) = 0;
                  sub_1253A0(v47 + 160, v45 + 160);
                  v47 += 272;
                  *(_DWORD *)(v47 - 32) = *(_DWORD *)(v45 + 240);
                  *(_DWORD *)(v47 - 24) = *(_DWORD *)(v45 + 248);
                  *(_DWORD *)(v47 - 16) = *(_DWORD *)(v45 + 256);
                  *(_QWORD *)(v47 - 272) = off_4E2CB0;
                  *(_QWORD *)(v47 - 8) = *(_QWORD *)(v45 + 264);
                  *(_QWORD *)v45 = off_4E1460;
                  sub_11CDA0(v45 + 224);
                  sub_11CDA0(v45 + 208);
                  sub_11CDA0(v45 + 192);
                  sub_11CDA0(v45 + 96);
                  sub_11CDA0(v45 + 80);
                  v52 = v45 + 64;
                  v45 += 272;
                  sub_11CDA0(v52);
                }
                while ( v46-- != 0 );
                v45 = *v4;
              }
              qfree(v45);
              *v4 = v65;
              v4[2] = v66;
              v23 = v4[1];
            }
            v67 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
            memset(v69, 0, sizeof(v69));
            v24 = *v4 + 272 * v23;
            v68 = 0xFFFFFFFFLL;
            v70[0] = 0xFFFFFFFF00000000LL;
            v70[1] = 0;
            v71[0] = 0xFFFFFFFF00000000LL;
            v71[1] = 0;
            v72[0] = 0xFFFFFFFF00000000LL;
            v72[1] = 0;
            v73 = 0;
            sub_330970(v69, -1);
            v25 = _mm_load_si128(&v67);
            LODWORD(v73) = 0;
            v74 = v25;
            v75 = v68;
            *((_QWORD *)&v78 + 1) = 0xFFFFFFFF00000000LL;
            v79 = 0;
            v80[0] = 0xFFFFFFFF00000000LL;
            v80[1] = 0;
            v81[0] = 0xFFFFFFFF00000000LL;
            v81[1] = 0;
            v77 = 0;
            sub_1253A0((__int64)&v76, (__int64)v69);
            v83 = -1;
            v82 = v73;
            *(_QWORD *)v24 = off_4E1460;
            v26 = v75;
            v27 = _mm_load_si128(&v74);
            *(_QWORD *)(v24 + 64) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v24 + 24) = v26;
            *(_QWORD *)(v24 + 72) = 0;
            *(_QWORD *)(v24 + 80) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v24 + 88) = 0;
            *(_QWORD *)(v24 + 96) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v24 + 104) = 0;
            *(__m128i *)(v24 + 8) = v27;
            *(_OWORD *)(v24 + 40) = 0;
            sub_1253A0(v24 + 32, (__int64)&v76);
            *(_DWORD *)(v24 + 112) = v82;
            v28 = v83;
            *(_BYTE *)(v24 + 128) = 0;
            *(_DWORD *)(v24 + 120) = v28;
            v29 = v75;
            v30 = _mm_load_si128(&v74);
            *(_QWORD *)(v24 + 192) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v24 + 152) = v29;
            *(_QWORD *)(v24 + 200) = 0;
            *(_QWORD *)(v24 + 208) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v24 + 216) = 0;
            *(_QWORD *)(v24 + 224) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v24 + 232) = 0;
            *(__m128i *)(v24 + 136) = v30;
            *(_OWORD *)(v24 + 168) = 0;
            sub_1253A0(v24 + 160, (__int64)&v76);
            *(_DWORD *)(v24 + 240) = v82;
            v31 = v83;
            *(_DWORD *)(v24 + 256) = -2;
            *(_DWORD *)(v24 + 248) = v31;
            sub_11CDA0((__int64)v81);
            sub_11CDA0((__int64)v80);
            sub_11CDA0((__int64)&v78 + 8);
            sub_11CDA0((__int64)v72);
            sub_11CDA0((__int64)v71);
            sub_11CDA0((__int64)v70);
            *(_QWORD *)(v24 + 264) = -1;
            *(_QWORD *)v24 = off_4E2CB0;
            a2 = v57 + 3;
            ++v4[1];
            *(__m128i *)(v24 + 8) = _mm_loadu_si128((__m128i *)((char *)v57 + 24));
            *(_DWORD *)(v24 + 24) = v57[2].m128i_i32[2];
            sub_1253A0(v24 + 32, (__int64)v57[3].m128i_i64);
            ++v62;
            *(_DWORD *)(v24 + 112) = v57[8].m128i_i32[0];
            *(_DWORD *)(v24 + 120) = v57[8].m128i_i32[2];
            *(_BYTE *)(v24 + 128) = v57[9].m128i_i8[0];
            if ( (v57->m128i_i64[0] & 2) == 0 )
            {
              v32 = (__m128i *)v57[1].m128i_i64[0];
              if ( (v32->m128i_i8[0] & 2) != 0 )
              {
                v33 = (__m128i *)(v57->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL);
                a2 = v57;
                v54 = v33->m128i_i64[0];
                if ( (v33->m128i_i64[0] & 2) == 0 )
                {
                  while ( a2 == (__m128i *)v33[1].m128i_i64[0] )
                  {
                    a2 = v33;
                    v55 = v54 & 0xFFFFFFFFFFFFFFFCLL;
                    v54 = *(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v54 & 2) != 0 )
                    {
                      v57 = (__m128i *)v55;
                      goto LABEL_28;
                    }
                    v33 = (__m128i *)v55;
                  }
                }
              }
              else
              {
                do
                {
                  v33 = v32;
                  v32 = (__m128i *)v32->m128i_i64[1];
                }
                while ( (v32->m128i_i8[0] & 2) == 0 );
              }
              v57 = v33;
            }
LABEL_28:
            ;
          }
          while ( (__m128i *)v64 != v57 );
          v64 = *v63;
          if ( !*v63 )
            goto LABEL_34;
          v34 = *(_QWORD *)*v63;
          if ( v63[1] )
            goto LABEL_31;
        }
        else
        {
          v34 = *(_QWORD *)*v63;
        }
        *(_QWORD *)v64 = v34 & 3 | v64 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(*v63 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v63, (__m128i)(unsigned __int64)*v63);
        *(_QWORD *)*v63 &= ~1uLL;
        *(_QWORD *)*v63 |= 2uLL;
LABEL_32:
        if ( *v63 )
          qfree(*v63);
        goto LABEL_34;
      }
    }
LABEL_35:
    ++v60;
    v4 += 3;
  }
  while ( v60 < a1[22] );
  if ( v62 )
  {
    v85 = 0u;
    v84 = 0;
    if ( sub_2B8C30 )
    {
      v84.m128i_i64[0] = (__int64)sub_2B8C30;
      v85 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4E2DA0), (__m128i)(unsigned __int64)sub_2AD230);
    }
    sub_2F5140(v86, &v84, 1);
    sub_66C50((__int64)&v84);
    sub_2CBB60(v86, a1 + 19, 1);
    v35 = 1;
  }
  else
  {
    v35 = 0;
  }
  if ( v88 )
  {
    *(_QWORD *)&v89 = 0;
    qfree(v88);
  }
LABEL_42:
  v58 = v35;
  v36 = &v88;
  do
  {
    v36 -= 3;
    if ( *v36 )
    {
      v37 = v36[1];
      v38 = 0;
      v39 = 0;
      if ( v37 )
      {
        do
        {
          ++v39;
          v40 = (_QWORD *)(v38 + *v36);
          v38 += 272;
          *v40 = off_4E1460;
          sub_11CDA0((__int64)(v40 + 28));
          sub_11CDA0((__int64)(v40 + 26));
          sub_11CDA0((__int64)(v40 + 24));
          sub_11CDA0((__int64)(v40 + 12));
          sub_11CDA0((__int64)(v40 + 10));
          sub_11CDA0((__int64)(v40 + 8));
        }
        while ( v37 != v39 );
      }
      v36[1] = 0;
      qfree(*v36);
    }
  }
  while ( v36 != (__int64 *)v87 );
  return v58;
}
