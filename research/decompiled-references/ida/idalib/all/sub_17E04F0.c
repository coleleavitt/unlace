__int64 __fastcall sub_17E04F0(__int64 a1, unsigned __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // eax
  unsigned __int64 v9; // rdi
  unsigned int v10; // ecx
  __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  int v15; // r10d
  __int64 v16; // r11
  __int64 v17; // rcx
  __int64 v18; // r9
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rbp
  void **v22; // rax
  void **v23; // rax
  int v24; // eax
  __int32 v25; // edx
  __int64 v26; // rcx
  __int64 *v27; // rax
  __int64 *v28; // rdx
  int v29; // esi
  __int64 v30; // rax
  unsigned __int64 v31; // r14
  __m128 *v32; // rcx
  __int64 v33; // rsi
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rax
  unsigned __int64 *v36; // r8
  unsigned __int64 *v37; // rsi
  _QWORD *v38; // rax
  int v39; // edi
  unsigned int v40; // eax
  __int32 v41; // eax
  __int32 v42; // eax
  unsigned __int64 v43; // rdi
  _BYTE *v44; // rdi
  __m128i v45; // xmm5
  __m128i v46; // xmm6
  __int32 v47; // edx
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rax
  __int32 v50; // esi
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rax
  __int32 v53; // esi
  int v54; // eax
  int v55; // r9d
  unsigned int v56; // ecx
  __m128i v57; // xmm0
  __m128i v58; // xmm0
  unsigned __int64 v59; // rsi
  __int64 v60; // rax
  int v61; // eax
  int v62; // r9d
  unsigned int v63; // ecx
  __m128i v64; // xmm0
  __m128i v65; // xmm0
  __int64 v66; // rdi
  __int64 v67; // rdi
  unsigned __int64 *v68; // r10
  int v69; // r11d
  int v70; // r11d
  __int64 v71; // [rsp+40h] [rbp-C8h] BYREF
  __m128i v72; // [rsp+48h] [rbp-C0h] BYREF
  __m128i v73; // [rsp+58h] [rbp-B0h] BYREF
  void *v74; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v75; // [rsp+70h] [rbp-98h]
  __int128 v76; // [rsp+78h] [rbp-90h] BYREF
  __m128 v77; // [rsp+90h] [rbp-78h] BYREF
  __m128i v78; // [rsp+A0h] [rbp-68h] BYREF
  __m128i v79; // [rsp+B0h] [rbp-58h] BYREF
  void *ptr[2]; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v81[56]; // [rsp+D0h] [rbp-38h] BYREF

  v8 = *(_DWORD *)(a1 + 16);
  if ( !v8 )
    goto LABEL_62;
  a5 = *(_QWORD *)a1;
  v9 = *a2;
  v10 = (v8 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
  v11 = a5 + 16LL * v10;
  v12 = *(_QWORD *)v11;
  if ( v9 == *(_QWORD *)v11 )
  {
LABEL_3:
    sub_1460B90(&v77, (_QWORD *)v11, (_QWORD *)(a5 + 16LL * v8), a1, 1);
    v13 = *(unsigned int *)(v77.m128_u64[0] + 8);
    return *(_QWORD *)(a1 + 24) + 80 * v13 + 8;
  }
  v15 = 1;
  v16 = 0;
  if ( v12 != -4096 )
  {
    while ( 1 )
    {
      if ( !v16 && v12 == -8192 )
        v16 = v11;
      v10 = (v8 - 1) & (v15 + v10);
      v11 = a5 + 16LL * v10;
      v12 = *(_QWORD *)v11;
      if ( v9 == *(_QWORD *)v11 )
        goto LABEL_3;
      if ( v12 == -4096 )
        break;
      ++v15;
    }
    if ( v16 )
      v11 = v16;
  }
  a3 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  a4 = 3 * v8;
  a6 = (unsigned int)(4 * a3);
  if ( (unsigned int)a6 >= (unsigned int)a4 )
  {
LABEL_62:
    sub_1462070((__int64 *)a1, 2 * v8, a3, a4, a5, a6);
    v54 = *(_DWORD *)(a1 + 16);
    if ( v54 )
    {
      v9 = *a2;
      v55 = v54 - 1;
      a5 = *(_QWORD *)a1;
      LODWORD(a3) = *(_DWORD *)(a1 + 8) + 1;
      v56 = (v54 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
      v11 = *(_QWORD *)a1 + 16LL * v56;
      v19 = *(_QWORD *)v11;
      if ( *(_QWORD *)v11 == *a2 )
        goto LABEL_9;
      if ( v19 != -4096 )
      {
        v68 = (unsigned __int64 *)(*(_QWORD *)a1 + 16LL * (v55 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4))));
        v70 = 1;
        v11 = 0;
        while ( 1 )
        {
          if ( !v11 && v19 == -8192 )
            v11 = (__int64)v68;
          v56 = v55 & (v70 + v56);
          v68 = (unsigned __int64 *)(a5 + 16LL * v56);
          v19 = *v68;
          if ( v9 == *v68 )
            goto LABEL_95;
          if ( v19 == -4096 )
          {
LABEL_102:
            if ( v11 )
              goto LABEL_8;
            v11 = (__int64)v68;
            break;
          }
          ++v70;
        }
      }
LABEL_65:
      *(_DWORD *)(a1 + 8) = a3;
      goto LABEL_11;
    }
LABEL_107:
    ++*(_DWORD *)(a1 + 8);
    BUG();
  }
  v17 = v8 - *(_DWORD *)(a1 + 12) - (unsigned int)a3;
  v18 = v8 >> 3;
  if ( (unsigned int)v17 > (unsigned int)v18 )
  {
LABEL_8:
    v19 = *(_QWORD *)v11;
    goto LABEL_9;
  }
  sub_1462070((__int64 *)a1, v8, a3, v17, a5, v18);
  v61 = *(_DWORD *)(a1 + 16);
  if ( !v61 )
    goto LABEL_107;
  v9 = *a2;
  v62 = v61 - 1;
  a5 = *(_QWORD *)a1;
  LODWORD(a3) = *(_DWORD *)(a1 + 8) + 1;
  v63 = (v61 - 1) & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
  v11 = *(_QWORD *)a1 + 16LL * v63;
  v19 = *(_QWORD *)v11;
  if ( *(_QWORD *)v11 == *a2 )
  {
    v19 = *a2;
    goto LABEL_9;
  }
  if ( v19 == -4096 )
    goto LABEL_65;
  v68 = (unsigned __int64 *)(*(_QWORD *)a1 + 16LL * (v62 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4))));
  v69 = 1;
  v11 = 0;
  while ( 1 )
  {
    if ( !v11 && v19 == -8192 )
      v11 = (__int64)v68;
    v63 = v62 & (v69 + v63);
    v68 = (unsigned __int64 *)(a5 + 16LL * v63);
    v19 = *v68;
    if ( v9 == *v68 )
      break;
    if ( v19 == -4096 )
      goto LABEL_102;
    ++v69;
  }
