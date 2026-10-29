__int64 __fastcall sub_2884E0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 *v3; // rdi
  __int64 v4; // rsi
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // r15
  int v13; // edx
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 **v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 *i; // r13
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 *v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rdi
  unsigned int v27; // r14d
  __int64 v28; // rdi
  __int64 v29; // r13
  __int64 v30; // r12
  __int64 v31; // rbp
  __int64 v32; // rbx
  __int64 v33; // rdi
  __int64 v35; // rbx
  __int64 v36; // rax
  int v37; // ecx
  int v38; // edx
  int v39; // ecx
  int v40; // edx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __m128i v46; // xmm1
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rdx
  __m128i v52; // xmm0
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 k; // rbx
  __int64 v56; // rbp
  __int64 v57; // r13
  __int64 *v58; // rax
  __int64 v59; // rsi
  __int64 v60; // r14
  __int64 v61; // rdx
  __int64 v62; // rcx
  _QWORD *v63; // rbx
  __int64 v64; // r8
  __int64 v65; // rax
  __int64 *j; // r13
  __int64 v67; // r12
  __int64 v68; // rax
  __int64 *v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rax
  _QWORD *v72; // [rsp+0h] [rbp-100h]
  _QWORD *v73; // [rsp+10h] [rbp-F0h]
  int v74; // [rsp+18h] [rbp-E8h]
  int v75; // [rsp+1Ch] [rbp-E4h]
  __int64 v76; // [rsp+20h] [rbp-E0h]
  _QWORD *v77; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD *v78; // [rsp+30h] [rbp-D0h]
  __int64 v79; // [rsp+38h] [rbp-C8h] BYREF
  __m128i v80; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v81; // [rsp+50h] [rbp-B0h]
  __int128 v82; // [rsp+58h] [rbp-A8h]
  __int64 v83; // [rsp+68h] [rbp-98h]
  __int128 v84; // [rsp+70h] [rbp-90h]
  __int128 v85; // [rsp+80h] [rbp-80h]
  __int128 v86; // [rsp+90h] [rbp-70h]
  __int128 v87; // [rsp+A0h] [rbp-60h]
  __int64 v88; // [rsp+B0h] [rbp-50h]
  char v89; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v90; // [rsp+C0h] [rbp-40h]

  v90 = __readfsqword(0x28u);
  v80 = 0;
  v79 = 0;
  v81 = 0;
  v83 = 0;
  v89 = 0;
  v88 = -1;
  v82 = 0;
  v84 = 0;
  v85 = 0;
  v86 = 0;
  v87 = 0;
  sub_283C00(&v77, a1, a2);
  v76 = a1[8];
  v72 = v77;
  v73 = v78;
  v2 = v78;
  while ( 1 )
  {
    v3 = &v79;
    v4 = (__int64)(v2 + 2);
    v5 = sub_287D00(&v79, (__int64)(v2 + 2), 0);
    if ( v5 == 4 )
    {
      if ( !under_debugger )
        sub_383060(51644);
      BUG();
    }
    if ( v5 > 4 )
      break;
    if ( !v5 )
    {
      v2 = (_QWORD *)*v2;
      if ( v72 != v2 )
        continue;
    }
    goto LABEL_6;
  }
  if ( v5 - 5 <= 1 )
  {
LABEL_18:
    v27 = 0;
    goto LABEL_19;
  }
