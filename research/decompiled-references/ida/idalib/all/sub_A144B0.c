__int64 __fastcall sub_A144B0(__int64 a1, unsigned __int16 *a2)
{
  __int64 v3; // rdx
  int v4; // edi
  int v5; // r13d
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  char *v10; // rdx
  unsigned __int64 v11; // rax
  __m128i v12; // xmm0
  char *v13; // rsi
  char v14; // si
  char v15; // cl
  char v16; // cl
  char v17; // cl
  char *v18; // rsi
  char *v19; // rsi
  char *v20; // rsi
  char v21; // cl
  char v22; // cl
  char v23; // cl
  char v24; // cl
  char v25; // cl
  char v26; // cl
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int16 *v29; // rcx
  int v30; // esi
  char v31; // cl
  unsigned __int64 v33; // [rsp+0h] [rbp-1A8h]
  unsigned __int64 v34; // [rsp+0h] [rbp-1A8h]
  __int64 v35; // [rsp+8h] [rbp-1A0h]
  int v36; // [rsp+14h] [rbp-194h]
  unsigned __int16 *v37; // [rsp+18h] [rbp-190h] BYREF
  char *v38; // [rsp+20h] [rbp-188h] BYREF
  __int64 v39; // [rsp+28h] [rbp-180h]
  char v40; // [rsp+30h] [rbp-178h] BYREF
  char v41; // [rsp+40h] [rbp-168h]
  char *v42; // [rsp+48h] [rbp-160h]
  __int64 v43; // [rsp+50h] [rbp-158h]
  char v44; // [rsp+58h] [rbp-150h] BYREF
  _BYTE *v45; // [rsp+68h] [rbp-140h]
  __int64 v46; // [rsp+70h] [rbp-138h]
  char v47; // [rsp+88h] [rbp-120h]
  _BYTE *v48; // [rsp+90h] [rbp-118h]
  __int64 v49; // [rsp+98h] [rbp-110h]
  char v50; // [rsp+B0h] [rbp-F8h]
  char v51; // [rsp+B8h] [rbp-F0h]
  _QWORD v52[2]; // [rsp+C0h] [rbp-E8h] BYREF
  _QWORD v53[2]; // [rsp+D0h] [rbp-D8h] BYREF
  __int64 v54; // [rsp+E0h] [rbp-C8h] BYREF
  char v55; // [rsp+F0h] [rbp-B8h]
  __int64 *v56; // [rsp+F8h] [rbp-B0h] BYREF
  __int64 v57; // [rsp+108h] [rbp-A0h] BYREF
  __int64 *v58; // [rsp+118h] [rbp-90h] BYREF
  __int64 v59; // [rsp+128h] [rbp-80h] BYREF
  char v60; // [rsp+138h] [rbp-70h]
  __int64 *v61; // [rsp+140h] [rbp-68h] BYREF
  __int64 v62; // [rsp+150h] [rbp-58h] BYREF
  char v63; // [rsp+160h] [rbp-48h]
  char v64; // [rsp+168h] [rbp-40h]

  v3 = a1 + 16;
  v37 = a2;
  v4 = *a2;
  v37 = a2 + 1;
  v36 = v4;
  *(_QWORD *)a1 = v3;
  *(_QWORD *)(a1 + 8) = 0x100000000LL;
  if ( (unsigned __int16)v4 > 1uLL )
    sub_A14160((__int64 *)a1, (unsigned __int16)v4);
  if ( v4 )
  {
    v5 = 0;
    do
    {
      v27 = sub_A09840((__int64 *)&v37);
      v38 = &v40;
      v33 = v27;
      v35 = v28;
      v41 &= 0xF0u;
      v42 = &v44;
      v39 = 0;
      v40 = 0;
      v43 = 0;
      v44 = 0;
      v47 = 0;
      v50 = 0;
      v51 = 0;
      sub_A0C250(&v37, (__int64)&v38);
      v29 = v37;
      v37 = (unsigned __int16 *)((char *)v37 + 1);
      v30 = *(unsigned __int8 *)v29;
      if ( (*(_BYTE *)v29 & 1) != 0 )
        v51 |= 8u;
      if ( ((v30 >> 1) & 4) != 0 )
        v51 = (2 * ((v30 >> 1) & 3)) | v51 & 0xF8 | 1;
      if ( ((v30 >> 4) & 2) != 0 )
        v51 = v51 & 0x3F | 0x40 | ((unsigned __int8)(v30 >> 4) << 7);
      v31 = v30 >> 6;
      if ( (v31 & 2) != 0 )
        v51 = v51 & 0xCF | 0x10 | (32 * (v31 & 1));
      v52[1] = v35;
      v52[0] = v33;
      v53[0] = &v54;
      sub_A09AE0(v53, v38, (__int64)&v38[v39]);
      v55 = v41 & 0xF | v55 & 0xF0;
      v56 = &v57;
      sub_A09AE0(&v56, v42, (__int64)&v42[v43]);
      v60 = 0;
      if ( v47 )
      {
        v58 = &v59;
        sub_A09AE0(&v58, v45, (__int64)&v45[v46]);
        v60 = 1;
      }
      v63 = 0;
      if ( v50 )
      {
        v61 = &v62;
        sub_A09AE0(&v61, v48, (__int64)&v48[v49]);
        v63 = 1;
      }
      v6 = *(_QWORD *)a1;
      v7 = *(unsigned int *)(a1 + 12);
      v64 = v51;
      v8 = *(unsigned int *)(a1 + 8);
      v9 = v8 + 1;
      v10 = (char *)v52;
      v11 = v6 + 176 * v8;
      if ( v9 > v7 )
      {
        if ( v6 > (unsigned __int64)v52 || v11 <= (unsigned __int64)v52 )
        {
          sub_A14160((__int64 *)a1, v9);
          v10 = (char *)v52;
          v11 = *(_QWORD *)a1 + 176LL * *(unsigned int *)(a1 + 8);
        }
        else
        {
          v34 = v6;
          sub_A14160((__int64 *)a1, v9);
          v10 = (char *)v52 + *(_QWORD *)a1 - v34;
          v11 = *(_QWORD *)a1 + 176LL * *(unsigned int *)(a1 + 8);
        }
      }
      v12 = _mm_loadu_si128((const __m128i *)v10);
      *(_QWORD *)(v11 + 16) = v11 + 32;
      *(__m128i *)v11 = v12;
      v13 = *((char **)v10 + 2);
      if ( v13 == v10 + 32 )
      {
        *(__m128i *)(v11 + 32) = _mm_loadu_si128((const __m128i *)v10 + 2);
      }
      else
      {
        *(_QWORD *)(v11 + 16) = v13;
        *(_QWORD *)(v11 + 32) = *((_QWORD *)v10 + 4);
      }
      *(_QWORD *)(v11 + 24) = *((_QWORD *)v10 + 3);
      v14 = v10[48];
      *((_QWORD *)v10 + 2) = v10 + 32;
      *((_QWORD *)v10 + 3) = 0;
      v10[32] = 0;
      v15 = v14 & 1 | *(_BYTE *)(v11 + 48) & 0xFE;
      *(_BYTE *)(v11 + 48) = v15;
      v16 = v10[48] & 2 | v15 & 0xFD;
      *(_BYTE *)(v11 + 48) = v16;
      v17 = v10[48] & 4 | v16 & 0xFB;
      *(_BYTE *)(v11 + 48) = v17;
      *(_BYTE *)(v11 + 48) = v10[48] & 8 | v17 & 0xF7;
      *(_QWORD *)(v11 + 56) = v11 + 72;
      v18 = *((char **)v10 + 7);
      if ( v18 == v10 + 72 )
      {
        *(__m128i *)(v11 + 72) = _mm_loadu_si128((const __m128i *)(v10 + 72));
      }
      else
      {
        *(_QWORD *)(v11 + 56) = v18;
        *(_QWORD *)(v11 + 72) = *((_QWORD *)v10 + 9);
      }
      *(_QWORD *)(v11 + 64) = *((_QWORD *)v10 + 8);
      *((_QWORD *)v10 + 7) = v10 + 72;
      *((_QWORD *)v10 + 8) = 0;
      v10[72] = 0;
      *(_BYTE *)(v11 + 120) = 0;
      if ( v10[120] )
      {
        *(_QWORD *)(v11 + 88) = v11 + 104;
        v19 = *((char **)v10 + 11);
        if ( v19 == v10 + 104 )
        {
          *(__m128i *)(v11 + 104) = _mm_loadu_si128((const __m128i *)(v10 + 104));
        }
        else
        {
          *(_QWORD *)(v11 + 88) = v19;
          *(_QWORD *)(v11 + 104) = *((_QWORD *)v10 + 13);
        }
        *(_QWORD *)(v11 + 96) = *((_QWORD *)v10 + 12);
        *((_QWORD *)v10 + 11) = v10 + 104;
        *((_QWORD *)v10 + 12) = 0;
        v10[104] = 0;
        *(_BYTE *)(v11 + 120) = 1;
      }
      *(_BYTE *)(v11 + 160) = 0;
      if ( v10[160] )
      {
        *(_QWORD *)(v11 + 128) = v11 + 144;
        v20 = *((char **)v10 + 16);
        if ( v20 == v10 + 144 )
        {
          *(__m128i *)(v11 + 144) = _mm_loadu_si128((const __m128i *)v10 + 9);
        }
        else
        {
          *(_QWORD *)(v11 + 128) = v20;
          *(_QWORD *)(v11 + 144) = *((_QWORD *)v10 + 18);
        }
        *(_QWORD *)(v11 + 136) = *((_QWORD *)v10 + 17);
        *((_QWORD *)v10 + 16) = v10 + 144;
        *((_QWORD *)v10 + 17) = 0;
        v10[144] = 0;
        *(_BYTE *)(v11 + 160) = 1;
      }
      ++v5;
      v21 = v10[168] & 1 | *(_BYTE *)(v11 + 168) & 0xFE;
      *(_BYTE *)(v11 + 168) = v21;
      v22 = v10[168] & 6 | v21 & 0xF9;
      *(_BYTE *)(v11 + 168) = v22;
      v23 = v10[168] & 8 | v22 & 0xF7;
      *(_BYTE *)(v11 + 168) = v23;
      v24 = v10[168] & 0x10 | v23 & 0xEF;
      *(_BYTE *)(v11 + 168) = v24;
      v25 = v10[168] & 0x20 | v24 & 0xDF;
      *(_BYTE *)(v11 + 168) = v25;
      v26 = v10[168] & 0x40 | v25 & 0xBF;
      *(_BYTE *)(v11 + 168) = v26;
      *(_BYTE *)(v11 + 168) = v10[168] & 0x80 | v26 & 0x7F;
      ++*(_DWORD *)(a1 + 8);
      sub_A09C70((__int64)v53);
      sub_A09C70((__int64)&v38);
    }
    while ( v36 != v5 );
  }
  return a1;
}
