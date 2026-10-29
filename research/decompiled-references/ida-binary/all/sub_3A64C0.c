unsigned __int64 __fastcall sub_3A64C0(__int64 a1)
{
  __m128i si128; // xmm1
  _WORD *v3; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // r12
  _WORD *v8; // rsi
  _WORD *v9; // rsi
  __int64 *v10; // r13
  unsigned __int64 v11; // rdx
  __int64 v12; // r14
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 *v17; // r15
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 *v25; // rdi
  __int64 v26; // rax
  __int64 *v27; // rdx
  __int64 v28; // rcx
  bool v29; // cf
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r15
  __int64 v32; // rax
  const char *v33; // rsi
  __int64 *v34; // rdi
  __int64 v35; // rax
  __int64 *v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  const char *v39; // rsi
  __int64 v40; // rcx
  __int64 *v41; // r15
  __int64 v42; // rcx
  __int64 v43; // rbx
  __int64 v44; // rsi
  __m128i v45; // xmm0
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // r14
  __int64 v49; // r15
  __int64 *v50; // rbx
  __int64 v51; // r14
  __int64 v52; // r13
  __int128 v53; // xmm1
  __int64 v54; // rax
  __m128i v55; // xmm0
  __int64 v56; // rax
  __m128i v57; // xmm0
  __int64 v58; // rdi
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // [rsp+0h] [rbp-60h]
  __int64 v63; // [rsp+0h] [rbp-60h]
  __int64 v64; // [rsp+0h] [rbp-60h]
  __int64 v65; // [rsp+8h] [rbp-58h]
  const char *v66; // [rsp+10h] [rbp-50h]
  __int64 v67; // [rsp+18h] [rbp-48h] BYREF
  unsigned __int64 v68; // [rsp+20h] [rbp-40h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_5DD3B0);
  v68 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 8) = &code_highlight_block;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_QWORD *)a1 = &type_editor_highlighter_t___vtable;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  *(__m128i *)(a1 + 116) = si128;
  *(_OWORD *)(a1 + 144) = 0;
  v3 = (_WORD *)qvector_reserve(a1 + 64, 0, 3, 1);
  *(_QWORD *)(a1 + 64) = v3;
  *(_QWORD *)(a1 + 72) = 3;
  *v3 = 12079;
  *(_BYTE *)(*(_QWORD *)(a1 + 64) + 2LL) = 0;
  v4 = *(_QWORD *)(a1 + 96);
  v5 = *(_QWORD *)(a1 + 104);
  *(_BYTE *)(a1 + 185) = 35;
  if ( v5 < v4 + 1 )
  {
    v47 = qvector_reserve(a1 + 88, 0, v4 + 1, 48);
    v48 = *(_QWORD *)(a1 + 96);
    v49 = *(_QWORD *)(a1 + 104);
    v6 = v47;
    *(_QWORD *)(a1 + 104) = v5;
    v50 = *(__int64 **)(a1 + 88);
    v51 = v48 - 1;
    if ( v51 >= 0 )
    {
      v52 = v47;
      v53 = 0;
      do
      {
        v54 = *v50;
        v55 = _mm_loadu_si128((const __m128i *)(v50 + 1));
        *v50 = 0;
        *(_OWORD *)(v50 + 1) = v53;
        *(_QWORD *)v52 = v54;
        *(__m128i *)(v52 + 8) = v55;
        v56 = v50[3];
        v57 = _mm_loadu_si128((const __m128i *)v50 + 2);
        v50[3] = 0;
        *(_QWORD *)(v52 + 24) = v56;
        *(__m128i *)(v52 + 32) = v57;
        v58 = *v50;
        v50[5] = 0;
        if ( v58 )
        {
          v50[1] = 0;
          qfree(v58, nullptr);
          v53 = 0;
        }
        v50 += 6;
        v52 += 48;
        v29 = v51-- == 0;
      }
      while ( !v29 );
      v50 = *(__int64 **)(a1 + 88);
    }
    qfree(v50, nullptr);
    *(_QWORD *)(a1 + 88) = v6;
    v4 = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(a1 + 104) = v49;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 88);
  }
  v7 = 48 * v4 + v6;
  *(_QWORD *)v7 = 0;
  *(_OWORD *)(v7 + 8) = 0;
  *(_QWORD *)(v7 + 24) = 0;
  *(_OWORD *)(v7 + 32) = 0;
  ++*(_QWORD *)(a1 + 96);
  v8 = *(_WORD **)v7;
  if ( *(_QWORD *)(v7 + 16) <= 2u )
  {
    v61 = qvector_reserve(v7, v8, 3, 1);
    *(_QWORD *)v7 = v61;
    v8 = (_WORD *)v61;
  }
  *(_QWORD *)(v7 + 8) = 3;
  *v8 = 10799;
  *(_BYTE *)(*(_QWORD *)v7 + 2LL) = 0;
  v9 = *(_WORD **)(v7 + 24);
  if ( *(_QWORD *)(v7 + 40) <= 2u )
  {
    v60 = qvector_reserve(v7 + 24, v9, 3, 1);
    *(_QWORD *)(v7 + 24) = v60;
    v9 = (_WORD *)v60;
  }
  v10 = (__int64 *)off_868900;
  *(_QWORD *)(v7 + 32) = 3;
  *v9 = 12074;
  *(_BYTE *)(*(_QWORD *)(v7 + 24) + 2LL) = 0;
  do
  {
    v11 = *(_QWORD *)(a1 + 48);
    v12 = *v10;
    if ( v11 )
    {
      v13 = 0;
      v14 = 0;
      while ( 1 )
      {
        v15 = *(_QWORD *)(a1 + 40) + 32 * v14;
        if ( *(_DWORD *)(v15 + 24) == 1 )
          break;
        v14 = ++v13;
        if ( v13 >= v11 )
          goto LABEL_28;
      }
      if ( v15 )
        goto LABEL_13;
LABEL_28:
      v30 = v11 + 1;
    }
    else
    {
      v30 = 1;
    }
    v31 = *(_QWORD *)(a1 + 56);
    if ( v31 < v30 )
    {
      v38 = qvector_reserve(a1 + 40, 0, v30, 32);
      v39 = *(const char **)(a1 + 56);
      v40 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 56) = v31;
      v65 = v38;
      v41 = *(__int64 **)(a1 + 40);
      v66 = v39;
      v42 = v40 - 1;
      if ( v42 >= 0 )
      {
        v43 = v38;
        do
        {
          v44 = *v41;
          v45 = _mm_loadu_si128((const __m128i *)(v41 + 1));
          *v41 = 0;
          v41[2] = 0;
          *(_QWORD *)v43 = v44;
          *(__m128i *)(v43 + 8) = v45;
          v39 = (const char *)*((unsigned int *)v41 + 6);
          *(_DWORD *)(v43 + 24) = (_DWORD)v39;
          v46 = *v41;
          if ( *v41 )
          {
            v41[1] = 0;
            v64 = v42;
            qfree(v46, v39);
            v42 = v64;
          }
          v41 += 4;
          v43 += 32;
          v29 = v42-- == 0;
        }
        while ( !v29 );
        v41 = *(__int64 **)(a1 + 40);
      }
      qfree(v41, v39);
      v11 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 40) = v65;
      *(_QWORD *)(a1 + 56) = v66;
    }
    else
    {
      v65 = *(_QWORD *)(a1 + 40);
    }
    v15 = 32 * v11 + v65;
    *(_QWORD *)v15 = 0;
    *(_OWORD *)(v15 + 8) = 0;
    ++*(_QWORD *)(a1 + 48);
    *(_DWORD *)(v15 + 24) = 1;
