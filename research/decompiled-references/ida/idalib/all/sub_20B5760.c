__int64 __fastcall sub_20B5760(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // dl
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // r13
  __int8 v10; // r12
  int v11; // edi
  int v12; // eax
  int v13; // ebp
  int v14; // edi
  unsigned int v15; // eax
  __int64 *v16; // rsi
  __int64 v17; // rdx
  unsigned __int8 v18; // cl
  __int64 v19; // rcx
  __int64 v20; // r13
  int v21; // r11d
  __int64 v22; // r12
  __int64 *v23; // rbp
  bool v24; // zf
  __m128i *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // r11
  __int64 v28; // rcx
  __m128i v29; // xmm1
  __m128i v30; // xmm2
  __m128i v31; // xmm3
  __m128i *v32; // rax
  __m128i *v33; // rax
  _BYTE *v34; // rax
  __m128i *v35; // rax
  __int64 v36; // r13
  char *v37; // r8
  __int64 result; // rax
  __int64 v39; // r9
  _QWORD *v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // rdx
  char *v46; // r12
  __m128i v47; // xmm4
  __m128i v48; // xmm5
  __m128i v49; // xmm6
  int v50; // esi
  __int64 v51; // [rsp+0h] [rbp-178h]
  char *v52; // [rsp+10h] [rbp-168h]
  __int64 v53; // [rsp+18h] [rbp-160h]
  __m128i v54; // [rsp+20h] [rbp-158h] BYREF
  __m128i v55; // [rsp+30h] [rbp-148h] BYREF
  __m128i v56; // [rsp+40h] [rbp-138h] BYREF
  __int64 v57; // [rsp+50h] [rbp-128h]
  __int64 v58; // [rsp+68h] [rbp-110h] BYREF
  __int8 v59; // [rsp+77h] [rbp-101h] BYREF
  __int64 v60; // [rsp+78h] [rbp-100h] BYREF
  __int64 v61; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v62; // [rsp+88h] [rbp-F0h] BYREF
  __int64 v63; // [rsp+90h] [rbp-E8h] BYREF
  __int64 src; // [rsp+98h] [rbp-E0h] BYREF
  _QWORD *v65; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v66; // [rsp+A8h] [rbp-D0h] BYREF
  unsigned __int64 v67; // [rsp+B0h] [rbp-C8h]
  int v68; // [rsp+B8h] [rbp-C0h]
  __int16 v69; // [rsp+BCh] [rbp-BCh] BYREF
  char v70[2]; // [rsp+BEh] [rbp-BAh] BYREF
  __m128i dest[4]; // [rsp+C0h] [rbp-B8h] BYREF
  __m128i v72; // [rsp+100h] [rbp-78h] BYREF
  __m128i v73; // [rsp+110h] [rbp-68h]
  __m128i v74; // [rsp+120h] [rbp-58h]
  __m128i si128; // [rsp+130h] [rbp-48h]

  v4 = *(_BYTE *)(a1 - 16);
  v58 = a1;
  if ( (v4 & 2) != 0 )
  {
    v24 = *(_DWORD *)(a1 - 24) == 2;
    v65 = **(_QWORD ***)(a1 - 32);
    if ( v24 )
    {
      v5 = *(_QWORD *)(a1 - 32);
      goto LABEL_3;
    }
LABEL_25:
    v6 = 0;
    goto LABEL_4;
  }
  v5 = a1 - 8LL * ((v4 >> 2) & 0xF) - 16;
  v65 = *(_QWORD **)v5;
  if ( ((*(_WORD *)(a1 - 16) >> 6) & 0xF) != 2 )
    goto LABEL_25;
LABEL_3:
  v6 = *(_QWORD *)(v5 + 8);
LABEL_4:
  v7 = *(unsigned int *)(a2 + 16);
  v8 = *(_QWORD *)a2;
  v66 = v6;
  v9 = *(_QWORD *)(a1 + 16) & 0x1FFFFFFFFFFFFFFFLL;
  v67 = v9 | v67 & 0xE000000000000000LL;
  v10 = *(_BYTE *)(a1 + 23) >> 5;
  HIBYTE(v67) = (32 * v10) | HIBYTE(v67) & 0x1F;
  v11 = *(_DWORD *)(a1 + 4);
  v68 = *(_DWORD *)(a1 + 4);
  v69 = *(_WORD *)(a1 + 2);
  v70[0] = (unsigned __int8)BYTE1(*(_QWORD *)a1) >> 7;
  if ( !(_DWORD)v7 )
  {
LABEL_35:
    sub_20819C0((__m128 *)dest, (_QWORD *)(v8 + 8 * v7), (_QWORD *)(v8 + 8 * v7), a2, 1);
    v23 = (__int64 *)dest[0].m128i_i64[0];
    goto LABEL_36;
  }
  if ( v67 )
  {
    v60 = 0;
    memset(dest, 0, sizeof(dest));
    v72 = 0;
    v73 = 0;
    v74 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
    v25 = sub_A0C4A0(dest, &v60, dest, (unsigned __int64)&v72, v11);
    v26 = v60;
    v27 = (__int64 *)((char *)v25->m128i_i64 + 2);
    LOWORD(src) = v69;
    if ( &v25->m128i_i16[1] <= (__int16 *)&v72 )
    {
      v25->m128i_i16[0] = v69;
    }
    else
    {
      v51 = v60;
      v52 = (char *)((char *)&v72 - (char *)v25);
      memcpy(v25, &src, (char *)&v72 - (char *)v25);
      if ( v51 )
      {
        sub_9B6F20((unsigned __int64 *)&v72, dest);
        v28 = v51 + 64;
      }
      else
      {
        sub_A09B80((unsigned __int64 *)&v54, dest, si128.m128i_u64[1]);
        v28 = 64;
        v29 = _mm_loadu_si128(&v54);
        v30 = _mm_loadu_si128(&v55);
        v31 = _mm_loadu_si128(&v56);
        si128.m128i_i64[0] = v57;
        v72 = v29;
        v73 = v30;
        v74 = v31;
      }
      v53 = v28;
      memcpy(dest, (char *)&src + (_QWORD)v52, 2LL - (_QWORD)v52);
      v26 = v53;
      v27 = (__int64 *)((char *)dest[0].m128i_i64 + 2LL - (_QWORD)v52);
    }
    v61 = v26;
    v32 = sub_206E9E0(dest, &v61, v27, (unsigned __int64)&v72, (__int64)v65);
    v62 = v61;
    v33 = sub_206E9E0(dest, &v62, v32, (unsigned __int64)&v72, v66);
    v63 = v62;
    v34 = sub_207A9D0(dest, &v63, v33, (unsigned __int64)&v72, v70[0]);
    src = v63;
    v35 = sub_A232E0(dest, &src, v34, (unsigned __int64)&v72, v9);
    v36 = src;
    v59 = v10;
    v37 = &v35->m128i_i8[1];
    if ( &v35->m128i_i8[1] > (__int8 *)&v72 )
    {
      v46 = (char *)((char *)&v72 - (char *)v35);
      memcpy(v35, &v59, (char *)&v72 - (char *)v35);
      if ( v36 )
      {
        v36 += 64;
        sub_9B6F20((unsigned __int64 *)&v72, dest);
      }
      else
      {
        v36 = 64;
        sub_A09B80((unsigned __int64 *)&v54, dest, si128.m128i_u64[1]);
        v47 = _mm_loadu_si128(&v54);
        v48 = _mm_loadu_si128(&v55);
        v49 = _mm_loadu_si128(&v56);
        si128.m128i_i64[0] = v57;
        v72 = v47;
        v73 = v48;
        v74 = v49;
      }
      memcpy(dest, &v59 + (_QWORD)v46, 1LL - (_QWORD)v46);
      v37 = &dest[0].m128i_i8[1LL - (_QWORD)v46];
    }
    else
    {
      v35->m128i_i8[0] = v10;
    }
    v12 = sub_206C6F0(dest[0].m128i_i8, v36, v37, v72.m128i_i8);
  }
  else
  {
    v12 = sub_20AE310(v11, &v69, (__int64 *)&v65, &v66, v70);
  }
  v13 = v7 - 1;
  v14 = 1;
  v15 = v13 & v12;
  v16 = (__int64 *)(v8 + 8LL * v15);
  v17 = *v16;
  if ( *v16 == -4096 )
  {
LABEL_34:
    v8 = *(_QWORD *)a2;
    v7 = *(unsigned int *)(a2 + 16);
    goto LABEL_35;
  }
  while ( 1 )
  {
    if ( v17 != -8192 && v68 == *(_DWORD *)(v17 + 4) && v69 == *(_WORD *)(v17 + 2) )
    {
      v18 = *(_BYTE *)(v17 - 16);
      if ( (v18 & 2) != 0 )
      {
        v19 = *(_QWORD *)(v17 - 32);
        if ( v65 != *(_QWORD **)v19 )
          goto LABEL_9;
        v20 = v66;
        v21 = *(_DWORD *)(v17 - 24);
      }
      else
      {
        v19 = v17 + -16 - 8LL * ((v18 >> 2) & 0xF);
        if ( v65 != *(_QWORD **)v19 )
          goto LABEL_9;
        v20 = v66;
        v21 = (*(_WORD *)(v17 - 16) >> 6) & 0xF;
      }
      v22 = 0;
      if ( v21 == 2 )
        v22 = *(_QWORD *)(v19 + 8);
      if ( v22 == v20
        && v70[0] == (unsigned __int8)BYTE1(*(_QWORD *)v17) >> 7
        && (v67 & 0x1FFFFFFFFFFFFFFFLL) == (*(_QWORD *)(v17 + 16) & 0x1FFFFFFFFFFFFFFFLL)
        && HIBYTE(v67) >> 5 == *(_BYTE *)(v17 + 23) >> 5 )
      {
        break;
      }
    }
LABEL_9:
    v15 = v13 & (v14 + v15);
    v16 = (__int64 *)(v8 + 8LL * v15);
    v17 = *v16;
    if ( *v16 == -4096 )
      goto LABEL_34;
    ++v14;
  }
  sub_20819C0((__m128 *)dest, v16, (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
  v23 = (__int64 *)dest[0].m128i_i64[0];
LABEL_36:
  sub_20819C0(
    (__m128 *)dest,
    (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
    (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
    a2,
    1);
  if ( (__int64 *)dest[0].m128i_i64[0] == v23 || (result = *v23) == 0 )
  {
    if ( (unsigned __int8)sub_207D690((__int64 *)a2, &v58, &v65) )
    {
      sub_20819C0((__m128 *)dest, v65, (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
    }
    else
    {
      v40 = v65;
      v41 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
      v42 = *(unsigned int *)(a2 + 16);
      dest[0].m128i_i64[0] = (__int64)v65;
      v43 = (unsigned int)(4 * v41);
      v44 = (unsigned int)(2 * v42);
      if ( (unsigned int)v43 >= 3 * (int)v42 )
      {
        v50 = 2 * v42;
      }
      else
      {
        v44 = (unsigned int)(v42 - *(_DWORD *)(a2 + 12) - v41);
        if ( (unsigned int)v44 > (unsigned int)v42 >> 3 )
          goto LABEL_41;
        v50 = v42;
      }
      sub_20831E0(a2, v50, v41, v44, v43, v39);
      sub_207D690((__int64 *)a2, &v58, dest);
      v42 = *(unsigned int *)(a2 + 16);
      v40 = (_QWORD *)dest[0].m128i_i64[0];
      LODWORD(v41) = *(_DWORD *)(a2 + 8) + 1;
LABEL_41:
      v24 = *v40 == -4096;
      *(_DWORD *)(a2 + 8) = v41;
      if ( !v24 )
        --*(_DWORD *)(a2 + 12);
      *v40 = v58;
      v45 = *(_QWORD *)a2;
      v65 = v40;
      sub_20819C0((__m128 *)dest, v40, (_QWORD *)(v45 + 8 * v42), a2, 1);
    }
    return v58;
  }
  return result;
}
