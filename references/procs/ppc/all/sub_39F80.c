__int64 __fastcall sub_39F80(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v9; // rax
  __m128i v10; // xmm0
  __m128i si128; // xmm1
  __int64 v12; // rdi
  _BYTE *v13; // rdx
  bool v14; // zf
  bool v15; // cc
  __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  unsigned int v19; // ebx
  __m128i *v21; // rbx
  __int64 v22; // rax
  _BYTE *v23; // rax
  unsigned __int64 i; // r12
  char *v25; // rax
  unsigned __int64 v26; // r12
  char j; // al
  __int64 v28; // rax
  __int64 v29; // r15
  const __m128i *v30; // rdi
  __int64 v31; // rdx
  __m128i v32; // xmm0
  bool v33; // cf
  __int64 v34; // rax
  __int64 v35; // r15
  const __m128i *v36; // rdi
  __int64 v37; // rdx
  __m128i v38; // xmm0
  _BYTE v39[24]; // [rsp+0h] [rbp-5D8h] BYREF
  __int64 v40; // [rsp+18h] [rbp-5C0h]
  _BYTE *v41; // [rsp+20h] [rbp-5B8h]
  __m128i v42; // [rsp+30h] [rbp-5A8h] BYREF
  __m128i v43; // [rsp+40h] [rbp-598h] BYREF
  _BYTE *v44; // [rsp+50h] [rbp-588h]
  __int128 v45; // [rsp+60h] [rbp-578h] BYREF
  __int64 v46; // [rsp+70h] [rbp-568h]
  __int64 v47; // [rsp+78h] [rbp-560h]
  __int64 v48; // [rsp+80h] [rbp-558h]
  char v49; // [rsp+88h] [rbp-550h] BYREF
  char v50; // [rsp+89h] [rbp-54Fh]
  unsigned __int64 v51; // [rsp+98h] [rbp-540h]
  char v52[8]; // [rsp+1C8h] [rbp-410h] BYREF
  __int64 (__fastcall **v53)(); // [rsp+1D0h] [rbp-408h] BYREF
  char v54; // [rsp+1D8h] [rbp-400h]
  _BYTE v55[360]; // [rsp+1E0h] [rbp-3F8h] BYREF
  _QWORD v56[19]; // [rsp+348h] [rbp-290h] BYREF
  int v57; // [rsp+3E0h] [rbp-1F8h]
  char v58; // [rsp+4E9h] [rbp-EFh]
  void *v59; // [rsp+4F8h] [rbp-E0h]
  __int64 v60; // [rsp+500h] [rbp-D8h]
  __int128 v61; // [rsp+508h] [rbp-D0h]
  __int64 v62; // [rsp+518h] [rbp-C0h]
  __int128 v63; // [rsp+520h] [rbp-B8h]
  const __m128i *v64; // [rsp+530h] [rbp-A8h] BYREF
  __int128 v65; // [rsp+538h] [rbp-A0h]
  __int64 v66; // [rsp+548h] [rbp-90h]
  __int64 v67; // [rsp+550h] [rbp-88h]
  char v68; // [rsp+558h] [rbp-80h]
  __int64 v69; // [rsp+560h] [rbp-78h]
  int v70; // [rsp+568h] [rbp-70h]
  __int64 v71; // [rsp+570h] [rbp-68h]
  int v72; // [rsp+578h] [rbp-60h]
  __int64 v73; // [rsp+580h] [rbp-58h]
  int v74; // [rsp+588h] [rbp-50h]
  char v75; // [rsp+58Ch] [rbp-4Ch]
  unsigned __int64 v76; // [rsp+598h] [rbp-40h]

  v76 = __readfsqword(0x28u);
  v53 = off_94B90;
  v9 = &v55[40];
  v54 = 1;
  *(_QWORD *)&v55[24] = 0;
  *(_QWORD *)&v55[32] = 0;
  memset(v55, 255, 24);
  v10.m128i_i64[0] = 0;
  do
  {
    *(_WORD *)v9 = 0;
    v9 += 5;
    *((_WORD *)v9 - 19) = 0;
    *((_WORD *)v9 - 18) = 0;
    *((_DWORD *)v9 - 2) = 0;
    *((_WORD *)v9 - 17) = 0;
    *((_OWORD *)v9 - 2) = 0;
    *(v9 - 2) = 0;
  }
  while ( v56 != v9 );
  v56[0] = a1;
  v57 = -1;
  v58 = 0;
  v59 = &unk_79F90;
  v60 = 0;
  v62 = 0;
  v64 = nullptr;
  v61 = 0;
  v63 = 0;
  v65 = 0;
  if ( !a1 )
  {
    memset(v39, 0, sizeof(v39));
    v21 = nullptr;
    v13 = v39;
    v22 = *((_QWORD *)&v65 + 1);
    v40 = 0;
    LODWORD(v41) = 0;
    goto LABEL_44;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_77D80);
  v12 = *(_QWORD *)(a1 + 96);
  *(_DWORD *)a1 = 0x800000;
  *(_WORD *)(a1 + 4) = 0;
  *(__m128i *)(a1 + 8) = si128;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 64) = -1;
  *(_BYTE *)(a1 + 68) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 80) = 2;
  *(_QWORD *)(a1 + 88) = -1;
  *(_OWORD *)(a1 + 24) = -1;
  if ( !v12 )
  {
    *(_QWORD *)v39 = 0;
    v40 = 0;
    LODWORD(v41) = 0;
    *(_OWORD *)(a1 + 104) = 0;
    *(_OWORD *)&v39[8] = 0;
    goto LABEL_17;
  }
  *(_QWORD *)(a1 + 104) = 0;
  qfree(v12, 0, v56, 0.0);
  v10.m128i_i64[0] = 0;
  v14 = (_QWORD)v65 == 1;
  v15 = (unsigned __int64)v65 <= 1;
  *(_QWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  if ( v14 )
    goto LABEL_6;
  memset(v39, 0, sizeof(v39));
  v40 = 0;
  LODWORD(v41) = 0;
  if ( v15 )
  {
LABEL_17:
    v21 = (__m128i *)v64;
    v22 = *((_QWORD *)&v65 + 1);
    v13 = v39;
    if ( v39 < (_BYTE *)v64 )
    {
LABEL_18:
      if ( v22 )
        goto LABEL_19;
      v28 = qvector_reserve(&v64, 0, 1, 40);
      v29 = *((_QWORD *)&v65 + 1);
      v21 = (__m128i *)v28;
      *((_QWORD *)&v65 + 1) = 0;
      v30 = v64;
      v31 = v65 - 1;
      if ( (__int64)v65 - 1 >= 0 )
      {
        do
        {
          v32 = _mm_loadu_si128(v30);
          v28 += 40;
          v30 = (const __m128i *)((char *)v30 + 40);
          *(__m128i *)(v28 - 40) = v32;
          v10 = _mm_loadu_si128((const __m128i *)((char *)v30 - 24));
          *(__m128i *)(v28 - 24) = v10;
          *(_QWORD *)(v28 - 8) = v30[-1].m128i_i64[1];
          v33 = v31-- == 0;
        }
        while ( !v33 );
        v30 = v64;
      }
      qfree(v30, 0, v31, *(double *)v10.m128i_i64);
      v64 = v21;
      *((_QWORD *)&v65 + 1) = v29;
      if ( !(_QWORD)v65 )
      {
LABEL_19:
        v23 = v41;
        *v21 = _mm_load_si128((const __m128i *)v39);
        v10 = _mm_load_si128((const __m128i *)&v39[16]);
        v21[2].m128i_i64[0] = (__int64)v23;
        v21[1] = v10;
      }
      goto LABEL_20;
    }
LABEL_44:
    if ( v39 < &v21->m128i_i8[40 * v22] )
    {
      v13 = v41;
      v42 = _mm_load_si128((const __m128i *)v39);
      v10 = _mm_load_si128((const __m128i *)&v39[16]);
      v44 = v41;
      v43 = v10;
      if ( v22 )
        goto LABEL_46;
      v34 = qvector_reserve(&v64, 0, 1, 40);
      v35 = *((_QWORD *)&v65 + 1);
      v21 = (__m128i *)v34;
      *((_QWORD *)&v65 + 1) = 0;
      v36 = v64;
      v37 = v65 - 1;
      if ( (__int64)v65 - 1 >= 0 )
      {
        do
        {
          v38 = _mm_loadu_si128(v36);
          v34 += 40;
          v36 = (const __m128i *)((char *)v36 + 40);
          *(__m128i *)(v34 - 40) = v38;
          v10 = _mm_loadu_si128((const __m128i *)((char *)v36 - 24));
          *(__m128i *)(v34 - 24) = v10;
          *(_QWORD *)(v34 - 8) = v36[-1].m128i_i64[1];
          v33 = v37-- == 0;
        }
        while ( !v33 );
        v36 = v64;
      }
      qfree(v36, 0, v37, *(double *)v10.m128i_i64);
      v64 = v21;
      *((_QWORD *)&v65 + 1) = v35;
      if ( !(_QWORD)v65 )
      {
LABEL_46:
        *v21 = _mm_load_si128(&v42);
        v10 = _mm_load_si128(&v43);
        v21[1] = v10;
        v21[2].m128i_i64[0] = (__int64)v44;
      }
      goto LABEL_20;
    }
    goto LABEL_18;
  }
LABEL_20:
  *(_QWORD *)&v65 = 1;
LABEL_6:
  v66 = a3;
  v68 = 0;
  v67 = 0x11900000000LL;
  v53 = off_84C78;
  v69 = -1;
  v70 = -1;
  v71 = -1;
  v72 = 0;
  v73 = -1;
  v74 = -1;
  v75 = 0;
  *(_DWORD *)v56[0] |= 0x400000u;
  qmemcpy(v55, a2, sizeof(v55));
  v16 = (__int64)(a2 + 45);
  if ( !(unsigned __int8)match_jpt(
                           &v53,
                           a2 + 45,
                           v13,
                           0,
                           a5,
                           a6,
                           *(_QWORD *)v39,
                           *(_QWORD *)&v39[8],
                           *(_QWORD *)&v39[16],
                           v40) )
    goto LABEL_8;
  v18 = *(_QWORD *)(a1 + 8);
  if ( v18 != a2[2] + 4LL )
    goto LABEL_8;
  for ( i = *(_QWORD *)(getseg(*(_QWORD *)(a1 + 8)) + 8); v18 < i; v18 += 8LL )
  {
    if ( (get_flags_ex(v18, 4) & 0x1000) != 0 )
    {
      v16 = v18;
      for ( j = xrefblk_t_first_to(&v42, v18, 5); j; j = xrefblk_t_next_to(&v42) )
      {
        if ( v42.m128i_i64[0] != v56[1] )
          goto LABEL_36;
      }
    }
    v25 = &v49;
    v46 = -1;
    v47 = 0;
    v10.m128i_i64[0] = 0;
    v48 = 0;
    v45 = -1;
    do
    {
      *(_WORD *)v25 = 0;
      v25 += 40;
      *((_WORD *)v25 - 19) = 0;
      *((_WORD *)v25 - 18) = 0;
      *((_DWORD *)v25 - 2) = 0;
      *((_WORD *)v25 - 17) = 0;
      *((_OWORD *)v25 - 2) = 0;
      *((_QWORD *)v25 - 2) = 0;
    }
    while ( v52 != v25 );
    v16 = v18;
    if ( (unsigned int)decode_insn(&v45, v18, v52, 0.0) != 4 )
      break;
    if ( (_WORD)v47 == 13 && v50 == 7 )
      goto LABEL_31;
    v16 = v18 + 4;
    if ( (unsigned int)decode_insn(&v45, v18 + 4, v17, 0.0) != 4 )
      break;
    if ( (_WORD)v47 == 13 && v50 == 7 )
    {
LABEL_31:
      v17 = v51;
      if ( i <= v51 )
        v17 = i;
      if ( v18 < v51 )
        i = v17;
    }
  }
LABEL_36:
  v26 = (i - *(_QWORD *)(a1 + 8)) >> 3;
  *(_WORD *)(a1 + 4) = v26;
  if ( (_WORD)v26 )
  {
    *(_DWORD *)a1 = *(_DWORD *)a1 & 0xFFFFFA7B | 0x484;
    sub_39DE0((__int64)&v53);
    v16 = 4;
    mark_switch_insns_jpt(&v53, 4, 0);
    v19 = 1;
  }
  else
  {
LABEL_8:
    v19 = 0;
  }
  v53 = off_94B90;
  if ( v64 )
  {
    *(_QWORD *)&v65 = 0;
    qfree(v64, v16, v17, *(double *)v10.m128i_i64);
  }
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    qfree(v62, v16, v17, *(double *)v10.m128i_i64);
  }
  if ( v60 )
  {
    *(_QWORD *)&v61 = 0;
    qfree(v60, v16, v17, *(double *)v10.m128i_i64);
  }
  return v19;
}
