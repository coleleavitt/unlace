unsigned __int64 __fastcall sub_997710(_QWORD *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v6; // rsi
  __int64 v9; // rax
  __int64 *v10; // rbx
  unsigned __int8 *v11; // r15
  _BYTE *v12; // rdx
  __int64 v13; // rax
  unsigned __int8 *v14; // r14
  _BYTE *v15; // rdx
  __int64 v16; // rax
  _QWORD *v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v20; // r15
  unsigned __int8 *v21; // r12
  _BYTE *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r12
  unsigned __int64 v25; // xmm0_8
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int8 *v28; // rdx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // r15
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r15
  void *v34; // rdi
  unsigned __int8 *v35; // rdx
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // r13
  __int64 v39; // r14
  __int64 v40; // r13
  void *v41; // rdi
  unsigned __int8 *v42; // rdx
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // r13
  __int64 v46; // r14
  __int64 v47; // r13
  void *v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rdx
  int v51; // eax
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rax
  unsigned __int64 v55; // rdx
  void *v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned __int64 v59; // [rsp+0h] [rbp-58h]
  __int64 v60; // [rsp+8h] [rbp-50h]
  unsigned __int64 v61; // [rsp+10h] [rbp-48h]
  int v62; // [rsp+18h] [rbp-40h]

  v5 = a2;
  v6 = (unsigned int)a4;
  v9 = sub_A2DD70(*a1, (unsigned int)a4, 2184);
  v10 = (__int64 *)v9;
  if ( v9 )
  {
    v11 = *(unsigned __int8 **)v9;
    if ( !*(_QWORD *)v9 )
    {
      v50 = *(_QWORD *)(v9 + 8);
      v51 = *(_DWORD *)(v50 + 14976);
      if ( v51 )
      {
        v52 = (unsigned int)(v51 - 1);
        *(_DWORD *)(v50 + 14976) = v52;
        v11 = *(unsigned __int8 **)(v50 + 8 * v52 + 14848);
        v53 = *((unsigned int *)v11 + 134);
        *v11 = 0;
        v54 = *((_QWORD *)v11 + 66);
        *((_DWORD *)v11 + 106) = 0;
        v55 = v54 + (v53 << 6);
        v60 = v54;
        while ( v60 != v55 )
        {
          v55 -= 64LL;
          v56 = *(void **)(v55 + 24);
          if ( v56 != (void *)(v55 + 40) )
          {
            v57 = *(_QWORD *)(v55 + 40);
            v59 = v55;
            operator delete(v56, v57 + 1);
            v55 = v59;
          }
        }
        *((_DWORD *)v11 + 134) = 0;
      }
      else
      {
        v58 = operator new(0x3A0u);
        *(_BYTE *)v58 = 0;
        v11 = (unsigned __int8 *)v58;
        *(_QWORD *)(v58 + 96) = v58 + 112;
        *(_QWORD *)(v58 + 128) = v58 + 144;
        *(_QWORD *)(v58 + 160) = v58 + 176;
        *(_QWORD *)(v58 + 192) = v58 + 208;
        *(_QWORD *)(v58 + 224) = v58 + 240;
        *(_QWORD *)(v58 + 256) = v58 + 272;
        *(_QWORD *)(v58 + 288) = v58 + 304;
        *(_QWORD *)(v58 + 320) = v58 + 336;
        *(_QWORD *)(v58 + 352) = v58 + 368;
        *(_QWORD *)(v58 + 384) = v58 + 400;
        *(_QWORD *)(v58 + 104) = 0;
        *(_BYTE *)(v58 + 112) = 0;
        *(_QWORD *)(v58 + 136) = 0;
        *(_BYTE *)(v58 + 144) = 0;
        *(_QWORD *)(v58 + 168) = 0;
        *(_BYTE *)(v58 + 176) = 0;
        *(_QWORD *)(v58 + 200) = 0;
        *(_BYTE *)(v58 + 208) = 0;
        *(_QWORD *)(v58 + 232) = 0;
        *(_BYTE *)(v58 + 240) = 0;
        *(_QWORD *)(v58 + 264) = 0;
        *(_BYTE *)(v58 + 272) = 0;
        *(_QWORD *)(v58 + 296) = 0;
        *(_BYTE *)(v58 + 304) = 0;
        *(_QWORD *)(v58 + 328) = 0;
        *(_BYTE *)(v58 + 336) = 0;
        *(_QWORD *)(v58 + 360) = 0;
        *(_BYTE *)(v58 + 368) = 0;
        *(_QWORD *)(v58 + 392) = 0;
        *(_BYTE *)(v58 + 400) = 0;
        *(_QWORD *)(v58 + 416) = v58 + 432;
        *(_QWORD *)(v58 + 424) = 0x800000000LL;
        *(_QWORD *)(v58 + 528) = v58 + 544;
        *(_QWORD *)(v58 + 536) = 0x600000000LL;
      }
      *v10 = (__int64)v11;
    }
    v11[*v11 + 1] = 8;
    v12 = (_BYTE *)*v10;
    v13 = *(unsigned __int8 *)*v10;
    *v12 = v13 + 1;
    *(_QWORD *)&v12[8 * v13 + 16] = a3;
    v14 = (unsigned __int8 *)*v10;
    if ( !*v10 )
    {
      v28 = (unsigned __int8 *)v10[1];
      v29 = *((_DWORD *)v28 + 3744);
      if ( v29 )
      {
        v30 = (unsigned int)(v29 - 1);
        *((_DWORD *)v28 + 3744) = v30;
        v14 = *(unsigned __int8 **)&v28[8 * v30 + 14848];
        v31 = *((unsigned int *)v14 + 134);
        *v14 = 0;
        v32 = *((_QWORD *)v14 + 66);
        *((_DWORD *)v14 + 106) = 0;
        v33 = v32 + (v31 << 6);
        v59 = v32;
        while ( v59 != v33 )
        {
          v33 -= 64LL;
          v34 = *(void **)(v33 + 24);
          if ( v34 != (void *)(v33 + 40) )
            operator delete(v34, *(_QWORD *)(v33 + 40) + 1LL);
        }
        *((_DWORD *)v14 + 134) = 0;
      }
      else
      {
        v14 = (unsigned __int8 *)operator new(0x3A0u);
        *v14 = 0;
        *((_QWORD *)v14 + 12) = v14 + 112;
        *((_QWORD *)v14 + 16) = v14 + 144;
        *((_QWORD *)v14 + 20) = v14 + 176;
        *((_QWORD *)v14 + 24) = v14 + 208;
        *((_QWORD *)v14 + 28) = v14 + 240;
        *((_QWORD *)v14 + 32) = v14 + 272;
        *((_QWORD *)v14 + 36) = v14 + 304;
        *((_QWORD *)v14 + 40) = v14 + 336;
        *((_QWORD *)v14 + 44) = v14 + 368;
        *((_QWORD *)v14 + 48) = v14 + 400;
        *((_QWORD *)v14 + 13) = 0;
        v14[112] = 0;
        *((_QWORD *)v14 + 17) = 0;
        v14[144] = 0;
        *((_QWORD *)v14 + 21) = 0;
        v14[176] = 0;
        *((_QWORD *)v14 + 25) = 0;
        v14[208] = 0;
        *((_QWORD *)v14 + 29) = 0;
        v14[240] = 0;
        *((_QWORD *)v14 + 33) = 0;
        v14[272] = 0;
        *((_QWORD *)v14 + 37) = 0;
        v14[304] = 0;
        *((_QWORD *)v14 + 41) = 0;
        v14[336] = 0;
        *((_QWORD *)v14 + 45) = 0;
        v14[368] = 0;
        *((_QWORD *)v14 + 49) = 0;
        v14[400] = 0;
        *((_QWORD *)v14 + 52) = v14 + 432;
        *((_QWORD *)v14 + 53) = 0x800000000LL;
        *((_QWORD *)v14 + 66) = v14 + 544;
        *((_QWORD *)v14 + 67) = 0x600000000LL;
      }
      *v10 = (__int64)v14;
    }
    v14[*v14 + 1] = 2;
    v15 = (_BYTE *)*v10;
    v16 = *(unsigned __int8 *)*v10;
    v6 = (unsigned int)(v16 + 1);
    *v15 = v16 + 1;
    *(_QWORD *)&v15[8 * v16 + 16] = v5;
  }
  v17 = (_QWORD *)a1[1];
  v18 = *(_QWORD *)(*v17 & 0xFFFFFFFFFFFFFFF0LL);
  result = *(_QWORD *)(v18 + 8);
  if ( (result & 7) != 0 || (result & 8) != 0 )
  {
    result = sub_B0CF30(*v17, v6) & 0xFFFFFFFFFFFFFFF0LL;
    v20 = result;
  }
  else
  {
    v20 = v18 & 0xFFFFFFFFFFFFFFF0LL;
  }
  if ( v10 )
  {
    v21 = (unsigned __int8 *)*v10;
    if ( !*v10 )
    {
      v35 = (unsigned __int8 *)v10[1];
      v36 = *((_DWORD *)v35 + 3744);
      if ( v36 )
      {
        v37 = (unsigned int)(v36 - 1);
        *((_DWORD *)v35 + 3744) = v37;
        v21 = *(unsigned __int8 **)&v35[8 * v37 + 14848];
        v38 = *((unsigned int *)v21 + 134);
        v39 = *((_QWORD *)v21 + 66);
        *v21 = 0;
        *((_DWORD *)v21 + 106) = 0;
        v40 = v39 + (v38 << 6);
        while ( v39 != v40 )
        {
          while ( 1 )
          {
            v40 -= 64;
            v41 = *(void **)(v40 + 24);
            if ( v41 == (void *)(v40 + 40) )
              break;
            operator delete(v41, *(_QWORD *)(v40 + 40) + 1LL);
            if ( v39 == v40 )
              goto LABEL_28;
          }
        }
LABEL_28:
        *((_DWORD *)v21 + 134) = 0;
      }
      else
      {
        v21 = (unsigned __int8 *)operator new(0x3A0u);
        *v21 = 0;
        *((_QWORD *)v21 + 12) = v21 + 112;
        *((_QWORD *)v21 + 16) = v21 + 144;
        *((_QWORD *)v21 + 20) = v21 + 176;
        *((_QWORD *)v21 + 24) = v21 + 208;
        *((_QWORD *)v21 + 28) = v21 + 240;
        *((_QWORD *)v21 + 32) = v21 + 272;
        *((_QWORD *)v21 + 36) = v21 + 304;
        *((_QWORD *)v21 + 40) = v21 + 336;
        *((_QWORD *)v21 + 44) = v21 + 368;
        *((_QWORD *)v21 + 48) = v21 + 400;
        *((_QWORD *)v21 + 13) = 0;
        v21[112] = 0;
        *((_QWORD *)v21 + 17) = 0;
        v21[144] = 0;
        *((_QWORD *)v21 + 21) = 0;
        v21[176] = 0;
        *((_QWORD *)v21 + 25) = 0;
        v21[208] = 0;
        *((_QWORD *)v21 + 29) = 0;
        v21[240] = 0;
        *((_QWORD *)v21 + 33) = 0;
        v21[272] = 0;
        *((_QWORD *)v21 + 37) = 0;
        v21[304] = 0;
        *((_QWORD *)v21 + 41) = 0;
        v21[336] = 0;
        *((_QWORD *)v21 + 45) = 0;
        v21[368] = 0;
        *((_QWORD *)v21 + 49) = 0;
        v21[400] = 0;
        *((_QWORD *)v21 + 52) = v21 + 432;
        *((_QWORD *)v21 + 53) = 0x800000000LL;
        *((_QWORD *)v21 + 66) = v21 + 544;
        *((_QWORD *)v21 + 67) = 0x600000000LL;
      }
      *v10 = (__int64)v21;
    }
    v21[*v21 + 1] = 8;
    v22 = (_BYTE *)*v10;
    v23 = *(unsigned __int8 *)*v10;
    *v22 = v23 + 1;
    *(_QWORD *)&v22[8 * v23 + 16] = v20;
    v24 = *v10;
    v25 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a4), _mm_cvtsi32_si128(HIDWORD(a4))).m128i_u64[0];
    if ( !*v10 )
    {
      v42 = (unsigned __int8 *)v10[1];
      v43 = *((_DWORD *)v42 + 3744);
      if ( v43 )
      {
        v44 = (unsigned int)(v43 - 1);
        *((_DWORD *)v42 + 3744) = v44;
        v24 = *(_QWORD *)&v42[8 * v44 + 14848];
        v45 = *(unsigned int *)(v24 + 536);
        v46 = *(_QWORD *)(v24 + 528);
        *(_BYTE *)v24 = 0;
        *(_DWORD *)(v24 + 424) = 0;
        v47 = v46 + (v45 << 6);
        while ( v46 != v47 )
        {
          while ( 1 )
          {
            v47 -= 64;
            v48 = *(void **)(v47 + 24);
            if ( v48 == (void *)(v47 + 40) )
              break;
            v49 = *(_QWORD *)(v47 + 40);
            v59 = v25;
            operator delete(v48, v49 + 1);
            v25 = v59;
            if ( v46 == v47 )
              goto LABEL_35;
          }
        }
LABEL_35:
        *(_DWORD *)(v24 + 536) = 0;
      }
      else
      {
        v59 = v25;
        v24 = operator new(0x3A0u);
        *(_BYTE *)v24 = 0;
        *(_QWORD *)(v24 + 96) = v24 + 112;
        *(_QWORD *)(v24 + 128) = v24 + 144;
        *(_QWORD *)(v24 + 160) = v24 + 176;
        *(_QWORD *)(v24 + 192) = v24 + 208;
        *(_QWORD *)(v24 + 224) = v24 + 240;
        *(_QWORD *)(v24 + 256) = v24 + 272;
        *(_QWORD *)(v24 + 288) = v24 + 304;
        *(_QWORD *)(v24 + 320) = v24 + 336;
        *(_QWORD *)(v24 + 352) = v24 + 368;
        *(_QWORD *)(v24 + 384) = v24 + 400;
        *(_QWORD *)(v24 + 104) = 0;
        *(_BYTE *)(v24 + 112) = 0;
        *(_QWORD *)(v24 + 136) = 0;
        *(_BYTE *)(v24 + 144) = 0;
        *(_QWORD *)(v24 + 168) = 0;
        *(_BYTE *)(v24 + 176) = 0;
        *(_QWORD *)(v24 + 200) = 0;
        *(_BYTE *)(v24 + 208) = 0;
        *(_QWORD *)(v24 + 232) = 0;
        *(_BYTE *)(v24 + 240) = 0;
        *(_QWORD *)(v24 + 264) = 0;
        *(_BYTE *)(v24 + 272) = 0;
        *(_QWORD *)(v24 + 296) = 0;
        *(_BYTE *)(v24 + 304) = 0;
        *(_QWORD *)(v24 + 328) = 0;
        *(_BYTE *)(v24 + 336) = 0;
        *(_QWORD *)(v24 + 360) = 0;
        *(_BYTE *)(v24 + 368) = 0;
        *(_QWORD *)(v24 + 392) = 0;
        *(_BYTE *)(v24 + 400) = 0;
        *(_QWORD *)(v24 + 416) = v24 + 432;
        v25 = v59;
        *(_QWORD *)(v24 + 424) = 0x800000000LL;
        *(_QWORD *)(v24 + 528) = v24 + 544;
        *(_QWORD *)(v24 + 536) = 0x600000000LL;
      }
      *v10 = v24;
    }
    v26 = *(unsigned int *)(v24 + 424);
    v27 = *(unsigned int *)(v24 + 428);
    LOBYTE(v62) = 1;
    v61 = v25;
    if ( v27 < v26 + 1 )
    {
      sub_25D6060(v24 + 416, v24 + 432, v26 + 1, 12);
      v26 = *(unsigned int *)(v24 + 424);
    }
    result = *(_QWORD *)(v24 + 416) + 12 * v26;
    *(_QWORD *)result = v61;
    *(_DWORD *)(result + 8) = v62;
    ++*(_DWORD *)(v24 + 424);
  }
  return result;
}

