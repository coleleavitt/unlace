__int64 __fastcall sub_4FD140(_QWORD *a1, __int64 a2, int *a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  char *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 (*v17)(); // r8
  __int64 (__fastcall *v18)(__int64, __int64, __int64, __int64); // rax
  void *v19; // r13
  int v20; // ebp
  bool v21; // zf
  int v22; // r12d
  unsigned __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rsi
  __int64 v30; // rax
  int v32; // eax
  void *v33; // rbp
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 (__fastcall *v38)(__int64); // rax
  void *v39; // rdi
  char v40; // al
  char v41; // al
  char v42; // dl
  __int64 v43; // rcx
  void *v44; // rax
  __int64 v45; // rdx
  void *v46; // r13
  int v47; // ebp
  int v48; // r12d
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v62; // [rsp+10h] [rbp-208h]
  char v63; // [rsp+1Fh] [rbp-1F9h]
  void *ptr[2]; // [rsp+20h] [rbp-1F8h] BYREF
  __int64 v65; // [rsp+30h] [rbp-1E8h]
  char v66; // [rsp+38h] [rbp-1E0h]
  __int64 v67; // [rsp+40h] [rbp-1D8h] BYREF
  __int128 v68; // [rsp+48h] [rbp-1D0h]
  char v69; // [rsp+58h] [rbp-1C0h]
  __int64 v70; // [rsp+60h] [rbp-1B8h]
  __int128 v71; // [rsp+70h] [rbp-1A8h] BYREF
  __int64 v72; // [rsp+80h] [rbp-198h]
  __int64 v73; // [rsp+88h] [rbp-190h]
  __int64 v74; // [rsp+90h] [rbp-188h]
  char v75; // [rsp+98h] [rbp-180h] BYREF
  char v76; // [rsp+C1h] [rbp-157h]
  char v77; // [rsp+E9h] [rbp-12Fh]
  _QWORD v78[8]; // [rsp+1D8h] [rbp-40h] BYREF

  v78[0] = __readfsqword(0x28u);
  v10 = a1[7];
  if ( v10 && (v11 = v10 - 1, (a1[7] = v11) == 0) || (v12 = a1[8]) != 0 && (v13 = v12 - 1, (a1[8] = v13) == 0) )
  {
    *(_BYTE *)(a2 + 24) = 2;
    *(_QWORD *)(a2 + 8) = 0;
    v67 = 0xFFFFFFFFLL;
    *(_QWORD *)&v68 = a5;
    DWORD2(v68) = 0;
    v29 = *(_QWORD *)a2;
    v30 = *(_QWORD *)(a2 + 16);
    if ( (unsigned __int64)&v67 >= *(_QWORD *)a2 && (unsigned __int64)&v67 < v29 + 24 * v30 )
    {
      if ( !v30 )
      {
        v49 = qvector_reserve(a2, v29, 1, 24);
        v50 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v49;
        v29 = v49 + 24 * v50;
      }
      *(_QWORD *)(v29 + 8) = a5;
      *(_QWORD *)v29 = 0xFFFFFFFFLL;
      *(_DWORD *)(v29 + 16) = 0;
      goto LABEL_28;
    }
    goto LABEL_35;
  }
  v72 = -1;
  v14 = &v75;
  v73 = 0;
  v74 = 0;
  v71 = -1;
  do
  {
    *(_WORD *)v14 = 0;
    v14 += 40;
    *((_WORD *)v14 - 19) = 0;
    *((_WORD *)v14 - 18) = 0;
    *((_DWORD *)v14 - 2) = 0;
    *((_WORD *)v14 - 17) = 0;
    *((_OWORD *)v14 - 2) = 0;
    *((_QWORD *)v14 - 2) = 0;
  }
  while ( v14 != (char *)v78 );
  if ( !(unsigned int)decode_insn(&v71, a5, v78, 0, 0, a6, 0.0)
    || *(_BYTE *)(*(_QWORD *)(qword_2CCB598 + 1672) + 1578LL)
    && (v25 = get_item_end(a5, a5, &qword_2CCB598, v15) - a5, v62 = v25, WORD1(v73) != v25)
    && (v72 = -1,
        v27 = *(_QWORD *)(qword_2CCB598 + 1672),
        v28 = *(unsigned __int8 *)(v27 + 1578),
        *(_BYTE *)(v27 + 1578) = 0,
        v63 = v28,
        decode_insn(&v71, a5, &qword_2CCB598, v25, v28, v26, 0.0),
        *(_BYTE *)(*(_QWORD *)(qword_2CCB598 + 1672) + 1578LL) = v63,
        WORD1(v73) != v62) )
  {
    *(_BYTE *)(a2 + 24) = 3;
    *(_QWORD *)(a2 + 8) = 0;
    v67 = -1;
    *(_QWORD *)&v68 = a5;
    DWORD2(v68) = 0;
    v29 = *(_QWORD *)a2;
    v30 = *(_QWORD *)(a2 + 16);
    if ( (unsigned __int64)&v67 >= *(_QWORD *)a2 && (unsigned __int64)&v67 < v29 + 24 * v30 )
    {
      if ( !v30 )
      {
        v53 = qvector_reserve(a2, v29, 1, 24);
        v54 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v53;
        v29 = v53 + 24 * v54;
      }
      *(_QWORD *)v29 = -1;
      *(_QWORD *)(v29 + 8) = a5;
      *(_DWORD *)(v29 + 16) = 0;
      goto LABEL_28;
    }
LABEL_35:
    if ( !v30 )
    {
      v36 = qvector_reserve(a2, v29, 1, 24);
      v37 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v36;
      v29 = v36 + 24 * v37;
    }
    *(__m128i *)v29 = _mm_load_si128((const __m128i *)&v67);
    *(_QWORD *)(v29 + 16) = *((_QWORD *)&v68 + 1);
    goto LABEL_28;
  }
  v16 = *a1;
  LODWORD(v67) = (_DWORD)&stru_10000;
  v69 = 0;
  v70 = 0;
  v68 = 0;
  v17 = *(__int64 (**)())(v16 + 72);
  if ( v17 == sub_4F3CD0 )
    goto LABEL_10;
  if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64 *, int *, __int128 *))v17)(a1, &v67, a3, &v71) )
  {
LABEL_48:
    v16 = *a1;
LABEL_10:
    v18 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v16 + 80);
    if ( v18 == sub_4F4F20 )
    {
      v19 = (void *)v72;
      v20 = 0;
      *(_BYTE *)(a2 + 24) = 4;
      v21 = v76 == 5;
      v22 = (unsigned __int16)v73;
      *(_QWORD *)(a2 + 8) = 0;
      ptr[0] = (void *)-1LL;
      ptr[1] = v19;
      LOWORD(v65) = v22;
      if ( v21 )
        v20 = v77 == 0;
      v23 = *(_QWORD *)a2;
      WORD1(v65) = v20;
      v24 = *(_QWORD *)(a2 + 16);
      if ( (unsigned __int64)ptr >= v23 && (unsigned __int64)ptr < v23 + 24 * v24 )
      {
        if ( !v24 )
        {
          v51 = qvector_reserve(a2, v23, 1, 24);
          v52 = *(_QWORD *)(a2 + 8);
          *(_QWORD *)a2 = v51;
          v23 = v51 + 24 * v52;
        }
        *(_QWORD *)v23 = -1;
        *(_QWORD *)(v23 + 8) = v19;
        *(_DWORD *)(v23 + 16) = v22 | (v20 << 16);
LABEL_28:
        ++*(_QWORD *)(a2 + 8);
        return 1;
      }
LABEL_25:
      if ( !v24 )
      {
        v34 = qvector_reserve(a2, v23, 1, 24);
        v35 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v34;
        v23 = v34 + 24 * v35;
      }
      *(__m128i *)v23 = _mm_load_si128((const __m128i *)ptr);
      *(_QWORD *)(v23 + 16) = v65;
      goto LABEL_28;
    }
    if ( ((unsigned __int8 (__fastcall *)(_QWORD *, __int64, int *, __int128 *, __int64, __int64))v18)(
           a1,
           a2,
           a3,
           &v71,
           a5,
           a6) )
    {
      return 1;
    }
    *a4 = 0;
    return 0;
  }
  v32 = sub_4FCF40((__int64)a1, (__int64)a3, (__int64)&v67, (__int64)&v71);
  if ( v32 )
  {
    if ( v32 == 2 )
    {
      v33 = (void *)a1[9];
      v23 = *(_QWORD *)a2;
      v24 = *(_QWORD *)(a2 + 16);
      if ( v33 != (void *)-1LL )
      {
        *(_BYTE *)(a2 + 24) = 2;
        *(_QWORD *)(a2 + 8) = 0;
        ptr[0] = (void *)0xFFFFFFFFLL;
        ptr[1] = v33;
        LODWORD(v65) = 0;
        if ( (unsigned __int64)ptr < v23 || (unsigned __int64)ptr >= v23 + 24 * v24 )
        {
          if ( !v24 )
          {
            v55 = qvector_reserve(a2, v23, 1, 24);
            v56 = *(_QWORD *)(a2 + 8);
            *(_QWORD *)a2 = v55;
            v23 = v55 + 24 * v56;
          }
          *(__m128i *)v23 = _mm_load_si128((const __m128i *)ptr);
          *(_QWORD *)(v23 + 16) = v65;
        }
        else
        {
          if ( !v24 )
          {
            v57 = qvector_reserve(a2, v23, 1, 24);
            v58 = *(_QWORD *)(a2 + 8);
            *(_QWORD *)a2 = v57;
            v23 = v57 + 24 * v58;
          }
          *(_QWORD *)(v23 + 8) = v33;
          *(_QWORD *)v23 = 0xFFFFFFFFLL;
          *(_DWORD *)(v23 + 16) = 0;
        }
        ++*(_QWORD *)(a2 + 8);
        a1[9] = -1;
        return 1;
      }
      v46 = (void *)v72;
      v47 = 0;
      *(_BYTE *)(a2 + 24) = 4;
      v21 = v76 == 5;
      v48 = (unsigned __int16)v73;
      *(_QWORD *)(a2 + 8) = 0;
      ptr[0] = (void *)-1LL;
      ptr[1] = v46;
      LOWORD(v65) = v48;
      if ( v21 )
        v47 = v77 == 0;
      WORD1(v65) = v47;
      if ( (unsigned __int64)ptr >= v23 && (unsigned __int64)ptr < v23 + 24 * v24 )
      {
        if ( !v24 )
        {
          v59 = qvector_reserve(a2, v23, 1, 24);
          v60 = *(_QWORD *)(a2 + 8);
          *(_QWORD *)a2 = v59;
          v23 = v59 + 24 * v60;
        }
        *(_QWORD *)v23 = -1;
        *(_QWORD *)(v23 + 8) = v46;
        *(_DWORD *)(v23 + 16) = v48 | (v47 << 16);
        goto LABEL_28;
      }
      goto LABEL_25;
    }
    goto LABEL_48;
  }
  *a4 = v70;
  if ( *a3 < 0 )
    return 0;
  v38 = *(__int64 (__fastcall **)(__int64))(*a1 + 32LL);
  if ( v38 == sub_4F3C80 )
    return 0;
  ((void (__fastcall *)(void **, _QWORD *, __int64, __int64, _QWORD, _QWORD))v38)(ptr, a1, a5, a6, (unsigned int)*a3, 0);
  v39 = ptr[0];
  if ( ((unsigned __int8)(v66 - 10) <= 1u || (unsigned __int8)(v66 - 12) <= 1u)
    && ptr[1] == (char *)&dword_0 + 1
    && *((_QWORD *)ptr[0] + 1) == v72
    && !*((_WORD *)ptr[0] + 8) )
  {
    if ( v66 == 11 )
    {
      v40 = 10;
LABEL_61:
      v66 = v40;
      *((_WORD *)ptr[0] + 8) = v73;
      v41 = *(_BYTE *)(a2 + 24);
      v42 = v66;
      v43 = v65;
      *(_QWORD *)(a2 + 8) = 1;
      v66 = v41;
      v44 = *(void **)a2;
      *(_BYTE *)(a2 + 24) = v42;
      v45 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)a2 = v39;
      *(_QWORD *)(a2 + 16) = v43;
      ptr[0] = v44;
      v65 = v45;
      if ( v44 )
      {
        ptr[1] = nullptr;
        qfree(v44);
      }
      return 1;
    }
    if ( v66 == 13 )
    {
      v40 = 12;
      goto LABEL_61;
    }
  }
  if ( !ptr[0] )
    return 0;
  ptr[1] = nullptr;
  qfree(ptr[0]);
  return 0;
}
