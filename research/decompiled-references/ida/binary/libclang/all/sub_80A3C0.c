__int64 __fastcall sub_80A3C0(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int *a6,
        int *a7)
{
  unsigned int v7; // r14d
  unsigned int v8; // r12d
  int v10; // eax
  unsigned int v11; // ebp
  __int64 v12; // r14
  unsigned int v13; // r13d
  int v14; // r15d
  _DWORD *v15; // rdx
  _DWORD *v16; // rax
  bool v17; // al
  __int64 v18; // r15
  int *v19; // rax
  int v20; // eax
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // rdx
  char v24; // si
  __int64 v25; // rcx
  __int64 v26; // r8
  char *v27; // r9
  __int64 v28; // rax
  int v29; // esi
  __int64 v30; // rdx
  __m128i v31; // xmm0
  __int64 v32; // rcx
  _BYTE *v33; // rdi
  int v34; // eax
  char v35; // dl
  int v36; // eax
  int v37; // edx
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  __int64 *v40; // r8
  __int64 v41; // rax
  _DWORD *v42; // rax
  unsigned __int64 v43; // r14
  __int64 v44; // rax
  __int64 *v45; // r15
  __int64 v46; // rax
  unsigned __int64 v47; // rcx
  __int64 v48; // rax
  _QWORD *v49; // r14
  unsigned __int64 v50; // rbp
  __int64 v51; // rax
  _QWORD *v52; // r13
  unsigned int v53; // r13d
  __int64 v54; // rsi
  unsigned int v55; // r13d
  __int64 *v57; // rdi
  __int64 v58; // rdx
  _DWORD *v59; // rax
  _DWORD *v60; // rdx
  __int64 *v61; // rdi
  __int64 v62; // rsi
  _DWORD *v63; // rax
  _DWORD *v64; // rsi
  __int64 *v65; // rdi
  __int64 v66; // rdx
  _DWORD *v67; // rax
  _DWORD *v68; // rdx
  __int64 *v69; // rdi
  __int64 v70; // rcx
  _DWORD *v71; // rax
  _DWORD *v72; // rdx
  char *v73; // [rsp+0h] [rbp-448h]
  char *v74; // [rsp+10h] [rbp-438h] BYREF
  __int64 v75; // [rsp+18h] [rbp-430h]
  __m128i v76; // [rsp+20h] [rbp-428h] BYREF
  unsigned int v77; // [rsp+34h] [rbp-414h]
  unsigned __int64 v78; // [rsp+38h] [rbp-410h]
  __int64 v79; // [rsp+40h] [rbp-408h]
  int v80; // [rsp+48h] [rbp-400h]
  int v81; // [rsp+4Ch] [rbp-3FCh]
  __int64 v82; // [rsp+50h] [rbp-3F8h]
  char *v83; // [rsp+58h] [rbp-3F0h]
  unsigned int *v84; // [rsp+60h] [rbp-3E8h]
  __int64 v85; // [rsp+68h] [rbp-3E0h]
  char v86; // [rsp+7Fh] [rbp-3C9h] BYREF
  _BYTE v87[32]; // [rsp+80h] [rbp-3C8h] BYREF
  _BYTE v88[64]; // [rsp+A0h] [rbp-3A8h] BYREF
  void *v89; // [rsp+E0h] [rbp-368h]
  _BYTE v90[128]; // [rsp+F0h] [rbp-358h] BYREF
  _QWORD v91[5]; // [rsp+170h] [rbp-2D8h] BYREF
  int v92; // [rsp+198h] [rbp-2B0h]
  __int16 v93; // [rsp+19Ch] [rbp-2ACh]
  void *v94; // [rsp+1A0h] [rbp-2A8h]
  __m128i si128; // [rsp+1A8h] [rbp-2A0h]
  _BYTE v96[512]; // [rsp+1B8h] [rbp-290h] BYREF
  void *ptr[2]; // [rsp+3B8h] [rbp-90h]
  __m128i v98; // [rsp+3C8h] [rbp-80h]
  char v99; // [rsp+3D8h] [rbp-70h] BYREF
  int v100; // [rsp+400h] [rbp-48h]
  __int16 v101; // [rsp+404h] [rbp-44h]

  v7 = a2;
  v8 = 0;
  v79 = a1;
  v75 = a4;
  v82 = a5;
  v84 = a6;
  if ( a6 )
    v8 = *a6;
  v81 = 0;
  if ( a7 )
  {
    v81 = *a7;
    v7 = a2 - v81;
  }
  v77 = v7;
  v83 = &v86;
  while ( 1 )
  {
    v10 = *(_DWORD *)(v79 + 4LL * v8 + 20);
    v80 = v10;
    v11 = v10;
    if ( v10 < 0 )
      v11 = sub_CAB1A0(a3, (unsigned int)v10);
    v12 = *(int *)(a3 + 408);
    v13 = v11 & 0x7FFFFFFF;
    v14 = v12 + 1;
    if ( (unsigned int)(v12 + 1) <= 1 )
    {
      v15 = *(_DWORD **)(a3 + 184);
      if ( v13 < (*v15 & 0x7FFFFFFFu) )
        goto LABEL_34;
      goto LABEL_11;
    }
    if ( (int)v12 >= 0 )
    {
      v15 = *(_DWORD **)(a3 + 184);
      if ( v13 < (v15[6 * v12] & 0x7FFFFFFFu) )
        goto LABEL_34;
LABEL_11:
      if ( *(_DWORD *)(a3 + 192) != v14 )
      {
        v16 = &v15[6 * v14];
LABEL_13:
        v17 = v13 < (*v16 & 0x7FFFFFFFu);
        goto LABEL_14;
      }
      goto LABEL_41;
    }
    v38 = (unsigned int)(-2 - v12);
    v39 = *(_QWORD *)(*(_QWORD *)(a3 + 256) + 8LL * ((unsigned int)(-2 - v12) >> 6));
    if ( _bittest64(&v39, v38) )
    {
      v40 = (__int64 *)(*(_QWORD *)(a3 + 208) + 8 * ((unsigned __int64)(int)v38 >> 5));
      v41 = *v40;
      if ( !*v40 )
      {
        v57 = (__int64 *)(*(_QWORD *)(a3 + 224) & 0xFFFFFFFFFFFFFFF8LL);
        v58 = *v57;
        v57[10] += 768;
        v59 = (_DWORD *)((v58 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v57[1] >= (unsigned __int64)(v59 + 192) && v58 )
        {
          *v57 = (__int64)(v59 + 192);
        }
        else
        {
          v76.m128i_i64[0] = (__int64)v40;
          LODWORD(v74) = -2 - v12;
          v59 = (_DWORD *)sub_804090((__int64)v57, 768, 3);
          v40 = (__int64 *)v76.m128i_i64[0];
          LOBYTE(v38) = (_BYTE)v74;
        }
        *v40 = (__int64)v59;
        v60 = v59 + 192;
        do
        {
          *v59 = 0;
          v59 += 6;
          *((_OWORD *)v59 - 1) = 0;
        }
        while ( v60 != v59 );
        v41 = *v40;
      }
      v42 = (_DWORD *)(v41 + 24 * (v38 & 0x1F));
    }
    else
    {
      v42 = (_DWORD *)sub_CA9380(a3, (unsigned int)v38, 0);
    }
    if ( v13 < (*v42 & 0x7FFFFFFFu) )
      goto LABEL_34;
    if ( (_DWORD)v12 == -2 )
    {
LABEL_15:
      v18 = *(int *)(a3 + 408);
      goto LABEL_16;
    }
    if ( *(_DWORD *)(a3 + 192) != v14 )
    {
      v43 = (unsigned int)(-2 - v14);
      v44 = *(_QWORD *)(*(_QWORD *)(a3 + 256) + 8LL * ((unsigned int)(-2 - v14) >> 6));
      if ( _bittest64(&v44, v43) )
      {
        v45 = (__int64 *)(*(_QWORD *)(a3 + 208) + 8 * ((unsigned __int64)(int)v43 >> 5));
        v46 = *v45;
        if ( !*v45 )
        {
          v69 = (__int64 *)(*(_QWORD *)(a3 + 224) & 0xFFFFFFFFFFFFFFF8LL);
          v70 = *v69;
          v69[10] += 768;
          v71 = (_DWORD *)((v70 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( v69[1] >= (unsigned __int64)(v71 + 192) && v70 )
            *v69 = (__int64)(v71 + 192);
          else
            v71 = (_DWORD *)sub_804090((__int64)v69, 768, 3);
          *v45 = (__int64)v71;
          v72 = v71 + 192;
          do
          {
            *v71 = 0;
            v71 += 6;
            *((_OWORD *)v71 - 1) = 0;
          }
          while ( v72 != v71 );
          v46 = *v45;
        }
        v16 = (_DWORD *)(v46 + 24 * (v43 & 0x1F));
      }
      else
      {
        v16 = (_DWORD *)sub_CA9380(a3, (unsigned int)v43, 0);
      }
      goto LABEL_13;
    }
LABEL_41:
    v17 = v13 < *(_DWORD *)(a3 + 248);
LABEL_14:
    if ( v17 )
      goto LABEL_15;
LABEL_34:
    v18 = (int)sub_CA9700(a3, v13);
LABEL_16:
    LOBYTE(v91[0]) = 0;
    if ( (unsigned int)(v18 + 1) <= 1 )
      break;
    if ( (int)v18 >= 0 )
    {
      v19 = (int *)(*(_QWORD *)(a3 + 184) + 24LL * (int)v18);
      goto LABEL_19;
    }
    v47 = (unsigned int)(-2 - v18);
    v48 = *(_QWORD *)(*(_QWORD *)(a3 + 256) + 8LL * ((unsigned int)(-2 - v18) >> 6));
    if ( _bittest64(&v48, v47) )
    {
      v49 = (_QWORD *)(*(_QWORD *)(a3 + 208) + 8 * ((unsigned __int64)(int)v47 >> 5));
      if ( *v49 )
      {
        v19 = (int *)(*v49 + 24LL * ((-2 - (_BYTE)v18) & 0x1F));
        goto LABEL_19;
      }
      v61 = (__int64 *)(*(_QWORD *)(a3 + 224) & 0xFFFFFFFFFFFFFFF8LL);
      v62 = *v61;
      v61[10] += 768;
      v63 = (_DWORD *)((v62 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v61[1] >= (unsigned __int64)(v63 + 192) && v62 )
      {
        *v61 = (__int64)(v63 + 192);
        v35 = 0;
      }
      else
      {
        LODWORD(v74) = -2 - v18;
        v63 = (_DWORD *)sub_804090((__int64)v61, 768, 3);
        v35 = v91[0];
        LOBYTE(v47) = (_BYTE)v74;
      }
      *v49 = v63;
      v64 = v63 + 192;
      do
      {
        *v63 = 0;
        v63 += 6;
        *((_OWORD *)v63 - 1) = 0;
      }
      while ( v64 != v63 );
      v19 = (int *)(*v49 + 24 * (v47 & 0x1F));
    }
    else
    {
      v19 = (int *)sub_CA9380(a3, (unsigned int)v47, v91);
      v35 = v91[0];
    }
    if ( v35 || !v19 )
      break;
LABEL_19:
    v20 = *v19;
    v86 = 0;
    v21 = v13 - (v20 & 0x7FFFFFFF);
    v78 = (unsigned int)v18 | v78 & 0xFFFFFFFF00000000LL;
    v22 = sub_CAC050(a3, (unsigned int)v78, v83);
    v24 = v86;
    v25 = v22;
    if ( v86 )
      goto LABEL_102;
    LOBYTE(v91[0]) = 0;
    v26 = v22 + v21;
    v27 = (char *)(v22 + v23);
    if ( (int)v18 >= 0 )
    {
      v28 = *(_QWORD *)(a3 + 184) + 24 * v18;
      goto LABEL_22;
    }
    v50 = (unsigned int)(-2 - v18);
    v51 = *(_QWORD *)(*(_QWORD *)(a3 + 256) + 8LL * ((unsigned int)(-2 - v18) >> 6));
    if ( _bittest64(&v51, v50) )
    {
      v52 = (_QWORD *)(*(_QWORD *)(a3 + 208) + 8 * ((unsigned __int64)(int)v50 >> 5));
      if ( *v52 )
      {
        v28 = *v52 + 24LL * ((-2 - (_BYTE)v18) & 0x1F);
        goto LABEL_22;
      }
      v65 = (__int64 *)(*(_QWORD *)(a3 + 224) & 0xFFFFFFFFFFFFFFF8LL);
      v66 = *v65;
      v65[10] += 768;
      v67 = (_DWORD *)((v66 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v65[1] >= (unsigned __int64)(v67 + 192) && v66 )
      {
        *v65 = (__int64)(v67 + 192);
      }
      else
      {
        v85 = v25;
        v76.m128i_i64[0] = v26;
        v74 = v27;
        v67 = (_DWORD *)sub_804090((__int64)v65, 768, 3);
        LODWORD(v25) = v85;
        LODWORD(v26) = v76.m128i_i32[0];
        v24 = v91[0];
        LODWORD(v27) = (_DWORD)v74;
      }
      *v52 = v67;
      v68 = v67 + 192;
      do
      {
        *v67 = 0;
        v67 += 6;
        *((_OWORD *)v67 - 1) = 0;
      }
      while ( v68 != v67 );
      v28 = *v52 + 24LL * ((-2 - (_BYTE)v18) & 0x1F);
    }
    else
    {
      v85 = v25;
      v76.m128i_i64[0] = v26;
      v74 = v27;
      v28 = sub_CA9380(a3, (unsigned int)v50, v91);
      LODWORD(v27) = (_DWORD)v74;
      LODWORD(v26) = v76.m128i_i32[0];
      v24 = v91[0];
      LODWORD(v25) = v85;
    }
    if ( v24 )
      goto LABEL_40;
    if ( !v28 )
    {
      v29 = 0;
      goto LABEL_24;
    }
LABEL_22:
    if ( *(char *)(v28 + 3) < 0 )
      goto LABEL_40;
    v29 = *(_DWORD *)v28 & 0x7FFFFFFF;
LABEL_24:
    v74 = &v99;
    v76 = (__m128i)_mm_loadh_ps((const double *)&v74);
    sub_115E190((unsigned int)v88, v29, v75, v25, v26, (_DWORD)v27, 1);
    sub_11681C0(v88, v87, v30);
    v91[0] = a3;
    v31 = _mm_load_si128(&v76);
    v91[1] = v75;
    v91[2] = v82;
    v93 = 0;
    v91[3] = 0;
    v91[4] = 0;
    v92 = 0;
    v94 = v96;
    v100 = 0;
    v101 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E580);
    *(__m128i *)ptr = v31;
    v98 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    sub_117D3C0(v91, v87, 1);
    v33 = v94;
    v34 = LODWORD(ptr[0]) - (_DWORD)v94;
    if ( v77 < LODWORD(ptr[0]) - (int)v94
      || v77 == LODWORD(ptr[0]) - (_DWORD)v94
      && (v76.m128i_i32[0] = *(_DWORD *)(v79 + 4), v32 = v76.m128i_u32[0], v76.m128i_i32[0] - 1 == v8) )
    {
      v53 = v80;
      v73 = v74;
      v54 = (unsigned int)((__int64 (__fastcall *)(_QWORD *, _BYTE *, _QWORD, __int64))sub_117D0E0)(v91, v87, v77, v32);
      if ( a7 )
        *a7 = v81;
      if ( v84 )
        *v84 = v8;
      v55 = sub_115FEE0(v53, v54, a3, v75) + v53;
      if ( ptr[1] != v73 )
        free(ptr[1]);
      if ( v94 != v96 )
        free(v94);
      if ( v89 != v90 )
        free(v89);
      return v55;
    }
    v81 += v34;
    ++v8;
    v77 -= v34;
    if ( ptr[1] != v74 )
    {
      free(ptr[1]);
      v33 = v94;
    }
    if ( v33 != v96 )
      free(v33);
    if ( v89 != v90 )
      free(v89);
  }
  v78 &= 0xFFFFFFFF00000000LL;
  v86 = 0;
  v36 = sub_CAC050(a3, (unsigned int)v78, v83);
  LODWORD(v25) = v36;
  LODWORD(v26) = v36;
  if ( !v86 )
  {
    LODWORD(v27) = v36 + v37;
LABEL_40:
    v29 = 0;
    goto LABEL_24;
  }
LABEL_102:
  if ( a7 )
    *a7 = v81;
  if ( v84 )
    *v84 = v8;
  return v11;
}

