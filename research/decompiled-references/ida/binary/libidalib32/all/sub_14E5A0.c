unsigned __int64 __fastcall sub_14E5A0(__int64 a1)
{
  __m128i si128; // xmm1
  _WORD *v3; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // r12
  _WORD *v8; // rsi
  _WORD *v9; // rsi
  char **v10; // r13
  unsigned __int64 v11; // rdx
  char *v12; // r14
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rax
  char **v17; // r15
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v23; // rax
  __int64 v24; // r14
  char **v25; // rdi
  __int64 v26; // rax
  char **v27; // rdx
  char *v28; // rcx
  bool v29; // cf
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // rsi
  char **v34; // rdi
  __int64 v35; // rax
  char **v36; // rdx
  char *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rcx
  __int64 *v41; // r15
  __int64 v42; // rcx
  __int64 v43; // rbx
  __int64 v44; // rsi
  __m128i v45; // xmm0
  __int64 v46; // rax
  __int64 v47; // r14
  __int64 v48; // r15
  __int64 *v49; // rbx
  __int64 v50; // r14
  __int64 v51; // r13
  __int128 v52; // xmm1
  __int64 v53; // rax
  __m128i v54; // xmm0
  __int64 v55; // rax
  __m128i v56; // xmm0
  __int64 v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // [rsp+0h] [rbp-60h]
  __int64 v62; // [rsp+0h] [rbp-60h]
  __int64 v63; // [rsp+0h] [rbp-60h]
  __int64 v64; // [rsp+8h] [rbp-58h]
  __int64 v65; // [rsp+10h] [rbp-50h]
  char *v66; // [rsp+18h] [rbp-48h] BYREF
  unsigned __int64 v67; // [rsp+20h] [rbp-40h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_1D28C0);
  v67 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 8) = &code_highlight_block;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_QWORD *)a1 = &off_233C60;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  *(__m128i *)(a1 + 116) = si128;
  *(_OWORD *)(a1 + 144) = 0;
  v3 = (_WORD *)qvector_reserve();
  *(_QWORD *)(a1 + 64) = v3;
  *(_QWORD *)(a1 + 72) = 3;
  *v3 = 12079;
  *(_BYTE *)(*(_QWORD *)(a1 + 64) + 2LL) = 0;
  v4 = *(_QWORD *)(a1 + 96);
  v5 = *(_QWORD *)(a1 + 104);
  *(_BYTE *)(a1 + 185) = 35;
  if ( v5 < v4 + 1 )
  {
    v46 = qvector_reserve();
    v47 = *(_QWORD *)(a1 + 96);
    v48 = *(_QWORD *)(a1 + 104);
    v6 = v46;
    *(_QWORD *)(a1 + 104) = v5;
    v49 = *(__int64 **)(a1 + 88);
    v50 = v47 - 1;
    if ( v50 >= 0 )
    {
      v51 = v46;
      v52 = 0;
      do
      {
        v53 = *v49;
        v54 = _mm_loadu_si128((const __m128i *)(v49 + 1));
        *v49 = 0;
        *(_OWORD *)(v49 + 1) = v52;
        *(_QWORD *)v51 = v53;
        *(__m128i *)(v51 + 8) = v54;
        v55 = v49[3];
        v56 = _mm_loadu_si128((const __m128i *)v49 + 2);
        v49[3] = 0;
        *(_QWORD *)(v51 + 24) = v55;
        *(__m128i *)(v51 + 32) = v56;
        v57 = *v49;
        v49[5] = 0;
        if ( v57 )
        {
          v49[1] = 0;
          qfree();
          v52 = 0;
        }
        v49 += 6;
        v51 += 48;
        v29 = v50-- == 0;
      }
      while ( !v29 );
    }
    qfree();
    *(_QWORD *)(a1 + 88) = v6;
    v4 = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(a1 + 104) = v48;
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
    v60 = qvector_reserve();
    *(_QWORD *)v7 = v60;
    v8 = (_WORD *)v60;
  }
  *(_QWORD *)(v7 + 8) = 3;
  *v8 = 10799;
  *(_BYTE *)(*(_QWORD *)v7 + 2LL) = 0;
  v9 = *(_WORD **)(v7 + 24);
  if ( *(_QWORD *)(v7 + 40) <= 2u )
  {
    v59 = qvector_reserve();
    *(_QWORD *)(v7 + 24) = v59;
    v9 = (_WORD *)v59;
  }
  v10 = off_233D00;
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
          goto LABEL_27;
      }
      if ( v15 )
        goto LABEL_13;
