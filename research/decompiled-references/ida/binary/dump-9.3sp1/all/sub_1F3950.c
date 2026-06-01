unsigned __int64 __fastcall sub_1F3950(__int64 a1)
{
  unsigned __int64 v1; // rsi
  __int64 v2; // rbp
  __int64 v3; // r12
  int v4; // r8d
  __int64 *v5; // rbx
  __int64 v6; // r15
  int *v7; // r14
  int *v8; // r13
  __int64 i; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned int v12; // edx
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  void *v17; // r13
  __m128i v18; // xmm0
  unsigned __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // r14
  unsigned int v25; // ebx
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // r12
  __int64 v29; // rbx
  __int64 *v30; // rbp
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // r12
  __int64 v34; // rbx
  __int64 *v35; // rbp
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // r12
  __int64 v39; // rbx
  __int64 *v40; // rbp
  __int64 v41; // rdi
  __int64 v43; // rax
  __int64 v44; // r13
  __int64 v45; // r14
  _DWORD *v46; // r10
  int v47; // eax
  unsigned int v48; // edx
  __int64 *v49; // r13
  __int64 v50; // r14
  __int64 *v51; // r15
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  int v55; // r9d
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  int v59; // r9d
  __m128i v61; // [rsp+8h] [rbp-158h] BYREF
  unsigned __int64 v62; // [rsp+18h] [rbp-148h]
  _DWORD *v63; // [rsp+20h] [rbp-140h]
  __int64 (__fastcall ***v64)(); // [rsp+28h] [rbp-138h]
  __int64 *v65; // [rsp+30h] [rbp-130h]
  __int64 (__fastcall **v66)(); // [rsp+38h] [rbp-128h] BYREF
  __int64 v67; // [rsp+40h] [rbp-120h]
  __int64 v68; // [rsp+48h] [rbp-118h]
  __int128 v69; // [rsp+50h] [rbp-110h]
  char v70; // [rsp+60h] [rbp-100h]
  __int64 v71; // [rsp+68h] [rbp-F8h]
  __int64 v72; // [rsp+70h] [rbp-F0h]
  __int64 (__fastcall **v73)(); // [rsp+78h] [rbp-E8h] BYREF
  __int64 v74; // [rsp+80h] [rbp-E0h] BYREF
  __int128 v75; // [rsp+88h] [rbp-D8h]
  __int64 v76[2]; // [rsp+98h] [rbp-C8h] BYREF
  __int64 v77; // [rsp+A8h] [rbp-B8h] BYREF
  __int128 v78; // [rsp+B0h] [rbp-B0h]
  __int64 v79[2]; // [rsp+C0h] [rbp-A0h] BYREF
  __int64 v80; // [rsp+D0h] [rbp-90h]
  __m128i v81; // [rsp+D8h] [rbp-88h]
  int v82; // [rsp+E8h] [rbp-78h]
  __int64 v83; // [rsp+F0h] [rbp-70h] BYREF
  __int128 v84; // [rsp+F8h] [rbp-68h]
  __int64 v85; // [rsp+108h] [rbp-58h] BYREF
  __int128 v86; // [rsp+110h] [rbp-50h]
  unsigned __int64 v87; // [rsp+120h] [rbp-40h]

  v87 = __readfsqword(0x28u);
  v74 = 0;
  v76[0] = 0;
  v76[1] = 0;
  v77 = 0;
  v79[0] = 0;
  v79[1] = 0;
  v80 = 0;
  v82 = 0;
  v73 = &off_4DED20;
  v83 = 0;
  v85 = 0;
  v75 = 0;
  v78 = 0;
  v81 = 0;
  v84 = 0;
  v86 = 0;
  v1 = *(int *)(a1 + 64);
  v62 = v1;
  if ( v1 )
  {
    v66 = nullptr;
    v64 = &v66;
    v67 = 0;
    v68 = 0;
    v65 = &v83;
    v69 = 0;
    sub_1F3610(&v83, v1, (unsigned __int64)&v66);
    if ( v68 )
    {
      *(_QWORD *)&v69 = 0;
      qfree(v68);
    }
    qfree((__int64)v66);
    if ( v62 != (_QWORD)v86 )
    {
      v69 = 0;
      v66 = nullptr;
      v67 = 0;
      v68 = 0;
      sub_1F3610(&v85, v62, (unsigned __int64)v64);
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree(v68);
      }
      qfree((__int64)v66);
    }
    if ( (int)v1 > 0 )
    {
      v2 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v2 >= *(_DWORD *)(a1 + 64) )
        {
          if ( !under_debugger )
            sub_383060(52719);
          goto LABEL_73;
        }
        v3 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v2);
        v4 = *(_DWORD *)(v3 + 72);
        v61.m128i_i64[0] = 40 * v2;
        v5 = (__int64 *)(40 * v2 + v83);
        if ( v4 )
          break;
        v6 = *(_QWORD *)(v3 + 64);
        if ( !*(_BYTE *)(v6 + 320) )
        {
          v43 = *(_QWORD *)(v6 + 440);
          if ( (int)v43 <= 0 )
            goto LABEL_20;
          v44 = 0;
          v45 = 104 * ((unsigned int)(v43 - 1) + 1LL);
          do
          {
            v46 = (_DWORD *)(v44 + *(_QWORD *)(v6 + 432));
            if ( !v46[23] )
            {
              if ( (*((_BYTE *)v46 + 25) & 1) != 0
                || (*(_BYTE *)(v6 + 2) & 8) == 0
                && (v63 = (_DWORD *)(v44 + *(_QWORD *)(v6 + 432)), (unsigned __int8)sub_36E2C0(v6, v63, 0))
                && (v47 = sub_1C3500(v63), v46 = v63, v47 >= *(_QWORD *)(v6 + 144)) )
              {
                v48 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 480) + 130LL);
                if ( v48 < v46[22] )
                  v48 = v46[22];
                sub_1C31B0(
                  (__int64)v46,
                  (__int64)v5,
                  v48,
                  *(_QWORD *)(*(_QWORD *)(v3 + 64) + 1440LL),
                  (__int64)(v46 + 20));
              }
            }
            v44 += 104;
          }
          while ( v45 != v44 );
          goto LABEL_19;
        }
        v7 = *(int **)(v6 + 456);
        v8 = &v7[*(_QWORD *)(v6 + 464)];
        if ( v7 != v8 )
        {
          for ( i = *(_QWORD *)(v3 + 64); ; i = *(_QWORD *)(v3 + 64) )
          {
            v10 = *(_QWORD *)(i + 1440);
            v11 = *(_QWORD *)(v6 + 432) + 104LL * *v7;
            v12 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 480) + 130LL);
            if ( v12 < *(_DWORD *)(v11 + 88) )
              v12 = *(_DWORD *)(v11 + 88);
            sub_1C31B0(v11, (__int64)v5, v12, v10, v11 + 80);
            if ( v8 == ++v7 )
              break;
          }
          goto LABEL_19;
        }
