__int64 __fastcall sub_193640(__int64 a1, unsigned __int8 **a2)
{
  unsigned int v4; // ebx
  __int64 v6; // r14
  int v7; // eax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r15
  __int64 (__fastcall **v11)(); // rbx
  __m128i v12; // xmm0
  unsigned __int64 v13; // r8
  __int64 v14; // rdi
  unsigned __int64 v15; // rax
  __int64 (__fastcall **v16)(); // rax
  __int64 (__fastcall **v17)(); // rbp
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  unsigned __int64 v21; // rax
  __int64 (__fastcall **v22)(); // rax
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rbp
  __int64 v28; // rsi
  __m128i v29; // xmm0
  __int64 v30; // rcx
  __int64 (__fastcall **v31)(); // r8
  int v32; // edi
  int v33; // edi
  __int64 v34; // rdi
  __int64 v35; // rdi
  __m128i v36; // xmm1
  __int64 v37; // rdi
  __int64 v38; // rdi
  bool v39; // cf
  __int64 v40; // rax
  __int64 v41; // rax
  __m128i v42; // xmm0
  __int64 v43; // rax
  __int64 v44; // rbp
  __int64 (__fastcall **v45)(); // r9
  __int64 (__fastcall **v46)(); // rcx
  __int64 v47; // rax
  __int64 v48; // rbp
  __int64 v49; // rdi
  int v50; // edi
  int v51; // edi
  __int64 (__fastcall *v52)(); // rdi
  __int64 (__fastcall *v53)(); // rdi
  __m128i v54; // xmm1
  __int64 (__fastcall *v55)(); // rdi
  __int64 v56; // rdi
  __int64 v57; // rax
  __m128i v58; // [rsp+0h] [rbp-108h] BYREF
  __m128i v59; // [rsp+10h] [rbp-F8h] BYREF
  __int64 (__fastcall **v60)(); // [rsp+28h] [rbp-E0h]
  __int64 (__fastcall **v61)(); // [rsp+30h] [rbp-D8h]
  __int64 v62; // [rsp+38h] [rbp-D0h]
  __int64 v63; // [rsp+40h] [rbp-C8h] BYREF
  int v64; // [rsp+48h] [rbp-C0h]
  __m128i v65; // [rsp+50h] [rbp-B8h]
  __int64 v66; // [rsp+60h] [rbp-A8h]
  int v67; // [rsp+68h] [rbp-A0h]
  __int64 (__fastcall **v68)(); // [rsp+70h] [rbp-98h]
  __int64 v69; // [rsp+78h] [rbp-90h]
  int v70; // [rsp+80h] [rbp-88h]
  __int128 v71; // [rsp+88h] [rbp-80h]
  __int64 v72; // [rsp+98h] [rbp-70h]
  __int64 v73; // [rsp+A0h] [rbp-68h]
  __int128 v74; // [rsp+A8h] [rbp-60h]
  __int64 v75; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v76; // [rsp+C8h] [rbp-40h]

  v76 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_7AC10(a1, a2) )
    return 0;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL);
  sub_78D00(a1 + 64, (__int64)a2);
  v7 = sub_789A0(a2);
  v8 = *(_QWORD *)(a1 + 120);
  v9 = *(_QWORD *)(a1 + 128);
  v10 = v7;
  v11 = *(__int64 (__fastcall ***)())(a1 + 120);
  if ( v7 != v9 )
  {
    v63 = 0;
    v71 = -1;
    v64 = 0;
    v67 = -1;
    v68 = off_4AE7F0;
    v66 = -1;
    v12 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4AE810, (__m128i)(unsigned __int64)off_4AE7F0);
    v69 = -1;
    v70 = -1;
    v72 = -1;
    v73 = 0;
    v75 = 0;
    v65 = v12;
    v74 = 0;
    if ( v7 < v9 )
    {
      v23 = v7;
      do
      {
        v24 = v8 + (v23 << 7);
        v25 = *(_QWORD *)(v24 + 96);
        if ( v25 )
        {
          *(_QWORD *)(v24 + 104) = 0;
          qfree(v25);
          v8 = *(_QWORD *)(a1 + 120);
        }
        ++v23;
      }
      while ( v23 < v9 );
      *(_QWORD *)(a1 + 128) = v10;
      v11 = (__int64 (__fastcall **)())v8;
    }
    else
    {
      v13 = *(_QWORD *)(a1 + 136);
      v14 = a1 + 120;
      if ( &v63 < (__int64 *)v11 || &v63 >= (__int64 *)&v11[16 * v13] )
      {
        if ( v13 < v7 )
        {
          v59.m128i_i64[0] = *(_QWORD *)(a1 + 136);
          v58 = v12;
          v11 = (__int64 (__fastcall **)())qvector_reserve(v14, 0, v7, 128);
          v26 = *(_QWORD *)(a1 + 136);
          v27 = *(_QWORD *)(a1 + 120);
          v28 = *(_QWORD *)(a1 + 128) - 1LL;
          *(_QWORD *)(a1 + 136) = v59.m128i_i64[0];
          v29 = _mm_load_si128(&v58);
          v62 = v26;
          if ( v28 >= 0 )
          {
            v30 = (__int64)v11;
            v31 = off_4AE7F0;
            do
            {
              *(_QWORD *)v30 = *(_QWORD *)v27;
              v32 = *(_DWORD *)(v27 + 8);
              *(__m128i *)(v30 + 16) = v29;
              *(_DWORD *)(v30 + 8) = v32;
              *(_QWORD *)(v30 + 32) = *(_QWORD *)(v27 + 32);
              v33 = *(_DWORD *)(v27 + 40);
              *(_QWORD *)(v30 + 48) = v31;
              *(_DWORD *)(v30 + 40) = v33;
              *(_QWORD *)(v30 + 56) = *(_QWORD *)(v27 + 56);
              *(_DWORD *)(v30 + 64) = *(_DWORD *)(v27 + 64);
              v34 = *(_QWORD *)(v27 + 88);
              *(__m128i *)(v30 + 72) = _mm_loadu_si128((const __m128i *)(v27 + 72));
              *(_QWORD *)(v30 + 88) = v34;
              v35 = *(_QWORD *)(v27 + 96);
              v36 = _mm_loadu_si128((const __m128i *)(v27 + 104));
              *(_QWORD *)(v27 + 96) = 0;
              *(_QWORD *)(v30 + 96) = v35;
              *(__m128i *)(v30 + 104) = v36;
              v37 = *(_QWORD *)(v27 + 120);
              *(_QWORD *)(v27 + 112) = 0;
              *(_QWORD *)(v30 + 120) = v37;
              v38 = *(_QWORD *)(v27 + 96);
              if ( v38 )
              {
                *(_QWORD *)(v27 + 104) = 0;
                v61 = v31;
                v60 = (__int64 (__fastcall **)())v28;
                v59.m128i_i64[0] = v30;
                v58 = v29;
                qfree(v38);
                v31 = v61;
                v28 = (__int64)v60;
                v30 = v59.m128i_i64[0];
                v29 = _mm_load_si128(&v58);
              }
              v27 += 128;
              v30 += 128;
              v39 = v28-- == 0;
            }
            while ( !v39 );
            v27 = *(_QWORD *)(a1 + 120);
          }
          v58 = v29;
          qfree(v27);
          v40 = v62;
          *(_QWORD *)(a1 + 120) = v11;
          v9 = *(_QWORD *)(a1 + 128);
          v12 = _mm_load_si128(&v58);
          *(_QWORD *)(a1 + 136) = v40;
        }
        if ( v9 < v10 )
        {
          do
          {
            v15 = v9++;
            v16 = &v11[16 * v15];
            *v16 = nullptr;
            *((_DWORD *)v16 + 2) = 0;
            v16[4] = (__int64 (__fastcall *)())-1LL;
            *((_DWORD *)v16 + 10) = -1;
            v16[6] = (__int64 (__fastcall *)())off_4AE7F0;
            v16[7] = (__int64 (__fastcall *)())-1LL;
            *((_DWORD *)v16 + 16) = -1;
            v16[11] = (__int64 (__fastcall *)())-1LL;
            v16[12] = nullptr;
            v16[15] = nullptr;
            *((__m128i *)v16 + 1) = v12;
            *(_OWORD *)(v16 + 9) = -1;
            *(_OWORD *)(v16 + 13) = 0;
            v11 = *(__int64 (__fastcall ***)())(a1 + 120);
          }
          while ( v10 != v9 );
        }
      }
      else
      {
        if ( v13 < v7 )
        {
          v60 = off_4AE7F0;
          v59.m128i_i64[0] = v13;
          v58 = v12;
          v41 = qvector_reserve(v14, 0, v7, 128);
          v42 = _mm_load_si128(&v58);
          v11 = (__int64 (__fastcall **)())v41;
          v43 = *(_QWORD *)(a1 + 136);
          v44 = *(_QWORD *)(a1 + 128);
          *(_QWORD *)(a1 + 136) = v59.m128i_i64[0];
          v45 = v60;
          v46 = v11;
          v62 = v43;
          v47 = *(_QWORD *)(a1 + 120);
          v48 = v44 - 1;
          v49 = v47;
          if ( v48 >= 0 )
          {
            do
            {
              *v46 = *(__int64 (__fastcall **)())v47;
              v50 = *(_DWORD *)(v47 + 8);
              *((__m128i *)v46 + 1) = v42;
              *((_DWORD *)v46 + 2) = v50;
              v46[4] = *(__int64 (__fastcall **)())(v47 + 32);
              v51 = *(_DWORD *)(v47 + 40);
              v46[6] = (__int64 (__fastcall *)())v45;
              *((_DWORD *)v46 + 10) = v51;
              v46[7] = *(__int64 (__fastcall **)())(v47 + 56);
              *((_DWORD *)v46 + 16) = *(_DWORD *)(v47 + 64);
              v52 = *(__int64 (__fastcall **)())(v47 + 88);
              *(__m128i *)(v46 + 9) = _mm_loadu_si128((const __m128i *)(v47 + 72));
              v46[11] = v52;
              v53 = *(__int64 (__fastcall **)())(v47 + 96);
              v54 = _mm_loadu_si128((const __m128i *)(v47 + 104));
              *(_QWORD *)(v47 + 96) = 0;
              v46[12] = v53;
              *(__m128i *)(v46 + 13) = v54;
              v55 = *(__int64 (__fastcall **)())(v47 + 120);
              *(_QWORD *)(v47 + 112) = 0;
              v46[15] = v55;
              v56 = *(_QWORD *)(v47 + 96);
              if ( v56 )
              {
                *(_QWORD *)(v47 + 104) = 0;
                v61 = v45;
                v60 = v46;
                v58.m128i_i64[0] = v47;
                v59 = v42;
                qfree(v56);
                v45 = v61;
                v46 = v60;
                v42 = _mm_load_si128(&v59);
                v47 = v58.m128i_i64[0];
              }
              v47 += 128;
              v46 += 16;
              v39 = v48-- == 0;
            }
            while ( !v39 );
            v49 = *(_QWORD *)(a1 + 120);
          }
          v58 = v42;
          qfree(v49);
          v57 = v62;
          *(_QWORD *)(a1 + 120) = v11;
          v9 = *(_QWORD *)(a1 + 128);
          v12 = _mm_load_si128(&v58);
          *(_QWORD *)(a1 + 136) = v57;
        }
        if ( v9 < v10 )
        {
          do
          {
            v21 = v9++;
            v22 = &v11[16 * v21];
            *v22 = nullptr;
            *((_DWORD *)v22 + 2) = 0;
            v22[4] = (__int64 (__fastcall *)())-1LL;
            *((_DWORD *)v22 + 10) = -1;
            v22[6] = (__int64 (__fastcall *)())off_4AE7F0;
            v22[7] = (__int64 (__fastcall *)())-1LL;
            *((_DWORD *)v22 + 16) = -1;
            v22[11] = (__int64 (__fastcall *)())-1LL;
            v22[12] = nullptr;
            v22[15] = nullptr;
            *((__m128i *)v22 + 1) = v12;
            *(_OWORD *)(v22 + 9) = -1;
            *(_OWORD *)(v22 + 13) = 0;
            v11 = *(__int64 (__fastcall ***)())(a1 + 120);
          }
          while ( v10 != v9 );
        }
      }
      *(_QWORD *)(a1 + 128) = v10;
    }
    v9 = v10;
  }
  v17 = &v11[16 * v9];
  while ( v17 != v11 )
  {
    v18 = (__int64)v11;
    v11 += 16;
    sub_7AA70(v18, a2, v6);
  }
  if ( (unsigned __int8)sub_7AA70(a1 + 144, a2, v6) && (v4 = sub_7AA70(a1 + 272, a2, v6), (_BYTE)v4) )
  {
    v19 = *(_QWORD *)(a1 + 400);
    if ( v19 )
    {
      *(_QWORD *)(a1 + 408) = 0;
      qfree(v19);
      *(_QWORD *)(a1 + 400) = 0;
      *(_QWORD *)(a1 + 416) = 0;
    }
    v20 = *(_QWORD *)(a1 + 424);
    if ( v20 )
    {
      *(_QWORD *)(a1 + 432) = 0;
      qfree(v20);
      *(_QWORD *)(a1 + 424) = 0;
      *(_QWORD *)(a1 + 440) = 0;
    }
    clear_tinfo_t(a1 + 448);
    clear_tinfo_t(a1 + 456);
    *(_DWORD *)(a1 + 464) = sub_789A0(a2);
    *(_BYTE *)(a1 + 468) = (unsigned __int8)sub_78980(a2) != 0;
  }
  else
  {
    return 0;
  }
  return v4;
}