LABEL_6:
  if ( v80.m128i_i64[0] <= 2uLL )
    goto LABEL_18;
  v74 = 0;
  v8 = 0;
  v75 = 0;
  do
  {
    v17 = *(_QWORD *)(v81 + 8 * v8);
    if ( v17 )
    {
      v9 = (_QWORD *)j__qalloc_or_throw(32, v4, v6, v7);
      *v9 = -1;
      v12 = v9;
      v9[1] = -4294967226LL;
      v9[3] = 0;
      v9[2] = 0xFFFFFFFFLL;
      *v9 = *(_QWORD *)v17;
      v13 = *(_DWORD *)(v17 + 8);
      *(_QWORD *)v17 = -1;
      LODWORD(v9) = *((_DWORD *)v9 + 2);
      *((_DWORD *)v12 + 2) = v13;
      v14 = *(_DWORD *)(v17 + 12);
      *(_DWORD *)(v17 + 8) = (_DWORD)v9;
      LODWORD(v9) = *((_DWORD *)v12 + 3);
      *((_DWORD *)v12 + 3) = v14;
      v15 = *(_QWORD *)(v17 + 24);
      *(_DWORD *)(v17 + 12) = (_DWORD)v9;
      v16 = v12[3];
      v12[3] = v15;
      *(_QWORD *)(v17 + 24) = v16;
    }
    else
    {
      v18 = (__int64 **)(v83 + 24LL * v75);
      v12 = sub_241330((__int64)v3, v4, 3LL * v75, v7);
      if ( (_QWORD)v87 == *((_QWORD *)&v87 + 1) )
      {
        v20 = *v12;
      }
      else
      {
        v20 = *(_QWORD *)(v87 + 16);
        *v12 = v20;
      }
      if ( v20 == -1 )
      {
        v58 = v18[2];
        *v12 = v58;
        if ( v58 == (__int64 *)-1LL )
          sub_27EDC0();
      }
      for ( i = *v18; i != v18[1]; i = (__int64 *)*i )
      {
        v22 = v12[3];
        v23 = qalloc_or_throw(48, v4, v19, v10);
        v4 = 0xFFFFFFFFLL;
        *(_QWORD *)(v23 + 24) = -4294967226LL;
        *(_QWORD *)(v23 + 16) = -1;
        *(_QWORD *)(v23 + 40) = 0;
        *(_QWORD *)(v23 + 32) = 0xFFFFFFFFLL;
        *(_QWORD *)v23 = v22;
        v24 = *(__int64 **)(v22 + 8);
        *(_QWORD *)(v23 + 8) = v24;
        *v24 = v23;
        *(_QWORD *)(v22 + 8) = v23;
        ++*(_QWORD *)(v22 + 16);
        v25 = *(_QWORD *)(v23 + 16);
        *(_QWORD *)(v23 + 16) = i[2];
        LODWORD(v24) = *((_DWORD *)i + 6);
        i[2] = v25;
        LODWORD(v25) = *(_DWORD *)(v23 + 24);
        *(_DWORD *)(v23 + 24) = (_DWORD)v24;
        LODWORD(v24) = *((_DWORD *)i + 7);
        *((_DWORD *)i + 6) = v25;
        LODWORD(v25) = *(_DWORD *)(v23 + 28);
        *(_DWORD *)(v23 + 28) = (_DWORD)v24;
        v26 = i[5];
        *((_DWORD *)i + 7) = v25;
        v10 = *(_QWORD *)(v23 + 40);
        *(_QWORD *)(v23 + 40) = v26;
        i[5] = v10;
      }
      ++v75;
    }
    v4 = (__int64)v12;
    v3 = (__int64 *)(v79 + 56 * v8);
    sub_256B30((__int64)v3, (__int64)v12, v79, v10, v11);
    ++v74;
    v6 = v80.m128i_i64[0];
    v8 = v74;
  }
  while ( (unsigned __int64)v74 < v80.m128i_i64[0] );
  if ( v89 )
  {
    v59 = v79;
    if ( v80.m128i_i64[1] < (unsigned __int64)(v80.m128i_i64[0] + 1) )
    {
      v3 = &v79;
      v79 = qvector_reserve((__int64)&v79, v79, v80.m128i_i64[0] + 1, 56);
      v6 = v80.m128i_i64[0];
      v59 = v79;
    }
    v60 = v59 + 56 * v6;
    *(_QWORD *)v60 = -1;
    *(_QWORD *)(v60 + 12) = -1;
    *(_DWORD *)(v60 + 8) = 70;
    *(_OWORD *)(v60 + 24) = 0;
    *(_OWORD *)(v60 + 40) = 0;
    ++v80.m128i_i64[0];
    v63 = sub_241330((__int64)v3, v59, v6, 7 * v6);
    if ( (_QWORD)v87 == *((_QWORD *)&v87 + 1) )
    {
      if ( *v63 != -1 )
      {
LABEL_49:
        v4 = (__int64)v63;
        sub_256B30(v60, (__int64)v63, v61, v62, v64);
        goto LABEL_32;
      }
    }
    else
    {
      v65 = *(_QWORD *)(v87 + 16);
      *v63 = v65;
      if ( v65 != -1 )
      {
LABEL_47:
        for ( j = (__int64 *)v87; j != *((__int64 **)&v87 + 1); j = (__int64 *)*j )
        {
          v67 = v63[3];
          v68 = qalloc_or_throw(48, v59, v61, v62);
          v59 = 0xFFFFFFFFLL;
          *(_QWORD *)(v68 + 24) = -4294967226LL;
          *(_QWORD *)(v68 + 16) = -1;
          *(_QWORD *)(v68 + 40) = 0;
          *(_QWORD *)(v68 + 32) = 0xFFFFFFFFLL;
          *(_QWORD *)v68 = v67;
          v69 = *(__int64 **)(v67 + 8);
          *(_QWORD *)(v68 + 8) = v69;
          *v69 = v68;
          *(_QWORD *)(v67 + 8) = v68;
          ++*(_QWORD *)(v67 + 16);
          v70 = *(_QWORD *)(v68 + 16);
          *(_QWORD *)(v68 + 16) = j[2];
          LODWORD(v69) = *((_DWORD *)j + 6);
          j[2] = v70;
          LODWORD(v70) = *(_DWORD *)(v68 + 24);
          *(_DWORD *)(v68 + 24) = (_DWORD)v69;
          LODWORD(v69) = *((_DWORD *)j + 7);
          *((_DWORD *)j + 6) = v70;
          LODWORD(v70) = *(_DWORD *)(v68 + 28);
          *(_DWORD *)(v68 + 28) = (_DWORD)v69;
          v62 = j[5];
          *((_DWORD *)j + 7) = v70;
          v61 = *(_QWORD *)(v68 + 40);
          *(_QWORD *)(v68 + 40) = v62;
          j[5] = v61;
        }
        goto LABEL_49;
      }
    }
    v71 = v88;
    *v63 = v88;
    if ( v71 == -1 )
      sub_27EDC0();
    goto LABEL_47;
  }