LABEL_20:
        sub_64280(v76, v5);
        sub_316CB0(&v77, v5 + 2);
        if ( v62 == ++v2 )
          goto LABEL_21;
      }
      v70 = 0;
      v49 = (__int64 *)(v85 + v61.m128i_i64[0]);
      v67 = 0;
      v68 = 0;
      v69 = 0u;
      v71 = 40 * v2 + v83;
      v72 = v85 + v61.m128i_i64[0];
      v66 = &off_4DECD0;
      sub_1EE830(v3, (__int64)v64);
      v50 = *(_QWORD *)(*(_QWORD *)(v3 + 480) + 112LL);
      v51 = (__int64 *)(v50 + 104);
      sub_64640(v5, (__int64 *)(v50 + 104), v52, v53, v54, v55);
      v50 += 120;
      sub_317C60(v5 + 2, v50);
      sub_64640(v49, v51, v56, v57, v58, v59);
      sub_317C60(v49 + 2, v50);
LABEL_19:
      v5 = (__int64 *)(v83 + v61.m128i_i64[0]);
      goto LABEL_20;
    }
LABEL_21:
    v13 = v83;
  }
  else
  {
    v13 = 0;
  }
  v65 = &v83;
  sub_648D0(v79, (__int64 *)v13);
  v16 = *(_QWORD *)(v13 + 24);
  v17 = nullptr;
  if ( v16 )
  {
    v65 = &v83;
    v17 = (void *)qalloc_or_throw(16 * v16, v13, v14, v15);
    memcpy(v17, *(const void **)(v13 + 16), 16 * v16);
  }
  v18 = _mm_unpacklo_epi64((__m128i)v16, (__m128i)v16);
  if ( v80 )
  {
    v61 = v18;
    v81.m128i_i64[0] = 0;
    qfree(v80);
    v18 = _mm_load_si128(&v61);
  }
  v80 = (__int64)v17;
  v81 = v18;
  v19 = *(int *)(a1 + 64);
  v65 = &v83;
  sub_1F3610(&v74, v19, (unsigned __int64)v76);
  v22 = sub_670E0((_QWORD *)a1, v19, v20, v21);
  sub_3111E0(v22, &v73);
  v23 = *(_DWORD *)(a1 + 64);
  v24 = 40;
  v25 = 1;
  if ( v23 > 1 )
  {
    while ( v25 < v23 )
    {
      v26 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * v25);
      v70 = 0;
      v67 = 0;
      v69 = 0u;
      v71 = v24 + v74;
      v72 = 0;
      v66 = &off_4DECF8;
      v68 = v26;
      sub_1EE830(v26, (__int64)&v66);
      v23 = *(_DWORD *)(a1 + 64);
      ++v25;
      v24 += 40;
      if ( v23 <= (int)v25 )
        goto LABEL_29;
    }
    if ( !under_debugger )
      sub_383060(52719);
