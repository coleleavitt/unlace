void __fastcall sub_1BF0A40(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __int128 a9,
        int a10,
        __int64 a11,
        char a12,
        char a13,
        unsigned int a14)
{
  char v17; // r13
  __int64 v18; // rbx
  char v19; // dl
  __int64 v20; // r9
  char v21; // r12
  __int128 si128; // xmm0
  __int64 (__fastcall *v23)(__int64); // rax
  __int64 v24; // rax
  __int64 v25; // rsi
  char v26; // dl
  __int64 v27; // rsi
  _QWORD *v28; // rdi
  __int64 v29; // r8
  unsigned int v30; // r11d
  __int64 *v31; // r10
  _QWORD *v32; // rax
  __int64 v33; // rdi
  _QWORD *v34; // rdi
  int v35; // edx
  char v36; // [rsp+Ch] [rbp-6Ch]
  __int128 v39; // [rsp+20h] [rbp-58h] BYREF
  __int64 v40; // [rsp+30h] [rbp-48h]
  unsigned int v41; // [rsp+38h] [rbp-40h]
  char v42; // [rsp+3Fh] [rbp-39h]

  v17 = a14;
  v18 = a11;
  v36 = a12;
  v19 = a14;
  v20 = (unsigned int)a9;
  v21 = a13;
  si128 = (__int128)_mm_loadu_si128((const __m128i *)((char *)&a9 + 8));
  v23 = *(__int64 (__fastcall **)(__int64))(*a2 + 32LL);
  if ( v23 == sub_6EE8E0 )
  {
    v24 = a2[9];
  }
  else
  {
    v39 = si128;
    v41 = a9;
    v40 = a4;
    v42 = a14;
    v24 = ((__int64 (__fastcall *)(_QWORD *, __int64 (__fastcall *)(__int64), _QWORD))v23)(a2, sub_6EE8E0, a14);
    v19 = v42;
    si128 = (__int128)_mm_load_si128((const __m128i *)&v39);
    v20 = (unsigned int)a9;
    a4 = v40;
  }
  v25 = v19;
  v26 = *(_BYTE *)(v18 + 2724);
  v27 = v24 | v25;
  if ( !v26 )
    goto LABEL_12;
  v28 = *(_QWORD **)(v18 + 2704);
  v29 = *(unsigned int *)(v18 + 2716);
  v30 = *(_DWORD *)(v18 + 2716);
  v31 = &v28[v29];
  if ( v28 != &v28[v29] )
  {
    v32 = *(_QWORD **)(v18 + 2704);
    if ( v27 == *v28 )
    {
LABEL_27:
      v26 = 0;
      v34 = &v28[*(unsigned int *)(v18 + 2716)];
      goto LABEL_14;
    }
    while ( v31 != ++v32 )
    {
      if ( v27 == *v32 )
        goto LABEL_27;
    }
  }
  if ( v30 < *(_DWORD *)(v18 + 2712) )
  {
    *(_DWORD *)(v18 + 2716) = v30 + 1;
    *v31 = v27;
    v33 = *(_QWORD *)(v18 + 2704);
    v32 = (_QWORD *)(v33 + v29 * 8);
  }
  else
  {
LABEL_12:
    v39 = si128;
    v41 = v20;
    v40 = a4;
    v32 = (_QWORD *)sub_2236760(v18 + 2704, v27);
    a4 = v40;
    v20 = v41;
    v33 = *(_QWORD *)(v18 + 2704);
    si128 = (__int128)_mm_load_si128((const __m128i *)&v39);
    if ( !*(_BYTE *)(v18 + 2724) )
    {
      v34 = (_QWORD *)(v33 + 8LL * *(unsigned int *)(v18 + 2712));
      goto LABEL_14;
    }
  }
  v34 = (_QWORD *)(v33 + 8LL * *(unsigned int *)(v18 + 2716));
LABEL_14:
  if ( v34 != v32 && (*v32 == -2 || *v32 == -1) )
  {
    do
      ++v32;
    while ( v34 != v32 && *v32 >= 0xFFFFFFFFFFFFFFFELL );
  }
  if ( v26 )
  {
    if ( a5
      || (v35 = *(_DWORD *)(v18 + 2972), v35 == 2)
      || v35 == 5
      || (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 0x10) != 0 )
    {
      sub_1BF01B0(
        a1,
        (unsigned int *)v18,
        (__int64)a2,
        a3,
        a4,
        a5,
        *(double *)&si128,
        a8,
        a6,
        v20,
        si128,
        *((unsigned __int64 *)&si128 + 1),
        v36,
        v21,
        v17);
    }
    else
    {
      sub_1BDA050(v18, (__int64)a2, a3, a4, a6, v20, si128, v36, v21, v17);
    }
  }
}