LABEL_95:
  v11 = (__int64)v68;
LABEL_9:
  *(_DWORD *)(a1 + 8) = a3;
  if ( v19 != -4096 )
    --*(_DWORD *)(a1 + 12);
LABEL_11:
  *(_DWORD *)(v11 + 8) = 0;
  v20 = *(unsigned int *)(a1 + 16);
  *(_QWORD *)v11 = v9;
  sub_1460B90(&v77, (_QWORD *)v11, (_QWORD *)(a5 + 16 * v20), a1, 1);
  v71 = 1;
  v76 = 0;
  v21 = v77.m128_u64[0];
  v22 = (void **)&v72;
  do
  {
    *v22 = (void *)-4096LL;
    v22 += 2;
    *((_DWORD *)v22 - 2) = 0;
  }
  while ( &v74 != v22 );
  v77.m128_u64[1] = 1;
  v74 = &v76;
  v75 = 0x100000000LL;
  v77.m128_u64[0] = *a2;
  v23 = (void **)&v78;
  do
  {
    *v23 = (void *)-4096LL;
    v23 += 2;
    *((_DWORD *)v23 - 2) = 0;
  }
  while ( ptr != v23 );
  v24 = v71 & 0xFFFFFFFE;
  LODWORD(v71) = v71 & 1 | (2 * ((unsigned __int32)v77.m128_i32[2] >> 1));
  v25 = HIDWORD(v71);
  HIDWORD(v71) = v77.m128_i32[3];
  v77.m128_i32[2] = v24 | v77.m128_i8[8] & 1;
  v77.m128_i32[3] = v25;
  if ( (v77.m128_i8[8] & 1) != 0 )
  {
    if ( (v71 & 1) == 0 )
    {
      v26 = v72.m128i_i64[0];
      v27 = &v77.m128_i64[1];
      v28 = &v71;
      goto LABEL_17;
    }
    if ( v72.m128i_i64[0] == -4096
      || v72.m128i_i64[0] == -8192
      || v78.m128i_i64[0] == -8192
      || v78.m128i_i64[0] == -4096 )
    {
      v58 = _mm_load_si128(&v78);
      v78.m128i_i64[0] = v72.m128i_i64[0];
      v78.m128i_i32[2] = v72.m128i_i32[2];
      v72.m128i_i64[0] = v58.m128i_i64[0];
      v72.m128i_i32[2] = v58.m128i_i32[2];
    }
    else
    {
      v45 = _mm_loadu_si128(&v72);
      v72.m128i_i64[0] = v78.m128i_i64[0];
      v72.m128i_i32[2] = v78.m128i_i32[2];
      v78 = v45;
    }
    if ( v73.m128i_i64[0] == -8192
      || v73.m128i_i64[0] == -4096
      || v79.m128i_i64[0] == -4096
      || v79.m128i_i64[0] == -8192 )
    {
      v64 = _mm_load_si128(&v79);
      v79.m128i_i64[0] = v73.m128i_i64[0];
      v79.m128i_i32[2] = v73.m128i_i32[2];
      v73.m128i_i64[0] = v64.m128i_i64[0];
      v73.m128i_i32[2] = v64.m128i_i32[2];
    }
    else
    {
      v46 = _mm_loadu_si128(&v73);
      v47 = v79.m128i_i32[2];
      v73.m128i_i64[0] = v79.m128i_i64[0];
      v79 = v46;
      v73.m128i_i32[2] = v47;
    }
  }
  else
  {
    v26 = v78.m128i_i64[0];
    v27 = &v71;
    v28 = &v77.m128_i64[1];
    if ( (v71 & 1) != 0 )
    {
LABEL_17:
      *(_BYTE *)v28 |= 1u;
      v29 = *((_DWORD *)v28 + 4);
      *(__m128i *)(v28 + 1) = _mm_loadu_si128((const __m128i *)(v27 + 1));
      *(__m128i *)(v28 + 3) = _mm_loadu_si128((const __m128i *)(v27 + 3));
      *(_BYTE *)v27 &= ~1u;
      v27[1] = v26;
      *((_DWORD *)v27 + 4) = v29;
      goto LABEL_18;
    }
    v60 = v72.m128i_i64[0];
    v72.m128i_i64[0] = v78.m128i_i64[0];
    v78.m128i_i64[0] = v60;
    LODWORD(v60) = v78.m128i_i32[2];
    v78.m128i_i32[2] = v72.m128i_i32[2];
    v72.m128i_i32[2] = v60;
  }
