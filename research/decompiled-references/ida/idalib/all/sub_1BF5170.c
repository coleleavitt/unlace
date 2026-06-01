__int64 __fastcall sub_1BF5170(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        unsigned int *a9,
        unsigned __int64 *a10)
{
  __int64 v11; // rcx
  __int64 v14; // rdx
  unsigned __int64 *v15; // r14
  __int64 v16; // r15
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int16 v19; // ax
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rsi
  char *v25; // rdi
  unsigned int v26; // r14d
  char *v27; // rcx
  __int64 v28; // rdx
  _QWORD *v29; // rax
  char v31; // dl
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  char v36; // dl
  unsigned int v37; // eax
  __m128i v38; // [rsp+0h] [rbp-A8h] BYREF
  unsigned __int64 v39; // [rsp+10h] [rbp-98h]
  _BYTE *v40; // [rsp+18h] [rbp-90h]
  unsigned __int64 v41; // [rsp+20h] [rbp-88h]
  int v42; // [rsp+2Ch] [rbp-7Ch]
  __int64 *v43; // [rsp+38h] [rbp-70h] BYREF
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __int64 v45; // [rsp+48h] [rbp-60h]
  _BYTE v46[88]; // [rsp+50h] [rbp-58h] BYREF

  v11 = 0x200000000LL;
  v41 = a2;
  v39 = a3;
  v42 = a6;
  ptr = v46;
  v45 = 0x200000000LL;
  if ( (_DWORD)a5 )
  {
    v14 = (unsigned int)(a5 - 1);
    v15 = a4;
    v40 = v46;
    v16 = (__int64)&a4[v14 + 1];
    while ( 1 )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(*v15 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v18 + 16) != 13 )
        goto LABEL_5;
      v19 = (*(_WORD *)(v18 + 18) >> 3) & 0x1FF;
      if ( v19 <= 0x1F2u )
        goto LABEL_5;
      if ( v19 == 504 )
      {
        v20 = (unsigned int)v45;
        v38.m128i_i64[0] = *v15;
        v21 = (unsigned int)v45 + 1LL;
        a7 = _mm_loadh_ps((const double *)v38.m128i_i64);
        if ( v21 > HIDWORD(v45) )
        {
          v38 = (__m128i)a7;
          sub_2237220(&ptr, v40, v21, 16);
          v20 = (unsigned int)v45;
          a7 = (__m128)_mm_load_si128(&v38);
        }
        ++v15;
        *((__m128 *)ptr + v20) = a7;
        v22 = *(v15 - 1);
        v23 = *(_QWORD *)(a1 + 736);
        LODWORD(v45) = v45 + 1;
        *(v15 - 1) = sub_19D0DD0(v23, v22);
        if ( v15 == (unsigned __int64 *)v16 )
          break;
      }
      else
      {
        v17 = sub_1907C70(a1, (_QWORD *)*v15, (__m128i)a7, a8, v14, v11, a5, a6);
        if ( v17 == 1 )
        {
          v25 = (char *)ptr;
          v26 = 1;
          *a10 = 1;
          goto LABEL_19;
        }
        *v15 = v17 & 0xFFFFFFFFFFFFFFFELL;
LABEL_5:
        if ( ++v15 == (unsigned __int64 *)v16 )
          break;
      }
    }
  }
  v24 = v39;
  sub_1BF4E10((__int64 *)a1, v39, (__int64)a4, a5, a9, 0, a7, a8);
  if ( (**(_BYTE **)(a1 + 232) & 0x20) == 0
    || (v26 = sub_B8E180(*(_QWORD *)(a1 + 544)), !(_BYTE)v26)
    || (sub_1DBADC0(a1), v31)
    || (v32 = *(_BYTE *)(*(_QWORD *)(a1 + 544) + 8LL) & 0x7F, (unsigned int)(v32 - 34) > 5)
    && (unsigned int)(v32 - 59) > 2
    || (a9[2] || (a9[716] & 0x3FFFFFFF) != 0)
    && (v37 = sub_EEB7E0(v41, v24, *(double *)a7.m128_u64),
        (unsigned int)sub_1BF27B0((__int64)a9, (_QWORD *)a1, v37, &v43, *(double *)a7.m128_u64, a8) != 1) )
  {
    v25 = (char *)ptr;
    if ( a9[2] || (v26 = 0, (a9[716] & 0x3FFFFFFF) != 0) )
    {
      v27 = (char *)ptr + 16 * (unsigned int)v45;
      if ( v27 == ptr )
      {
        v26 = 0;
      }
      else
      {
        do
        {
          v28 = *((_QWORD *)v25 + 1);
          v29 = *(_QWORD **)v25;
          v25 += 16;
          *v29 = v28;
        }
        while ( v27 != v25 );
        v25 = (char *)ptr;
        v26 = 0;
      }
    }
  }
  else
  {
    v33 = *(unsigned int *)(a1 + 1952);
    v34 = *(unsigned int *)(a1 + 1956);
    if ( *(_QWORD *)(a1 + 1944) == __PAIR64__(v34, v33) )
    {
      v34 = 0;
      v33 = 0;
    }
    v35 = sub_C0BFD0(
            *(_QWORD **)(a1 + 248),
            v41,
            a4,
            a5,
            *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19072LL),
            0,
            v42,
            (v34 << 32) | v33,
            0,
            0);
    v36 = (unsigned __int8)((*(_DWORD *)v35 >> 14) & 0x11 | 0xE) >> 2;
    *(_BYTE *)(v35 + 1) = (((*(_DWORD *)v35 >> 14) & 0x11 | 0xE) << 6) | *(_BYTE *)(v35 + 1) & 0x3F;
    *(_BYTE *)(v35 + 2) = *(_BYTE *)(v35 + 2) & 0xF8 | v36;
    v25 = (char *)ptr;
    *a10 = v35;
  }
LABEL_19:
  if ( v25 != v46 )
    free(v25);
  return v26;
}
