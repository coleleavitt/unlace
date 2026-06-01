unsigned __int64 __fastcall sub_6CA3C0(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char a4,
        unsigned __int64 a5)
{
  __int64 v6; // rax
  _OWORD *v7; // rdx
  int v8; // r15d
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rbx
  char v16; // al
  unsigned __int64 v17; // r8
  char v18; // dl
  char v19; // al
  int v20; // edx
  __int16 v21; // si
  __int16 v22; // ax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  _OWORD *v26; // rdx
  int v27; // r9d
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rsi
  __int64 v31; // rdx
  unsigned __int8 v32; // al
  unsigned __int64 v33; // rdx
  __m128 v34; // [rsp+0h] [rbp-198h]
  int v35; // [rsp+0h] [rbp-198h]
  unsigned __int64 v37; // [rsp+10h] [rbp-188h]
  unsigned __int64 v39; // [rsp+28h] [rbp-170h]
  __int64 v40; // [rsp+30h] [rbp-168h] BYREF
  unsigned __int64 v41; // [rsp+38h] [rbp-160h] BYREF
  void *ptr; // [rsp+40h] [rbp-158h] BYREF
  __int64 v43; // [rsp+48h] [rbp-150h]
  _OWORD v44[8]; // [rsp+50h] [rbp-148h] BYREF
  void *v45; // [rsp+D0h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+D8h] [rbp-C0h]
  _OWORD v47[11]; // [rsp+E0h] [rbp-B8h] BYREF

  v40 = 0;
  ptr = v44;
  v45 = (void *)a2;
  v43 = 0x2000000004LL;
  v34 = (__m128)_mm_unpacklo_epi64((__m128i)a3, (__m128i)HIDWORD(a3));
  v44[0] = _mm_shuffle_ps((__m128)_mm_unpacklo_epi64((__m128i)a2, (__m128i)HIDWORD(a2)), v34, 136);
  if ( a4 )
  {
    v6 = 16;
    v7 = v44;
    v8 = 1;
  }
  else
  {
    v8 = (unsigned __int8)sub_B04230(&v45);
    v12 = (unsigned int)v43 + 1LL;
    if ( HIDWORD(v43) < v12 )
      sub_25D6060(&ptr, v44, v12, 4);
    v7 = ptr;
    v6 = 4LL * (unsigned int)v43;
  }
  *(_DWORD *)((char *)v7 + v6) = v8;
  LODWORD(v43) = v43 + 1;
  v9 = sub_25AC3A0(a1 + 752, &ptr, &v40, &off_47D06E0);
  v10 = (v9 - 32) & 0xFFFFFFFFFFFFFFF0LL;
  if ( !v9 )
  {
    v13 = *(_QWORD *)(a1 + 2192);
    *(_QWORD *)(a1 + 2272) += 48LL;
    v14 = (v13 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 2200) >= v14 + 48 && v13 )
    {
      *(_QWORD *)(a1 + 2192) = v14 + 48;
      v15 = (v13 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v15 = sub_6A76A0(a1 + 2192, 48, 4);
      v14 = v15;
    }
    v39 = v14;
    v45 = (void *)a2;
    v16 = sub_B03F90(&v45);
    v17 = v39;
    v18 = v16;
    v19 = ((v16 & 4) != 0 ? 0xC : 0) | (2 * v16) & 0x10 | v16 & 2;
    v20 = v18 & 1;
    if ( v20 )
      v19 |= 1u;
    v21 = v19 & 0x10 | v20 | (a4 != 0 ? 6 : 0);
    LOBYTE(v20) = (v19 & 0xC) != 0;
    v22 = v19 & 2 | (4 * v20) | v21;
    if ( (a3 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
      v22 |= *(_BYTE *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x17;
    *(_QWORD *)v15 = v15;
    v23 = v15 & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD *)(v15 + 32) = 0;
    if ( (a5 & 0xFFFFFFFFFFFFFFF8LL) >= 0x10 )
      v23 = a5;
    *(_BYTE *)(v15 + 18) &= 0xF8u;
    *(_QWORD *)(v15 + 8) = v23;
    *(_QWORD *)(v15 + 24) = a3;
    *(_WORD *)(v15 + 16) = (v22 << 8) | 0x11;
    *(_QWORD *)(v15 + 40) = v45;
    v45 = v47;
    v24 = *(_QWORD *)(v15 + 40);
    v46 = 0x2000000004LL;
    v41 = v24;
    v47[0] = _mm_shuffle_ps((__m128)_mm_unpacklo_epi64((__m128i)v24, (__m128i)HIDWORD(v24)), v34, 136);
    if ( (v22 & 4) != 0 )
    {
      v25 = 16;
      v26 = v47;
      v27 = 1;
    }
    else
    {
      v32 = sub_B04230(&v41);
      v17 = v39;
      v27 = v32;
      v33 = (unsigned int)v46 + 1LL;
      if ( HIDWORD(v46) < v33 )
      {
        v35 = v32;
        sub_25D6060(&v45, v47, v33, 4);
        v17 = v39;
        v26 = v45;
        v27 = v35;
      }
      else
      {
        v26 = v45;
      }
      v25 = 4LL * (unsigned int)v46;
    }
    *(_DWORD *)((char *)v26 + v25) = v27;
    v28 = *(unsigned int *)(a1 + 16);
    v29 = *(unsigned int *)(a1 + 20);
    LODWORD(v46) = v46 + 1;
    if ( v29 < v28 + 1 )
    {
      v37 = v17;
      sub_25D6060(a1 + 8, a1 + 24, v28 + 1, 8);
      v28 = *(unsigned int *)(a1 + 16);
      v17 = v37;
    }
    v30 = v15 + 32;
    v10 = v15 & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v28) = v17;
    v31 = v40;
    ++*(_DWORD *)(a1 + 16);
    sub_25AC200(a1 + 752, v30, v31, &off_47D06E0);
    if ( v45 != v47 )
      free(v45);
  }
  if ( ptr != v44 )
    free(ptr);
  return v10;
}

