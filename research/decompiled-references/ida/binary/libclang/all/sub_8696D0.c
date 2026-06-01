__int64 __fastcall sub_8696D0(__int64 *a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rdi
  _WORD *v6; // rax
  unsigned __int64 *v7; // r15
  unsigned __int64 *v8; // r14
  __int64 v9; // r12
  unsigned __int64 v10; // rdx
  unsigned int v11; // r12d
  __int64 v12; // r15
  __int64 v13; // r12
  __int64 v14; // r14
  __m128i v15; // xmm0
  __int64 v16; // rax
  _QWORD *v17; // rsi
  __int64 v18; // rdx
  size_t v19; // rcx
  int v20; // r8d
  __int64 v21; // rdx
  char *v22; // rax
  __int64 v23; // rsi
  __int64 v24; // r14
  unsigned __int64 v25; // r15
  char *v26; // rdi
  unsigned __int64 v27; // rsi
  __int64 v28; // rbx
  char v29; // al
  char *v30; // rdx
  int v31; // eax
  unsigned __int64 v32; // rax
  char v34; // al
  int v35; // edx
  __int64 v36; // rax
  __int64 v37; // rdi
  void *v38; // rdi
  __int64 v39; // rax
  __int64 v40; // r12
  _QWORD *v41; // rdi
  __int64 v42; // rdx
  _WORD *v43; // [rsp+18h] [rbp-140h]
  int v44; // [rsp+24h] [rbp-134h]
  int v45; // [rsp+28h] [rbp-130h]
  size_t v46; // [rsp+28h] [rbp-130h]
  int v47; // [rsp+28h] [rbp-130h]
  int v48; // [rsp+30h] [rbp-128h]
  __m128i v49; // [rsp+40h] [rbp-118h] BYREF
  void *v50; // [rsp+50h] [rbp-108h] BYREF
  __int64 v51; // [rsp+58h] [rbp-100h]
  _BYTE v52[16]; // [rsp+60h] [rbp-F8h] BYREF
  void *v53; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v54; // [rsp+78h] [rbp-E0h]
  _BYTE v55[48]; // [rsp+80h] [rbp-D8h] BYREF
  __m128i v56; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v57; // [rsp+C0h] [rbp-98h]
  void *ptr; // [rsp+C8h] [rbp-90h] BYREF
  __int64 v59; // [rsp+D0h] [rbp-88h]
  _QWORD src[16]; // [rsp+D8h] [rbp-80h] BYREF

  v50 = v52;
  v51 = 0x200000000LL;
  v54 = 0x200000000LL;
  v4 = *(_QWORD *)(a2 + 16);
  v53 = v55;
  v5 = v4 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v4 & 4) != 0 )
    v5 = *(_QWORD *)(v5 + 40);
  v6 = sub_804B90((_WORD *)v5, (__int64)&v50, (__int64)&v53);
  v7 = (unsigned __int64 *)v50;
  v43 = v6;
  v8 = (unsigned __int64 *)((char *)v50 + 8 * (unsigned int)v51);
  if ( v50 != v8 )
  {
    while ( 1 )
    {
      v9 = *a1;
      v10 = *v7;
      v56.m128i_i32[0] = 0;
      v56.m128i_i8[4] &= ~1u;
      if ( (unsigned __int8)sub_856400((__int64)&v56, v9, v10)
        || (**(_BYTE **)(v9 + 24) = 1, *(_DWORD *)(v9 + 964) > 2u) )
      {
        if ( v56.m128i_i32[0] <= 1u )
          goto LABEL_5;
LABEL_8:
        sub_69F740((__int64)&v56);
        if ( v8 == ++v7 )
          break;
      }
      else
      {
        if ( *(_BYTE *)(v9 + 962) )
        {
          if ( v56.m128i_i32[0] > 1u )
            goto LABEL_8;
        }
        else
        {
          v11 = *(unsigned __int8 *)(v9 + 963);
          if ( v56.m128i_i32[0] > 1u )
          {
            sub_69F740((__int64)&v56);
            if ( !(_BYTE)v11 )
              goto LABEL_39;
          }
          else if ( !(_BYTE)v11 )
          {
            goto LABEL_39;
          }
        }
LABEL_5:
        if ( v8 == ++v7 )
          break;
      }
    }
  }
  v11 = ((*(__int64 *)(a2 + 16) >> 2) & 1) == 0;
  if ( ((*(__int64 *)(a2 + 16) >> 2) & 1) == 0 )
  {
    v12 = a1[1];
    v44 = 1;
    v13 = *(_QWORD *)(*a1 + 32);
    goto LABEL_11;
  }
  v35 = sub_7A7340(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  v36 = *a1;
  if ( v35 != 3 )
  {
    v37 = *(_QWORD *)(a2 + 16);
    v13 = *(_QWORD *)(v36 + 32);
    v12 = a1[1];
    v44 = (v37 & 4) == 0 || sub_7A7340(v37 & 0xFFFFFFFFFFFFFFF8LL) == 0;
LABEL_11:
    v14 = *((_QWORD *)v43 + 1);
    sub_69F1F0(
      (__int64)&v49,
      a2,
      *(_DWORD *)(v13 + 176),
      *(_DWORD *)(*(_QWORD *)(v13 + 184) + 4LL * *(unsigned int *)(v13 + 192) - 4));
    *(_BYTE *)(v12 + 128) &= ~2u;
    v15 = _mm_load_si128(&v49);
    *(_QWORD *)(v12 + 16) = 0;
    *(__m128i *)v12 = v15;
    v56 = v15;
    v16 = sub_69F240(v56.m128i_i64);
    v56.m128i_i32[0] = 0;
    v57 = v16;
    ptr = src;
    v59 = 0x800000000LL;
    v56.m128i_i64[1] = 0;
    *(_DWORD *)(v12 + 24) = 0;
    *(_QWORD *)(v12 + 32) = 0;
    *(_QWORD *)(v12 + 40) = v57;
    v17 = ptr;
    if ( (void **)(v12 + 48) == &ptr )
      goto LABEL_19;
    if ( ptr != src )
    {
      v38 = *(void **)(v12 + 48);
      if ( v38 != (void *)(v12 + 64) )
      {
        free(v38);
        v17 = ptr;
      }
      *(_QWORD *)(v12 + 48) = v17;
      *(_QWORD *)(v12 + 56) = v59;
      goto LABEL_21;
    }
    v18 = (unsigned int)v59;
    v19 = *(unsigned int *)(v12 + 56);
    v20 = v59;
    if ( v19 >= (unsigned int)v59 )
    {
      *(_DWORD *)(v12 + 56) = 0;
LABEL_21:
      v23 = v49.m128i_i64[0];
      *(_WORD *)(v12 + 128) &= 0xFEu;
      v24 = sub_823990(v13, v23, v49.m128i_i64[1], a2, v14, v44);
      goto LABEL_22;
    }
    if ( *(unsigned int *)(v12 + 60) < (unsigned __int64)(unsigned int)v59 )
    {
      *(_DWORD *)(v12 + 56) = 0;
      v47 = v18;
      sub_25D6060(v12 + 48, v12 + 64, v18, 8);
      v17 = ptr;
      v20 = v47;
      v19 = 0;
      v42 = (unsigned int)v59;
      v22 = (char *)ptr;
    }
    else
    {
      if ( !*(_DWORD *)(v12 + 56) )
      {
        v21 = 8LL * (unsigned int)v59;
        v22 = (char *)src;
LABEL_17:
        v45 = v20;
        memcpy((void *)(v19 + *(_QWORD *)(v12 + 48)), v22, v21 - v19);
        v20 = v45;
        v17 = ptr;
LABEL_18:
        *(_DWORD *)(v12 + 56) = v20;
LABEL_19:
        if ( v17 != src )
          free(v17);
        goto LABEL_21;
      }
      v19 *= 8LL;
      v41 = *(_QWORD **)(v12 + 48);
      if ( v19 == 8 )
      {
        *v41 = src[0];
        v17 = ptr;
        v42 = (unsigned int)v59;
        v22 = (char *)ptr + 8;
      }
      else
      {
        v48 = v59;
        v46 = v19;
        memmove(v41, ptr, v19);
        v19 = v46;
        v20 = v48;
        v17 = ptr;
        v42 = (unsigned int)v59;
        v22 = (char *)ptr + v46;
      }
    }
    v21 = 8 * v42;
    if ( v21 == v19 )
      goto LABEL_18;
    goto LABEL_17;
  }
  if ( *(_DWORD *)(v36 + 964) == 2 )
  {
LABEL_39:
    v26 = (char *)v53;
    goto LABEL_40;
  }
  v39 = sub_7A7530(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL, 1);
  v56.m128i_i8[4] &= ~1u;
  v24 = v39;
  v56.m128i_i32[0] = 0;
  sub_6A01B0(v39, (__int64)&v56);
  if ( v56.m128i_i32[0] > 1u )
    sub_69F740((__int64)&v56);
  v40 = a1[1];
  sub_69F1F0((__int64)&v56, a2, 0, 0);
  sub_823790(v40, v56.m128i_i64[0], v56.m128i_i64[1], 0);
LABEL_22:
  v25 = *((_QWORD *)v43 + 1);
  v11 = sub_88A010(v24, *a1, a1[1], v43, 0);
  if ( !(_BYTE)v11 )
  {
    v56.m128i_i8[4] &= ~1u;
    v56.m128i_i32[0] = 0;
    sub_6A01B0(v24, (__int64)&v56);
    if ( v56.m128i_i32[0] > 1u )
      sub_69F740((__int64)&v56);
    goto LABEL_39;
  }
  v26 = (char *)v53;
  if ( !(_DWORD)v54 )
    goto LABEL_40;
  v27 = v25;
  v28 = 24LL * (unsigned int)(v54 - 1);
  while ( 1 )
  {
    v30 = &v26[v28];
    v31 = *(_DWORD *)&v26[v28];
    if ( v31 == 1 )
      break;
    if ( v31 == 2 )
    {
      v32 = sub_855AD0(*a1, v27, a1[1], *((_QWORD *)v30 + 2), 1u);
      v26 = (char *)v53;
      if ( !v32 )
        goto LABEL_53;
      v27 = *(_QWORD *)(*(_QWORD *)((char *)v53 + v28 + 8) + 32LL);
    }
    else if ( !v31 )
    {
      v29 = sub_82E0E0(*a1, *((_QWORD *)v30 + 1), v27, a1[1]);
      v26 = (char *)v53;
      if ( !v29 )
        goto LABEL_53;
      v27 = *(_QWORD *)(*(_QWORD *)((char *)v53 + v28 + 8) + 8LL);
    }
LABEL_28:
    v28 -= 24;
    if ( v28 == -24 )
      goto LABEL_40;
  }
  v34 = sub_825C70(*a1, a2, a1[1], *((_QWORD *)v30 + 1));
  v26 = (char *)v53;
  if ( v34 )
  {
    v27 = *(_QWORD *)(*(_QWORD *)((char *)v53 + v28 + 8) + 48LL);
    goto LABEL_28;
  }
LABEL_53:
  v11 = 0;
LABEL_40:
  if ( v26 != v55 )
    free(v26);
  if ( v50 != v52 )
    free(v50);
  return v11;
}

