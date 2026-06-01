unsigned __int64 __fastcall sub_1C20080(__int64 a1, unsigned __int64 a2, double a3)
{
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v11; // eax
  unsigned __int64 v12; // r12
  unsigned int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // rcx
  __int64 v22; // r9
  int v23; // esi
  int v24; // r11d
  unsigned __int64 v25; // r10
  unsigned int i; // eax
  unsigned __int64 v27; // r15
  __int64 v28; // r8
  unsigned int v29; // eax
  __int64 v30; // rax
  unsigned int v31; // esi
  unsigned int v32; // eax
  int v33; // edi
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 *v36; // rax
  __int64 *v37; // r14
  __m128i v38; // xmm0
  unsigned __int64 v39; // r12
  __int64 v40; // rax
  __int64 *v41; // [rsp+18h] [rbp-50h] BYREF
  __m128i v42; // [rsp+20h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL);
  if ( (v6 & 4) != 0 )
  {
    v30 = *(_QWORD *)(a1 + 104);
    if ( !v30 )
      return sub_C0B960(
               *(_QWORD **)(v5 + 248),
               a2,
               *(_QWORD **)(a1 + 32),
               *(unsigned int *)(a1 + 40),
               *(_DWORD *)(a1 + 16));
    v8 = *(_QWORD *)(v30 + 80);
LABEL_4:
    v9 = *(_QWORD *)&byte_8[v8 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v9 & 8) == 0
      || (((*(__int64 *)((char *)&qword_18 + (v9 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned __int64)(v9 & 7)) >> 6) & 7) != 3 )
    {
      return sub_C0B960(
               *(_QWORD **)(v5 + 248),
               a2,
               *(_QWORD **)(a1 + 32),
               *(unsigned int *)(a1 + 40),
               *(_DWORD *)(a1 + 16));
    }
    goto LABEL_7;
  }
  v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)(v7 + 73) & 2) == 0 )
  {
    v8 = *(_QWORD *)(v7 + 56);
    goto LABEL_4;
  }
