__int64 __fastcall sub_206BC0(_QWORD *a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r13
  int v10; // eax
  unsigned int v13; // r15d
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // r9d
  __int64 v23; // r8
  __int64 v24; // rdi
  __int64 v25; // rsi
  int v26; // eax
  __int64 v27; // r14
  __int64 v28; // rdi
  __int64 v30; // rax
  unsigned __int64 *v31; // rsi
  __int64 v32; // rdi
  __m128i v33; // xmm0
  int v34; // r12d
  __int64 v35; // rdi
  __int64 v36; // rax
  int v37; // r12d
  __int64 v38; // rax
  unsigned __int64 v39; // r13
  unsigned __int64 v40; // r12
  __int64 v41; // rsi
  unsigned __int64 v42; // rax
  int v43; // r12d
  _DWORD *v44; // r13
  __int64 v45; // rdx
  _DWORD *v46; // rax
  char v47; // al
  int v48; // [rsp+0h] [rbp-118h]
  int v49; // [rsp+8h] [rbp-110h]
  char v50; // [rsp+Ch] [rbp-10Ch]
  int v51; // [rsp+10h] [rbp-108h]
  int v52; // [rsp+18h] [rbp-100h]
  __int64 v53[2]; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v54; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v55; // [rsp+38h] [rbp-E0h]
  __int64 v56[2]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v57; // [rsp+60h] [rbp-B8h] BYREF
  __int128 v58; // [rsp+68h] [rbp-B0h]
  __int64 v59; // [rsp+80h] [rbp-98h] BYREF
  __int128 v60; // [rsp+88h] [rbp-90h] BYREF
  __int128 v61; // [rsp+98h] [rbp-80h]
  __int128 v62; // [rsp+B0h] [rbp-68h] BYREF
  __m128i v63; // [rsp+C0h] [rbp-58h]
  unsigned __int64 v64; // [rsp+D8h] [rbp-40h]

  v7 = *(int *)(a1[9] + 44LL);
  v64 = __readfsqword(0x28u);
  v8 = a1[1];
  v9 = *(_QWORD *)(v8 + 432) + 104 * v7;
  v10 = *(_DWORD *)(v9 + 24);
  if ( (v10 & 0x40) != 0 )
    return 0;
  if ( (v10 & 0x100) == 0 )
    goto LABEL_5;
  v13 = *(unsigned __int8 *)(v8 + 320);
  if ( (_BYTE)v13 )
    return 0;
  if ( (v10 & 0x8000) != 0 )
    return v13;
LABEL_5:
  v14 = a1[2];
  v53[1] = 0;
  v54 = 0;
  v55 = 0;
  sub_127FE0(v14, (__int64)v53, a2, 0, a5, a6, v48, v49, v51, v52, 0);
  v15 = a1[1];
  v56[0] = 0;
  v56[1] = 0;
  v57 = 0;
  v58 = 0;
  sub_1C3380(v9, v15, (__int64)v56, 0);
  sub_64640(v53, v56, v16, v17, v18, v19);
  sub_317C60(&v54, &v57);
  v23 = *(unsigned int *)(v9 + 92);
  if ( (_DWORD)v23 )
    goto LABEL_22;
  v24 = *(_QWORD *)(a2 + 8);
  if ( *(_DWORD *)v24 == 2 )
  {
    v45 = *(_QWORD *)(v24 + 8);
    v46 = *(_DWORD **)v45;
    v21 = *(_QWORD *)v45 + 24LL * *(_QWORD *)(v45 + 8);
    if ( *(_QWORD *)v45 == v21 )
      goto LABEL_8;
    while ( (unsigned int)(*v46 - 3) > 1 )
    {
      v46 += 6;
      if ( (_DWORD *)v21 == v46 )
        goto LABEL_8;
    }
LABEL_57:
    if ( (unsigned int)sub_1C3500((_DWORD *)v24) != -1 )
      goto LABEL_19;
    goto LABEL_8;
  }
  if ( (unsigned int)(*(_DWORD *)v24 - 3) <= 1 )
    goto LABEL_57;
LABEL_8:
  v25 = a1[1];
  v20 = *(unsigned int *)(v25 + 792);
  if ( (_DWORD)v20 )
  {
    v26 = *(_DWORD *)(a1[9] + 44LL);
    if ( (int)v20 > v26 && a3 != -1 )
      goto LABEL_19;
    if ( (int)v20 > 0 )
    {
      v27 = 0;
      while ( 1 )
      {
        if ( v26 != (_DWORD)v27 )
        {
          v59 = 0;
          v61 = 0;
          v60 = 0u;
          sub_1C3380(*(_QWORD *)(v25 + 432) + 104 * v27, v25, (__int64)&v59, 0);
          if ( (unsigned __int8)sub_64780(&v59, v53) )
          {
            v28 = *((_QWORD *)&v60 + 1);
LABEL_16:
            if ( v28 )
            {
              *(_QWORD *)&v61 = 0;
              qfree(v28);
            }
            qfree(v59);
            goto LABEL_19;
          }
          v47 = sub_318470((char *)&v60 + 8, &v54);
          v28 = *((_QWORD *)&v60 + 1);
          if ( v47 )
            goto LABEL_16;
          if ( *((_QWORD *)&v60 + 1) )
          {
            *(_QWORD *)&v61 = 0;
            qfree(*((__int64 *)&v60 + 1));
          }
          qfree(v59);
          v25 = a1[1];
        }
        if ( *(_DWORD *)(v25 + 792) <= (int)++v27 )
          break;
        v26 = *(_DWORD *)(a1[9] + 44LL);
      }
    }
  }
LABEL_22:
  sub_64640(v53, a1 + 18, v20, v21, v23, v22);
  sub_317C60(&v54, a1 + 20);
  if ( (unsigned __int8)sub_64880(v53) && !(_QWORD)v55 )
    goto LABEL_24;
  v63 = 0u;
  v62 = 0;
  v30 = operator new(0x18u);
  *(_QWORD *)v30 = v53;
  v31 = (unsigned __int64 *)a1[8];
  *(_QWORD *)(v30 + 8) = v9;
  v32 = a1[1];
  v33 = _mm_loadl_epi64((const __m128i *)&off_4DEEE8);
  *(_DWORD *)(v30 + 16) = a3;
  *(_QWORD *)&v62 = v30;
  v63 = _mm_unpacklo_epi64(v33, (__m128i)(unsigned __int64)sub_2016C0);
  v34 = sub_201A80(v32, v31, v53, (__int64)&v62);
  if ( v63.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v63.m128i_i64[0])(&v62, &v62, 3);
  if ( !v34 )
  {
    if ( v50 || (unsigned __int8)sub_64880(v53) && !(_QWORD)v55 )
    {
LABEL_24:
      v13 = 1;
      goto LABEL_25;
    }
    v62 = (unsigned __int64)v53;
    v35 = a1[1];
    v36 = a1[23];
    v63 = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_4DEEF0), (__m128i)(unsigned __int64)sub_201610);
    v37 = sub_201A80(v35, (unsigned __int64 *)(**(_QWORD **)(v36 + 72) + 24LL * *(int *)(v9 + 92)), v53, (__int64)&v62);
    if ( v63.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v63.m128i_i64[0])(&v62, &v62, 3);
    if ( !v37 )
    {
      if ( !*(_DWORD *)(v9 + 92) )
      {
        v38 = a1[1];
        v59 = 0;
        v60 = 0;
        v39 = *(_QWORD *)(v38 + 664);
        v40 = *(_QWORD *)(v38 + 672);
        if ( v39 + v40 - 1 >= v39 )
        {
          v59 = qvector_reserve((__int64)&v59, 0, 1, 16);
          *(__m128i *)(v59 + 16 * v60) = _mm_unpacklo_epi64((__m128i)v39, (__m128i)v40);
          *(_QWORD *)&v60 = v60 + 1;
        }
        sub_3180C0(&v54, &v59);
        if ( v59 )
        {
          *(_QWORD *)&v60 = 0;
          qfree(v59);
        }
        if ( !(unsigned __int8)sub_64880(v53) || (_QWORD)v55 )
        {
          v41 = a1[1];
          v42 = *(int *)(v41 + 792);
          v43 = *(_DWORD *)(v41 + 792);
          if ( v42 < *(_QWORD *)(v41 + 440) )
          {
            while ( 1 )
            {
              v44 = (_DWORD *)(*(_QWORD *)(v41 + 432) + 104 * v42);
              if ( !v44[23] )
              {
                v59 = 0;
                v60 = 0u;
                v61 = 0;
                sub_1C3380((__int64)v44, v41, (__int64)&v59, 0);
                if ( (unsigned __int8)sub_64780(v53, &v59) || (unsigned __int8)sub_318470(&v54, (char *)&v60 + 8) )
                {
                  if ( *v44 != 2 )
                  {
                    if ( !under_debugger )
                      sub_383060(52930);
                    BUG();
                  }
                  sub_93B40(&v59);
                  goto LABEL_19;
                }
                if ( *((_QWORD *)&v60 + 1) )
                {
                  *(_QWORD *)&v61 = 0;
                  qfree(*((__int64 *)&v60 + 1));
                }
                qfree(v59);
                v41 = a1[1];
              }
              v42 = ++v43;
              if ( (unsigned __int64)v43 >= *(_QWORD *)(v41 + 440) )
                goto LABEL_24;
            }
          }
        }
      }
      goto LABEL_24;
    }
  }
LABEL_19:
  v13 = 0;
LABEL_25:
  if ( v57 )
  {
    *(_QWORD *)&v58 = 0;
    qfree(v57);
  }
  qfree(v56[0]);
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree(v54);
  }
  qfree(v53[0]);
  return v13;
}
