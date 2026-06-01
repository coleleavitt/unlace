unsigned __int64 __fastcall sub_49DF20(_QWORD *a1, _QWORD *a2, char a3)
{
  bool v4; // zf
  unsigned __int64 v5; // r12
  _QWORD *v6; // rbp
  __int64 v7; // r13
  _QWORD *v8; // r15
  _QWORD *v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 i; // r15
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 v16; // r12
  unsigned __int64 v17; // rbp
  __int64 v18; // rbx
  unsigned __int64 v19; // r15
  __int64 v20; // rdi
  __m128i **v22; // rbp
  __m128i *v23; // r13
  __m128i *v24; // r15
  __int64 v25; // rcx
  __m128i *v26; // rsi
  char *v27; // r14
  __int64 v28; // rdx
  __m128i v29; // xmm0
  __int64 v30; // rcx
  __int64 v31; // rdx
  __m128i v32; // xmm0
  __int64 v33; // rcx
  __int64 v34; // rdx
  __m128i v35; // xmm0
  __int64 v36; // rdx
  __m128i v37; // xmm0
  __int64 v38; // rcx
  __int64 v39; // rdx
  __m128i v40; // xmm0
  __int64 v41; // rcx
  __int64 v42; // rdx
  __m128i v43; // xmm0
  __int64 v44; // rcx
  __int64 v45; // rdx
  __m128i v46; // xmm0
  __int64 v47; // rcx
  __int64 v48; // rdx
  __m128i v49; // xmm0
  __int64 v50; // rdx
  __m128i v51; // xmm0
  __int32 v52; // edx
  char v53; // cl
  char v54; // cl
  __int32 v55; // ecx
  __int32 v56; // edx
  __m128i *v57; // r13
  __m128i *k; // r14
  __int64 v59; // rdx
  __int64 v60; // r13
  __int64 v61; // rdx
  __int64 v62; // r14
  __int64 v63; // rdi
  void *v64; // rdi
  __int64 v65; // rbp
  __int64 v66; // r13
  __int64 v67; // r12
  __int64 v68; // rdi
  unsigned __int64 v69; // [rsp+0h] [rbp-78h]
  __int64 *v70; // [rsp+0h] [rbp-78h]
  __int64 v71; // [rsp+0h] [rbp-78h]
  __int64 *v72; // [rsp+8h] [rbp-70h]
  unsigned __int64 j; // [rsp+8h] [rbp-70h]
  __int64 *v76; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v78; // [rsp+28h] [rbp-50h]
  unsigned __int64 v79; // [rsp+38h] [rbp-40h]

  v4 = a1[14] == 0;
  v79 = __readfsqword(0x28u);
  v5 = a1[12];
  if ( v4 )
  {
    if ( !a1[1] )
    {
      if ( a3 )
      {
        v70 = nullptr;
        v15 = *a2;
        v16 = a2[1];
        v76 = (__int64 *)(*a2 + 40LL);
        v72 = (__int64 *)(v16 + 40);
        goto LABEL_16;
      }
      return v79 - __readfsqword(0x28u);
    }
    v69 = 0;
    v6 = a1 + 2;
    do
    {
      switch_dbctx(*(int *)(a2[v69] + 8LL));
      v7 = a2[v69];
      sub_49DC00((__int64 *)(v7 + 40), v5);
      v8 = (_QWORD *)*v6;
      v9 = (_QWORD *)(*v6 + 432LL * v6[1]);
      if ( (_QWORD *)*v6 != v9 )
      {
        do
        {
          v10 = (__int64)v8;
          v11 = *(_QWORD *)(v7 + 40) + 424LL * v8[53];
          v8 += 54;
          sub_495CB0(v11, v10);
        }
        while ( v8 != v9 );
        v9 = (_QWORD *)*v6;
      }
      if ( v9 )
      {
        v12 = v6[1];
        if ( v12 )
        {
          for ( i = 0; i != v12; ++i )
          {
            v14 = 3 * i;
            sub_496580((__int64)&v9[18 * v14]);
            v9 = (_QWORD *)*v6;
          }
        }
        v6[1] = 0;
        qfree(v9);
        *v6 = 0;
        v6[2] = 0;
      }
      ++v69;
      v6 += 3;
    }
    while ( v69 < a1[1] );
  }
  else
  {
    ptr = nullptr;
    v78 = 0;
    sub_49DC00((__int64 *)&ptr, v5);
    v22 = (__m128i **)(a1 + 2);
    for ( j = 0; j < a1[1]; v22 += 3 )
    {
      switch_dbctx(*(int *)(a2[j] + 8LL));
      v23 = *v22;
      v24 = &(*v22)[27 * (_QWORD)v22[1]];
      if ( *v22 != v24 )
      {
        do
        {
          v25 = v23->m128i_i64[0];
          v26 = v23 + 15;
          v23 += 27;
          v27 = (char *)ptr + 424 * v23[-1].m128i_i64[1];
          v28 = *(_QWORD *)v27;
          *(_QWORD *)v27 = v25;
          v29 = _mm_loadu_si128((const __m128i *)(v27 + 8));
          *((_QWORD *)v27 + 1) = v23[-27].m128i_i64[1];
          *((_QWORD *)v27 + 2) = v23[-26].m128i_i64[0];
          v30 = v23[-26].m128i_i64[1];
          v23[-27].m128i_i64[0] = v28;
          *(__m128i *)((char *)v23 - 424) = v29;
          v31 = *((_QWORD *)v27 + 3);
          v32 = _mm_loadu_si128((const __m128i *)v27 + 2);
          *((_QWORD *)v27 + 3) = v30;
          *((_QWORD *)v27 + 4) = v23[-25].m128i_i64[0];
          *((_QWORD *)v27 + 5) = v23[-25].m128i_i64[1];
          v33 = v23[-24].m128i_i64[0];
          v23[-26].m128i_i64[1] = v31;
          v23[-25] = v32;
          v34 = *((_QWORD *)v27 + 6);
          v35 = _mm_loadu_si128((const __m128i *)(v27 + 56));
          *((_QWORD *)v27 + 6) = v33;
          *((_QWORD *)v27 + 7) = v23[-24].m128i_i64[1];
          *((_QWORD *)v27 + 8) = v23[-23].m128i_i64[0];
          *(__m128i *)((char *)v23 - 376) = v35;
          v23[-24].m128i_i64[0] = v34;
          v36 = *((_QWORD *)v27 + 9);
          v37 = _mm_loadu_si128((const __m128i *)v27 + 5);
          *((_QWORD *)v27 + 9) = v23[-23].m128i_i64[1];
          *((_QWORD *)v27 + 10) = v23[-22].m128i_i64[0];
          *((_QWORD *)v27 + 11) = v23[-22].m128i_i64[1];
          v38 = v23[-21].m128i_i64[0];
          v23[-23].m128i_i64[1] = v36;
          v23[-22] = v37;
          v39 = *((_QWORD *)v27 + 12);
          v40 = _mm_loadu_si128((const __m128i *)(v27 + 104));
          *((_QWORD *)v27 + 12) = v38;
          *((_QWORD *)v27 + 13) = v23[-21].m128i_i64[1];
          *((_QWORD *)v27 + 14) = v23[-20].m128i_i64[0];
          LODWORD(v38) = v23[-20].m128i_i32[2];
          v23[-21].m128i_i64[0] = v39;
          *(__m128i *)((char *)v23 - 328) = v40;
          LODWORD(v39) = *((_DWORD *)v27 + 30);
          *((_DWORD *)v27 + 30) = v38;
          v41 = v23[-19].m128i_i64[0];
          v23[-20].m128i_i32[2] = v39;
          v42 = *((_QWORD *)v27 + 16);
          v43 = _mm_loadu_si128((const __m128i *)(v27 + 136));
          *((_QWORD *)v27 + 16) = v41;
          *((_QWORD *)v27 + 17) = v23[-19].m128i_i64[1];
          *((_QWORD *)v27 + 18) = v23[-18].m128i_i64[0];
          v23[-19].m128i_i64[0] = v42;
          v44 = v23[-18].m128i_i64[1];
          *(__m128i *)((char *)v23 - 296) = v43;
          v45 = *((_QWORD *)v27 + 19);
          v46 = _mm_loadu_si128((const __m128i *)v27 + 10);
          *((_QWORD *)v27 + 19) = v44;
          *((_QWORD *)v27 + 20) = v23[-17].m128i_i64[0];
          *((_QWORD *)v27 + 21) = v23[-17].m128i_i64[1];
          LODWORD(v44) = v23[-16].m128i_i32[0];
          v23[-18].m128i_i64[1] = v45;
          v23[-17] = v46;
          LODWORD(v45) = *((_DWORD *)v27 + 44);
          *((_DWORD *)v27 + 44) = v44;
          LODWORD(v44) = v23[-16].m128i_i32[1];
          v23[-16].m128i_i32[0] = v45;
          LODWORD(v45) = *((_DWORD *)v27 + 45);
          *((_DWORD *)v27 + 45) = v44;
          LOBYTE(v44) = v23[-16].m128i_i8[8];
          v23[-16].m128i_i32[1] = v45;
          LOBYTE(v45) = v27[184];
          v27[184] = v44;
          v47 = v23[-15].m128i_i64[0];
          v23[-16].m128i_i8[8] = v45;
          v48 = *((_QWORD *)v27 + 24);
          v49 = _mm_loadu_si128((const __m128i *)(v27 + 200));
          *((_QWORD *)v27 + 24) = v47;
          *((_QWORD *)v27 + 25) = v23[-15].m128i_i64[1];
          *((_QWORD *)v27 + 26) = v23[-14].m128i_i64[0];
          v23[-15].m128i_i64[0] = v48;
          *(__m128i *)((char *)v23 - 232) = v49;
          v50 = *((_QWORD *)v27 + 27);
          v51 = _mm_loadu_si128((const __m128i *)v27 + 14);
          *((_QWORD *)v27 + 27) = v23[-14].m128i_i64[1];
          *((_QWORD *)v27 + 28) = v23[-13].m128i_i64[0];
          *((_QWORD *)v27 + 29) = v23[-13].m128i_i64[1];
          v23[-14].m128i_i64[1] = v50;
          v23[-13] = v51;
          sub_6B9000(v27 + 240, v26);
          v52 = *((_DWORD *)v27 + 103);
          *((_DWORD *)v27 + 103) = v23[-2].m128i_i32[3];
          v53 = v23[-1].m128i_i8[0];
          v23[-2].m128i_i32[3] = v52;
          LOBYTE(v52) = v27[416];
          v27[416] = v53;
          v54 = v23[-1].m128i_i8[1];
          v23[-1].m128i_i8[0] = v52;
          LOBYTE(v52) = v27[417];
          v27[417] = v54;
          v55 = v23[-2].m128i_i32[2];
          v23[-1].m128i_i8[1] = v52;
          v56 = *((_DWORD *)v27 + 102);
          *((_DWORD *)v27 + 102) = v55;
          v23[-2].m128i_i32[2] = v56;
        }
        while ( v24 != v23 );
        v24 = *v22;
      }
      if ( v24 )
      {
        v57 = v22[1];
        if ( v57 )
        {
          for ( k = nullptr; k != v57; k = (__m128i *)((char *)k + 1) )
          {
            v59 = 3LL * (_QWORD)k;
            sub_496580((__int64)v24[9 * v59].m128i_i64);
            v24 = *v22;
          }
        }
        v22[1] = nullptr;
        qfree(v24);
        *v22 = nullptr;
        v22[2] = nullptr;
      }
      v60 = a2[j];
      sub_49DC00((__int64 *)(v60 + 40), v5 - a1[14]);
      if ( v5 )
      {
        v61 = 0;
        v62 = 0;
        v63 = 0;
        do
        {
          while ( !*(_DWORD *)(a1[11] + 4 * v62) )
          {
            ++v62;
            v61 += 424;
            if ( v62 == v5 )
              goto LABEL_43;
          }
          v71 = v61;
          ++v62;
          sub_495CB0(*(_QWORD *)(v60 + 40) + 424 * v63++, (__int64)ptr + v61);
          v61 = v71 + 424;
        }
        while ( v62 != v5 );
      }
      else
      {
        v63 = 0;
      }
LABEL_43:
      if ( *(_QWORD *)(v60 + 48) != v63 )
      {
        if ( !under_debugger )
          interr(1962);
        BUG();
      }
      ++j;
    }
    v64 = ptr;
    if ( ptr )
    {
      v65 = v78;
      if ( (_QWORD)v78 )
      {
        v66 = 0;
        v67 = 0;
        do
        {
          v68 = (__int64)v64 + v66;
          ++v67;
          v66 += 424;
          sub_496580(v68);
          v64 = ptr;
        }
        while ( v65 != v67 );
      }
      *(_QWORD *)&v78 = 0;
      qfree(v64);
      if ( !a3 )
        return v79 - __readfsqword(0x28u);
      goto LABEL_14;
    }
  }
  if ( !a3 )
    return v79 - __readfsqword(0x28u);
LABEL_14:
  v70 = nullptr;
  v15 = *a2;
  v16 = a2[1];
  v76 = (__int64 *)(*a2 + 40LL);
  v72 = (__int64 *)(v16 + 40);
  if ( a1[1] > 2u )
    v70 = (__int64 *)(a2[2] + 40LL);
LABEL_16:
  v17 = *(_QWORD *)(v15 + 48);
  if ( v17 )
  {
    v18 = 0;
    v19 = 0;
    v17 = 0;
    do
    {
      v20 = *(_QWORD *)(v15 + 40);
      if ( *(_DWORD *)(v20 + v18 + 176) || *(_DWORD *)(*(_QWORD *)(v16 + 40) + v18 + 176) )
      {
        if ( v17 < v19 )
        {
          sub_495CB0(424 * v17 + v20, v20 + v18);
          sub_495CB0(424 * v17 + *(_QWORD *)(v16 + 40), *(_QWORD *)(v16 + 40) + v18);
          if ( v70 )
            sub_495CB0(*v70 + 424 * v17, *v70 + v18);
        }
        ++v17;
      }
      ++v19;
      v18 += 424;
    }
    while ( v19 < *(_QWORD *)(v15 + 48) );
    v15 = *a2;
  }
  switch_dbctx(*(int *)(v15 + 8));
  sub_49DC00(v76, v17);
  switch_dbctx(*(int *)(a2[1] + 8LL));
  sub_49DC00(v72, v17);
  if ( !v70 )
    return v79 - __readfsqword(0x28u);
  switch_dbctx(*(int *)(a2[2] + 8LL));
  return sub_49DC00(v70, v17);
}
