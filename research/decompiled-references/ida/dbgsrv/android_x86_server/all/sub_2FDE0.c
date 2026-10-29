/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2FDE0
// Address: 0x0002FDE0

//----- (0002FDE0) --------------------------------------------------------
_DWORD *__cdecl sub_2FDE0(int a1)
{
  unsigned __int8 v1; // cl
  unsigned __int8 v2; // di
  char v3; // al
  unsigned __int8 v4; // cl
  unsigned __int8 v5; // di
  char v6; // al
  __int64 v7; // rax
  unsigned int v8; // edi
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // edx
  int v12; // esi
  int v13; // ecx
  __m128i v14; // xmm0
  __m128i v15; // xmm2
  int v16; // eax
  __m128i v17; // xmm0
  int v18; // ecx
  int v19; // esi
  int v20; // esi
  int v21; // eax
  int v22; // esi
  int v23; // esi
  int v24; // esi
  void (__cdecl *v26)(int, int, int, int, int, int); // edi
  int v27; // eax
  int v28; // edx
  void (__cdecl *v29)(int, int, size_t, int, int, int); // edi
  int v30; // eax
  int v31; // edx
  void (__cdecl *v32)(int, int, int, int, int, int); // edi
  int v33; // eax
  int v34; // edx
  int v35; // eax
  unsigned int v36; // ecx
  int v37; // edi
  __int64 v38; // kr08_8
  int v39; // eax
  int v40; // ecx
  unsigned __int64 v41; // rax
  bool v42; // cf
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // kr10_8
  int v45; // eax
  int v46; // edx
  int v47; // eax
  unsigned __int64 v48; // kr18_8
  unsigned int v49; // ecx
  unsigned int v50; // eax
  _DWORD *v51; // esi
  int v52; // eax
  int v53; // eax
  _DWORD *v54; // eax
  _DWORD *v55; // ecx
  __int64 v56; // [esp-10h] [ebp-9Ch]
  __int64 v57; // [esp-10h] [ebp-9Ch]
  __int64 v58; // [esp-10h] [ebp-9Ch]
  __int64 v59; // [esp-10h] [ebp-9Ch]
  __int64 v60; // [esp-10h] [ebp-9Ch]
  __int64 v61; // [esp-10h] [ebp-9Ch]
  __int64 v62; // [esp-10h] [ebp-9Ch]
  __int64 v63; // [esp-10h] [ebp-9Ch]
  __int64 v64; // [esp-10h] [ebp-9Ch]
  __int64 v65; // [esp-10h] [ebp-9Ch]
  __int64 v66; // [esp-10h] [ebp-9Ch]
  __int64 v67; // [esp-10h] [ebp-9Ch]
  __int64 v68; // [esp-10h] [ebp-9Ch]
  unsigned __int8 v69; // [esp+0h] [ebp-8Ch]
  _DWORD *v70; // [esp+0h] [ebp-8Ch]
  unsigned int v71; // [esp+4h] [ebp-88h]
  unsigned int v72; // [esp+8h] [ebp-84h]
  unsigned __int8 v73; // [esp+Ch] [ebp-80h]
  size_t v74; // [esp+Ch] [ebp-80h]
  unsigned int v75; // [esp+Ch] [ebp-80h]
  _WORD *v76; // [esp+10h] [ebp-7Ch]
  __int64 v77; // [esp+10h] [ebp-7Ch]
  _DWORD *v78; // [esp+18h] [ebp-74h]
  unsigned int *v79; // [esp+1Ch] [ebp-70h]
  _WORD *v80; // [esp+20h] [ebp-6Ch]
  _DWORD *v81; // [esp+24h] [ebp-68h]
  char v82; // [esp+28h] [ebp-64h]
  unsigned __int16 *v83; // [esp+2Ch] [ebp-60h]
  char v84[4]; // [esp+38h] [ebp-54h] BYREF
  int v85; // [esp+3Ch] [ebp-50h]
  unsigned int v86; // [esp+58h] [ebp-34h]
  unsigned int v87; // [esp+60h] [ebp-2Ch]
  unsigned int v88; // [esp+78h] [ebp-14h]

  v88 = __readgsdword(0x14u);
  v1 = *(_BYTE *)(a1 + 388);
  if ( (unsigned __int8)(v1 - 1) >= 2u )
  {
    v2 = *(_BYTE *)(a1 + 388);
    v3 = (*(int (__cdecl **)(int, int, _DWORD))(a1 + 380))(a1, 1, v2);
    v1 = v2;
    if ( !v3 )
      return nullptr;
  }
  v69 = v1;
  v4 = *(_BYTE *)(a1 + 389);
  if ( (unsigned __int8)(v4 - 1) >= 2u )
  {
    v5 = *(_BYTE *)(a1 + 389);
    v6 = (*(int (__cdecl **)(int, int, _DWORD))(a1 + 380))(a1, 3, v5);
    v4 = v5;
    if ( !v6 )
      return nullptr;
  }
  v73 = v4;
  LODWORD(v7) = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
  v8 = *(_DWORD *)(a1 + 368);
  v9 = *(_DWORD *)(a1 + 364);
  v72 = v7 - v9;
  v71 = (v7 - __PAIR64__(v8, v9)) >> 32;
  v10 = qlseek(*(_DWORD *)(a1 + 360), __PAIR64__(v8, v9) + 16, 0);
  if ( (v11 & v10) == 0xFFFFFFFF )
    goto LABEL_33;
  *(_BYTE *)(a1 + 476) = v73 == 2;
  *(_BYTE *)(a1 + 477) = v69 == 2;
  *(_BYTE *)(a1 + 478) = v69 == 2;
  HIDWORD(v56) = a1 + 400;
  LODWORD(v56) = *(_DWORD *)(a1 + 360);
  v12 = lreadbytes(v56, 2u, v73 == 2);
  if ( v12 < 0 )
    goto LABEL_32;
  HIDWORD(v57) = a1 + 402;
  LODWORD(v57) = *(_DWORD *)(a1 + 360);
  v12 = lreadbytes(v57, 2u, *(_BYTE *)(a1 + 476));
  if ( v12 < 0 )
    goto LABEL_32;
  if ( !sub_340D0(a1) )
    goto LABEL_33;
  v13 = *(unsigned __int8 *)(a1 + 477);
  v14 = _mm_srai_epi32(_mm_slli_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v13 == 0), 0), 0x1Fu), 0x1Fu);
  v15 = _mm_or_si128(
          _mm_and_si128(_mm_load_si128((const __m128i *)&xmmword_EFC50), v14),
          _mm_andnot_si128(v14, (__m128i)xmmword_EFC40));
  v16 = 8 * (v13 != 0) + 8;
  v17 = _mm_or_si128(_mm_and_si128(v14, (__m128i)xmmword_EFC70), _mm_andnot_si128(v14, (__m128i)xmmword_EFC60));
  v18 = 4 * v13 + 4;
  *(__m128i *)(a1 + 292) = v15;
  *(_DWORD *)(a1 + 308) = v16;
  *(_DWORD *)(a1 + 312) = _mm_cvtsi128_si32(v17);
  *(_DWORD *)(a1 + 316) = _mm_cvtsi128_si32(_mm_shuffle_epi32(v17, 229));
  *(_DWORD *)(a1 + 340) = v18;
  *(_DWORD *)(a1 + 344) = v18;
  *(_DWORD *)(a1 + 320) = _mm_cvtsi128_si32(_mm_shuffle_epi32(v15, 231));
  *(__m128i *)(a1 + 324) = v17;
  HIDWORD(v58) = a1 + 404;
  LODWORD(v58) = *(_DWORD *)(a1 + 360);
  v19 = lreadbytes(v58, 4u, *(_BYTE *)(a1 + 476));
  if ( v19 < 0 )
    goto LABEL_29;
  v74 = *(_DWORD *)(a1 + 332);
  HIDWORD(v59) = a1 + 408;
  LODWORD(v59) = *(_DWORD *)(a1 + 360);
  v20 = lreadbytes(v59, v74, *(_BYTE *)(a1 + 476));
  if ( v20 < 0
    || (v74 = *(_DWORD *)(a1 + 336),
        v81 = (_DWORD *)(a1 + 416),
        HIDWORD(v60) = a1 + 416,
        LODWORD(v60) = *(_DWORD *)(a1 + 360),
        v20 = lreadbytes(v60, v74, *(_BYTE *)(a1 + 476)),
        v20 < 0)
    || (v74 = *(_DWORD *)(a1 + 336),
        v78 = (_DWORD *)(a1 + 424),
        HIDWORD(v61) = a1 + 424,
        LODWORD(v61) = *(_DWORD *)(a1 + 360),
        v20 = lreadbytes(v61, v74, *(_BYTE *)(a1 + 476)),
        v20 < 0) )
  {
    v29 = *(void (__cdecl **)(int, int, size_t, int, int, int))(a1 + 380);
    v30 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
    v29(a1, 19, v74, v20, v30, v31);
    goto LABEL_33;
  }
  HIDWORD(v62) = a1 + 432;
  LODWORD(v62) = *(_DWORD *)(a1 + 360);
  v19 = lreadbytes(v62, 4u, *(_BYTE *)(a1 + 476));
  if ( v19 < 0 )
  {
LABEL_29:
    v26 = *(void (__cdecl **)(int, int, int, int, int, int))(a1 + 380);
    v27 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
    v26(a1, 19, 4, v19, v27, v28);
    goto LABEL_33;
  }
  HIDWORD(v63) = a1 + 436;
  LODWORD(v63) = *(_DWORD *)(a1 + 360);
  v12 = lreadbytes(v63, 2u, *(_BYTE *)(a1 + 476));
  if ( v12 < 0
    || (HIDWORD(v64) = a1 + 438,
        LODWORD(v64) = *(_DWORD *)(a1 + 360),
        v12 = lreadbytes(v64, 2u, *(_BYTE *)(a1 + 476)),
        v12 < 0)
    || (v76 = (_WORD *)(a1 + 440),
        HIDWORD(v65) = a1 + 440,
        LODWORD(v65) = *(_DWORD *)(a1 + 360),
        v12 = lreadbytes(v65, 2u, *(_BYTE *)(a1 + 476)),
        v12 < 0)
    || (v83 = (unsigned __int16 *)(a1 + 442),
        HIDWORD(v66) = a1 + 442,
        LODWORD(v66) = *(_DWORD *)(a1 + 360),
        v12 = lreadbytes(v66, 2u, *(_BYTE *)(a1 + 476)),
        v12 < 0)
    || (v80 = (_WORD *)(a1 + 444),
        HIDWORD(v67) = a1 + 444,
        LODWORD(v67) = *(_DWORD *)(a1 + 360),
        v12 = lreadbytes(v67, 2u, *(_BYTE *)(a1 + 476)),
        v12 < 0)
    || (HIDWORD(v68) = a1 + 446,
        LODWORD(v68) = *(_DWORD *)(a1 + 360),
        v12 = lreadbytes(v68, 2u, *(_BYTE *)(a1 + 476)),
        v12 < 0) )
  {
LABEL_32:
    v32 = *(void (__cdecl **)(int, int, int, int, int, int))(a1 + 380);
    v33 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
    v32(a1, 19, 2, v12, v33, v34);
    goto LABEL_33;
  }
  v21 = *(unsigned __int16 *)(a1 + 436);
  if ( *(_DWORD *)(a1 + 292) != v21 )
  {
    v22 = a1;
    if ( !(*(unsigned __int8 (__cdecl **)(int, int, int, _DWORD))(a1 + 380))(a1, 2, v21, *(_DWORD *)(a1 + 292)) )
    {
      v70 = nullptr;
      goto LABEL_34;
    }
  }
  v23 = (unsigned __int16)*v76;
  if ( (v23 == 0) != (*(_QWORD *)v81 == 0) )
  {
    if ( !(*(unsigned __int8 (__cdecl **)(int, int, int, _DWORD, _DWORD))(a1 + 380))(
            a1,
            5,
            v23,
            *v81,
            *(_DWORD *)(a1 + 420)) )
      goto LABEL_33;
    *(_DWORD *)(a1 + 420) = 0;
    *v81 = 0;
    *v76 = 0;
    goto LABEL_25;
  }
  v24 = a1;
  if ( *(_QWORD *)v81 )
  {
    v35 = *(unsigned __int16 *)(a1 + 438);
    if ( *(_DWORD *)(a1 + 296) != v35 )
    {
      if ( !(*(unsigned __int8 (__cdecl **)(int, int, int, _DWORD))(a1 + 380))(a1, 4, v35, *(_DWORD *)(a1 + 296)) )
        goto LABEL_33;
      v47 = *(_DWORD *)(a1 + 296);
      if ( v47 > *(unsigned __int16 *)(a1 + 438) )
        goto LABEL_33;
      *(_WORD *)(a1 + 438) = v47;
LABEL_25:
      v24 = a1;
    }
  }
  if ( *v80
    || !*(_QWORD *)v78
    || (v45 = qlseek(*(_DWORD *)(v24 + 360), *(_QWORD *)(v24 + 364) + *(_QWORD *)v78, 0),
        v24 = a1,
        (v46 & v45) == 0xFFFFFFFF)
    || (v24 = a1, !sub_34230(a1, v84))
    || v85 )
  {
    v36 = *(unsigned __int16 *)(v24 + 444);
    v79 = (unsigned int *)(v24 + 448);
    *(_DWORD *)(v24 + 448) = v36;
    v82 = 1;
  }
  else
  {
    v36 = v86;
    v79 = (unsigned int *)(a1 + 448);
    *(_DWORD *)(a1 + 448) = v86;
    v82 = 0;
  }
  v75 = v36;
  v37 = *(_DWORD *)(a1 + 428);
  if ( (v36 == 0) != (*(_QWORD *)v78 == 0) )
  {
    v38 = *(_QWORD *)(v24 + 372) - *(_QWORD *)(v24 + 364);
    if ( !(*(unsigned __int8 (__cdecl **)(int, int, unsigned int, _DWORD, int, _DWORD, _DWORD))(v24 + 380))(
            v24,
            7,
            v36,
            *v78,
            v37,
            v38,
            HIDWORD(v38)) )
      goto LABEL_33;
    goto LABEL_58;
  }
  LODWORD(v77) = *v78;
  HIDWORD(v77) = *(_DWORD *)(a1 + 428);
  if ( !(v37 | *v78) )
    goto LABEL_59;
  v39 = *(unsigned __int16 *)(v24 + 442);
  v40 = *(_DWORD *)(v24 + 300);
  if ( v40 != v39 )
  {
    if ( !(*(unsigned __int8 (__cdecl **)(int, int, int, int))(a1 + 380))(a1, 6, v39, v40)
      || *(_DWORD *)(a1 + 300) > (int)*(unsigned __int16 *)(a1 + 442) )
    {
LABEL_58:
      *(_DWORD *)(a1 + 428) = 0;
      *v78 = 0;
      *v80 = 0;
      *v79 = 0;
      v36 = 0;
LABEL_59:
      v75 = v36;
      v43 = v36 * (unsigned __int64)*v83;
      v77 = 0;
      goto LABEL_60;
    }
    v77 = *(_QWORD *)v78;
    v75 = *v79;
  }
  v41 = v75 * (unsigned __int64)*v83;
  v42 = __CFADD__(v77, v41);
  v43 = v77 + v41;
  if ( v42 )
  {
    v44 = *(_QWORD *)(a1 + 372) - *(_QWORD *)(a1 + 364);
    goto LABEL_61;
  }
