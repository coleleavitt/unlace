__int64 __fastcall sub_85AD60(__int64 *a1, __int64 a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  unsigned int v16; // ebx
  __int64 *v18; // rbp
  __int64 v19; // r15
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rbp
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // r13
  __int64 v32; // r14
  __int64 v33; // r13
  void *v34; // rdi
  __int64 v35; // [rsp+8h] [rbp-180h]
  __int64 v36; // [rsp+8h] [rbp-180h]
  __int64 v37; // [rsp+8h] [rbp-180h]
  __int64 v38; // [rsp+8h] [rbp-180h]
  __int64 v39; // [rsp+10h] [rbp-178h]
  __int64 v40; // [rsp+18h] [rbp-170h]
  __m128i v41; // [rsp+20h] [rbp-168h] BYREF
  unsigned int *v42; // [rsp+30h] [rbp-158h]
  __int64 v43; // [rsp+38h] [rbp-150h]
  __m128i v44; // [rsp+40h] [rbp-148h] BYREF
  __int64 *v45; // [rsp+50h] [rbp-138h]
  int v46; // [rsp+58h] [rbp-130h]
  unsigned int v47; // [rsp+60h] [rbp-128h] BYREF
  char v48; // [rsp+64h] [rbp-124h]
  __int64 v49; // [rsp+A0h] [rbp-E8h] BYREF
  _QWORD v50[7]; // [rsp+A8h] [rbp-E0h] BYREF
  __int64 v51; // [rsp+E0h] [rbp-A8h] BYREF
  __int64 v52; // [rsp+E8h] [rbp-A0h]
  __int64 v53; // [rsp+F0h] [rbp-98h]
  void *ptr; // [rsp+F8h] [rbp-90h] BYREF
  __int64 v55; // [rsp+100h] [rbp-88h]
  _BYTE v56[128]; // [rsp+108h] [rbp-80h] BYREF

  v4 = *(_QWORD *)(a2 + 16);
  v5 = *a1;
  v48 &= ~1u;
  v47 = 0;
  if ( !(unsigned __int8)sub_856400((__int64)&v47, v5, v4) )
  {
LABEL_20:
    v16 = 0;
    goto LABEL_12;
  }
  v6 = *(_QWORD *)(a2 + 24);
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL);
  if ( (*(_BYTE *)(v6 + 28) & 0x7Fu) - 47 > 2 )
  {
    v18 = (__int64 *)sub_A2E130(*a1, a2, 110, 0);
    v19 = sub_AC7B80(a2);
    if ( v18 )
    {
      v20 = *v18;
      if ( !*v18 )
      {
        v28 = v18[1];
        v29 = *(_DWORD *)(v28 + 14976);
        if ( v29 )
        {
          v30 = (unsigned int)(v29 - 1);
          *(_DWORD *)(v28 + 14976) = v30;
          v20 = *(_QWORD *)(v28 + 8 * v30 + 14848);
          v31 = *(unsigned int *)(v20 + 536);
          *(_BYTE *)v20 = 0;
          v32 = *(_QWORD *)(v20 + 528);
          *(_DWORD *)(v20 + 424) = 0;
          v33 = v32 + (v31 << 6);
          while ( v32 != v33 )
          {
            while ( 1 )
            {
              v33 -= 64;
              v34 = *(void **)(v33 + 24);
              if ( v34 == (void *)(v33 + 40) )
                break;
              operator delete(v34, *(_QWORD *)(v33 + 40) + 1LL);
              if ( v32 == v33 )
                goto LABEL_41;
            }
          }
LABEL_41:
          *(_DWORD *)(v20 + 536) = 0;
        }
        else
        {
          v20 = operator new(0x3A0u);
          *(_BYTE *)v20 = 0;
          *(_QWORD *)(v20 + 96) = v20 + 112;
          *(_QWORD *)(v20 + 128) = v20 + 144;
          *(_QWORD *)(v20 + 160) = v20 + 176;
          *(_QWORD *)(v20 + 192) = v20 + 208;
          *(_QWORD *)(v20 + 224) = v20 + 240;
          *(_QWORD *)(v20 + 256) = v20 + 272;
          *(_QWORD *)(v20 + 288) = v20 + 304;
          *(_QWORD *)(v20 + 320) = v20 + 336;
          *(_QWORD *)(v20 + 352) = v20 + 368;
          *(_QWORD *)(v20 + 384) = v20 + 400;
          *(_QWORD *)(v20 + 104) = 0;
          *(_BYTE *)(v20 + 112) = 0;
          *(_QWORD *)(v20 + 136) = 0;
          *(_BYTE *)(v20 + 144) = 0;
          *(_QWORD *)(v20 + 168) = 0;
          *(_BYTE *)(v20 + 176) = 0;
          *(_QWORD *)(v20 + 200) = 0;
          *(_BYTE *)(v20 + 208) = 0;
          *(_QWORD *)(v20 + 232) = 0;
          *(_BYTE *)(v20 + 240) = 0;
          *(_QWORD *)(v20 + 264) = 0;
          *(_BYTE *)(v20 + 272) = 0;
          *(_QWORD *)(v20 + 296) = 0;
          *(_BYTE *)(v20 + 304) = 0;
          *(_QWORD *)(v20 + 328) = 0;
          *(_BYTE *)(v20 + 336) = 0;
          *(_QWORD *)(v20 + 360) = 0;
          *(_BYTE *)(v20 + 368) = 0;
          *(_QWORD *)(v20 + 392) = 0;
          *(_BYTE *)(v20 + 400) = 0;
          *(_QWORD *)(v20 + 416) = v20 + 432;
          *(_QWORD *)(v20 + 424) = 0x800000000LL;
          *(_QWORD *)(v20 + 528) = v20 + 544;
          *(_QWORD *)(v20 + 536) = 0x600000000LL;
        }
        *v18 = v20;
      }
      v51 = v19;
      LOBYTE(v52) = 1;
      v21 = *(unsigned int *)(v20 + 424);
      if ( *(unsigned int *)(v20 + 428) < (unsigned __int64)(v21 + 1) )
      {
        sub_25D6060(v20 + 416, v20 + 432, v21 + 1, 12);
        v21 = *(unsigned int *)(v20 + 424);
      }
      v22 = *(_QWORD *)(v20 + 416) + 12 * v21;
      *(_QWORD *)v22 = v51;
      *(_DWORD *)(v22 + 8) = v52;
      ++*(_DWORD *)(v20 + 424);
    }
    goto LABEL_20;
  }
  v43 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL);
  v53 = v7;
  v55 = 0x800000000LL;
  v41 = 0u;
  v42 = &v47;
  LODWORD(v51) = 0;
  v52 = 0;
  ptr = v56;
  sub_69F580(&v49, v6 & 0xFFFFFFFFFFFFFFFBLL);
  v8 = (unsigned int)v55;
  v9 = v49;
  v10 = (unsigned int)v55 + 1LL;
  if ( HIDWORD(v55) < v10 )
  {
    v35 = v49;
    sub_25D6060(&ptr, v56, v10, 8);
    v8 = (unsigned int)v55;
    v9 = v35;
  }
  *((_QWORD *)ptr + v8) = v9;
  v11 = v55 + 1;
  LODWORD(v55) = v55 + 1;
  if ( (*(_BYTE *)(v6 + 28) & 0x7Fu) - 47 <= 2 )
  {
    v12 = *(_QWORD *)(v6 + 48);
    v52 = 0;
    v53 = v12;
    LODWORD(v51) = v51 & 7 | (16 * v11);
  }
  v13 = *a1;
  v14 = a2;
  BYTE4(v49) &= ~1u;
  v45 = &v49;
  v46 = 0;
  LODWORD(v49) = 0;
  v44 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, (__m128i)(unsigned __int64)a2);
  v16 = sub_851190(v13, a2, &v41, (__int64)&v51, (__int64)&v44);
  if ( !(_BYTE)v16 )
    goto LABEL_8;
  v23 = sub_2575D20(v13, v14, v15);
  v24 = (_QWORD *)a1[1];
  if ( *v24 != v23 )
  {
    if ( v23 != v50[0] )
    {
      sub_2576220(v24, v50);
      goto LABEL_8;
    }
    if ( v24 == v50 )
      goto LABEL_8;
    v36 = v23;
    sub_25769A0(v24);
    v23 = v36;
LABEL_26:
    if ( v23 == v50[0] )
      sub_257CF50(v24, v50);
    else
      sub_25768A0(v24, v50);
    goto LABEL_8;
  }
  if ( v23 == v50[0] )
  {
    sub_257D030(v24, v50);
    goto LABEL_8;
  }
  if ( v24 != v50 )
  {
    v25 = v24[1];
    if ( v25 )
    {
      v26 = v25 + 24LL * *(_QWORD *)(v25 - 8);
      if ( v25 == v26 )
      {
        v27 = 0;
      }
      else
      {
        do
        {
          v40 = v25;
          v39 = v23;
          v37 = v26 - 24;
          sub_5FF3B0((__int64 *)(v26 - 24));
          v26 = v37;
          v25 = v40;
          v23 = v39;
        }
        while ( v40 != v37 );
        v27 = 24LL * *(_QWORD *)(v40 - 8);
      }
      v38 = v23;
      operator delete[]((void *)(v25 - 8), v27 + 8);
      v23 = v38;
    }
    v24[1] = 0;
    goto LABEL_26;
  }
LABEL_8:
  if ( (unsigned int)v49 > 1 )
    sub_69F740((__int64)&v49);
  if ( ptr != v56 )
    free(ptr);
LABEL_12:
  if ( v47 > 1 )
    sub_69F740((__int64)&v47);
  return v16;
}

