__int64 __fastcall sub_D71D0(__int64 a1, _QWORD *a2, __int64 a3, int a4, int a5, int a6, int a7, int a8)
{
  __int64 v8; // r12
  __int64 v9; // r15
  int v10; // r13d
  __int64 i; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax
  char *v17; // rax
  __m128i si128; // xmm1
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rsi
  unsigned int tinfo_size; // eax
  __int64 v24; // r15
  __int64 v25; // [rsp-8h] [rbp-188h]
  __int64 v26; // [rsp+8h] [rbp-178h]
  __int64 v27; // [rsp+10h] [rbp-170h]
  char v32[8]; // [rsp+50h] [rbp-130h] BYREF
  __int64 v33; // [rsp+58h] [rbp-128h]
  _BYTE v34[56]; // [rsp+68h] [rbp-118h] BYREF
  char v35[8]; // [rsp+A0h] [rbp-E0h] BYREF
  __int64 v36; // [rsp+A8h] [rbp-D8h]
  _BYTE v37[24]; // [rsp+F0h] [rbp-90h] BYREF
  char v38; // [rsp+140h] [rbp-40h] BYREF
  unsigned __int64 v39; // [rsp+148h] [rbp-38h]

  v8 = a6;
  v9 = *(_QWORD *)(a1 + 64);
  v39 = __readfsqword(0x28u);
  v10 = a7;
  if ( a8 > 16 )
  {
    v17 = v32;
    si128 = _mm_load_si128((const __m128i *)&xmmword_425B90);
    do
    {
      *((_DWORD *)v17 + 1) = -1;
      v17 += 80;
      *((_WORD *)v17 - 40) = 0;
      *((_WORD *)v17 - 39) = 0;
      *((_QWORD *)v17 - 9) = 0;
      *((__m128i *)v17 - 4) = si128;
      *((_QWORD *)v17 - 6) = 0;
      *(_OWORD *)(v17 - 40) = 0;
      *((_DWORD *)v17 - 6) = 0;
      *((_QWORD *)v17 - 2) = 0;
      *((_DWORD *)v17 - 2) = 0;
    }
    while ( v17 != &v38 );
    v32[0] = 9;
    v19 = j__qalloc_or_throw();
    *(_QWORD *)v19 = v9;
    *(_QWORD *)(v19 + 8) = a7;
    *(_DWORD *)(v19 + 16) = a5;
    v20 = *(_QWORD *)(v9 + 1504);
    v33 = v19;
    sub_11A510(v32, v20, 0.0);
    copy_tinfo_t();
    v35[0] = 9;
    v21 = j__qalloc_or_throw();
    *(_QWORD *)v21 = v9;
    *(_QWORD *)(v21 + 8) = v8;
    *(_DWORD *)(v21 + 16) = a4;
    v22 = *(_QWORD *)(v9 + 1504);
    v36 = v21;
    sub_11A510(v35, v22, 0.0);
    copy_tinfo_t();
    copy_tinfo_t();
    clear_tinfo_t();
    tinfo_size = get_tinfo_size();
    sub_11E5D0(v37, *(_QWORD *)(v9 + 1504), a8, tinfo_size, a3, 2);
    i = sub_332690(
          v9,
          a3,
          (unsigned int)"memcpy",
          (unsigned int)v34,
          3,
          (unsigned int)v32,
          1,
          v25,
          a7,
          (unsigned int)&v38,
          (unsigned int)v32,
          (unsigned int)v34);
    *(_DWORD *)(*(_QWORD *)(i + 72) + 284LL) = 5;
    sub_A23D0(a1, (_QWORD *)i, (__int64)a2);
    v24 = v26;
    do
    {
      v24 -= 80;
      cleanup_argloc();
      if ( *(_QWORD *)(v24 + 32) )
      {
        *(_QWORD *)(v24 + 40) = 0;
        qfree();
      }
      clear_tinfo_t();
      sub_11A960(v24);
    }
    while ( v24 != v27 );
  }
  else
  {
    for ( i = 0; a8; a2 = sub_A23D0(a1, (_QWORD *)i, (__int64)a2) )
    {
      v12 = (_QWORD *)j__qalloc_or_throw();
      v12[4] = 0xFFFFFFFF00000000LL;
      i = (__int64)v12;
      v12[5] = 0;
      v12[6] = 0xFFFFFFFF00000000LL;
      v12[7] = 0;
      v12[8] = 0xFFFFFFFF00000000LL;
      v12[9] = 0;
      sub_32D4D0(v12, a3);
      *(_DWORD *)i = 4;
      *(_BYTE *)(i + 32) = 9;
      v13 = j__qalloc_or_throw();
      *(_QWORD *)(v13 + 8) = (int)v8;
      *(_DWORD *)(v13 + 16) = a4;
      *(_QWORD *)v13 = v9;
      *(_QWORD *)(i + 40) = v13;
      v14 = round_down_power2();
      *(_BYTE *)(i + 64) = 9;
      *(_DWORD *)(i + 36) = v14;
      v15 = j__qalloc_or_throw();
      *(_QWORD *)(v15 + 8) = v10;
      *(_QWORD *)v15 = v9;
      *(_DWORD *)(v15 + 16) = a5;
      *(_QWORD *)(i + 72) = v15;
      LODWORD(v15) = *(_DWORD *)(i + 36);
      a8 -= v15;
      *(_DWORD *)(i + 68) = v15;
      LODWORD(v8) = v15 + v8;
      v10 += v15;
    }
  }
  return i;
}
