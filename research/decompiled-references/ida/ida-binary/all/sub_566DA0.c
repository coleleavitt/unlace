__int64 __fastcall sub_566DA0(__int64 a1, unsigned int *a2, unsigned int *a3, __int64 a4, bool *a5)
{
  unsigned int v5; // esi
  __int64 v6; // r13
  _DWORD *v8; // rbp
  unsigned int v9; // r12d
  unsigned int v10; // r14d
  __int64 v11; // rdx
  unsigned __int16 *v12; // r15
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rdx
  const __m128i *v17; // rsi
  __int128 v18; // xmm0
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // r9
  __int64 v26; // r8
  unsigned int v27; // eax
  char v28; // si
  __int64 v30; // [rsp+20h] [rbp-78h]
  bool v33; // [rsp+3Fh] [rbp-59h]
  __int128 v34; // [rsp+40h] [rbp-58h] BYREF
  __m128i v35[4]; // [rsp+50h] [rbp-48h] BYREF

  *a2 = -1;
  *a3 = -1;
  *(_DWORD *)a4 = -1;
  v5 = *(_DWORD *)(a1 + 48);
  if ( v5 )
  {
    v6 = a1;
    v8 = (_DWORD *)a4;
    v30 = a1 + 88;
    v9 = 0;
    v10 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(v6 + 40) + 16LL * v9;
        v12 = (unsigned __int16 *)v11;
        if ( (*(_BYTE *)(v11 + 15) & 0x40) == 0 )
        {
          v13 = *(_DWORD *)(v11 + 4);
          v14 = (unsigned int)(unsigned __int16)v13 >= *(_DWORD *)(v6 + 80)
              ? v30
              : *(_QWORD *)(v6 + 72) + 16LL * (unsigned __int16)v13;
          v15 = *(unsigned __int16 *)(v11 + 14);
          LOWORD(v15) = v15 & 0xFFF;
          if ( (unsigned int)(unsigned __int16)v15 < *(_DWORD *)(v14 + 8) )
            break;
        }
        ++v9;
LABEL_19:
        if ( v9 >= v5 )
          return v10;
      }
      v16 = *(_QWORD *)v14;
      v17 = (const __m128i *)(*(_QWORD *)v14 + 40LL * (unsigned __int16)v15);
      v18 = (__int128)_mm_loadu_si128(v17 + 1);
      v34 = (__int128)_mm_loadu_si128(v17);
      v35[0] = (__m128i)v18;
      if ( *(_DWORD *)(v6 + 120) >= (unsigned int)sub_566CC0(
                                                    a1,
                                                    (__int64)v17,
                                                    v16,
                                                    a4,
                                                    (unsigned __int16)v15,
                                                    v15,
                                                    v34,
                                                    v18)
        || (v22 = sub_566D00(
                    a1,
                    (__int64)v17,
                    v19,
                    a4,
                    v20,
                    v21,
                    (__int128)_mm_load_si128((const __m128i *)&v34),
                    (__int128)_mm_load_si128(v35)),
            v24 = *(unsigned int *)(v6 + 128),
            v25 = *(unsigned int *)(v6 + 132),
            v26 = HIDWORD(v22),
            (unsigned int)v22 < (unsigned int)v24)
        || (LOBYTE(v26) = (_DWORD)v24 == (_DWORD)v22 && (unsigned int)v25 >= HIDWORD(v22), v33 = v26) )
      {
        v12[7] = (v12[7] + 1) & 0xFFF | v12[7] & 0xF000;
        v5 = *(_DWORD *)(v6 + 48);
        goto LABEL_19;
      }
      v27 = sub_565DC0(a1, v24, v23, a4, v26, v25, _mm_load_si128((const __m128i *)&v34).m128i_u32[0]);
      if ( (_BYTE)v10 && v27 >= *a3 && (*a3 != v27 || (unsigned int)v12[6] >= *v8) )
        goto LABEL_16;
      v28 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v6 + 80LL) + 20LL * v12[5] + 18);
      if ( a5 )
      {
        if ( v28 < 0 )
          v33 = (v28 & 2) == 0;
        a4 = v33;
        *a5 = v33;
        goto LABEL_15;
      }
      if ( v28 < 0 )
      {
        v5 = *(_DWORD *)(v6 + 48);
        ++v9;
        goto LABEL_19;
      }
LABEL_15:
      a1 = (__int64)a2;
      *a2 = v9;
      *a3 = v27;
      *v8 = v12[6];
LABEL_16:
      v5 = *(_DWORD *)(v6 + 48);
      ++v9;
      v10 = 1;
      if ( v9 >= v5 )
        return v10;
    }
  }
  return 0;
}
