unsigned __int64 __fastcall sub_1D83330(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rdi
  unsigned int v9; // r12d
  unsigned __int64 v10; // rax
  _QWORD *v11; // r12
  _QWORD *v12; // rax
  int v13; // edx
  __int64 v14; // rsi
  unsigned __int64 v15; // rbx
  void **v17; // rax
  __int64 v18; // rax
  int v19; // eax
  __int64 *v20; // r12
  __int64 v21; // rdx
  _BYTE *v22; // rax
  __int64 v23; // r9
  __int64 v24; // r13
  __m128i v25; // xmm0
  char v26; // dl
  int v27; // eax
  unsigned int v28; // r8d
  _QWORD *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  char *v37; // rcx
  __m128i *v38; // rdx
  __m128i *v39; // rax
  __int64 v40; // rax
  char *v41; // rdi
  __int64 v42; // rbx
  __int64 v43; // r14
  void **v44; // r12
  int v45; // eax
  __int64 v46; // [rsp-10h] [rbp-1F8h]
  _QWORD *v47; // [rsp+0h] [rbp-1E8h]
  __int64 *v49; // [rsp+18h] [rbp-1D0h]
  unsigned int v50; // [rsp+20h] [rbp-1C8h]
  unsigned int v51; // [rsp+20h] [rbp-1C8h]
  _BYTE *v52; // [rsp+20h] [rbp-1C8h]
  int v53; // [rsp+28h] [rbp-1C0h]
  int v54; // [rsp+2Ch] [rbp-1BCh]
  int v55; // [rsp+2Ch] [rbp-1BCh]
  __m128i v56; // [rsp+40h] [rbp-1A8h] BYREF
  __int64 v57; // [rsp+50h] [rbp-198h]
  void *v58; // [rsp+60h] [rbp-188h] BYREF
  __int64 v59; // [rsp+68h] [rbp-180h]
  _BYTE v60[48]; // [rsp+70h] [rbp-178h] BYREF
  void *v61; // [rsp+A0h] [rbp-148h] BYREF
  __int64 v62; // [rsp+A8h] [rbp-140h]
  __m128i v63; // [rsp+B0h] [rbp-138h] BYREF
  __int64 v64; // [rsp+C0h] [rbp-128h]
  int v65; // [rsp+110h] [rbp-D8h]
  char v66; // [rsp+114h] [rbp-D4h]
  void *ptr; // [rsp+120h] [rbp-C8h] BYREF
  __int64 v68; // [rsp+128h] [rbp-C0h]
  _QWORD *v69; // [rsp+130h] [rbp-B8h] BYREF
  _QWORD *v70; // [rsp+138h] [rbp-B0h]
  void *v71; // [rsp+170h] [rbp-78h] BYREF
  __int64 v72; // [rsp+178h] [rbp-70h]
  __int64 v73; // [rsp+180h] [rbp-68h] BYREF
  __int64 v74; // [rsp+188h] [rbp-60h]
  __int16 v75; // [rsp+190h] [rbp-58h]
  char v76; // [rsp+192h] [rbp-56h]
  __int64 v77; // [rsp+198h] [rbp-50h]

  v7 = (_QWORD *)a1[31];
  v8 = *(_QWORD *)sub_BC3640((_QWORD *)a2) & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v8 || !*(_DWORD *)(a4 + 8) )
    goto LABEL_3;
  ptr = a1;
  v68 = 1;
  v17 = (void **)&v69;
  do
  {
    *v17 = (void *)-4096LL;
    v17 += 2;
  }
  while ( v17 != &v71 );
  v76 = 0;
  v71 = &v73;
  v72 = 0x100000000LL;
  v18 = a1[1410];
  a1[1410] = &ptr;
  v74 = v18;
  v75 = 0;
  v77 = 0;
  v19 = sub_B8D390(v8);
  v20 = *(__int64 **)a4;
  v21 = *(unsigned int *)(a4 + 8);
  v53 = v19;
  v22 = v60;
  v58 = v60;
  v59 = 0x200000000LL;
  v49 = &v20[v21];
  if ( v20 != v49 )
  {
    LODWORD(v23) = 0;
    while ( 1 )
    {
      v24 = *v20;
      v56.m128i_i64[1] = (__int64)v22;
      v57 = (unsigned int)v23;
      v56.m128i_i64[0] = 0;
      v25 = _mm_load_si128(&v56);
      v61 = &v63;
      v65 = 0;
      v66 = 1;
      v63 = v25;
      v64 = (unsigned int)v23;
      v62 = 0x400000001LL;
      v26 = *(_BYTE *)(v24 + 28) & 0x7F;
      if ( v26 == 67 )
      {
        sub_BBE5B0(v24);
        v27 = sub_BBE590(v24);
        LODWORD(v23) = v59;
        v28 = v53 + v27;
        v26 = *(_BYTE *)(v24 + 28) & 0x7F;
        v29 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(a2 + 16) & 4) == 0 )
          goto LABEL_16;
      }
      else
      {
        if ( v26 == 47 )
        {
          v28 = v53 + (*(_DWORD *)(v24 + 68) & 0xFFFFF);
          v29 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
            v29 = (_QWORD *)*v29;
LABEL_43:
          v54 = v23;
          v50 = v28;
          v34 = sub_1E02D80(a1, v24, v29, &v61);
          v32 = *(_WORD *)(v34 + 70) & 0xF | (unsigned int)(16 * v54);
          *(_WORD *)(v34 + 70) = *(_WORD *)(v34 + 70) & 0xF | (16 * v54);
          v31 = *(_DWORD *)(v34 + 68) & 0xFFF00000 | v50 & 0xFFFFF;
          *(_DWORD *)(v34 + 68) = v31;
          goto LABEL_18;
        }
        v28 = v53 + (*(_DWORD *)(v24 + 64) & 0xFFFFF);
        v29 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(a2 + 16) & 4) == 0 )
        {
LABEL_47:
          if ( v26 == 68 )
          {
            v55 = v23;
            v51 = v28;
            v34 = sub_1E02D80(a1, v24, v29, &v61);
            v45 = *(_WORD *)(v34 + 66) & 0xF;
            v32 = v45 | (unsigned int)(16 * v55);
            *(_WORD *)(v34 + 66) = v45 | (16 * v55);
            v33 = *(_DWORD *)(v34 + 64) & 0xFFF00000;
            v31 = (unsigned int)v33 | v51 & 0xFFFFF;
            *(_DWORD *)(v34 + 64) = v31;
            goto LABEL_18;
          }
          goto LABEL_43;
        }
      }
      v29 = (_QWORD *)*v29;