LABEL_32:
  if ( (_QWORD)v85 )
    *((_QWORD *)&v85 + 1) = v85;
  v35 = j__qalloc_or_throw(136, v4, v6, v7);
  *(_QWORD *)v35 = -1;
  *(_QWORD *)(v35 + 8) = 0xFFFFFFFF00000000LL;
  *(_OWORD *)(v35 + 24) = 0;
  *(_QWORD *)(v35 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v35 + 40) = 0;
  *(_QWORD *)(v35 + 48) = 0;
  *(_DWORD *)(v35 + 56) = 0;
  *(_QWORD *)(v35 + 64) = 0;
  *(_QWORD *)(v35 + 72) = 0;
  *(_QWORD *)(v35 + 80) = 0;
  v36 = *((_QWORD *)&v85 + 1);
  *(_OWORD *)(v35 + 88) = 0;
  *(_OWORD *)(v35 + 120) = 0;
  *(_QWORD *)(v35 + 104) = 0;
  *(_QWORD *)(v35 + 112) = 0;
  *(_QWORD *)v35 = *(_QWORD *)v36;
  v37 = *(_DWORD *)(v36 + 8);
  *(_QWORD *)v36 = -1;
  v38 = *(_DWORD *)(v35 + 8);
  *(_DWORD *)(v35 + 8) = v37;
  v39 = *(_DWORD *)(v36 + 12);
  *(_DWORD *)(v36 + 8) = v38;
  v40 = *(_DWORD *)(v35 + 12);
  *(_DWORD *)(v35 + 12) = v39;
  v41 = *(_QWORD *)(v36 + 24);
  *(_DWORD *)(v36 + 12) = v40;
  v42 = *(_QWORD *)(v35 + 24);
  *(_QWORD *)(v35 + 24) = v41;
  v43 = *(_QWORD *)(v36 + 32);
  *(_QWORD *)(v36 + 24) = v42;
  v44 = *(_QWORD *)(v35 + 32);
  *(_QWORD *)(v35 + 32) = v43;
  v45 = *(_QWORD *)(v36 + 40);
  v46 = _mm_loadu_si128(&v80);
  *(_QWORD *)(v36 + 32) = v44;
  v47 = *(_QWORD *)(v35 + 40);
  *(_QWORD *)(v35 + 40) = v45;
  v48 = *(_QWORD *)(v36 + 48);
  *(_QWORD *)(v36 + 40) = v47;
  v49 = *(_QWORD *)(v35 + 48);
  *(_QWORD *)(v35 + 48) = v48;
  LODWORD(v48) = *(_DWORD *)(v36 + 56);
  *(_QWORD *)(v36 + 48) = v49;
  LODWORD(v49) = *(_DWORD *)(v35 + 56);
  *(_DWORD *)(v35 + 56) = v48;
  *(_DWORD *)(v36 + 56) = v49;
  v50 = *(_QWORD *)(v35 + 112);
  v51 = v79;
  v52 = _mm_loadu_si128((const __m128i *)(v35 + 120));
  *(__m128i *)(v35 + 120) = v46;
  v79 = v50;
  v53 = v86;
  *(_QWORD *)(v35 + 112) = v51;
  v54 = *(_QWORD *)(v53 + 24);
  v80 = v52;
  sub_2420C0(v35, v76, v73[2], v54 + 8);
  sub_255050((__int64)(v73 + 2));
  *((_DWORD *)v73 + 6) = 77;
  v73[5] = v35;
  if ( *((_QWORD *)&v86 + 1) )
  {
    for ( k = *v73; (_QWORD *)k != v72; k = v56 )
    {
      v56 = *(_QWORD *)k;
      v57 = *((_QWORD *)&v86 + 1);
      **(_QWORD **)(k + 8) = *(_QWORD *)k;
      *(_QWORD *)(v56 + 8) = *(_QWORD *)(k + 8);
      sub_255050(k + 16);
      qfree(k);
      --v72[2];
      if ( k + 16 == v57 )
        break;
    }
  }
  v27 = 1;
LABEL_19:
  if ( v83 )
  {
    *(_QWORD *)&v84 = 0;
    qfree(v83);
  }
  if ( v81 )
  {
    *(_QWORD *)&v82 = 0;
    qfree(v81);
  }
  v28 = v79;
  if ( v79 )
  {
    v29 = v80.m128i_i64[0];
    if ( v80.m128i_i64[0] )
    {
      v30 = 0;
      v31 = 0;
      do
      {
        v32 = v28 + v30;
        v33 = *(_QWORD *)(v28 + v30 + 32);
        if ( v33 )
        {
          *(_QWORD *)(v32 + 40) = 0;
          qfree(v33);
        }
        ++v31;
        v30 += 56;
        sub_255050(v32);
        v28 = v79;
      }
      while ( v29 != v31 );
    }
    v80.m128i_i64[0] = 0;
    qfree(v28);
  }
  return v27;
}