LABEL_27:
      v30 = v11 + 1;
    }
    else
    {
      v30 = 1;
    }
    v31 = *(_QWORD *)(a1 + 56);
    if ( v31 < v30 )
    {
      v38 = qvector_reserve();
      v39 = *(_QWORD *)(a1 + 56);
      v40 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 56) = v31;
      v64 = v38;
      v41 = *(__int64 **)(a1 + 40);
      v65 = v39;
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
          *(_DWORD *)(v43 + 24) = *((_DWORD *)v41 + 6);
          if ( *v41 )
          {
            v41[1] = 0;
            v63 = v42;
            qfree();
            v42 = v63;
          }
          v41 += 4;
          v43 += 32;
          v29 = v42-- == 0;
        }
        while ( !v29 );
      }
      qfree();
      v11 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 40) = v64;
      *(_QWORD *)(a1 + 56) = v65;
    }
    else
    {
      v64 = *(_QWORD *)(a1 + 40);
    }
    v15 = 32 * v11 + v64;
    *(_QWORD *)v15 = 0;
    *(_OWORD *)(v15 + 8) = 0;
    ++*(_QWORD *)(a1 + 48);
    *(_DWORD *)(v15 + 24) = 1;
LABEL_13:
    v16 = *(_QWORD *)(v15 + 8);
    v17 = *(char ***)v15;
    v66 = v12;
    v18 = *(_QWORD *)(v15 + 16);
    v19 = v16 + 1;
    if ( &v66 < v17 || &v66 >= &v17[v18] )
    {
      if ( v18 < v19 )
      {
        v61 = *(_QWORD *)(v15 + 16);
        v17 = (char **)qvector_reserve();
        v23 = *(_QWORD *)(v15 + 8);
        v24 = *(_QWORD *)(v15 + 16);
        v25 = *(char ***)v15;
        *(_QWORD *)(v15 + 16) = v61;
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
        }
        qfree();
        *(_QWORD *)v15 = v17;
        v16 = *(_QWORD *)(v15 + 8);
        *(_QWORD *)(v15 + 16) = v24;
      }
      v17[v16] = v66;
    }
    else
    {
      if ( v18 < v19 )
      {
        v62 = *(_QWORD *)(v15 + 16);
        v17 = (char **)qvector_reserve();
        v32 = *(_QWORD *)(v15 + 8);
        v33 = *(_QWORD *)(v15 + 16);
        v34 = *(char ***)v15;
        *(_QWORD *)(v15 + 16) = v62;
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
        }
        qfree();
        v16 = *(_QWORD *)(v15 + 8);
        *(_QWORD *)v15 = v17;
        *(_QWORD *)(v15 + 16) = v33;
      }
      v17[v16] = v12;
    }
    ++v10;
    ++*(_QWORD *)(v15 + 8);
  }
  while ( &unk_234120 != (_UNKNOWN *)v10 );
  sub_14DB80((_QWORD *)a1, "unsigned|const", 2);
  v20 = *(_QWORD *)(a1 + 144);
  v21 = *(_QWORD *)(a1 + 136);
  if ( *(_QWORD *)(a1 + 152) < (unsigned __int64)(v20 + 1) )
  {
    v58 = qvector_reserve();
    *(_QWORD *)(a1 + 136) = v58;
    v21 = v58;
    v20 = *(_QWORD *)(a1 + 144);
  }
  *(_QWORD *)(v21 + 8 * v20) = &off_2502C0;
  ++*(_QWORD *)(a1 + 144);
  return v67 - __readfsqword(0x28u);
}

