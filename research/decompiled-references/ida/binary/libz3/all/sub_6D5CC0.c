__int64 __fastcall sub_6D5CC0(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  unsigned int v3; // r10d
  __int64 v6; // r8
  int v7; // ecx
  int v8; // eax
  int v9; // esi
  int v10; // edx
  int v11; // eax
  __int64 *v12; // rcx
  int v13; // esi
  __int64 v14; // rax
  unsigned int v15; // edx
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 *v18; // r9
  __int64 i; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned int v32; // r13d
  __int64 v33; // rax
  __int64 v34; // r10
  int v35; // esi
  int v36; // eax
  int v37; // ecx
  int v38; // edx
  int v39; // eax
  unsigned int v40; // esi
  int v41; // ecx
  __m128i *v42; // r14
  int v43; // eax
  __int64 v44; // r9
  __m128i *v45; // r15
  __m128i v46; // xmm0
  __int64 v47; // r11
  __m128i *v48; // rdi
  __m128i *v49; // rax
  __m128i *v50; // rsi
  __int64 v51; // rdx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned int v56; // edx
  unsigned __int64 v57; // rsi
  __m128i *v58; // rax
  const __m128i *v59; // r8
  __int64 v60; // rsi
  __m128i *v61; // r11
  unsigned int v62; // r10d
  __int64 v63; // rdx
  __m128i *v64; // rsi
  __m128i *v65; // rdx
  size_t v66; // [rsp+8h] [rbp-A0h]
  int v67; // [rsp+8h] [rbp-A0h]
  int v68[2]; // [rsp+8h] [rbp-A0h]
  int v69; // [rsp+10h] [rbp-98h]
  __int64 v70; // [rsp+18h] [rbp-90h]
  int v71; // [rsp+18h] [rbp-90h]
  int v72; // [rsp+20h] [rbp-88h]
  __int64 v73; // [rsp+20h] [rbp-88h]
  unsigned int v74; // [rsp+28h] [rbp-80h]
  __int64 v76; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v77[8]; // [rsp+68h] [rbp-40h] BYREF

  v6 = *a2;
  v7 = *(_DWORD *)(*a2 + 12);
  v8 = (*(_DWORD *)(a3 + 12) - v7) ^ (v7 << 8);
  v9 = (v7 - v8) << 10;
  v10 = v8 ^ ((v7 - v8) << 16);
  v11 = v8 - v7;
  v12 = *(__int64 **)(a1 + 808);
  v13 = (v10 + v11) ^ v9;
  v14 = *(unsigned int *)(a1 + 816);
  v15 = v14 - 1;
  v14 *= 32;
  v16 = (__int64)v12 + v14;
  v17 = 32LL * (v13 & v15);
  v18 = (__int64 *)((char *)v12 + v17);
  if ( v17 != v14 )
  {
    for ( i = (__int64)v12 + v17; v16 != i; i += 32 )
    {
      v17 = *(_QWORD *)i;
      if ( *(_QWORD *)i > 1u )
      {
        LOBYTE(v3) = v6 == v17 && *(_DWORD *)(i + 24) == v13;
        if ( (_BYTE)v3 && a3 == *(_QWORD *)(i + 8) )
          return v3;
      }
      else if ( !v17 )
      {
        goto LABEL_7;
      }
    }
  }
  for ( ; v18 != v12; v12 += 4 )
  {
    v53 = *v12;
    if ( (unsigned __int64)*v12 > 1 )
    {
      LOBYTE(v17) = v6 == v53 && *((_DWORD *)v12 + 6) == v13;
      if ( (_BYTE)v17 && a3 == v12[1] )
        return (unsigned int)v17;
    }
    else if ( !v53 )
    {
      break;
    }
  }
LABEL_7:
  v20 = sub_186B270(0x180u);
  *(_QWORD *)v20 = a1 + 32;
  *(_QWORD *)(v20 + 24) = 0;
  *(_QWORD *)(v20 + 32) = 0;
  *(_QWORD *)(v20 + 8) = &off_1C62200;
  v21 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(v20 + 48) = 0;
  *(_QWORD *)(v20 + 64) = v21;
  *(_QWORD *)(v20 + 80) = v21;
  *(_QWORD *)(v20 + 96) = v21;
  *(_QWORD *)(v20 + 112) = v21;
  *(_QWORD *)(v20 + 160) = v21;
  *(_QWORD *)(v20 + 176) = v21;
  *(_QWORD *)(v20 + 192) = v21;
  *(_QWORD *)(v20 + 208) = v21;
  *(_QWORD *)(v20 + 224) = v21;
  *(_QWORD *)(v20 + 56) = 0;
  *(_QWORD *)(v20 + 72) = 0;
  *(_QWORD *)(v20 + 88) = 0;
  *(_QWORD *)(v20 + 104) = 0;
  *(_QWORD *)(v20 + 120) = 0;
  *(_QWORD *)(v20 + 128) = 0;
  *(_QWORD *)(v20 + 136) = 0;
  *(_QWORD *)(v20 + 144) = 0;
  *(_QWORD *)(v20 + 152) = 0;
  *(_QWORD *)(v20 + 168) = 0;
  *(_QWORD *)(v20 + 184) = 0;
  *(_QWORD *)(v20 + 200) = 0;
  *(_QWORD *)(v20 + 216) = 0;
  *(_QWORD *)(v20 + 232) = 0;
  *(_QWORD *)(v20 + 240) = 0;
  *(_QWORD *)(v20 + 248) = 0;
  *(_QWORD *)(v20 + 256) = v21;
  *(_QWORD *)(v20 + 280) = v21;
  *(_QWORD *)(v20 + 288) = v21;
  *(_QWORD *)(v20 + 320) = v21;
  *(_QWORD *)(v20 + 336) = v21;
  *(_BYTE *)(v20 + 372) &= 0xFCu;
  *(_QWORD *)(v20 + 264) = 0;
  *(_QWORD *)(v20 + 272) = 0;
  *(_QWORD *)(v20 + 296) = 0;
  *(_QWORD *)(v20 + 304) = 0;
  *(_QWORD *)(v20 + 312) = 0;
  *(_QWORD *)(v20 + 328) = 0;
  *(_QWORD *)(v20 + 344) = 0;
  *(_QWORD *)(v20 + 352) = 0;
  *(_QWORD *)(v20 + 360) = 0;
  *(_DWORD *)(v20 + 368) = 1;
  *(_QWORD *)(v20 + 376) = 0;
  sub_2FCDE0((__int64 *)(v20 + 96));
  sub_2FCDE0((__int64 *)(v20 + 112));
  sub_2FCDE0((__int64 *)(v20 + 80));
  sub_2FCDE0((__int64 *)(v20 + 64));
  v22 = *(_QWORD *)(v20 + 152);
  if ( v22 )
  {
    sub_6C0BE0(v22);
    *(_DWORD *)(*(_QWORD *)(v20 + 152) - 4LL) = 0;
  }
  v23 = *(_QWORD *)(v20 + 144);
  if ( v23 )
  {
    sub_6C0BE0(v23);
    *(_DWORD *)(*(_QWORD *)(v20 + 144) - 4LL) = 0;
  }
  v24 = *(_QWORD *)(v20 + 136);
  if ( v24 )
  {
    sub_6C0BE0(v24);
    *(_DWORD *)(*(_QWORD *)(v20 + 136) - 4LL) = 0;
  }
  v25 = *(_QWORD *)(v20 + 128);
  if ( v25 )
  {
    sub_6C0BE0(v25);
    *(_DWORD *)(*(_QWORD *)(v20 + 128) - 4LL) = 0;
  }
  sub_41D160((__int64 *)(v20 + 192));
  sub_41D160((__int64 *)(v20 + 208));
  sub_41D160((__int64 *)(v20 + 160));
  sub_41D160((__int64 *)(v20 + 176));
  sub_2FCDE0((__int64 *)(v20 + 224));
  v26 = *(_QWORD *)(v20 + 240);
  if ( v26 )
  {
    sub_6C0BE0(v26);
    *(_DWORD *)(*(_QWORD *)(v20 + 240) - 4LL) = 0;
  }
  v27 = *(_QWORD *)(v20 + 248);
  if ( v27 )
  {
    sub_6C0BE0(v27);
    *(_DWORD *)(*(_QWORD *)(v20 + 248) - 4LL) = 0;
  }
  sub_41D160((__int64 *)(v20 + 256));
  sub_6BFE10(*(_QWORD *)(v20 + 272), *(_QWORD *)(v20 + 280));
  *(_QWORD *)(v20 + 272) = 0;
  sub_2FCDE0((__int64 *)(v20 + 288));
  v28 = *(_QWORD *)(v20 + 304);
  if ( v28 )
  {
    sub_6C0BE0(v28);
    *(_DWORD *)(*(_QWORD *)(v20 + 304) - 4LL) = 0;
  }
  v29 = *(_QWORD *)(v20 + 312);
  if ( v29 )
  {
    sub_6C0BE0(v29);
    *(_DWORD *)(*(_QWORD *)(v20 + 312) - 4LL) = 0;
  }
  sub_41D160((__int64 *)(v20 + 320));
  sub_41D160((__int64 *)(v20 + 336));
  v30 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24));
  if ( !(unsigned __int8)sub_6D55C0(a1, (__int64 *)v20, a2, v30, 1)
    || (v31 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24)),
        v32 = sub_6D55C0(a1, (__int64 *)v20, a2, v31, 0),
        !(_BYTE)v32) )
  {
    v32 = 0;
    sub_6D1520((__int64 *)v20);
    sub_186B220((void *)v20);
    return v32;
  }
  v33 = *a2;
  v76 = v33;
  if ( v33 )
    ++*(_DWORD *)(v33 + 8);
  sub_6C01B0((_QWORD *)(a1 + 800), &v76);
  ++*(_DWORD *)(a3 + 8);
  v77[0] = a3;
  sub_6C01B0((_QWORD *)(a1 + 800), v77);
  v34 = *a2;
  v35 = *(_DWORD *)(*a2 + 12);
  v36 = (*(_DWORD *)(a3 + 12) - v35) ^ (v35 << 8);
  v37 = (v35 - v36) << 10;
  v38 = v36 ^ ((v35 - v36) << 16);
  v39 = v36 - v35;
  v40 = *(_DWORD *)(a1 + 816);
  v41 = (v38 + v39) ^ v37;
  if ( 3 * v40 < 4 * (*(_DWORD *)(a1 + 820) + *(_DWORD *)(a1 + 824)) )
  {
    v72 = v41;
    v70 = *a2;
    v66 = 64LL * v40;
    v55 = sub_186B270(v66);
    v56 = 2 * v40;
    v44 = v66;
    v34 = v70;
    v41 = v72;
    v42 = (__m128i *)v55;
    if ( 2 * v40 )
    {
      v67 = v56 - 1;
      if ( v56 - 1 <= 2 )
      {
        *(_DWORD *)(v55 + 24) = 0;
        *(_DWORD *)(v55 + 56) = 0;
        *(_OWORD *)v55 = 0;
        *(_OWORD *)(v55 + 32) = 0;
      }
      else
      {
        v57 = v55 + ((unsigned __int64)(v56 >> 2) << 7);
        do
        {
          *(_DWORD *)(v55 + 24) = 0;
          v55 += 128;
          *(_OWORD *)(v55 - 128) = 0;
          *(_OWORD *)(v55 - 96) = 0;
          *(_OWORD *)(v55 - 64) = 0;
          *(_OWORD *)(v55 - 32) = 0;
          *(_DWORD *)(v55 - 72) = 0;
          *(_DWORD *)(v55 - 40) = 0;
          *(_DWORD *)(v55 - 8) = 0;
        }
        while ( v55 != v57 );
        if ( (v56 & 2) != 0 )
        {
          v58 = &v42[2 * (v56 & 0xFFFFFFFC)];
          v58[1].m128i_i32[2] = 0;
          v58[3].m128i_i32[2] = 0;
          *v58 = 0;
          v58[2] = 0;
          if ( v56 - (v56 & 0xFFFFFFFC) != 2 )
          {
            v58[5].m128i_i32[2] = 0;
            v58[4] = 0;
          }
        }
      }
    }
    else
    {
      v67 = -1;
    }
    v59 = *(const __m128i **)(a1 + 808);
    v45 = (__m128i *)((char *)v42 + v44);
    v43 = v67;
    v60 = 2LL * *(unsigned int *)(a1 + 816);
    v61 = (__m128i *)&v59[v60];
    if ( v59 != &v59[v60] )
    {
      v62 = v56;
      do
      {
        if ( v59->m128i_i64[0] > 1uLL )
        {
          v63 = 32LL * (v59[1].m128i_i32[2] & (unsigned int)v67);
          v64 = &v42[(unsigned __int64)v63 / 0x10];
          if ( v44 == v63 )
          {
LABEL_77:
            if ( v42 == v64 )
            {
LABEL_90:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v65 = v42;
            while ( v65->m128i_i64[0] )
            {
              v65 += 2;
              if ( v64 == v65 )
                goto LABEL_90;
            }
          }
          else
          {
            v65 = &v42[(unsigned __int64)v63 / 0x10];
            while ( v65->m128i_i64[0] )
            {
              v65 += 2;
              if ( v45 == v65 )
                goto LABEL_77;
            }
          }
          *v65 = _mm_loadu_si128(v59);
          v65[1] = _mm_loadu_si128(v59 + 1);
        }
        v59 += 2;
      }
      while ( v61 != v59 );
      v56 = v62;
      v61 = *(__m128i **)(a1 + 808);
      v34 = v70;
    }
    if ( v61 )
    {
      v74 = v56;
      v73 = v44;
      v71 = v67;
      v69 = v41;
      *(_QWORD *)v68 = v34;
      sub_186B220(v61);
      v56 = v74;
      v44 = v73;
      v43 = v71;
      v41 = v69;
      v34 = *(_QWORD *)v68;
    }
    *(_QWORD *)(a1 + 808) = v42;
    *(_DWORD *)(a1 + 816) = v56;
    *(_DWORD *)(a1 + 824) = 0;
  }
  else
  {
    v42 = *(__m128i **)(a1 + 808);
    v43 = v40 - 1;
    v44 = 32LL * v40;
    v45 = (__m128i *)((char *)v42 + v44);
  }
  v46 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v34, (__m128i)a3);
  v47 = 32LL * (v41 & (unsigned int)v43);
  v48 = &v42[(unsigned __int64)v47 / 0x10];
  if ( v47 != v44 )
  {
    v49 = &v42[(unsigned __int64)v47 / 0x10];
    v50 = nullptr;
    while ( 1 )
    {
      v51 = v49->m128i_i64[0];
      if ( v49->m128i_i64[0] > 1uLL )
      {
        if ( v49[1].m128i_i32[2] == v41 && v34 == v51 && a3 == v49->m128i_i64[1] )
        {
          v49[1].m128i_i64[0] = v20;
          v49[1].m128i_i32[2] = v41;
          *v49 = v46;
          return v32;
        }
      }
      else
      {
        if ( !v51 )
        {
          if ( v50 )
            goto LABEL_88;
          v50 = v49;
          goto LABEL_89;
        }
        v50 = v49;
      }
      v49 += 2;
      if ( v49 == v45 )
        goto LABEL_53;
    }
  }
  v50 = nullptr;
  while ( 1 )
  {
LABEL_53:
    if ( v48 == v42 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v54 = v42->m128i_i64[0];
    if ( v42->m128i_i64[0] <= 1uLL )
      break;
    if ( v42[1].m128i_i32[2] == v41 && v34 == v54 && a3 == v42->m128i_i64[1] )
    {
      v42[1].m128i_i64[0] = v20;
      v42[1].m128i_i32[2] = v41;
      *v42 = v46;
      return v32;
    }
LABEL_52:
    v42 += 2;
  }
  if ( v54 )
  {
    v50 = v42;
    goto LABEL_52;
  }
  if ( v50 )
LABEL_88:
    --*(_DWORD *)(a1 + 824);
  else
    v50 = v42;
LABEL_89:
  v50[1].m128i_i64[0] = v20;
  v50[1].m128i_i32[2] = v41;
  *v50 = v46;
  ++*(_DWORD *)(a1 + 820);
  return v32;
}

