__int64 __fastcall sub_18C9A50(__int64 a1, unsigned int a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r15d
  __int64 v7; // rcx
  unsigned __int8 v8; // dl
  __int64 result; // rax
  _BYTE *v10; // rsi
  __int64 v12; // rbp
  __int64 v13; // rax
  bool v14; // zf
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  int v17; // edx
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rbx
  const __m128i *v20; // r11
  unsigned __int64 v21; // r12
  const __m128i *v22; // rbx
  const __m128i *v23; // rbp
  _BYTE *v24; // rsi
  _BYTE *v25; // rax
  size_t v26; // r14
  unsigned __int64 v27; // r13
  __int64 v28; // r13
  unsigned __int64 v29; // rdi
  unsigned __int64 *v30; // rbx
  __int64 v31; // rax
  unsigned __int64 v32; // rbp
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // rax
  int v35; // edx
  void **v36; // rbx
  signed __int64 v37; // rbp
  void *v38; // rdi
  unsigned __int64 v39; // rbx
  unsigned __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rbx
  __int64 v45; // rbp
  void *v46; // rdi
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // [rsp+0h] [rbp-108h]
  _BYTE *v50; // [rsp+8h] [rbp-100h]
  __int64 v51; // [rsp+8h] [rbp-100h]
  __int64 *m128i_i64; // [rsp+10h] [rbp-F8h]
  const __m128i *v53; // [rsp+18h] [rbp-F0h]
  unsigned __int64 v54; // [rsp+20h] [rbp-E8h]
  _QWORD *v56; // [rsp+30h] [rbp-D8h]
  __int64 v57; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v58; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v59; // [rsp+48h] [rbp-C0h]
  int v60; // [rsp+50h] [rbp-B8h]
  unsigned int v61; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v62; // [rsp+60h] [rbp-A8h]

  v5 = a2;
  if ( a4 )
  {
    v12 = a4;
    if ( sub_15F16E0(a1) )
    {
      v13 = *(unsigned int *)(a1 + 40);
      if ( (_DWORD)v13 )
      {
        v14 = *(_QWORD *)a5 == 0;
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v13 - 8);
        v58 = 0;
        v49 = v15;
        v60 = *(_DWORD *)(a5 + 16);
        v16 = *(_QWORD *)(a5 + 8);
        v59 = v16;
        if ( !v14 )
        {
          v17 = *(_DWORD *)(v16 + 14976);
          if ( v17 )
          {
            v41 = (unsigned int)(v17 - 1);
            *(_DWORD *)(v16 + 14976) = v41;
            v18 = *(_QWORD *)(v16 + 8 * v41 + 14848);
            v42 = *(unsigned int *)(v18 + 536);
            *(_BYTE *)v18 = 0;
            v43 = *(_QWORD *)(v18 + 528);
            *(_DWORD *)(v18 + 424) = 0;
            v44 = v43 + (v42 << 6);
            if ( v43 != v44 )
            {
              v51 = v12;
              v45 = v43;
              do
              {
                while ( 1 )
                {
                  v44 -= 64;
                  v46 = *(void **)(v44 + 24);
                  if ( v46 == (void *)(v44 + 40) )
                    break;
                  operator delete(v46);
                  if ( v45 == v44 )
                    goto LABEL_66;
                }
              }
              while ( v45 != v44 );
LABEL_66:
              v12 = v51;
            }
            *(_DWORD *)(v18 + 536) = 0;
            v19 = v18 + 96;
          }
          else
          {
            v18 = operator new(0x3A0u);
            *(_BYTE *)v18 = 0;
            v19 = v18 + 96;
            *(_QWORD *)(v18 + 96) = v18 + 112;
            *(_QWORD *)(v18 + 128) = v18 + 144;
            *(_QWORD *)(v18 + 160) = v18 + 176;
            *(_QWORD *)(v18 + 192) = v18 + 208;
            *(_QWORD *)(v18 + 224) = v18 + 240;
            *(_QWORD *)(v18 + 256) = v18 + 272;
            *(_QWORD *)(v18 + 288) = v18 + 304;
            *(_QWORD *)(v18 + 320) = v18 + 336;
            *(_QWORD *)(v18 + 352) = v18 + 368;
            *(_QWORD *)(v18 + 384) = v18 + 400;
            *(_QWORD *)(v18 + 416) = v18 + 432;
            *(_QWORD *)(v18 + 104) = 0;
            *(_BYTE *)(v18 + 112) = 0;
            *(_QWORD *)(v18 + 136) = 0;
            *(_BYTE *)(v18 + 144) = 0;
            *(_QWORD *)(v18 + 168) = 0;
            *(_BYTE *)(v18 + 176) = 0;
            *(_QWORD *)(v18 + 200) = 0;
            *(_BYTE *)(v18 + 208) = 0;
            *(_QWORD *)(v18 + 232) = 0;
            *(_BYTE *)(v18 + 240) = 0;
            *(_QWORD *)(v18 + 264) = 0;
            *(_BYTE *)(v18 + 272) = 0;
            *(_QWORD *)(v18 + 296) = 0;
            *(_BYTE *)(v18 + 304) = 0;
            *(_QWORD *)(v18 + 328) = 0;
            *(_BYTE *)(v18 + 336) = 0;
            *(_QWORD *)(v18 + 360) = 0;
            *(_BYTE *)(v18 + 368) = 0;
            *(_QWORD *)(v18 + 392) = 0;
            *(_BYTE *)(v18 + 400) = 0;
            *(_QWORD *)(v18 + 424) = 0x800000000LL;
            *(_QWORD *)(v18 + 528) = v18 + 544;
            *(_QWORD *)(v18 + 536) = 0x600000000LL;
          }
          v20 = *(const __m128i **)a5;
          v58 = v18;
          *(_BYTE *)v18 = v20->m128i_i8[0];
          *(_BYTE *)(v18 + 1) = v20->m128i_i8[1];
          *(_BYTE *)(v18 + 2) = v20->m128i_i8[2];
          *(_BYTE *)(v18 + 3) = v20->m128i_i8[3];
          *(_BYTE *)(v18 + 4) = v20->m128i_i8[4];
          *(_BYTE *)(v18 + 5) = v20->m128i_i8[5];
          *(_BYTE *)(v18 + 6) = v20->m128i_i8[6];
          *(_BYTE *)(v18 + 7) = v20->m128i_i8[7];
          *(_BYTE *)(v18 + 8) = v20->m128i_i8[8];
          *(_BYTE *)(v18 + 9) = v20->m128i_i8[9];
          *(_BYTE *)(v18 + 10) = v20->m128i_i8[10];
          if ( (unsigned __int64)&v20[1] < v18 + 32 && v18 + 16 < (unsigned __int64)&v20[2] )
          {
            *(_QWORD *)(v18 + 16) = v20[1].m128i_i64[0];
            *(_QWORD *)(v18 + 24) = v20[1].m128i_i64[1];
            *(_QWORD *)(v18 + 32) = v20[2].m128i_i64[0];
            *(_QWORD *)(v18 + 40) = v20[2].m128i_i64[1];
            *(_QWORD *)(v18 + 48) = v20[3].m128i_i64[0];
            *(_QWORD *)(v18 + 56) = v20[3].m128i_i64[1];
            *(_QWORD *)(v18 + 64) = v20[4].m128i_i64[0];
            *(_QWORD *)(v18 + 72) = v20[4].m128i_i64[1];
            *(_QWORD *)(v18 + 80) = v20[5].m128i_i64[0];
            *(_QWORD *)(v18 + 88) = v20[5].m128i_i64[1];
          }
          else
          {
            *(__m128i *)(v18 + 16) = _mm_loadu_si128(v20 + 1);
            *(__m128i *)(v18 + 32) = _mm_loadu_si128(v20 + 2);
            *(__m128i *)(v18 + 48) = _mm_loadu_si128(v20 + 3);
            *(__m128i *)(v18 + 64) = _mm_loadu_si128(v20 + 4);
            *(__m128i *)(v18 + 80) = _mm_loadu_si128(v20 + 5);
          }
          v56 = a3;
          v21 = v19;
          v57 = v12;
          v22 = v20 + 26;
          v23 = v20 + 6;
          m128i_i64 = v20[26].m128i_i64;
          v53 = v20;
          v54 = v18;
          do
          {
            if ( (const __m128i *)v21 != v23 )
            {
              v25 = *(_BYTE **)v21;
              v26 = v23->m128i_u64[1];
              if ( *(_QWORD *)v21 == v21 + 16 )
                v27 = 15;
              else
                v27 = *(_QWORD *)(v21 + 16);
              if ( v26 > v27 )
              {
                if ( (v26 & 0x8000000000000000LL) != 0LL )
                  std::__throw_length_error("basic_string::_M_create");
                v28 = 2 * v27;
                if ( v26 < v28 )
                {
                  v29 = v28 + 1;
                  if ( v28 < 0 )
                  {
                    v29 = 0x8000000000000000LL;
                    v28 = 0x7FFFFFFFFFFFFFFFLL;
                  }
                }
                else
                {
                  v29 = v26 + 1;
                  v28 = v23->m128i_i64[1];
                }
                v25 = (_BYTE *)operator new(v29);
                if ( *(_QWORD *)v21 != v21 + 16 )
                {
                  v50 = v25;
                  operator delete(*(void **)v21);
                  v25 = v50;
                }
                *(_QWORD *)v21 = v25;
                *(_QWORD *)(v21 + 16) = v28;
              }
              if ( v26 )
              {
                v24 = (_BYTE *)v23->m128i_i64[0];
                if ( v26 == 1 )
                  *v25 = *v24;
                else
                  memcpy(v25, v24, v26);
                v25 = *(_BYTE **)v21;
              }
              *(_QWORD *)(v21 + 8) = v26;
              v25[v26] = 0;
            }
            v23 += 2;
            v21 += 32LL;
          }
          while ( v22 != v23 );
          v5 = a2;
          a3 = v56;
          v12 = v57;
          sub_E32260((__int64 *)(v54 + 416), m128i_i64);
          sub_9EED30(v54 + 528, v53[33].m128i_i64);
        }
        v61 = v5;
        if ( v12 == 1 )
        {
          v62 = *a3 & 0xFFFFFFFFFFFFFFFBLL;
        }
        else
        {
          v37 = 8 * v12;
          v40 = operator new(0x30u);
          v38 = (void *)(v40 + 16);
          v39 = v40;
          *(_QWORD *)v40 = v40 + 16;
          *(_QWORD *)(v40 + 8) = 0x400000000LL;
          LODWORD(v40) = 0;
          if ( (unsigned __int64)(v37 >> 3) > 4 )
          {
            sub_2237220(v39, v38, v37 >> 3, 8);
            v40 = *(unsigned int *)(v39 + 8);
            v38 = (void *)(*(_QWORD *)v39 + 8 * v40);
          }
          if ( v37 )
          {
            memcpy(v38, a3, v37);
            LODWORD(v40) = *(_DWORD *)(v39 + 8);
          }
          *(_DWORD *)(v39 + 8) = v40 + (v37 >> 3);
          v62 = v39 | 4;
        }
        v30 = &v58;
        v31 = *(unsigned int *)(v49 + 456);
        v32 = *(_QWORD *)(v49 + 448);
        v33 = v31 + 1;
        v34 = v32 + 40 * v31;
        if ( v33 > *(unsigned int *)(v49 + 460) )
        {
          v47 = v49 + 448;
          if ( v32 <= (unsigned __int64)&v58 && v34 > (unsigned __int64)&v58 )
          {
            sub_1748FD0(v47, v33);
            v48 = *(_QWORD *)(v49 + 448);
            v30 = (unsigned __int64 *)((char *)&v58 + v48 - v32);
            v34 = v48 + 40LL * *(unsigned int *)(v49 + 456);
          }
          else
          {
            sub_1748FD0(v47, v33);
            v34 = *(_QWORD *)(v49 + 448) + 40LL * *(unsigned int *)(v49 + 456);
          }
        }
        *(_OWORD *)v34 = 0;
        *(_DWORD *)(v34 + 16) = *((_DWORD *)v30 + 4);
        *(_QWORD *)(v34 + 8) = v30[1];
        *(_QWORD *)v34 = *v30;
        v35 = *((_DWORD *)v30 + 6);
        *v30 = 0;
        *(_DWORD *)(v34 + 24) = v35;
        *(_QWORD *)(v34 + 32) = v30[4];
        v30[4] = 0;
        ++*(_DWORD *)(v49 + 456);
        if ( v62 )
        {
          if ( (v62 & 4) != 0 )
          {
            v36 = (void **)(v62 & 0xFFFFFFFFFFFFFFF8LL);
            if ( (v62 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              if ( *v36 != v36 + 2 )
                free(*v36);
              operator delete(v36, 0x30u);
            }
          }
        }
        if ( v58 && v59 )
          sub_1580C40(v59, v58);
      }
      return 1;
    }
  }
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 520);
  if ( !v7
    || (v8 = *(_BYTE *)(v7 + 28) & 0x7F,
        result = (unsigned int)v8 - 40,
        LOBYTE(result) = v8 == 43 || (unsigned int)result > 6,
        (_BYTE)result) )
  {
LABEL_4:
    sub_168CDE0((__int64)&v58, (__int64 *)(a1 + 8), v5, a5, 0);
    sub_15F7200(&v58);
    return 1;
  }
  if ( *(char *)(v7 + 97) >= 0 )
  {
    v10 = (_BYTE *)(*(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(v7 + 16) & 4) != 0 )
    {
      if ( ((*(_BYTE *)(*(_QWORD *)v10 + 8LL) + 70) & 0x7Fu) > 3 )
        goto LABEL_4;
    }
    else if ( ((v10[8] + 70) & 0x7Fu) > 3 )
    {
      goto LABEL_4;
    }
    if ( (((unsigned __int8)*(_QWORD *)(v7 + 72) | (unsigned __int8)(*(__int64 *)(v7 + 72) >> 1)) & 1) == 0
      || (*(_BYTE *)(v7 + 97) & 0x20) != 0 )
    {
      goto LABEL_4;
    }
  }
  return result;
}
