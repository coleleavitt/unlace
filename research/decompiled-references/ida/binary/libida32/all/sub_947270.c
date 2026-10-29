unsigned __int64 __fastcall sub_947270(__m128i *a1)
{
  const __m128i *v2; // rsi
  __int64 v3; // rbx
  __m128i v4; // xmm0
  __m128i v5; // xmm2
  __m128i v6; // xmm4
  __m128i v7; // xmm6
  __int64 v8; // rbx
  __int64 v9; // rdi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r10
  _QWORD *v12; // r12
  __m128i v13; // xmm0
  __m128i v14; // xmm2
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r9
  _BYTE *v17; // r14
  unsigned __int64 v18; // rbp
  __int64 v19; // r15
  _BYTE *v20; // r13
  _BYTE *v21; // r8
  unsigned __int64 v22; // rdx
  _QWORD *v23; // rax
  _BYTE *v24; // rbp
  _QWORD *v25; // r15
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // r11
  __int16 v30; // cx
  unsigned __int64 v31; // rax
  __int16 v32; // cx
  unsigned __int64 v33; // rdx
  __int16 v34; // cx
  unsigned __int64 v35; // rbx
  __int16 v36; // cx
  unsigned __int64 v37; // r11
  __int16 v38; // cx
  unsigned __int64 v39; // rax
  __int16 v40; // cx
  unsigned __int64 v41; // rdx
  __int16 v42; // cx
  unsigned __int64 v43; // rbx
  __int16 v44; // cx
  unsigned __int64 v45; // r11
  __int16 v46; // cx
  unsigned __int64 v47; // rax
  __int16 v48; // cx
  unsigned __int64 v49; // rdx
  __int16 v50; // cx
  unsigned __int64 v51; // rbx
  __int16 v52; // cx
  unsigned __int64 v53; // r11
  __int16 v54; // cx
  _QWORD *v63; // rax
  __m128i v64; // xmm5
  __m128i v65; // xmm6
  __m128i v66; // xmm7
  __m128i v67; // xmm0
  __m128i v68; // xmm1
  _QWORD *v70; // [rsp+0h] [rbp-108h]
  _QWORD *v71; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v72; // [rsp+18h] [rbp-F0h]
  _BYTE *v73; // [rsp+28h] [rbp-E0h]
  char v74; // [rsp+37h] [rbp-D1h]
  __int64 v75; // [rsp+38h] [rbp-D0h]
  __int64 v76; // [rsp+40h] [rbp-C8h]
  __m128i *v77; // [rsp+48h] [rbp-C0h]
  const __m128i *v78; // [rsp+50h] [rbp-B8h]
  __m128i v80; // [rsp+60h] [rbp-A8h] BYREF
  __m128i v81; // [rsp+70h] [rbp-98h] BYREF
  __m128i v82; // [rsp+80h] [rbp-88h] BYREF
  __m128i v83; // [rsp+90h] [rbp-78h] BYREF
  __m128i v84; // [rsp+A0h] [rbp-68h] BYREF
  __m128i v85; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v86; // [rsp+C8h] [rbp-40h]

  v2 = a1 + 2;
  v3 = a1[7].m128i_i64[0];
  v4 = _mm_loadu_si128(a1 + 4);
  v5 = _mm_loadu_si128(a1 + 5);
  v6 = _mm_loadu_si128(a1);
  v7 = _mm_loadu_si128(a1 + 1);
  v86 = __readfsqword(0x28u);
  v75 = v3;
  v8 = a1[6].m128i_i64[1];
  v9 = a1[6].m128i_i64[0];
  v10 = v4.m128i_i64[0];
  v76 = v8;
  v11 = v5.m128i_i64[0];
  v77 = a1 + 4;
  v12 = (_QWORD *)v6.m128i_i64[0];
  v80 = v4;
  v81 = v5;
  v82 = v6;
  v83 = v7;
  v78 = v2;
  v13 = _mm_loadu_si128(a1 + 2);
  v14 = _mm_loadu_si128(v2 + 1);
  v74 = 0;
  v15 = v80.m128i_u64[1];
  v16 = v81.m128i_u64[1];
  v17 = (_BYTE *)v13.m128i_i64[0];
  v70 = (_QWORD *)v7.m128i_i64[0];
  v84 = v13;
  v18 = v6.m128i_u64[1];
  v19 = v13.m128i_i64[1];
  v20 = (_BYTE *)v14.m128i_i64[0];
  v71 = (_QWORD *)v7.m128i_i64[1];
  v85 = v14;
  v21 = (_BYTE *)v14.m128i_i64[1];
  while ( 1 )
  {
    v22 = ((unsigned __int64)v12 - v76) / 7;
    if ( (v75 - (__int64)v21) / 5uLL <= v22 )
      v22 = (v75 - (__int64)v21) / 5uLL;
    v73 = &v21[5 * v22];
    if ( v73 == v21 || (unsigned __int64)v12 > v18 || v18 > (unsigned __int64)v70 || v70 > v71 )
      break;
    v74 = 1;
    v23 = (_QWORD *)v18;
    v24 = (_BYTE *)v19;
    v25 = v23;
    do
    {
      v26 = v10 << *(_WORD *)(v9 + 2 * (v10 >> 53));
      *v17 = HIBYTE(*(_WORD *)(v9 + 2 * (v10 >> 53)));
      v27 = v15 << *(_WORD *)(v9 + 2 * (v15 >> 53));
      *v24 = HIBYTE(*(_WORD *)(v9 + 2 * (v15 >> 53)));
      v28 = v11 << *(_WORD *)(v9 + 2 * (v11 >> 53));
      *v20 = HIBYTE(*(_WORD *)(v9 + 2 * (v11 >> 53)));
      v29 = v16 << *(_WORD *)(v9 + 2 * (v16 >> 53));
      *v21 = HIBYTE(*(_WORD *)(v9 + 2 * (v16 >> 53)));
      v30 = *(_WORD *)(v9 + 2 * (v26 >> 53));
      v31 = v26 << v30;
      v17[1] = HIBYTE(v30);
      v32 = *(_WORD *)(v9 + 2 * (v27 >> 53));
      v33 = v27 << v32;
      v24[1] = HIBYTE(v32);
      v34 = *(_WORD *)(v9 + 2 * (v28 >> 53));
      v35 = v28 << v34;
      v20[1] = HIBYTE(v34);
      v36 = *(_WORD *)(v9 + 2 * (v29 >> 53));
      v37 = v29 << v36;
      v21[1] = HIBYTE(v36);
      v38 = *(_WORD *)(v9 + 2 * (v31 >> 53));
      v39 = v31 << v38;
      v17[2] = HIBYTE(v38);
      v40 = *(_WORD *)(v9 + 2 * (v33 >> 53));
      v41 = v33 << v40;
      v24[2] = HIBYTE(v40);
      v42 = *(_WORD *)(v9 + 2 * (v35 >> 53));
      v43 = v35 << v42;
      v20[2] = HIBYTE(v42);
      v44 = *(_WORD *)(v9 + 2 * (v37 >> 53));
      v45 = v37 << v44;
      v21[2] = HIBYTE(v44);
      v46 = *(_WORD *)(v9 + 2 * (v39 >> 53));
      v47 = v39 << v46;
      v17[3] = HIBYTE(v46);
      v48 = *(_WORD *)(v9 + 2 * (v41 >> 53));
      v49 = v41 << v48;
      v24[3] = HIBYTE(v48);
      v50 = *(_WORD *)(v9 + 2 * (v43 >> 53));
      v51 = v43 << v50;
      v20[3] = HIBYTE(v50);
      v52 = *(_WORD *)(v9 + 2 * (v45 >> 53));
      v53 = v45 << v52;
      v21[3] = HIBYTE(v52);
      v72 = v47;
      v54 = *(_WORD *)(v9 + 2 * (v47 >> 53));
      v17[4] = HIBYTE(v54);
      BYTE1(v47) = HIBYTE(*(_WORD *)(v9 + 2 * (v49 >> 53)));
      _RDX = v49 << *(_WORD *)(v9 + 2 * (v49 >> 53));
      __asm { tzcnt   rdx, rdx }
      v24[4] = BYTE1(v47);
      v25 = (_QWORD *)((char *)v25 - (_RDX >> 3));
      BYTE1(v47) = HIBYTE(*(_WORD *)(v9 + 2 * (v51 >> 53)));
      _RBX = v51 << *(_WORD *)(v9 + 2 * (v51 >> 53));
      __asm { tzcnt   rbx, rbx }
      v20[4] = BYTE1(v47);
      BYTE1(v47) = HIBYTE(*(_WORD *)(v9 + 2 * (v53 >> 53)));
      _R11 = v53 << *(_WORD *)(v9 + 2 * (v53 >> 53));
      v21[4] = BYTE1(v47);
      _RAX = v72 << v54;
      __asm { tzcnt   rax, rax }
      v12 = (_QWORD *)((char *)v12 - (_RAX >> 3));
      v10 = (*v12 | 1LL) << (_RAX & 7);
      __asm { tzcnt   r11, r11 }
      v17 += 5;
      v24 += 5;
      v20 += 5;
      v21 += 5;
      v70 = (_QWORD *)((char *)v70 - (_RBX >> 3));
      v15 = (*v25 | 1LL) << (_RDX & 7);
      v11 = (*v70 | 1LL) << (_RBX & 7);
      v71 = (_QWORD *)((char *)v71 - (_R11 >> 3));
      v16 = (*v71 | 1LL) << (_R11 & 7);
    }
    while ( v21 < v73 );
    v63 = v25;
    v19 = (__int64)v24;
    v18 = (unsigned __int64)v63;
  }
  if ( v74 )
  {
    v80.m128i_i64[0] = v10;
    v84.m128i_i64[0] = (__int64)v17;
    v83.m128i_i64[0] = (__int64)v70;
    v80.m128i_i64[1] = v15;
    v84.m128i_i64[1] = v19;
    v81.m128i_i64[0] = v11;
    v85.m128i_i64[0] = (__int64)v20;
    v81.m128i_i64[1] = v16;
    v85.m128i_i64[1] = (__int64)v21;
    v82.m128i_i64[0] = (__int64)v12;
    v82.m128i_i64[1] = v18;
    v83.m128i_i64[1] = (__int64)v71;
  }
  v64 = _mm_load_si128(&v81);
  v65 = _mm_load_si128(&v82);
  a1[4] = _mm_load_si128(&v80);
  v66 = _mm_load_si128(&v83);
  v67 = _mm_load_si128(&v84);
  v77[1] = v64;
  v68 = _mm_load_si128(&v85);
  a1[1] = v66;
  *a1 = v65;
  a1[2] = v67;
  v78[1] = v68;
  return __readfsqword(0x28u) ^ v86;
}

