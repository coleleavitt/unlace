__int64 __fastcall sub_F2530(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // zf
  __int64 v5; // rbp
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rcx
  unsigned __int64 v18; // r15
  void *v19; // r13
  __int64 v20; // rdi
  __m128i si128; // xmm0
  __int64 v22; // rdi
  __int64 v23; // r15
  __int64 i; // r13
  __int64 v25; // rdx
  __int64 v26; // r12
  unsigned int tinfo_size; // eax
  char v28; // [rsp+4h] [rbp-94h]
  size_t n[2]; // [rsp+10h] [rbp-88h] BYREF
  __int64 v31; // [rsp+28h] [rbp-70h] BYREF
  unsigned __int64 v32; // [rsp+30h] [rbp-68h] BYREF
  _QWORD *v33; // [rsp+38h] [rbp-60h]
  _BYTE v34[24]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v35; // [rsp+58h] [rbp-40h]

  v3 = *(_BYTE *)(a2 + 64) == 8;
  v28 = a3;
  v35 = __readfsqword(0x28u);
  v33 = nullptr;
  v32 = 0xFFFFFFFF00000000LL;
  if ( !v3 || *(int *)(a2 + 68) <= 0 )
  {
    if ( !under_debugger )
      sub_383060(50095);
    goto LABEL_35;
  }
  v5 = *(_QWORD *)(a2 + 72);
  v6 = *(_QWORD *)(v5 + 56);
  if ( v6 == 1 )
  {
    v12 = *(_QWORD *)(v5 + 48);
    sub_125180(&v32);
    goto LABEL_14;
  }
  if ( v6 != 2 || (v9 = *(_QWORD *)(v5 + 48), v10 = *(unsigned int *)(v9 + 20), *(_DWORD *)(v9 + 4) != (_DWORD)v10) )
  {
    if ( *(_DWORD *)(v5 + 80) == 2 )
    {
LABEL_26:
      v26 = *(_QWORD *)(a1 + 64);
      tinfo_size = get_tinfo_size();
      sub_1C6010(v34, v26, v5 + 80, tinfo_size);
      v31 = 0;
      copy_tinfo_t();
      v12 = *(_QWORD *)(a1 + 64);
      sub_11D150(&v32, v12, 0, &v31, v34);
      clear_tinfo_t();
      cleanup_argloc();
      goto LABEL_14;
    }
    if ( (a3 & 2) != 0 )
    {
      v7 = 0;
      goto LABEL_8;
    }
    if ( !under_debugger )
      sub_383060(50096);
LABEL_35:
    BUG();
  }
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 480) + 145LL) && *(_DWORD *)(v5 + 80) == 2 )
    goto LABEL_26;
  v11 = (_QWORD *)j__qalloc_or_throw(32, a2, a3, v10);
  *v11 = 0xFFFFFFFF00000000LL;
  v11[1] = 0;
  v11[2] = 0xFFFFFFFF00000000LL;
  v11[3] = 0;
  LOBYTE(v32) = 14;
  v33 = v11;
  sub_125180(v11);
  v12 = *(_QWORD *)(v5 + 48) + 16LL;
  sub_125180(v33 + 2);
  v14 = *(_QWORD *)(v5 + 48);
  HIDWORD(v32) = *(_DWORD *)(v14 + 4) + *(_DWORD *)(v14 + 20);
LABEL_14:
  v15 = j__qalloc_or_throw(80, v12, v14, v13);
  v16 = *(_QWORD *)(a2 + 24);
  n[0] = v15 + 48;
  *(_QWORD *)(v15 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v15 + 40) = 0;
  *(_QWORD *)(v15 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v15 + 56) = 0;
  *(_QWORD *)(v15 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v15 + 72) = 0;
  sub_330970(v15, v16);
  *(_DWORD *)v15 = *(_DWORD *)a2;
  *(_DWORD *)(v15 + 4) = *(_DWORD *)(a2 + 4);
  sub_11CA10(v15 + 32, a2 + 32);
  sub_11CA10(n[0], a2 + 48);
  sub_11CA10(v15 + 64, a2 + 64);
  *(_BYTE *)(a2 + 32) = 4;
  *(_QWORD *)(a2 + 40) = v15;
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(v15 + 68);
  sub_11CA10(a2 + 64, &v32);
  *(_DWORD *)a2 = 4;
  *(_DWORD *)(v5 + 280) |= 3u;
  sub_648D0((__int64 *)(v5 + 240), (__int64 *)(v5 + 96));
  v18 = *(_QWORD *)(v5 + 120);
  v19 = nullptr;
  if ( v18 )
  {
    n[0] = 16 * v18;
    v19 = (void *)qalloc_or_throw(16 * v18, v5 + 96, 16 * v18, v17);
    memcpy(v19, *(const void **)(v5 + 112), 16 * v18);
  }
  v20 = *(_QWORD *)(v5 + 256);
  si128 = _mm_unpacklo_epi64((__m128i)v18, (__m128i)v18);
  if ( v20 )
  {
    *(_QWORD *)(v5 + 264) = 0;
    *(__m128i *)n = si128;
    qfree(v20);
    si128 = _mm_load_si128((const __m128i *)n);
  }
  v22 = *(_QWORD *)(v5 + 48);
  *(_QWORD *)(v5 + 256) = v19;
  *(__m128i *)(v5 + 264) = si128;
  if ( v22 )
  {
    v23 = *(_QWORD *)(v5 + 56);
    if ( v23 )
    {
      for ( i = 0; i != v23; ++i )
      {
        v25 = i;
        sub_11CDA0(16 * v25 + v22);
        v22 = *(_QWORD *)(v5 + 48);
      }
    }
    *(_QWORD *)(v5 + 56) = 0;
    qfree(v22);
    *(_QWORD *)(v5 + 48) = 0;
    *(_QWORD *)(v5 + 64) = 0;
  }
  if ( (*(_BYTE *)(v15 + 65) & 2) != 0 )
  {
    *(_BYTE *)(a2 + 33) |= 2u;
    *(_BYTE *)(a2 + 65) |= 2u;
  }
  else
  {
    if ( (get_tinfo_property() & 0xF) == 9 )
      *(_DWORD *)(a2 + 4) |= 0x10u;
    if ( (v28 & 1) != 0 )
      sub_36D530(a1, a2, v5 + 72);
  }
  v7 = 1;
LABEL_8:
  sub_11CDA0(&v32);
  return v7;
}
