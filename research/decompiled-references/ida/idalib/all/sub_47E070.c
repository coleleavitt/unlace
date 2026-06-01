bool __fastcall sub_47E070(__int64 a1, _DWORD *a2, void *a3)
{
  int v5; // esi
  int v7; // esi
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r13
  __m128i v11; // xmm2
  __int64 v12; // r12
  char v13; // bl
  unsigned __int64 v14; // xmm0_8
  __m128i si128; // xmm1
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r8
  unsigned int v19; // edx
  __int64 *v20; // rbp
  char *v21; // rbx
  int v22; // eax
  size_t v23; // r13
  __int64 v24; // rdi
  _QWORD *v25; // r13
  size_t v26; // r13
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rax
  int v31; // ecx
  __int64 v32; // r15
  __int64 v33; // rbp
  void *ptr[2]; // [rsp+0h] [rbp-B8h] BYREF
  char *s2; // [rsp+18h] [rbp-A0h]
  __m128i v36; // [rsp+20h] [rbp-98h] BYREF
  __int64 v37; // [rsp+30h] [rbp-88h]
  unsigned __int64 v38; // [rsp+38h] [rbp-80h]
  _QWORD *v39; // [rsp+40h] [rbp-78h]
  __int64 v40; // [rsp+48h] [rbp-70h]
  char v41[8]; // [rsp+58h] [rbp-60h] BYREF
  void *v42; // [rsp+60h] [rbp-58h] BYREF
  __int128 v43; // [rsp+68h] [rbp-50h]
  unsigned __int64 v44; // [rsp+78h] [rbp-40h]

  v5 = a2[4];
  v44 = __readfsqword(0x28u);
  sub_47DA40(a1, v5);
  sub_47DA40(a1, a2[5]);
  if ( *(_BYTE *)(a1 + 132) )
  {
    if ( a3 != (void *)-1LL )
    {
      v31 = a2[7];
      v32 = 0;
      ptr[0] = &v42;
      if ( v31 > 0 )
      {
        do
        {
          v33 = switch_dbctx((int)a2[v32 + 4]);
          sub_7BEFF0(v41, v33, *(_QWORD *)(a1 + 16), 0, 1);
          if ( sub_7BF1C0(v41, v33, 0, 0) < 0 )
          {
            v42 = a3;
            sub_7BF280(v41, v33, ptr[0], 8);
          }
          ++v32;
        }
        while ( a2[7] > (int)v32 );
      }
    }
  }
  v7 = *(_DWORD *)(a1 + 128);
  v8 = 0;
  s2 = nullptr;
  v40 = a1 + 48;
  v37 = a1 + 72;
  v39 = (_QWORD *)(a1 + 80);
  if ( v7 > 0 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v18 = *(_QWORD *)(a1 + 120) + (v8 << 6);
        v19 = *(_DWORD *)(v18 + 56);
        v20 = (__int64 *)v18;
        if ( (v19 & 4) == 0 )
          break;
        if ( *(_BYTE *)(a1 + 132) )
          goto LABEL_6;
LABEL_9:
        if ( *(_DWORD *)(a1 + 128) <= (int)++v8 )
          goto LABEL_26;
      }
      if ( (v19 & 0x800) != 0 )
        v21 = *(char **)(v18 + 8);
      else
        v21 = *(char **)v18;
      LODWORD(ptr[0]) = *(_DWORD *)(v18 + 56);
      if ( s2 )
      {
        v22 = strcmp(v21, s2);
        v19 = (unsigned int)ptr[0];
        if ( !v22 )
          goto LABEL_6;
      }
      v42 = nullptr;
      v43 = 0;
      if ( v21 )
        break;
      v28 = sub_431640(v37, (__int64)&v42);
      if ( v39 != v28 )
        goto LABEL_20;
      if ( *(_DWORD *)(a1 + 128) <= (int)++v8 )
        goto LABEL_26;
    }
    v23 = strlen(v21);
    ptr[0] = (void *)(v23 + 1);
    v42 = (void *)qvector_reserve(&v42, 0, v23 + 1, 1);
    *(void **)&v43 = ptr[0];
    memmove(v42, v21, v23);
    v24 = v37;
    *((_BYTE *)v42 + v23) = 0;
    ptr[0] = v42;
    v25 = sub_431640(v24, (__int64)&v42);
    if ( ptr[0] )
    {
      *(_QWORD *)&v43 = 0;
      qfree(ptr[0]);
    }
    if ( v39 == v25 )
      goto LABEL_9;
    v42 = nullptr;
    v43 = 0;
    v26 = strlen(v21);
    ptr[0] = (void *)(v26 + 1);
    v42 = (void *)qvector_reserve(&v42, 0, v26 + 1, 1);
    *(void **)&v43 = ptr[0];
    memmove(v42, v21, v26);
    *((_BYTE *)v42 + v26) = 0;
LABEL_20:
    sub_47D800(v37, (__int64)&v42);
    if ( v42 )
    {
      *(_QWORD *)&v43 = 0;
      qfree(v42);
    }
    s2 = v21;
    v19 = *((_DWORD *)v20 + 14);
LABEL_6:
    v9 = *(_QWORD *)(a1 + 56);
    v10 = *v20;
    v11 = _mm_loadu_si128((const __m128i *)(v20 + 1));
    v12 = v20[3];
    v13 = *((_BYTE *)v20 + 32);
    v14 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v19), _mm_cvtsi32_si128(*((_DWORD *)v20 + 15))).m128i_u64[0];
    si128 = _mm_loadu_si128((const __m128i *)(v20 + 5));
    v16 = *(_QWORD *)(a1 + 48);
    if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)(v9 + 1) )
    {
      v38 = v14;
      v36 = v11;
      *(__m128i *)ptr = si128;
      v27 = qvector_reserve(v40, v16, v9 + 1, 64);
      v11 = _mm_load_si128(&v36);
      si128 = _mm_load_si128((const __m128i *)ptr);
      *(_QWORD *)(a1 + 48) = v27;
      v16 = v27;
      v14 = v38;
      v9 = *(_QWORD *)(a1 + 56);
    }
    v17 = v16 + (v9 << 6);
    *(_QWORD *)v17 = v10;
    *(_QWORD *)(v17 + 24) = v12;
    *(_BYTE *)(v17 + 32) = v13;
    *(__m128i *)(v17 + 8) = v11;
    *(__m128i *)(v17 + 40) = si128;
    *(_QWORD *)(v17 + 56) = v14;
    ++*(_QWORD *)(a1 + 56);
    goto LABEL_9;
  }
LABEL_26:
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 48);
  v29 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 32) = v29;
  return v29 != 0;
}
