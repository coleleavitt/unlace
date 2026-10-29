/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80998D0
// Address: 0x080998D0

//----- (080998D0) --------------------------------------------------------
int __cdecl sub_80998D0(int a1, int a2)
{
  void *v2; // edi
  void *v3; // eax
  __int64 v4; // xmm1_8
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  void *v10; // edi
  int v11; // eax
  __int64 v12; // xmm3_8
  void *v13; // edx
  void *v14; // esi
  int v15; // eax
  int v16; // edi
  int v18; // [esp-124h] [ebp-124h]
  int v19; // [esp-120h] [ebp-120h]
  char v20; // [esp-11Ah] [ebp-11Ah]
  char v21; // [esp-119h] [ebp-119h]
  int v22; // [esp-118h] [ebp-118h]
  int v23; // [esp-114h] [ebp-114h]
  int v24; // [esp-110h] [ebp-110h]
  void *v25; // [esp-10Ch] [ebp-10Ch]
  int v26; // [esp-108h] [ebp-108h]
  void *v27; // [esp-108h] [ebp-108h]
  char *v28; // [esp-FCh] [ebp-FCh] BYREF
  int v29; // [esp-F8h] [ebp-F8h]
  void *v30; // [esp-F4h] [ebp-F4h]
  __int64 v31; // [esp-F0h] [ebp-F0h]
  void *v32; // [esp-E4h] [ebp-E4h] BYREF
  int v33; // [esp-E0h] [ebp-E0h]
  int v34; // [esp-DCh] [ebp-DCh]
  int v35; // [esp-D8h] [ebp-D8h]
  int v36; // [esp-D4h] [ebp-D4h]
  int v37; // [esp-D0h] [ebp-D0h]
  __int128 v38; // [esp-CCh] [ebp-CCh]
  __m128i v39; // [esp-BCh] [ebp-BCh] BYREF
  __m128i v40; // [esp-ACh] [ebp-ACh] BYREF
  __m128i v41; // [esp-9Ch] [ebp-9Ch] BYREF
  __m128i v42; // [esp-8Ch] [ebp-8Ch] BYREF
  __m128i v43; // [esp-7Ch] [ebp-7Ch] BYREF
  __m128i v44; // [esp-6Ch] [ebp-6Ch] BYREF
  __m128i v45; // [esp-5Ch] [ebp-5Ch] BYREF
  __m128i v46; // [esp-4Ch] [ebp-4Ch] BYREF
  _BYTE v47[28]; // [esp-3Ch] [ebp-3Ch] BYREF
  unsigned int v48; // [esp-20h] [ebp-20h]

  v2 = *(void **)(a1 + 352);
  v48 = __readgsdword(0x14u);
  v25 = v2;
  v32 = nullptr;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  if ( v2 )
  {
    v39 = _mm_loadu_si128((const __m128i *)(a1 + 196));
    v40 = _mm_loadu_si128((const __m128i *)(a1 + 212));
    v41 = _mm_loadu_si128((const __m128i *)(a1 + 228));
    v42 = _mm_loadu_si128((const __m128i *)(a1 + 244));
    v43 = _mm_loadu_si128((const __m128i *)(a1 + 260));
    v44 = _mm_loadu_si128((const __m128i *)(a1 + 276));
    v45 = _mm_loadu_si128((const __m128i *)(a1 + 292));
    v46 = _mm_loadu_si128((const __m128i *)(a1 + 308));
    *(__m128i *)v47 = _mm_loadu_si128((const __m128i *)(a1 + 324));
    *(__m128i *)&v47[12] = _mm_loadu_si128((const __m128i *)(a1 + 336));
  }
  *(_DWORD *)(a1 + 352) = &v32;
  v3 = *(void **)(a1 + 28);
  v4 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 28) = 0;
  v30 = v3;
  v5 = *(_DWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 32) = 0;
  v23 = v5;
  v6 = *(_DWORD *)(a1 + 116);
  *(_DWORD *)(a1 + 36) = 0;
  v22 = v6;
  v21 = *(_BYTE *)(a1 + 76);
  LOBYTE(v6) = *(_BYTE *)(a1 + 44);
  *(_BYTE *)(a1 + 76) = 0;
  v20 = v6;
  v28 = (char *)&qword_811CFF4 - 281405;
  *(_DWORD *)(a1 + 112) = (char *)&qword_811CFF4 - 568404;
  *(_DWORD *)(a1 + 116) = &v28;
  v7 = *(_DWORD *)(a1 + 136);
  v31 = v4;
  v26 = v7;
  v8 = *(_DWORD *)(a1 + 140);
  *(_DWORD *)(a1 + 136) = 0;
  v19 = v8;
  v9 = *(_DWORD *)(a1 + 144);
  *(_DWORD *)(a1 + 140) = 0;
  v24 = v9;
  *(_DWORD *)(a1 + 144) = 0;
  *(_BYTE *)(a1 + 44) = 1;
  *(_BYTE *)(a1 + 356) = 0;
  v18 = a1 + 196;
  v29 = _setjmp((struct __jmp_buf_tag *)(a1 + 196));
  if ( v29 )
    sub_80C7880(v29);
  else
    sub_80997C0(a1, a2, 1);
  if ( !v29 && ((_WORD)v35 != 1 || *((_BYTE *)&off_811D158 + a1 - 135385076)) )
    v29 = sub_80C7880(47);
  *(_BYTE *)(a1 + 44) = v20;
  v10 = *(void **)(a1 + 136);
  *(_BYTE *)(a1 + 76) = v21;
  *(_DWORD *)(a1 + 112) = v23;
  *(_DWORD *)(a1 + 116) = v22;
  v11 = v26;
  v27 = v10;
  *(_DWORD *)(a1 + 136) = v11;
  *(_DWORD *)(a1 + 140) = v19;
  *(_DWORD *)(a1 + 144) = v24;
  while ( *(_DWORD *)(a1 + 32) )
    sub_80925F0((_DWORD *)a1);
  v12 = v31;
  LODWORD(v31) = 0;
  v13 = v30;
  v14 = *(void **)(a1 + 28);
  v15 = *(_DWORD *)(a1 + 36);
  *(_QWORD *)(a1 + 32) = v12;
  *(_DWORD *)(a1 + 28) = v13;
  v30 = v14;
  HIDWORD(v31) = v15;
  if ( v25 )
  {
    *(__m128i *)(a1 + 196) = _mm_loadu_si128(&v39);
    *(__m128i *)(a1 + 212) = _mm_loadu_si128(&v40);
    *(__m128i *)(a1 + 228) = _mm_loadu_si128(&v41);
    *(__m128i *)(a1 + 244) = _mm_loadu_si128(&v42);
    *(__m128i *)(a1 + 260) = _mm_loadu_si128(&v43);
    *(__m128i *)(a1 + 276) = _mm_loadu_si128(&v44);
    *(__m128i *)(a1 + 292) = _mm_loadu_si128(&v45);
    *(__m128i *)(a1 + 308) = _mm_loadu_si128(&v46);
    *(__m128i *)((char *)&off_811D074 + v18 - 135385076) = _mm_loadu_si128((const __m128i *)v47);
    *(__m128i *)((char *)&off_811D080 + v18 - 135385076) = _mm_loadu_si128((const __m128i *)&v47[12]);
  }
  v16 = v29;
  *(_UNKNOWN **)((char *)&off_811D154 + a1 - 135385076) = v25;
  if ( v27 )
    sub_80CF780(v27);
  if ( v14 )
    sub_80CF780(v14);
  if ( v32 )
  {
    v33 = 0;
    sub_80CF780(v32);
  }
  if ( v48 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v16;
}
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811D074: using guessed type _UNKNOWN *off_811D074;
// 811D080: using guessed type void (__noreturn *off_811D080)();
// 811D154: using guessed type _UNKNOWN *off_811D154;
// 811D158: using guessed type _UNKNOWN *off_811D158;
