__int64 __fastcall sub_EEAF0(__int64 a1, __int64 a2, char a3)
{
  bool v3; // zf
  __int64 v5; // rbp
  __int64 v6; // rax
  unsigned int v7; // ebx
  _QWORD *v9; // rax
  __int64 v10; // r12
  __int64 v11; // rsi
  unsigned __int64 v12; // r15
  void *v13; // r13
  __int64 v14; // rdi
  __m128i si128; // xmm0
  __int64 v16; // rdi
  __int64 v17; // r15
  __int64 i; // r13
  __int64 v19; // rdx
  __int64 v20; // r12
  unsigned int tinfo_size; // eax
  size_t n[2]; // [rsp+10h] [rbp-88h] BYREF
  __int64 v25; // [rsp+28h] [rbp-70h] BYREF
  unsigned __int64 v26; // [rsp+30h] [rbp-68h] BYREF
  _QWORD *v27; // [rsp+38h] [rbp-60h]
  _BYTE v28[24]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+58h] [rbp-40h]

  v3 = *(_BYTE *)(a2 + 64) == 8;
  v29 = __readfsqword(0x28u);
  v27 = nullptr;
  v26 = 0xFFFFFFFF00000000LL;
  if ( !v3 || *(int *)(a2 + 68) <= 0 )
  {
    if ( !under_debugger )
      sub_37EEE0(50095);
    goto LABEL_35;
  }
  v5 = *(_QWORD *)(a2 + 72);
  v6 = *(_QWORD *)(v5 + 56);
  if ( v6 == 1 )
  {
    sub_121740(&v26);
    goto LABEL_14;
  }
  if ( v6 != 2 || *(_DWORD *)(*(_QWORD *)(v5 + 48) + 4LL) != *(_DWORD *)(*(_QWORD *)(v5 + 48) + 20LL) )
  {
    if ( *(_DWORD *)(v5 + 80) == 2 )
    {
LABEL_26:
      v20 = *(_QWORD *)(a1 + 64);
      tinfo_size = get_tinfo_size(0, *(_QWORD *)(v5 + 72), 0);
      sub_1C25D0(v28, v20, v5 + 80, tinfo_size);
      v25 = 0;
      copy_tinfo_t(&v25, v5 + 72);
      sub_119710(&v26, *(_QWORD *)(a1 + 64), 0, &v25, v28);
      clear_tinfo_t(&v25);
      cleanup_argloc(v28);
      goto LABEL_14;
    }
    if ( (a3 & 2) != 0 )
    {
      v7 = 0;
      goto LABEL_8;
    }
    if ( !under_debugger )
      sub_37EEE0(50096);
LABEL_35:
    BUG();
  }
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 480) + 145LL) && *(_DWORD *)(v5 + 80) == 2 )
    goto LABEL_26;
  v9 = (_QWORD *)j__qalloc_or_throw(32);
  *v9 = 0xFFFFFFFF00000000LL;
  v9[1] = 0;
  v9[2] = 0xFFFFFFFF00000000LL;
  v9[3] = 0;
  LOBYTE(v26) = 14;
  v27 = v9;
  sub_121740(v9);
  sub_121740(v27 + 2);
  HIDWORD(v26) = *(_DWORD *)(*(_QWORD *)(v5 + 48) + 4LL) + *(_DWORD *)(*(_QWORD *)(v5 + 48) + 20LL);
LABEL_14:
  v10 = j__qalloc_or_throw(80);
  v11 = *(_QWORD *)(a2 + 24);
  n[0] = v10 + 48;
  *(_QWORD *)(v10 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v10 + 40) = 0;
  *(_QWORD *)(v10 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v10 + 56) = 0;
  *(_QWORD *)(v10 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v10 + 72) = 0;
  sub_32C520(v10, v11);
  *(_DWORD *)v10 = *(_DWORD *)a2;
  *(_DWORD *)(v10 + 4) = *(_DWORD *)(a2 + 4);
  sub_118FD0(v10 + 32, a2 + 32);
  sub_118FD0(n[0], a2 + 48);
  sub_118FD0(v10 + 64, a2 + 64);
  *(_BYTE *)(a2 + 32) = 4;
  *(_QWORD *)(a2 + 40) = v10;
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(v10 + 68);
  sub_118FD0(a2 + 64, &v26);
  *(_DWORD *)a2 = 4;
  *(_DWORD *)(v5 + 280) |= 3u;
  sub_60E90((__int64 *)(v5 + 240), (__int64 *)(v5 + 96));
  v12 = *(_QWORD *)(v5 + 120);
  v13 = nullptr;
  if ( v12 )
  {
    n[0] = 16 * v12;
    v13 = (void *)qalloc_or_throw(16 * v12);
    memcpy(v13, *(const void **)(v5 + 112), 16 * v12);
  }
  v14 = *(_QWORD *)(v5 + 256);
  si128 = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
  if ( v14 )
  {
    *(_QWORD *)(v5 + 264) = 0;
    *(__m128i *)n = si128;
    qfree(v14);
    si128 = _mm_load_si128((const __m128i *)n);
  }
  v16 = *(_QWORD *)(v5 + 48);
  *(_QWORD *)(v5 + 256) = v13;
  *(__m128i *)(v5 + 264) = si128;
  if ( v16 )
  {
    v17 = *(_QWORD *)(v5 + 56);
    if ( v17 )
    {
      for ( i = 0; i != v17; ++i )
      {
        v19 = i;
        sub_119360(16 * v19 + v16);
        v16 = *(_QWORD *)(v5 + 48);
      }
    }
    *(_QWORD *)(v5 + 56) = 0;
    qfree(v16);
    *(_QWORD *)(v5 + 48) = 0;
    *(_QWORD *)(v5 + 64) = 0;
  }
  if ( (*(_BYTE *)(v10 + 65) & 2) != 0 )
  {
    *(_BYTE *)(a2 + 33) |= 2u;
    *(_BYTE *)(a2 + 65) |= 2u;
  }
  else
  {
    if ( (get_tinfo_property(*(_QWORD *)(v5 + 72), 2) & 0xF) == 9 )
      *(_DWORD *)(a2 + 4) |= 0x10u;
    if ( (a3 & 1) != 0 )
      sub_3693B0(a1, a2, v5 + 72);
  }
  v7 = 1;
LABEL_8:
  sub_119360(&v26);
  return v7;
}