LABEL_18:
  ptr[0] = v81;
  ptr[1] = (void *)0x100000000LL;
  if ( (_DWORD)v75 )
    sub_1604240((char ***)ptr, (char ***)&v74);
  v30 = *(unsigned int *)(a1 + 32);
  v31 = *(_QWORD *)(a1 + 24);
  v32 = &v77;
  v33 = v30 + 1;
  v34 = v31 + 80 * v30;
  if ( v30 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 36) )
  {
    v66 = a1 + 24;
    if ( v31 > (unsigned __int64)&v77 || v34 <= (unsigned __int64)&v77 )
    {
      sub_1604E60(v66, v33);
      v32 = &v77;
      v34 = *(_QWORD *)(a1 + 24) + 80LL * *(unsigned int *)(a1 + 32);
    }
    else
    {
      sub_1604E60(v66, v33);
      v67 = *(_QWORD *)(a1 + 24);
      v32 = (__m128 *)((char *)&v77 + v67 - v31);
      v34 = v67 + 80LL * *(unsigned int *)(a1 + 32);
    }
  }
  v35 = v32->m128_u64[0];
  v36 = (unsigned __int64 *)(v34 + 8);
  *(_QWORD *)(v34 + 8) = 1;
  v37 = &v32->m128_u64[1];
  *(_QWORD *)v34 = v35;
  v38 = (_QWORD *)(v34 + 16);
  if ( v34 + 48 == v34 + 16 )
  {
    v39 = 0;
  }
  else
  {
    do
    {
      *v38 = -4096;
      v38 += 2;
      *((_DWORD *)v38 - 2) = 0;
    }
    while ( (_QWORD *)(v34 + 48) != v38 );
    v39 = *(_DWORD *)(v34 + 8) >> 1;
  }
  v40 = v32->m128_i32[2] & 0xFFFFFFFE;
  v32->m128_i32[2] = v32->m128_i32[2] & 1 | (2 * v39);
  *(_DWORD *)(v34 + 8) = v40 | *(_DWORD *)(v34 + 8) & 1;
  v41 = *(_DWORD *)(v34 + 12);
  *(_DWORD *)(v34 + 12) = v32->m128_i32[3];
  v32->m128_i32[3] = v41;
  if ( (*(_BYTE *)(v34 + 8) & 1) != 0 )
  {
    if ( (v32->m128_i8[8] & 1) != 0 )
    {
      v48 = v32[1].m128_u64[0];
      if ( v48 == -8192 || v48 == -4096 || (v49 = *(_QWORD *)(v34 + 16), v49 == -4096) || v49 == -8192 )
      {
        v57 = _mm_loadu_si128((const __m128i *)(v34 + 16));
        *(_QWORD *)(v34 + 16) = v32[1].m128_u64[0];
        *(_DWORD *)(v34 + 24) = v32[1].m128_i32[2];
        v32[1].m128_u64[0] = v57.m128i_i64[0];
        v32[1].m128_i32[2] = v57.m128i_i32[2];
      }
      else
      {
        v50 = *(_DWORD *)(v34 + 24);
        *(__m128i *)(v34 + 16) = _mm_loadu_si128((const __m128i *)&v32[1]);
        v32[1].m128_u64[0] = v49;
        v32[1].m128_i32[2] = v50;
      }
      v51 = v32[2].m128_u64[0];
      if ( v51 == -8192 || v51 == -4096 || (v52 = *(_QWORD *)(v34 + 32), v52 == -8192) || v52 == -4096 )
      {
        v65 = _mm_loadu_si128((const __m128i *)(v34 + 32));
        *(_QWORD *)(v34 + 32) = v32[2].m128_u64[0];
        *(_DWORD *)(v34 + 40) = v32[2].m128_i32[2];
        v32[2].m128_u64[0] = v65.m128i_i64[0];
        v32[2].m128_i32[2] = v65.m128i_i32[2];
      }
      else
      {
        v53 = *(_DWORD *)(v34 + 40);
        *(__m128i *)(v34 + 32) = _mm_loadu_si128((const __m128i *)&v32[2]);
        v32[2].m128_u64[0] = v52;
        v32[2].m128_i32[2] = v53;
      }
      goto LABEL_27;
    }
    v42 = v32[1].m128_i32[2];
    v36 = &v32->m128_u64[1];
    v37 = (unsigned __int64 *)(v34 + 8);
  }
  else
  {
    v42 = *(_DWORD *)(v34 + 24);
    if ( (v32->m128_i8[8] & 1) == 0 )
    {
      v59 = *(_QWORD *)(v34 + 16);
      *(_QWORD *)(v34 + 16) = v32[1].m128_u64[0];
      v32[1].m128_u64[0] = v59;
      *(_DWORD *)(v34 + 24) = v32[1].m128_i32[2];
      v32[1].m128_i32[2] = v42;
      goto LABEL_27;
    }
  }
  *(_BYTE *)v36 |= 1u;
  v43 = v36[1];
  *(__m128i *)(v36 + 1) = _mm_loadu_si128((const __m128i *)(v37 + 1));
  *(__m128i *)(v36 + 3) = _mm_loadu_si128((const __m128i *)(v37 + 3));
  *(_BYTE *)v37 &= ~1u;
  v37[1] = v43;
  *((_DWORD *)v37 + 4) = v42;
LABEL_27:
  *(_QWORD *)(v34 + 48) = v34 + 64;
  *(_QWORD *)(v34 + 56) = 0x100000000LL;
  if ( v32[3].m128_i32[2] )
    sub_1604240((char ***)(v34 + 48), (char ***)&v32[3]);
  v44 = ptr[0];
  ++*(_DWORD *)(a1 + 32);
  if ( v44 != v81 )
    free(v44);
  if ( (v77.m128_i8[8] & 1) == 0 )
    operator delete(v78.m128i_i64[0], 16LL * v78.m128i_u32[2], 8);
  if ( v74 != &v76 )
    free(v74);
  if ( (v71 & 1) == 0 )
    operator delete(v72.m128i_i64[0], 16LL * v72.m128i_u32[2], 8);
  v13 = (unsigned int)(*(_DWORD *)(a1 + 32) - 1);
  *(_DWORD *)(v21 + 8) = v13;
  return *(_QWORD *)(a1 + 24) + 80 * v13 + 8;
}
