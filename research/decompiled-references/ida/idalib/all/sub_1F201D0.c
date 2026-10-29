char __fastcall sub_1F201D0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // al
  int v4; // ecx
  unsigned __int64 v5; // rax
  __int64 v6; // r8
  __m128 *v7; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  __int64 v12; // r13
  unsigned int v13; // ecx
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // rdi
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __m128i v24; // xmm0
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // r13
  __int64 v30; // rax
  __int64 v31; // r13
  void *v32; // rdi
  __m128i v34; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+18h] [rbp-B0h]
  unsigned __int8 *v36; // [rsp+40h] [rbp-88h] BYREF
  __int64 v37; // [rsp+48h] [rbp-80h]

  if ( (*(_BYTE *)(a3 + 29) & 2) != 0
    || (v3 = *(_BYTE *)(a3 + 28) & 0x7F, v4 = v3, v5 = (v3 + 94) & 0x7F, (unsigned __int8)v5 > 0x26u)
    || (v6 = 0x781F001FFFLL, !_bittest64(&v6, v5))
    || (unsigned int)(v4 - 41) <= 1
    || (LOBYTE(v7) = v4 - 60, (unsigned int)(v4 - 60) <= 1) )
  {
    LOBYTE(v7) = nullsub_1551();
    return (char)v7;
  }
  if ( (unsigned int)(v4 - 34) <= 5 )
  {
    v7 = (__m128 *)sub_B77B20(a3);
    if ( v7 )
      return (char)v7;
  }
  if ( (*(_WORD *)(a2 + 30) & 0x180) != 0 || (*(_WORD *)(a3 + 30) & 0x180) != 0 )
    return (char)v7;
  v10 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
    v10 = *(_QWORD *)(v10 + 8);
  LODWORD(v7) = *(_BYTE *)(sub_B8E650(v10) + 8) & 0x7F;
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 != 24 )
      return (char)v7;
  }
  v11 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v11 = *(_QWORD *)(v11 + 8);
  LODWORD(v7) = *(_BYTE *)(sub_B8E650(v11) + 8) & 0x7F;
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 != 24 )
      return (char)v7;
  }
  v7 = (__m128 *)(*(_QWORD *)(a3 + 8) & 7LL);
  if ( *(char *)(a3 + 29) < 0 )
  {
    if ( !v7 )
      return (char)v7;
    v7 = (__m128 *)sub_B8C660(a3);
    v12 = (__int64)v7;
  }
  else
  {
    if ( !v7 )
      return (char)v7;
    v12 = *(_QWORD *)(a3 - 8);
  }
  if ( !v12 )
    return (char)v7;
  v13 = *(_DWORD *)(v12 + 36);
  if ( v13 > 7 )
  {
    if ( v13 != 8 )
      return (char)v7;
  }
  else
  {
    v7 = (__m128 *)(1LL << v13);
    if ( ((1LL << v13) & 0xBC) != 0 )
    {
      v14 = *(_QWORD *)(a1 + 144);
      v15 = *(_QWORD *)(a2 + 8) & 7LL;
      if ( *(char *)(a2 + 29) < 0 )
      {
        if ( v15 )
        {
          v16 = sub_B8C660(a2);
          goto LABEL_28;
        }
      }
      else if ( v15 )
      {
        v16 = *(_QWORD *)(a2 - 8);
        goto LABEL_28;
      }
      v16 = 0;
LABEL_28:
      LOBYTE(v7) = sub_A956B0(v14, v12, v16);
      if ( !(_BYTE)v7 )
      {
        v17 = *(_DWORD *)(a3 + 24);
        v34.m128i_i64[0] = (__int64)&v36;
        sub_1EAC9C0((__int64)&v36, a1, v17, 4223);
        sub_AE9DF0(&v36, a3, 0xAu);
        if ( v36 )
          JUMPOUT(0x1F2037A);
        v25 = v37;
        v26 = *(_DWORD *)(v37 + 14976);
        if ( !v26 )
          JUMPOUT(0x1F20666);
        v27 = (unsigned int)(v26 - 1);
        *(_DWORD *)(v37 + 14976) = v27;
        v28 = *(_QWORD *)(v25 + 8 * v27 + 14848);
        v29 = *(unsigned int *)(v28 + 536);
        *(_BYTE *)v28 = 0;
        v30 = *(_QWORD *)(v28 + 528);
        *(_DWORD *)(v28 + 424) = 0;
        v31 = v30 + (v29 << 6);
        while ( v30 != v31 )
        {
          v31 -= 64;
          v32 = *(void **)(v31 + 24);
          if ( v32 != (void *)(v31 + 40) )
          {
            v35 = v30;
            operator delete(v32);
            v30 = v35;
          }
        }
        *(_DWORD *)(v28 + 536) = 0;
        JUMPOUT(0x1F206DA);
      }
      return (char)v7;
    }
    if ( v13 != 6 )
      return (char)v7;
  }
  v18 = *(_QWORD *)(a2 + 8) & 7LL;
  if ( *(char *)(a2 + 29) < 0 )
  {
    if ( v18 )
    {
      v19 = sub_B8C660(a2);
      goto LABEL_37;
    }
LABEL_42:
    v22 = *(unsigned int *)(a1 + 4264);
    v23 = *(unsigned int *)(a1 + 4268);
    v34.m128i_i64[0] = a3;
    v24 = (__m128i)_mm_loadh_ps((const double *)v34.m128i_i64);
    if ( v22 + 1 > v23 )
    {
      v34 = v24;
      sub_2237220(a1 + 4256, a1 + 4272, v22 + 1, 16);
      v22 = *(unsigned int *)(a1 + 4264);
      v24 = _mm_load_si128(&v34);
    }
    v7 = (__m128 *)(*(_QWORD *)(a1 + 4256) + 16 * v22);
    *v7 = (__m128)v24;
    ++*(_DWORD *)(a1 + 4264);
    return (char)v7;
  }
  if ( !v18 )
    goto LABEL_42;
  v19 = *(_QWORD *)(a2 - 8);
LABEL_37:
  if ( !v19 )
    goto LABEL_42;
  v20 = sub_FEEE40(v12);
  if ( *(char *)(a2 + 29) < 0 )
  {
    v21 = 0;
    if ( (*(_BYTE *)(a2 + 8) & 7) != 0 )
      v21 = sub_B8C660(a2);
  }
  else
  {
    v21 = (*(_BYTE *)(a2 + 8) & 7) != 0 ? *(_QWORD *)(a2 - 8) : 0LL;
  }
  v7 = (__m128 *)sub_FEEE40(v21);
  if ( (__m128 *)v20 != v7 )
    goto LABEL_42;
  return (char)v7;
}