LABEL_13:
    v16 = *(_QWORD *)(v15 + 8);
    v17 = *(__int64 **)v15;
    v67 = v12;
    v18 = *(_QWORD *)(v15 + 16);
    v19 = v16 + 1;
    if ( &v67 < v17 || &v67 >= &v17[v18] )
    {
      if ( v18 < v19 )
      {
        v62 = *(_QWORD *)(v15 + 16);
        v17 = (__int64 *)qvector_reserve(v15, 0, v16 + 1, 8);
        v23 = *(_QWORD *)(v15 + 8);
        v24 = *(_QWORD *)(v15 + 16);
        v25 = *(__int64 **)v15;
        *(_QWORD *)(v15 + 16) = v62;
        v26 = v23 - 1;
        if ( v26 >= 0 )
        {
          v27 = v17;
          do
          {
            v28 = *v25;
            ++v27;
            ++v25;
            *(v27 - 1) = v28;
            v29 = v26-- == 0;
          }
          while ( !v29 );
          v25 = *(__int64 **)v15;
        }
        qfree(v25, nullptr);
        *(_QWORD *)v15 = v17;
        v16 = *(_QWORD *)(v15 + 8);
        *(_QWORD *)(v15 + 16) = v24;
      }
      v17[v16] = v67;
    }
    else
    {
      if ( v18 < v19 )
      {
        v63 = *(_QWORD *)(v15 + 16);
        v17 = (__int64 *)qvector_reserve(v15, 0, v16 + 1, 8);
        v32 = *(_QWORD *)(v15 + 8);
        v33 = *(const char **)(v15 + 16);
        v34 = *(__int64 **)v15;
        *(_QWORD *)(v15 + 16) = v63;
        v35 = v32 - 1;
        if ( v35 >= 0 )
        {
          v36 = v17;
          do
          {
            v37 = *v34;
            ++v36;
            ++v34;
            *(v36 - 1) = v37;
            v29 = v35-- == 0;
          }
          while ( !v29 );
          v34 = *(__int64 **)v15;
        }
        qfree(v34, v33);
        v16 = *(_QWORD *)(v15 + 8);
        *(_QWORD *)v15 = v17;
        *(_QWORD *)(v15 + 16) = v33;
      }
      v17[v16] = v12;
    }
    ++v10;
    ++*(_QWORD *)(v15 + 8);
  }
  while ( &`vtable for'ask_offset_codec_t != v10 );
  sub_382900((_QWORD *)a1, "unsigned|const", 2);
  v20 = *(_QWORD *)(a1 + 144);
  v21 = *(_QWORD *)(a1 + 136);
  if ( *(_QWORD *)(a1 + 152) < (unsigned __int64)(v20 + 1) )
  {
    v59 = qvector_reserve(a1 + 136, v21, v20 + 1, 8);
    *(_QWORD *)(a1 + 136) = v59;
    v21 = v59;
    v20 = *(_QWORD *)(a1 + 144);
  }
  *(_QWORD *)(v21 + 8 * v20) = &off_8BCBA0;
  ++*(_QWORD *)(a1 + 144);
  return v68 - __readfsqword(0x28u);
}