LABEL_73:
    BUG();
  }
LABEL_29:
  v27 = v85;
  v73 = &off_4DED20;
  if ( v85 )
  {
    v28 = v86;
    if ( (_QWORD)v86 )
    {
      v29 = 0;
      do
      {
        v30 = (__int64 *)(v27 + 40 * v29);
        v31 = v30[2];
        if ( v31 )
        {
          v30[3] = 0;
          qfree(v31);
        }
        ++v29;
        qfree(*v30);
        v27 = v85;
      }
      while ( v28 != v29 );
    }
    *(_QWORD *)&v86 = 0;
    qfree(v27);
  }
  v32 = v83;
  if ( v83 )
  {
    v33 = v84;
    if ( (_QWORD)v84 )
    {
      v34 = 0;
      do
      {
        v35 = (__int64 *)(v32 + 40 * v34);
        v36 = v35[2];
        if ( v36 )
        {
          v35[3] = 0;
          qfree(v36);
        }
        ++v34;
        qfree(*v35);
        v32 = v83;
      }
      while ( v33 != v34 );
    }
    *(_QWORD *)&v84 = 0;
    qfree(v32);
  }
  v73 = (__int64 (__fastcall **)())&unk_4EBF08;
  if ( v80 )
  {
    v81.m128i_i64[0] = 0;
    qfree(v80);
  }
  qfree(v79[0]);
  if ( v77 )
  {
    *(_QWORD *)&v78 = 0;
    qfree(v77);
  }
  qfree(v76[0]);
  v37 = v74;
  if ( v74 )
  {
    v38 = v75;
    if ( (_QWORD)v75 )
    {
      v39 = 0;
      do
      {
        v40 = (__int64 *)(v37 + 40 * v39);
        v41 = v40[2];
        if ( v41 )
        {
          v40[3] = 0;
          qfree(v41);
        }
        ++v39;
        qfree(*v40);
        v37 = v74;
      }
      while ( v38 != v39 );
    }
    *(_QWORD *)&v75 = 0;
    qfree(v37);
  }
  return v87 - __readfsqword(0x28u);
}
