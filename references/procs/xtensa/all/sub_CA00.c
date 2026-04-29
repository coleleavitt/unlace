__int64 __fastcall sub_CA00(__int64 a1, const void *a2, __int64 a3)
{
  __int64 *v5; // rax
  __int64 v6; // rdi
  __m128i si128; // xmm1
  __m128i v8; // xmm1
  bool v9; // zf
  bool v10; // cc
  unsigned __int8 matched; // al
  unsigned int v12; // ebx
  const __m128i *v14; // rdx
  unsigned __int64 v15; // rbx
  __m128i v16; // xmm1
  __m128i v17; // xmm0
  __int64 v18; // rcx
  __int64 v19; // rax
  const __m128i *v20; // rdx
  __m128i v21; // xmm0
  __m128i v22; // xmm1
  __m128i v23; // xmm0
  __int64 v24; // rcx
  __int64 v25; // rax
  const __m128i *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r15
  const __m128i *v29; // r14
  const __m128i *v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rdx
  __m128i v33; // xmm0
  bool v34; // cf
  __int64 v35; // rax
  __int64 v36; // r15
  const __m128i *v37; // r14
  const __m128i *v38; // rdi
  __int64 v39; // rdx
  __m128i v40; // xmm0
  __m128i v41; // [rsp+0h] [rbp-458h] BYREF
  _BYTE v42[24]; // [rsp+10h] [rbp-448h] BYREF
  __int64 v43; // [rsp+28h] [rbp-430h]
  __int64 v44; // [rsp+30h] [rbp-428h]
  __m128i v45; // [rsp+40h] [rbp-418h] BYREF
  __m128i v46; // [rsp+50h] [rbp-408h] BYREF
  __int64 v47; // [rsp+60h] [rbp-3F8h]
  __int64 (__fastcall **v48)(); // [rsp+70h] [rbp-3E8h]
  char v49; // [rsp+78h] [rbp-3E0h]
  _BYTE v50[360]; // [rsp+80h] [rbp-3D8h] BYREF
  __int64 v51; // [rsp+1E8h] [rbp-270h] BYREF
  int v52; // [rsp+280h] [rbp-1D8h]
  char v53; // [rsp+389h] [rbp-CFh]
  void *v54; // [rsp+398h] [rbp-C0h]
  __int64 v55; // [rsp+3A0h] [rbp-B8h]
  __int128 v56; // [rsp+3A8h] [rbp-B0h]
  __int64 v57; // [rsp+3B8h] [rbp-A0h]
  __int128 v58; // [rsp+3C0h] [rbp-98h]
  const __m128i *v59; // [rsp+3D0h] [rbp-88h]
  __int128 v60; // [rsp+3D8h] [rbp-80h]
  __int64 v61; // [rsp+3E8h] [rbp-70h]
  __m128i v62; // [rsp+3F0h] [rbp-68h]
  __int128 v63; // [rsp+400h] [rbp-58h]
  int v64; // [rsp+410h] [rbp-48h]
  unsigned __int64 v65; // [rsp+418h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  v48 = off_1CBA0;
  v5 = (__int64 *)&v50[40];
  v49 = 1;
  *(_QWORD *)&v50[24] = 0;
  *(_QWORD *)&v50[32] = 0;
  memset(v50, 255, 24);
  do
  {
    *(_WORD *)v5 = 0;
    v5 += 5;
    *((_WORD *)v5 - 19) = 0;
    *((_WORD *)v5 - 18) = 0;
    *((_DWORD *)v5 - 2) = 0;
    *((_WORD *)v5 - 17) = 0;
    *((_OWORD *)v5 - 2) = 0;
    *(v5 - 2) = 0;
  }
  while ( &v51 != v5 );
  v51 = a1;
  v52 = -1;
  v53 = 0;
  v54 = &unk_146C0;
  v55 = 0;
  v57 = 0;
  v59 = nullptr;
  v56 = 0;
  v58 = 0;
  v60 = 0;
  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 96);
    *(_DWORD *)a1 = 0x800000;
    si128 = _mm_load_si128((const __m128i *)&xmmword_14760);
    *(_WORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 64) = -1;
    *(_BYTE *)(a1 + 68) = 0;
    *(_QWORD *)(a1 + 72) = 0;
    *(_DWORD *)(a1 + 80) = 2;
    *(_QWORD *)(a1 + 88) = -1;
    *(__m128i *)(a1 + 8) = si128;
    *(_OWORD *)(a1 + 24) = -1;
    if ( v6 )
    {
      *(_QWORD *)(a1 + 104) = 0;
      v41 = si128;
      qfree();
      v8 = _mm_load_si128(&v41);
      v9 = (_QWORD)v60 == 4;
      v10 = (unsigned __int64)v60 <= 4;
      *(_QWORD *)(a1 + 96) = 0;
      *(_OWORD *)(a1 + 104) = 0;
      if ( v9 )
        goto LABEL_6;
      memset(v42, 0, sizeof(v42));
      v43 = 0;
      LODWORD(v44) = 0;
      if ( !v10 )
        goto LABEL_20;
    }
    else
    {
      *(_QWORD *)v42 = 0;
      v43 = 0;
      LODWORD(v44) = 0;
      *(_OWORD *)(a1 + 104) = 0;
      *(_OWORD *)&v42[8] = 0;
    }
    v14 = v59;
    v15 = *((_QWORD *)&v60 + 1);
    if ( v42 < (_BYTE *)v59 )
    {
LABEL_15:
      if ( v15 <= 3 )
      {
        v27 = qvector_reserve();
        v28 = *((_QWORD *)&v60 + 1);
        v29 = (const __m128i *)v27;
        *((_QWORD *)&v60 + 1) = v15;
        v30 = v59;
        v31 = v60 - 1;
        if ( (__int64)v60 - 1 >= 0 )
        {
          v32 = v27;
          do
          {
            v33 = _mm_loadu_si128(v30);
            v32 += 40;
            v30 = (const __m128i *)((char *)v30 + 40);
            *(__m128i *)(v32 - 40) = v33;
            *(__m128i *)(v32 - 24) = _mm_loadu_si128((const __m128i *)((char *)v30 - 24));
            *(_QWORD *)(v32 - 8) = v30[-1].m128i_i64[1];
            v34 = v31-- == 0;
          }
          while ( !v34 );
        }
        qfree();
        v59 = v29;
        *((_QWORD *)&v60 + 1) = v28;
      }
      if ( (unsigned __int64)v60 <= 3 )
      {
        v16 = _mm_load_si128((const __m128i *)v42);
        v17 = _mm_load_si128((const __m128i *)&v42[16]);
        v18 = v44;
        v19 = 5 * v60;
        do
        {
          v20 = v59;
          v59[2].m128i_i64[v19] = v18;
          *(__m128i *)((char *)v20 + v19 * 8) = v16;
          *(__m128i *)((char *)v20 + v19 * 8 + 16) = v17;
          v19 += 5;
        }
        while ( v19 != 20 );
      }
      v8 = _mm_load_si128((const __m128i *)&xmmword_14760);
LABEL_20:
      *(_QWORD *)&v60 = 4;
      goto LABEL_6;
    }
  }
  else
  {
    memset(v42, 0, sizeof(v42));
    v14 = nullptr;
    v15 = *((_QWORD *)&v60 + 1);
    v43 = 0;
    LODWORD(v44) = 0;
  }
  if ( v42 >= &v14->m128i_i8[40 * v15] )
    goto LABEL_15;
  v45 = _mm_load_si128((const __m128i *)v42);
  v21 = _mm_load_si128((const __m128i *)&v42[16]);
  v47 = v44;
  v46 = v21;
  if ( v15 <= 3 )
  {
    v35 = qvector_reserve();
    v36 = *((_QWORD *)&v60 + 1);
    v37 = (const __m128i *)v35;
    *((_QWORD *)&v60 + 1) = v15;
    v38 = v59;
    v39 = v60 - 1;
    if ( (__int64)v60 - 1 >= 0 )
    {
      do
      {
        v40 = _mm_loadu_si128(v38);
        v35 += 40;
        v38 = (const __m128i *)((char *)v38 + 40);
        *(__m128i *)(v35 - 40) = v40;
        *(__m128i *)(v35 - 24) = _mm_loadu_si128((const __m128i *)((char *)v38 - 24));
        *(_QWORD *)(v35 - 8) = v38[-1].m128i_i64[1];
        v34 = v39-- == 0;
      }
      while ( !v34 );
    }
    qfree();
    v59 = v37;
    *((_QWORD *)&v60 + 1) = v36;
  }
  if ( (unsigned __int64)v60 <= 3 )
  {
    v22 = _mm_load_si128(&v45);
    v23 = _mm_load_si128(&v46);
    v24 = v47;
    v25 = 5 * v60;
    do
    {
      v26 = v59;
      v59[2].m128i_i64[v25] = v24;
      *(__m128i *)((char *)v26 + v25 * 8) = v22;
      *(__m128i *)((char *)v26 + v25 * 8 + 16) = v23;
      v25 += 5;
    }
    while ( v25 != 20 );
  }
  *(_QWORD *)&v60 = 4;
  v8 = _mm_load_si128((const __m128i *)&xmmword_14760);
LABEL_6:
  v61 = a3;
  qmemcpy(v50, a2, sizeof(v50));
  v64 = 0;
  v48 = off_1AE90;
  v62 = v8;
  v63 = 0;
  matched = match_jpt();
  v48 = off_1CBA0;
  v12 = matched;
  if ( v59 )
  {
    *(_QWORD *)&v60 = 0;
    qfree();
  }
  if ( v57 )
  {
    *(_QWORD *)&v58 = 0;
    qfree();
  }
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree();
  }
  return v12;
}