LABEL_16:
      if ( v26 != 67 )
        goto LABEL_47;
      v30 = sub_1D82950((__int64)a1, (__int64)v29, v24, (__int64)&v61, v28, v23, 1u);
      v33 = v46;
      v34 = v30;
LABEL_18:
      sub_A80DE0((__int64)&v56, (__int64)v7, v34, v33, v31, v32);
      v35 = (unsigned int)v59;
      v36 = (unsigned int)v59 + 1LL;
      if ( v36 > HIDWORD(v59) )
      {
        if ( v58 > &v56 || &v56 >= (__m128i *)((char *)v58 + 24 * (unsigned int)v59) )
        {
          sub_2237220(&v58, v60, v36, 24);
          v37 = (char *)v58;
          v35 = (unsigned int)v59;
          v38 = &v56;
        }
        else
        {
          v52 = v58;
          sub_2237220(&v58, v60, v36, 24);
          v37 = (char *)v58;
          v35 = (unsigned int)v59;
          v38 = (__m128i *)((char *)v58 + (char *)&v56 - v52);
        }
      }
      else
      {
        v37 = (char *)v58;
        v38 = &v56;
      }
      v39 = (__m128i *)&v37[24 * v35];
      *v39 = _mm_loadu_si128(v38);
      v39[1].m128i_i64[0] = v38[1].m128i_i64[0];
      v23 = (unsigned int)(v59 + 1);
      LODWORD(v59) = v59 + 1;
      if ( v61 == &v63 )
      {
        v22 = v58;
        if ( v49 == ++v20 )
          goto LABEL_22;
      }
      else
      {
        free(v61);
        ++v20;
        v23 = (unsigned int)v59;
        v22 = v58;
        if ( v49 == v20 )
          goto LABEL_22;
      }
    }
  }
  v23 = 0;
LABEL_22:
  v63.m128i_i64[1] = (__int64)v22;
  v64 = v23;
  v61 = &v63;
  v65 = 0;
  v66 = 1;
  v62 = 0x400000001LL;
  v63.m128i_i64[0] = 0;
  v40 = sub_B87960((__int64)(v7 + 2192), a2);
  a3 = sub_1DD1D30(a1, a3, &v61, *(unsigned int *)(a2 + 24), v40, 0);
  if ( v61 != &v63 )
    free(v61);
  if ( v58 != v60 )
    free(v58);
  v41 = (char *)v71;
  if ( !(_BYTE)v75 )
  {
    if ( (_DWORD)v72 )
    {
      v47 = v7;
      v42 = 0;
      v43 = 8LL * (unsigned int)(v72 - 1) + 8;
      do
      {
        v44 = *(void ***)&v41[v42];
        if ( v44 )
        {
          if ( *v44 != v44 + 2 )
            free(*v44);
          operator delete(v44, 0x30u);
          v41 = (char *)v71;
        }
        v42 += 8;
      }
      while ( v43 != v42 );
      v7 = v47;
    }
    *((_QWORD *)ptr + 1410) = v74;
    LOBYTE(v75) = 1;
  }
  if ( v41 != (char *)&v73 )
    free(v41);
  if ( (v68 & 1) == 0 )
    operator delete(v69, 16LL * (unsigned int)v70, 8);
LABEL_3:
  v9 = *(_DWORD *)(a2 + 24);
  sub_F22AA0((unsigned __int64 *)&v61, a2);
  v10 = sub_AB7C40(v7, (__int64)v61, 0, 1);
  v11 = sub_A81910(v7, v10, v9);
  v12 = sub_A81910(v7, a3, *(_DWORD *)(a2 + 24));
  v69 = v11;
  v13 = *(_DWORD *)(a2 + 24);
  v70 = v12;
  ptr = &v69;
  v68 = 0x600000002LL;
  if ( (*(_BYTE *)(v7[290] + 1LL) & 8) != 0 )
    v14 = v7[2330];
  else
    v14 = v7[2340];
  v15 = sub_C98650(v7, v14, v13, 0x4Du, &v69, 2, v13, 0);
  if ( ptr != &v69 )
    free(ptr);
  return v15;
}