LABEL_60:
  v48 = *(_QWORD *)(a1 + 372) - *(_QWORD *)(a1 + 364);
  v44 = v48;
  if ( v48 < v43 )
  {
LABEL_61:
    if ( (*(unsigned __int8 (__cdecl **)(int, int, unsigned int, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 380))(
           a1,
           7,
           v75,
           v77,
           HIDWORD(v77),
           v44,
           HIDWORD(v44)) )
    {
      *(_DWORD *)(a1 + 428) = 0;
      *v78 = 0;
      *v80 = 0;
      *v79 = 0;
      goto LABEL_72;
    }
    goto LABEL_33;
  }
  if ( !v77 )
    goto LABEL_72;
  v49 = *(unsigned __int16 *)(a1 + 446);
  if ( (v49 != 0xFFFF) | (unsigned __int8)v82 || (v50 = v87) == 0 )
  {
    *(_DWORD *)(a1 + 452) = v49;
    if ( !(_WORD)v49 || (v51 = (_DWORD *)(a1 + 452), v50 = v49, v49 < v75) )
    {
LABEL_72:
      if ( !*(_QWORD *)v81 || *(_WORD *)(a1 + 400) != 1 || (*(unsigned __int8 (__cdecl **)(int, int))(a1 + 380))(a1, 18) )
      {
        v52 = *(unsigned __int16 *)(a1 + 402);
        if ( v52 == 183 || (unsigned __int16)v52 == 40 )
        {
          v53 = *(_DWORD *)(a1 + 468);
          if ( v53 )
            (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v53 + 4))(*(_DWORD *)(a1 + 468));
          v54 = operator new(0x28u);
          v22 = a1;
          v55 = (_DWORD *)(a1 + 468);
          *v54 = &off_1347FC;
          v54[2] = 0;
          v54[3] = 0;
          v54[1] = v54 + 2;
          v54[5] = 0;
          v54[6] = 0;
          v54[4] = v54 + 5;
          *((_BYTE *)v54 + 38) = 0;
          *((_WORD *)v54 + 18) = 0;
          v54[8] = 0;
          v54[7] = 0;
        }
        else
        {
          v54 = operator new(4u);
          *v54 = &off_134814;
          v22 = a1;
          v55 = (_DWORD *)(a1 + 468);
        }
        *v55 = v54;
        LOBYTE(v54) = 1;
        v70 = v54;
        goto LABEL_34;
      }
      goto LABEL_33;
    }
  }
  else
  {
    v51 = (_DWORD *)(a1 + 452);
    *(_DWORD *)(a1 + 452) = v87;
    if ( v50 < v75 )
      goto LABEL_72;
  }
  if ( (*(unsigned __int8 (__cdecl **)(int, int, unsigned int, unsigned int))(a1 + 380))(a1, 17, v50, v75) )
  {
    *v51 = 0;
    goto LABEL_72;
  }
LABEL_33:
  v70 = nullptr;
  v22 = a1;
LABEL_34:
  qlseek(*(_DWORD *)(v22 + 360), *(_QWORD *)(v22 + 364) + __PAIR64__(v71, v72), 0);
  return v70;
}
// 2FE87: variable 'v7' is possibly undefined
// 2FEA9: variable 'v11' is possibly undefined
// 3034C: variable 'v28' is possibly undefined
// 303E5: variable 'v31' is possibly undefined
// 30539: variable 'v34' is possibly undefined
// 306D1: variable 'v46' is possibly undefined
// EFC40: using guessed type __int128 xmmword_EFC40;
// EFC50: using guessed type __int128 xmmword_EFC50;
// EFC60: using guessed type __int128 xmmword_EFC60;
// EFC70: using guessed type __int128 xmmword_EFC70;
// 1347FC: using guessed type int (__cdecl *off_1347FC)(int);
// 134814: using guessed type int (*off_134814)();