LABEL_7:
  v11 = *(_DWORD *)(*(_QWORD *)(v5 + 4616) + 640LL * *(unsigned int *)(v5 + 4624) - 640);
  if ( v11 == 3 )
    return sub_C0B960(
             *(_QWORD **)(v5 + 248),
             a2,
             *(_QWORD **)(a1 + 32),
             *(unsigned int *)(a1 + 40),
             *(_DWORD *)(a1 + 16));
  if ( v11 <= 1 )
    return sub_C0B960(
             *(_QWORD **)(v5 + 248),
             a2,
             *(_QWORD **)(a1 + 32),
             *(unsigned int *)(a1 + 40),
             *(_DWORD *)(a1 + 16));
  v12 = *(_QWORD *)(v5 + 264);
  v13 = sub_EEB7E0(a2, a2, a3);
  if ( (unsigned __int8)sub_FD3830(*(_QWORD *)(v12 + 32), 0x1968u, v13, v12, v14, v15) == 1 )
    return sub_C0B960(
             *(_QWORD **)(v5 + 248),
             a2,
             *(_QWORD **)(a1 + 32),
             *(unsigned int *)(a1 + 40),
             *(_DWORD *)(a1 + 16));
  v16 = *(unsigned int *)(v5 + 40);
  v17 = *(_QWORD *)(a1 + 88);
  if ( !(_DWORD)v16 )
  {
    sub_15EE880((unsigned __int64 *)&v42, *(_QWORD *)(a1 + 88));
    BUG();
  }
  v18 = *(_QWORD *)(v5 + 32);
  v19 = *(_QWORD *)(v17 + 24);
  v20 = *(_QWORD *)(v18 + 8 * v16 - 8);
  sub_15EE880((unsigned __int64 *)&v42, *(_QWORD *)(a1 + 88));
  v21 = *(_BYTE *)(v20 + 760) & 1;
  if ( (*(_BYTE *)(v20 + 760) & 1) != 0 )
  {
    v22 = v20 + 768;
    v23 = 7;
  }
  else
  {
    v31 = *(_DWORD *)(v20 + 776);
    v22 = *(_QWORD *)(v20 + 768);
    if ( !v31 )
    {
      v41 = nullptr;
      v32 = *(_DWORD *)(v20 + 760);
      v33 = (v32 >> 1) + 1;
      goto LABEL_23;
    }
    v23 = v31 - 1;
  }
  v24 = 1;
  v25 = 0;
  for ( i = v23
          & (((0xBF58476D1CE4E5B9LL
             * (((unsigned __int32)v42.m128i_i32[2] >> 9) ^ ((unsigned __int32)v42.m128i_i32[2] >> 4)
              | ((unsigned __int64)(v42.m128i_i32[0] ^ (unsigned int)((unsigned __int64)v42.m128i_i64[0] >> 9)) << 32))) >> 31)
           ^ (484763065 * (((unsigned __int32)v42.m128i_i32[2] >> 9) ^ ((unsigned __int32)v42.m128i_i32[2] >> 4))));
        ;
        i = v23 & v29 )
  {
    v27 = v22 + ((unsigned __int64)i << 6);
    v28 = *(_QWORD *)v27;
    if ( *(_OWORD *)&v42 == *(_OWORD *)v27 )
    {
      v40 = *(unsigned int *)(v27 + 24);
      v37 = (__int64 *)(v27 + 16);
      v39 = v19 & 2 | v17 & 0xFFFFFFFFFFFFFFFDLL;
      if ( v40 + 1 > (unsigned __int64)*(unsigned int *)(v27 + 28) )
      {
        sub_2237220(v27 + 16, v27 + 32, v40 + 1, 8);
        v40 = *(unsigned int *)(v27 + 24);
      }
      goto LABEL_29;
    }
    if ( !v28 )
      break;
    if ( v28 == 4 && !(*(_QWORD *)(v27 + 8) | v25) )
      v25 = v22 + ((unsigned __int64)i << 6);
LABEL_17:
    v29 = v24 + i;
    ++v24;
  }
  if ( *(_QWORD *)(v27 + 8) )
    goto LABEL_17;
  v32 = *(_DWORD *)(v20 + 760);
  if ( v25 )
    v27 = v25;
  v41 = (__int64 *)v27;
  v33 = (v32 >> 1) + 1;
  if ( (_BYTE)v21 )
  {
    v34 = 24;
    v31 = 8;
    goto LABEL_24;
  }
  v31 = *(_DWORD *)(v20 + 776);
LABEL_23:
  v34 = 3 * v31;
LABEL_24:
  v35 = (unsigned int)(4 * v33);
  if ( (unsigned int)v35 >= (unsigned int)v34 )
  {
    v31 *= 2;
  }
  else
  {
    v35 = v31 - *(_DWORD *)(v20 + 764) - v33;
    if ( (unsigned int)v35 > v31 >> 3 )
      goto LABEL_26;
  }
  sub_15EF470((unsigned __int8 *)(v20 + 760), v31, v35, v21, v34, v22);
  sub_18C70B0(v20 + 760, (unsigned __int64 *)&v42, &v41);
  v32 = *(_DWORD *)(v20 + 760);
LABEL_26:
  *(_DWORD *)(v20 + 760) = (2 * (v32 >> 1) + 2) | v32 & 1;
  v36 = v41;
  if ( *v41 || v41[1] )
    --*(_DWORD *)(v20 + 764);
  v37 = v36 + 2;
  v38 = _mm_load_si128(&v42);
  v36[2] = (__int64)(v36 + 4);
  v39 = v19 & 2 | v17 & 0xFFFFFFFFFFFFFFFDLL;
  v36[3] = 0x400000000LL;
  *(__m128i *)v36 = v38;
  v40 = 0;
LABEL_29:
  *(_QWORD *)(*v37 + 8 * v40) = v39;
  ++*((_DWORD *)v37 + 2);
  v5 = *(_QWORD *)(a1 + 8);
  return sub_C0B960(*(_QWORD **)(v5 + 248), a2, *(_QWORD **)(a1 + 32), *(unsigned int *)(a1 + 40), *(_DWORD *)(a1 + 16));
}
